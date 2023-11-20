#！usr/bin python3

import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from std_srvs.srv import SetBool
from geometry_msgs.msg import Twist
from sensor_msgs.msg import Imu
from puppy_interfaces.action import PuppyAction

import os, sys, math
import numpy as np

import threading
sys.path.append('/home/puppypi/PuppyPI_ws/src/puppy_control/driver')
from PuppyPI_ControlCmd import ControlCmd
from PuppyPI_ActionGroups import action_dic
from PID import *

class Puppy(Node):
    def __init__(self):
        super().__init__('puppy_control')
        self.control_cmd = ControlCmd()
        self.leg_height = 15


        self.cmd_vel_subscriber_ = self.create_subscription(Twist, 'cmd_vel', self.cmd_vel_callback, 1)                                                                         #prevent unused variable warning
        self.imu_subscriber_ = self.create_subscription(Imu, 'imu', self.imu_callback, 1)

        self.self_balancing_service_ = self.create_service(SetBool, 'set_self_balancing', self.set_self_balancing_callback)
        
        self._goal_handle = None
        self._goal_lock = threading.Lock()
        self.puppy_action_server_ = ActionServer(   self, PuppyAction, 'puppy_action', execute_callback=self.puppy_execute_callback, 
                                                    callback_group=ReentrantCallbackGroup(), goal_callback=self.puppy_goal_callback,
                                                    handle_accepted_callback=self.handle_accepted_callback, cancel_callback=self.puppy_cancel_callback)
        
        self.pid = Incremental_PID(0.200,0.00,0.0010)
        self.stab_roll = 0
        self.stab_pitch = 0

        self.left_leg_move  = 0
        self.right_leg_move = 0

        self.threads = []

# destroy ros    
    def destroy(self):
        self.cmd_subscriber_.destroy()
        self.imu_subscriber_.destroy()
        self.self_balancing_service_.destroy()
        self.puppy_action_server_.destroy()
        super().destroy_node()

# puppy_action_server_
    def handle_accepted_callback(self, goal_handle):
        with self._goal_lock:
            # This server only allows one goal at a time
            if self._goal_handle is not None and self._goal_handle.is_active:
                self.get_logger().info('Aborting previous goal')
                # Abort the existing goal
                self._goal_handle.abort()
            self._goal_handle = goal_handle
        goal_handle.execute()

    def puppy_goal_callback(self, goal_request):
        """Accept or reject a client request to begin an action."""
        # This server allows multiple goals in parallel
        self.get_logger().info('Received goal request')
        return GoalResponse.ACCEPT

    def puppy_cancel_callback(self, goal_handle):
        """Accept or reject a client request to cancel an action."""
        self.get_logger().info('Received cancel request')
        return CancelResponse.ACCEPT

    def puppy_execute_callback(self, goal_handle):
        """Execute a goal."""
        self.get_logger().info('Executing goal...')
        feedback_msg = PuppyAction.Feedback()

        if goal_handle.request.act_name in action_dic:
            action_list = action_dic[goal_handle.request.act_name]

            for action_num in range(len(action_list)):

                if not goal_handle.is_active:
                    self.get_logger().info('Goal aborted')
                    return PuppyAction.Result()
        
                if goal_handle.is_cancel_requested:
                    goal_handle.canceled()
                    self.get_logger().info('Goal canceled')
                    return PuppyAction.Result()
                
                self.control_cmd.run_action(action_list, action_num)
                feedback_msg.which_action = action_num

                self.get_logger().info('Publishing feedback: {0}'.format(feedback_msg.which_action))
                goal_handle.publish_feedback(feedback_msg)
            time.sleep(1)

        goal_handle.succeed()
        # Populate result message
        result = PuppyAction.Result()
        result.success = True
        self.get_logger().info('Returning result: {0}'.format(result.success))
        return result
    
# puppy cmd vel callback
    def cmd_vel_callback(self, msg):
        if abs(msg.linear.x) >= abs(msg.angular.z):
            if np.sign(msg.linear.x) > 0:
                self.left_leg_move  = 1
                self.right_leg_move = 1
            else:
                self.left_leg_move  = -1
                self.right_leg_move = -1
        else:
            if np.sign(msg.angular.z) > 0:
                self.left_leg_move  = -1
                self.right_leg_move = 1
            else:
                self.left_leg_move  = 1
                self.right_leg_move = -1 

        self.control_cmd.puppy_move(self.left_leg_move, self.right_leg_move, self.leg_height)

# puppy imu callback
    def imu_callback(self, msg):
        self.q0 = msg.orientation.x
        self.q1 = msg.orientation.y
        self.q2 = msg.orientation.z
        self.q3 = msg.orientation.w

        roll = -math.asin(-2*self.q1*self.q3+2*self.q0*self.q2)*57.3
        pitch = math.atan2(2*self.q2*self.q3+2*self.q0*self.q1,-2*self.q1*self.q1-2*self.q2*self.q2+1)*57.3
        yaw = math.atan2(2*(self.q1*self.q2 + self.q0*self.q3),self.q0*self.q0+self.q1*self.q1-self.q2*self.q2-self.q3*self.q3)*57.3

        roll_max_ang= 20
        pitch_max_ang = 20

        self.stab_roll=self.pid.PID_compute(roll)
        if self.stab_roll >= roll_max_ang: 
            self.stab_roll = roll_max_ang
        elif self.stab_roll <= -roll_max_ang:
            self.stab_roll = -roll_max_ang

        self.stab_pitch=self.pid.PID_compute(pitch)
        if self.stab_pitch >= pitch_max_ang: 
            self.stab_pitch = pitch_max_ang
        elif self.stab_pitch <= -pitch_max_ang: 
            self.stab_pitch = -pitch_max_ang

        # self.get_logger().info(f"roll:{self.stab_roll} pitch:{self.stab_pitch}")
        
    def set_self_balancing_callback(self, request, response):
        self.get_logger().info('Incoming request\na: %d ' % (request.data))
        if request.data:
            print("self_balancing...")
            self.threads.append(threading.Thread(target = self.puppy_stabilize_thread, args = ()))
            self.threads[0].start()
            response.success = True
        return response

    def puppy_stabilize_thread(self):
        while True:
            self.control_cmd.stance_control(self.stab_roll, self.stab_pitch)
            time.sleep(0.01)
            pass

def main(args=None):
    rclpy.init(args=args)
    PuppyControl = Puppy()
    executor = MultiThreadedExecutor()

    rclpy.spin(PuppyControl, executor=executor)
    # try: 
    #     rclpy.spin(PuppyControl)
    # except KeyboardInterrupt:
    #     pass
    
    PuppyControl.destroy()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
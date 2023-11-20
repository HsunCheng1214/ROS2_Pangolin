#!/usr/bin/python3
# coding=utf8

import os, sys, math
sys.path.append('/home/ubuntu/pangolin_ws/src/pangolin_control/driver')

import numpy as np
import time
import RPi.GPIO as GPIO
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from time import sleep
from Board import setPWMServoPulse
from queue import Queue
from os import geteuid
from ServoCmd import Servo
from std_msgs.msg import String
from std_srvs.srv import SetBool
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from pangolin_interfaces.action import PangolinAction


class Pangolin_Control(Node):
    def __init__(self):
        self.servo_control = Servo()
        super().__init__('pangolin_controller')
        self.cmd_subscriber_ = self.create_subscription(Twist, 'cmd_vel', self.cmd_callback, 1)
        
        self.panpolin_action_server_ = ActionServer(
            self, PangolinAction, 'pangolin_action', execute_callback=self.pangolin_execute_callback,
            callback_group=ReentrantCallbackGroup(), goal_callback=self.pangolin_goal_callback,
            cancel_callback=self.pangolin_cancel_callback
        )

    #Action_server
    def handle_accepeted_callback(self, goal_handle):
        with self._goal_lock:
            # This server only allows one goal at a time
            if self._goal_lock is not None and self._goal_handle.is_active:
                self.get_logger().info('Aborting previous goal')
                # Abort the existing goal
                self._goal_handle.abort()
            self._goal_handle = goal_handle
        goal_handle.execute()

    def pangolin_goal_callback(self, goal_request):
        """Accept or reject a client request to begin an action."""
        # This server allows multiple goals in parallel
        self.get_logger().info('Received goal request')
        return GoalResponse.ACCEPT

    def pangolin_cancel_callback(self, goal_handle):
        """Accept or reject a client request to cancel an action."""
        self.get_logger().info('Received cancel request')
        return CancelResponse.ACCEPT
    
    def pangolin_execute_callback(self, goal_handle):
        """Execute a goal"""
        self.get_logger().info('Eecuting goal...')

        feedback_msg = PangolinAction.Feedback()
        feedback_msg.which_action = 0

        if not goal_handle.is_active:
            self.get_logger().info('Goal aborted')
            return PangolinAction.Resault()
        
        if goal_handle.is_cancel_requested:
            goal_handle.canceled()
            self.get_logger().info('Goal canceled')
            return PangolinAction.Resault()
        
        self.servo_control.sit_down(self)
        sleep(1)
        self.servo_control.stand_up(self)

        goal_handle.succeed()
        # Populate result message
        result = PangolinAction.Result()
        result.success = True
        self.get_logger().info('Returning result: {0}'.format(result.success))
        return result




    def cmd_callback(self, msg: Twist,):
        self.liner_x = -(msg.linear.x)
        self.angular_z = msg.angular.z


        if self.liner_x >= 0.01 and abs(self.angular_z) >= 0.01:
            self.servo_control.move_joystick(0.4, self.angular_z)
        elif self.liner_x <= -0.01 and abs(self.angular_z) >= 0.01:
            self.servo_control.move_joystick(-0.4, self.angular_z)
        elif abs(self.liner_x) >= 0.01 or abs(self.angular_z) >= 0.01:
            self.servo_control.initial_position()
            self.servo_control.move_joystick(self.liner_x, self.angular_z)
        
        self.get_logger().info('  liner_x : "%s"' % self.liner_x)
        self.get_logger().info('angular_z : "%s"' % self.angular_z)

        self.servo_control.move_joystick(self.liner_x, self.angular_z)
     
            

def main(args=None):
    rclpy.init(args=args)

    PangolinControl = Pangolin_Control()

    rclpy.spin(PangolinControl)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    PangolinControl.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()

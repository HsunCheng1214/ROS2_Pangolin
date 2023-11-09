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

servo_control = Servo()

class Pangolin_Controller(Node):
    def __init__(self):
        super().__init__('pangolin_controller')
        self.cmd_subscriber_ = self.create_subscription(Twist, 'cmd_vel', self.cmd_callback, 1)

    def cmd_callback(self, msg: Twist):
        print(msg.linear.x)
        print(msg.angular.z)

# def control_thread(q):
#     pSB_CIRCLE_state = 0
#     key1_state = 1
#     isSit = False
#     key1 = False

#     try:
#         while True:
#             if q != None:
#                 joystick_queue = q.get()
#                 q.queue.clear()

#                 if GPIO.input(button_pin) == 0 and key1_state == 1:
#                     if key1 == False:
#                         key1 = True
#                     else:
#                         key1 = False

#                 if key1_state == 1 and key1 == True:
#                     #start
#                     if joystick_queue["PSB_CIRCLE"] == 1 and pSB_CIRCLE_state == 0:
#                         if isSit == False:
#                             servo_control.sit_down()
#                             isSit = True
#                         else:
#                             servo_control.stand_up()
#                             isSit = False

#                     if pSB_CIRCLE_state == 0 and isSit == True:
#                         servo_control.sit_act(joystick_queue["PSB_Left_Vertical_Axis"], joystick_queue["PSB_Right_Vertical_Axis"])
                    
#                     elif pSB_CIRCLE_state == 0 and isSit == False:                
#                         if joystick_queue["PSB_Left_Vertical_Axis"] >= 0.01 and abs(joystick_queue["PSB_Right_Horizontal_Axis"]) >= 0.01:
#                             servo_control.move_joystick(0.4, joystick_queue["PSB_Right_Horizontal_Axis"])  
                            
#                         elif joystick_queue["PSB_Left_Vertical_Axis"] <= -0.01 and abs(joystick_queue["PSB_Right_Horizontal_Axis"]) >= 0.01:
#                             servo_control.move_joystick(-0.4, joystick_queue["PSB_Right_Horizontal_Axis"])    
                
#                         elif abs(joystick_queue["PSB_Left_Vertical_Axis"]) >= 0.01 or abs(joystick_queue["PSB_Right_Horizontal_Axis"]) >= 0.01:
#                             servo_control.initial_position()
#                             servo_control.move_joystick(joystick_queue["PSB_Left_Vertical_Axis"], joystick_queue["PSB_Right_Horizontal_Axis"])

        
#                     pSB_CIRCLE_state = joystick_queue["PSB_CIRCLE"]

#                 key1_state = GPIO.input(button_pin)

#     except KeyboardInterrupt:
#         GPIO.cleanup()
            

def main(args=None):
    rclpy.init(args=args)

    PangolinControl = Pangolin_Controller()

    rclpy.spin(PangolinControl)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    PangolinControl.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()

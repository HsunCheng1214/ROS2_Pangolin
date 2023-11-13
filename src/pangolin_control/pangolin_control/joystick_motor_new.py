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

servo_control = Servo()

class Pangolin_Control(Node):
    def __init__(self):
        super().__init__('pangolin_controller')
        self.cmd_subscriber_ = self.create_subscription(Twist, 'cmd_vel', self.cmd_callback, 1)

    def cmd_callback(self, msg: Twist):
        self.get_logger().info('  liner_x : "%s"' % msg.linear.x)
        self.get_logger().info('angular_z : "%s"' % msg.angular.z)

            

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

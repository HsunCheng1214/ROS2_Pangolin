#!/usr/bin/python3
# coding=utf8
import os, sys, math
import numpy as np
# import cv2
import threading
import pygame
import time
import ServoCmd
# from gpiozero import AngularServo
from time import sleep

from queue import Queue

button_map = {"PSB_CROSS":2, "PSB_CIRCLE":1, "PSB_SQUARE":3, "PSB_TRIANGLE":0,
    "PSB_L1": 4, "PSB_R1":5, "PSB_L2":6, "PSB_R2":7,
    "PSB_SELECT":8, "PSB_START":9, "PSB_L3":10, "PSB_R3":11}
axis_map = {"PSB_Left_Horizontal_Axis":0, "PSB_Left_Vertical_Axis":1, "PSB_Right_Horizontal_Axis":2, "PSB_Right_Vertical_Axis":3}


# servo_motor_id = [19, 18, 10, 6]
servo = []
left_rate = 0.5
right_rate = 1.3



def control_thread(q):
    servo_angle = [40, 40, -40, -40] 
    ServoCmd.forward(servo_angle=[40, 40, -40, -40] , sleepTime=1.0)
    while True:
        if q != None:
            servo_rate = q.get()
            q.queue.clear()
        if (servo_rate != None) and (servo_rate != [0.0, 0.0]):
                
                ServoCmd.forward(servo_angle = [20, 0, 0, -20], sleepTime=0.15, servo_rate=servo_rate)

                ServoCmd.forward(servo_angle = [-38, 0, 0, 38], sleepTime=0.15, servo_rate=servo_rate)

                ServoCmd.forward(servo_angle = [-40, -40, 40, 40], sleepTime=0.15, servo_rate=servo_rate)

                ServoCmd.forward(servo_angle = [0, -20, 20, 0], sleepTime=0.15, servo_rate=servo_rate)

                ServoCmd.forward(servo_angle = [0, 38, -38, 0], sleepTime=0.15, servo_rate=servo_rate)

                ServoCmd.forward(servo_angle = [40, 40, -40, -40], sleepTime=0.15, servo_rate=servo_rate)

def joystick_thread(q):
    connected = False
    lastTime = time.time()
    try:
        while True:
            if os.path.exists("/dev/input/js0") is True:
                if connected is False:
                    joystick_init()
                    jscount =  pygame.joystick.get_count()
                    if jscount > 0:
                        try:
                            js=pygame.joystick.Joystick(0)
                            js.init()
                            connected = True
                        except Exception as e:
                            print(e)
                    else:
                        pygame.joystick.quit()
            else:
                if connected is True:
                    connected = False
                    js.quit()
                    pygame.joystick.quit()
            if connected is True:
                pygame.event.pump()     
                try:
                    axis_h_rate = js.get_axis(axis_map["PSB_Left_Horizontal_Axis"])
                    axis_v_rate = -js.get_axis(axis_map["PSB_Right_Vertical_Axis"])
                    psb_r2 = js.get_button(button_map["PSB_R2"])+1

                    if abs(axis_v_rate) >= 0.3:
                        servo_rate = [axis_v_rate, axis_v_rate]
                    else:
                        servo_rate = [0, 0]

                    servo_rate[0] += axis_h_rate*0.5*psb_r2
                    servo_rate[1] -= axis_h_rate*0.5*psb_r2
                    print(servo_rate)
                    q.put(servo_rate)

                    if time.time() - lastTime > 1:
                        lastTime = time.time()

                except Exception as e:
                    print(e)
                    connected = False

            time.sleep(0.01)

    except KeyboardInterrupt:
        time.sleep(0.2)
        pass

def joystick_init():
    os.environ["SDL_VIDEODRIVER"] = "dummy"
    pygame.display.init()
    pygame.joystick.init()
    if pygame.joystick.get_count() > 0:
        js=pygame.joystick.Joystick(0)
        js.init()
        jsName = js.get_name()
        print("Name of the joystick:", jsName)
        jsAxes=js.get_numaxes()
        print("Number of axif:",jsAxes)
        jsButtons=js.get_numbuttons()
        print("Number of buttons:", jsButtons)
        jsBall=js.get_numballs()
        print("Numbe of balls:", jsBall)
        jsHat= js.get_numhats()
        print("Number of hats:", jsHat)



if __name__ == "__main__":
    q = Queue()
    threads = []
    threads.append(threading.Thread(target = control_thread, args = (q,)))
    threads.append(threading.Thread(target = joystick_thread, args = (q,)))
    threads[0].start()
    threads[1].start()
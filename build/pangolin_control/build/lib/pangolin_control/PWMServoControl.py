#!/usr/bin/env python3
import os, sys
import time
import threading
import pigpio
import json




PWMServo_IO_dict = {1:4, 2:18, 3:27, 4:10, 5:20, 6:19, 7:13, 8:6, 9:11, 10:5}
# 键：表示板子上的舵机编号
# 值：表示连接到树莓派的GPIO编号

# ServoDeviationPath = os.path.dirname(__file__)+'/ServoDeviation.json'
ServoDeviationPath = '/home/ubuntu/pangolin/ServoDeviation.json'
# ServoDeviationPath = '/home/bruce/pangolin/main/ServoDeviation.json'

class PWMServo:
    def __init__(self,PWMServo_IO_dict = PWMServo_IO_dict):

        self.servo = PWMServo_IO_dict
        self.servo_pwm_duty_now = {}
        self.servo_pwm_duty_set = {}
        self.servo_pwm_duty_inc = {}
        self.servo_pwm_deviation = {}
        self.servo_pwm_threshold = {}

        self.servo_run_time = 20
        self.servo_pwm_duty_have_changed = False
        self.ServoPwmDutyIncTimes = 0
        self.ServoRunning = False
        
        self.pigpio = pigpio.pi()

        self.threading = None
        self.setDevBySelf = False

        self.lock = threading.Lock()

        for key, value in self.servo.items():
            try:
                self.servo_pwm_duty_now[key] = self.pigpio.get_servo_pulsewidth(value)
                self.servo_pwm_duty_set[key] = self.pigpio.get_servo_pulsewidth(value)
            except:
                self.servo_pwm_duty_now[key] = 0
                self.servo_pwm_duty_set[key] = 0
            self.servo_pwm_duty_inc[key] = 0
            self.servo_pwm_deviation[key] = 0
            self.servo_pwm_threshold[key] = {'min':500,'max':2500}

        try:
            with open(ServoDeviationPath, 'r') as f:
                d = json.load(f)
                for key in d:
                    self.servo_pwm_deviation[int(key)] = d[key]
        except:
            with open(ServoDeviationPath, 'w') as f:
                json.dump(self.servo_pwm_deviation, f)

        
    def setPulse(self, id, p, servo_run_time = 0):
        # if servo_run_time < 20:servo_run_time = 20
        # if servo_run_time > 30000:servo_run_time = 30000
        # if p < 500 or p > 2500:
        #     print("Angle is out of range")
        #     return False
        if p < self.servo_pwm_threshold[id]['min']:p = self.servo_pwm_threshold[id]['min']
        if p > self.servo_pwm_threshold[id]['max']:p = self.servo_pwm_threshold[id]['max']
        
        self.servo_run_time = servo_run_time
        if servo_run_time >= 100:
            self.updatePulse(id)
            if self.servo_pwm_duty_now[id] < 400: 
                self.servo_pwm_duty_now[id] = p
        
        self.servo_pwm_duty_set[id] = p
        self.servo_pwm_duty_have_changed = True

        
        if servo_run_time != 0 and self.threading == None:
            self.threading = threading.Thread(target=self.__callback, args=(), daemon=True)
            self.threading.start()
        if self.threading == None or servo_run_time <= 20:
            self.servo_pwm_duty_now[id] = p
            if p != 0:
                p += self.servo_pwm_deviation[id]
                if p < 500:p=500
                elif p > 2500:p = 2500
            self.pigpio.set_servo_pulsewidth(self.servo[id], p)
    # def setPulseMult(self, pp, servo_run_time):
    #     for p in enumerate(pp):
    #         self.run(p[0], p[1], servo_run_time)
    def setThreshold(self, id, min,max):
        if min < 500 or max > 2500:
            return False
        self.servo_pwm_threshold[id] = {'min':min,'max':max}

    def setDeviation(self, id, d):
        if d >= -100 and d <= 100:
            with self.lock:
                self.setDevBySelf = True
                self.servo_pwm_deviation[id] = d
                self.setPulse(id, self.servo_pwm_duty_now[id], 0)
        else:print("Deviation is out of range")

    def getDeviation(self, id):
        return self.servo_pwm_deviation[id]

    def saveDeviation(self, id):
        with self.lock:
            with open(ServoDeviationPath, 'w') as f:
                json.dump(self.servo_pwm_deviation, f)


    def updatePulse(self, id):
        if id == -1:# all ids
            for id, value in self.servo.items():
                try:
                    self.servo_pwm_duty_now[id] = self.pigpio.get_servo_pulsewidth(self.servo[id]) - self.servo_pwm_deviation[id]
                except:
                    self.servo_pwm_duty_now[id] = 0
        else:
            try:
                self.servo_pwm_duty_now[id] = self.pigpio.get_servo_pulsewidth(self.servo[id]) - self.servo_pwm_deviation[id]
            except:
                self.servo_pwm_duty_now[id] = 0

    def unload(self, id):
        self.pigpio.set_servo_pulsewidth(self.servo[id], 0)

    def __callback(self):
        times = 0
        timeLast = time.time()
        servo_pwm_duty_set = self.servo_pwm_duty_set.copy()
        while True:
            time.sleep(0.0001)
            if time.time() - timeLast >= 0.02:
                timeLast = time.time()
                times += 1
                if self.servo_pwm_duty_have_changed:
                    self.servo_pwm_duty_have_changed = False
                    if self.servo_run_time <= 20:self.ServoPwmDutyIncTimes = 1
                    else:self.ServoPwmDutyIncTimes = self.servo_run_time // 20
                    for key in self.servo_pwm_duty_now:
                        self.servo_pwm_duty_inc[key] = (self.servo_pwm_duty_set[key] - self.servo_pwm_duty_now[key]) / self.ServoPwmDutyIncTimes
                    self.ServoRunning = True
                    servo_pwm_duty_set = self.servo_pwm_duty_set.copy()

                if self.ServoRunning:
                    self.ServoPwmDutyIncTimes -= 1
                    for key in self.servo_pwm_duty_inc:
                        if self.ServoPwmDutyIncTimes == 0:
                            self.servo_pwm_duty_now[key] = servo_pwm_duty_set[key]
                            self.ServoRunning = False
                        else:
                            if self.servo_pwm_duty_now[key] == 0 or self.servo_pwm_duty_now[key] == servo_pwm_duty_set[key]:
                                self.servo_pwm_duty_now[key] = servo_pwm_duty_set[key]
                            else:
                                self.servo_pwm_duty_now[key] += self.servo_pwm_duty_inc[key]

                        if self.servo_pwm_duty_now[key] >= 500 and self.servo_pwm_duty_now[key] <= 2500:
                            p = int(self.servo_pwm_duty_now[key])
                            if p != 0:
                                p += self.servo_pwm_deviation[key]
                                if p < 500:p=500
                                elif p > 2500:p = 2500
                            self.pigpio.set_servo_pulsewidth(self.servo[key], p)
                if times >= 50:
                    times = 0
                    if self.setDevBySelf == False:
                        with self.lock:
                            with open(ServoDeviationPath, 'r') as f:
                                d = json.load(f)
                                for key in d:
                                    self.servo_pwm_deviation[int(key)] = d[key]
                            
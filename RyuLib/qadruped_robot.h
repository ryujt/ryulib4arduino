#ifndef QADRUPED_ROBOT_H
#define QADRUPED_ROBOT_H

#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

#define SERVO_INTERVAL 100

const unsigned int pos0   = 172; // 0°
const unsigned int pos180 = 565; // 180°  

void qadruped_robot_init();
void leg_down(int n);
void arm_position(int n, int angle);
void arm_start_position();
void get_up();
void sit_down();
void go_forward();
void go_forward_fast();
void turn_left();
void turn_right();

#endif // QADRUPED_ROBOT_H
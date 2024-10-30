// motor_control.h
#ifndef MOTOR_CONTROL_H
#define MOTOR_CONTROL_H

#include "driver/gpio.h"

// Define GPIO pins for motor control
#define MOTOR1_PIN 13
#define MOTOR2_PIN 14
#define MOTOR_ENABLE_PIN 12

// Function declarations
void init_motor_pins(void);
void start_motors(void);
void stop_motors(void);

#endif // MOTOR_CONTROL_H

// motor_control.c
#include "motor_control.h"
#include "driver/gpio.h"

void init_motor_pins(void)
{
    gpio_reset_pin(MOTOR1_PIN);
    gpio_reset_pin(MOTOR2_PIN);
    gpio_reset_pin(MOTOR_ENABLE_PIN);

    gpio_set_direction(MOTOR1_PIN, GPIO_MODE_OUTPUT);
    gpio_set_direction(MOTOR2_PIN, GPIO_MODE_OUTPUT);
    gpio_set_direction(MOTOR_ENABLE_PIN, GPIO_MODE_OUTPUT);
}

void start_motors(void)
{
    gpio_set_level(MOTOR_ENABLE_PIN, 1); // Enable motor driver
    gpio_set_level(MOTOR1_PIN, 1);       // Start motor 1
    gpio_set_level(MOTOR2_PIN, 1);       // Start motor 2
}

void stop_motors(void)
{
    gpio_set_level(MOTOR1_PIN, 0);       // Stop motor 1
    gpio_set_level(MOTOR2_PIN, 0);       // Stop motor 2
    gpio_set_level(MOTOR_ENABLE_PIN, 0); // Disable motor driver
}

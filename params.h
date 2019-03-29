#include <cstdint>

// Servos
const uint16_t SERVO_PERIOD = 20000;

enum voltage {VOLTAGE_5V, VOLTAGE_6V, VOLTAGE_7V4, VOLTAGE_8V6};
const voltage SERVO_VOLTAGE = VOLTAGE_7V4;

const int16_t SERVO_1_ANGLE_MIN = 0;
const int16_t SERVO_1_ANGLE_MAX = 90;
const uint16_t SERVO_1_WIDTH_MIN = 1000;
const uint16_t SERVO_1_WIDTH_MAX = 1300;

const int16_t SERVO_2_ANGLE_MIN = 0;
const int16_t SERVO_2_ANGLE_MAX = 90;
const uint16_t SERVO_2_WIDTH_MIN = 1000;
const uint16_t SERVO_2_WIDTH_MAX = 1300;

const int16_t SERVO_3_ANGLE_MIN = 0;
const int16_t SERVO_3_ANGLE_MAX = 90;
const uint16_t SERVO_3_WIDTH_MIN = 1000;
const uint16_t SERVO_3_WIDTH_MAX = 1300;

// Wheels
const float ENCODER_RESOLUTION = 8256; //in ticks per rotation
const float WHEEL_RADIUS = 0.06; //in meters
const float WHEEL_MAX_SPEED = 6500; //in ticks per second
const float ROBOT_WIDTH = 0.33; //in meters

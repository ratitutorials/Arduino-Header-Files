
#include "Arduino.h"
#include "motor.h"

const uint8_t motor_pin = 8;

mclass::mclass(){
}

void mclass::SETUP(){
  pinMode(motor_pin, OUTPUT);
}


void mclass::SPEED(int motor_speed){
  
}

mclass motor = mclass();

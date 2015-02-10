
#include "Arduino.h"
#include "fan.h"

const uint8_t fan_pin = 2;

fclass::fclass(){
}

void fclass::SETUP(){
    pinMode(fan_pin, OUTPUT);
    digitalWrite(fan_pin, HIGH);
}

void fclass::SPEED(int fan_speed){

}


int fclass::rotation(){    //Sensor detection
  int returnval = 12;
  return (returnval);  
}

fclass fan = fclass();







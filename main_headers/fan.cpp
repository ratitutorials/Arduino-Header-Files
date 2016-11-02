
#include "Arduino.h"
#include <EEPROM.h>
#include "fan.h"


int getEEPROM_value(uint8_t addressValue){
  return EEPROM.read(addressValue);
}

const int fan_pin = getEEPROM_value(12);


fclass::fclass(){
  uint8_t vu;
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







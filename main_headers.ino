

//--------------------- Includes ---------------------------//
#include "Arduino.h"
#include "fan.h"
#include "motor.h"


//---------------- Setup ---------------------------------//
void setup(){
  fan.SETUP();    // Setup SPI lines for the switch
  motor.SETUP();
  delay(1000);
}

//-------------- Main ---------------------------------//
void loop(){
  int rot;
  
  while(1){
    motor.SPEED(12);
    rot = fan.rotation();
  }

}

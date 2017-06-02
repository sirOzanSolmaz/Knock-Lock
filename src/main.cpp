#include <Arduino.h>
#include "Servo.h"
Servo ozan;
void setup(){
  ozan.attach(10);
}
void loop(){
  ozan.write(50);
  delay(1000);
  ozan.write(0);
  delay(1000);

}

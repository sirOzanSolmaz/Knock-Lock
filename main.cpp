#include "Arduino.h"
#include "Servo.h"

Servo lock;

void setup(){
  lock.attach(9);
  pinMode(2, OUTPUT);
}
void loop(){
  lock.write(0);
  delay(1000);
  lock.write(45);
  delay(1000);
  lock.write(90);
  delay(1000);
  lock.write(135);
  delay(1000);
  lock.write(180);
  delay(1000);
  while(millis()<10000){
    digitalWrite(2, HIGH);
  }
}

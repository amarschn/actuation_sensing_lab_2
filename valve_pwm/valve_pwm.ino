#include "valve_pwm.h"

void setup() {
  pinMode(3, OUTPUT);
  // set timer 2 divisor to  1024 for PWM frequency of 30.64 Hz
  // See https://arduino-info.wikispaces.com/Arduino-PWM-Frequency for details
  TCCR2B = TCCR2B & B11111000 | B00000111;
  Serial.begin(9600);
}




void loop() {
  
  // Perform first muscle experiment at 25% duty cycle
  muscle(0.25);
  
  delay(5000);
  
  // Perform second muscle experiment at 50% duty cycle
  muscle(0.50);
  
  delay(5000);
  
  // Perform third muscle experiment at 75% duty cycle
  muscle(0.75);
}







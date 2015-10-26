#include "muscle.h"



/*
 * A. Do nothing for 2 seconds with pressure on and with PWM off
 * B. Turn PWM on for 3 seconds (muscle contracting)
 * C. Leave valve open (full PWM) for 3 seconds (muscle holding)
 * D. Turn pressure off and turn PWM on for 3 seconds (muscle relaxing)
 * E. Keep pressure off and turn PWM off for 3 seconds
 */
void muscle(int duty_cycle) {
  Serial.print("=======================================================");
  Serial.print("\nBeginning muscle sequence at ");
  Serial.print(duty_cycle);
  Serial.print(" duty cycle.\n");

  Serial.println("Holding for 2 seconds.");
  hold(2); // A
  
  
  Serial.println("Contracting the muscle for 3 seconds.");
  pwm_muscle(duty_cycle, 3); // B

  Serial.println("Holding the muscle steady for 3 seconds.");
  pwm_muscle(1, 3); // C
  
  Serial.println("Relaxing the muscle for 3 seconds.");
  pwm_muscle(duty_cycle, 3); // D

  Serial.println("Holding for 2 seconds.");
  pwm_muscle(0, 3); // E

}

/*
 * PWM the muscle for contraction or relaxation
 *  duty_cycle: Duty cycle at which to pwm the muscle
 *  seconds: How long the muscle contracts/relaxes
 */
void pwm_muscle(int duty_cycle, int seconds) {

  // Convert pwm duty cycle into integer value for use with the analogWrite function
  int pwm_value = (int)(duty_cycle * 255);
  
  unsigned long previous = millis();
  while (millis() - previous <= seconds) {
    analogWrite(PIN, pwm_value);
  }
  return;
}



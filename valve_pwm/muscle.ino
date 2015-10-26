#include "muscle.h"



/*
 * A. Do nothing for 2 seconds with pressure off and with PWM off
 * B. Turn pressure on and turn PWM on for 3 seconds (muscle contracting)
 * C. Keep pressure on and turn PWM off for 3 seconds (muscle holding)
 * D. Turn pressure off and turn PWM on for 3 seconds (muscle relaxing)
 * E. Keep pressure off and turn PWM off for 3 seconds
 */
void muscle(int duty_cycle) {

  hold(2);
  pwm_muscle(duty_cycle, 3);
  hold(3);
  pwm_muscle(duty_cycle, 3);
  hold(2);
}

/*
 * PWM the muscle for contraction or relaxation
 *  duty_cycle: Duty cycle at which to pwm the muscle
 *  seconds: How long the muscle contracts/relaxes
 */
void pwm_muscle(int duty_cycle, int seconds) {
  unsigned long previous = millis();
  while (millis() - previous <= seconds) {
    analogWrite(PIN, duty_cycle);
  }
  return;
}

/*
 * Hold the muscle (in other words, do nothing)
 *  seconds: How long the muscle holds
 */
void hold(int seconds) {
  unsigned long previous = millis();
  while (millis() - previous <= seconds) {
    // DO NOTHING
  }
  return;
}


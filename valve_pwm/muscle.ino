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
  contract(duty_cycle, 3);
  hold(3);
  relax(duty_cycle, 3);
  hold(2);
}

/*
 * Contract the muscle
 *  duty_cycle: Duty cycle at which to contract the muscle
 *  seconds: How long the muscle contracts
 */
void contract(int duty_cycle, int seconds) {
  unsigned long previous = millis();
  while (millis() - previous <= seconds) {
    
  }
  return;
}

/*
 * Relax the muscle
 *  duty_cycle: Duty cycle at which to relax the muscle
 *  seconds: How long the muscle relaxes
 */
void relax(int duty_cycle, int seconds) {
  unsigned long previous = millis();
  while (millis() - previous <= seconds) {
    
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
    
  }
  return;
}


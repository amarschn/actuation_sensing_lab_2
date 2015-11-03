#include "muscle.h"



/*
 * A. Do nothing for 2 seconds
 *      - Contract valve: closed
 *      - Relax valve: closed
 * B. Contract muscle for 3 seconds
 *      - Contract valve: pwm
 *      - Relax valve: closed
 * C. Hold muscle for 3 seconds (muscle holding)
 *      - Contract valve: 
 *      - Relax valve: 
 * D. Relax muscle for 3 seconds
 *      - Contract valve: 
 *      - Relax valve: 
 * E. Release muscle for 2 seconds
 *      - Contract valve: 
 *      - Relax valve: 
 */
void muscle(float duty_cycle) {
  Serial.print("=======================================================");
  Serial.print("\nBeginning muscle sequence at ");
  Serial.print(duty_cycle);
  Serial.print(" duty cycle.\n");

  Serial.println("Holding for 2 seconds.");
  delay(2000);

  Serial.println("Contracting the muscle for some number of seconds.");
  pwm_muscle(duty_cycle, 6000, true); // B

  Serial.println("Holding the muscle steady for some number of seconds.");
  delay(3000);

  Serial.println("Relaxing the muscle for 8 seconds.");
  pwm_muscle(duty_cycle, 8000, false); // D

  Serial.println("Holding for 2 seconds.");
  delay(2000);

}

/*
 * PWM the muscle for contraction or relaxation
 *  duty_cycle: Duty cycle at which to pwm the muscle
 *  seconds: How long the muscle contracts/relaxes
 *  contract: Boolean value determining whether to use the contraction valve or the relaxation valve
 */
void pwm_muscle(float duty_cycle, int milliseconds, bool contract) {

  int pin;

  // Set the pin to the correct valve
  if (contract) {
    pin = PIN_CONTRACT;
  } else {
    pin = PIN_RELAX;
  }

  // Convert pwm duty cycle into integer value for use with the analogWrite function
  int pwm_value = (int)(duty_cycle * 255);
  analogWrite(pin, pwm_value);
  delay(milliseconds);
  analogWrite(pin, 0);
  return;
}



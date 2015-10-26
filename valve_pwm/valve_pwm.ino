void setup() {
  pinMode(11, OUTPUT);

  // Phase-correct PWM, see https://www.arduino.cc/en/Tutorial/SecretsOfArduinoPWM
  TCCR2A = _BV(COM2A0) | _BV(COM2B1) | _BV(WGM20);
  TCCR2B = _BV(WGM22) | _BV(CS22);
  OCR2A = 4000; // Based on 16MHz / 64 / 4000 / 2 = 31Hz. See the link above for calculation
  OCR2B = 50; // This value determines the duty cycle: OCR2B / OCR2A = duty cycle

}

void loop() {
  muscle(0.25);
  delay(5000);
  muscle(0.50);
  delay(5000);
  muscle(0.75);
}


void muscle(float duty_cycle) {

  OCR2B = (int)(OCR2A * duty_cycle);

  unsigned long previous = millis();

  //
  while (millis() - previous <= 2000) {
    
  }

  previous = millis();
  //
  while (millis() - previous <= 3000) {
    
  }
  
  previous = millis();
  //
  while (millis() - previous <= 3000) {
    
  }
  
  previous = millis();
  //
  while (millis() - previous <= 3000) {
    
  }
  previous = millis();

  // 
  while (millis() - previous <= 2000) {
    
  }
  
}




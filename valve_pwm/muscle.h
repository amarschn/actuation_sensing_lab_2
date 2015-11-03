// This is the pin used to pwm the valve
#define PIN_CONTRACT 3
#define PIN_RELAX 11

void muscle(float duty_cycle);

void pwm_muscle(float duty_cycle, int seconds, bool contract);

// This is the pin used to pwm the valve
#define PIN 3

void muscle(int duty_cycle);

void relax(int duty_cycle, int seconds);
void contract(int duty_cycle, int seconds);
void hold(int seconds);

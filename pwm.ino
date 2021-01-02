#include "pwm_lib.h"

pwm pwmc;
void setup() {

  pwmc.attachpin(4);
  pwmc.attachpin(2);
  pwmc.attachpin(18);
}

void loop() {
  
    pwmc.pwmoutput(4,255);
    pwmc.pwmoutput(2,127);
    pwmc.pwmoutput(18,0);
    
}

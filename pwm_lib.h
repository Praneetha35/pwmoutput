#ifndef PWM
#define PWM

#include <Arduino.h>

//Creating a class called pwm
class pwm
{
  public :
   
      int led_channel;
      //Creating a function called attachpin
      void attachpin(int led_pin);
      //Creating a function called pwmoutput
      void pwmoutput(int led_pin,int pwm_value);
      
};
 

#endif

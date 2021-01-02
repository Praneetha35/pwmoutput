# include "Arduino.h"
#include "pwm_lib.h"

//A function which helps to attach a specific pin to a specific channel
void pwm::attachpin(int _pin){
 
    
    int pin=_pin;
    // setting PWM properties
    const int freq = 5000;   
    const int resolution = 8;


    //if-else if statements that allow a particular GPIO to be allocated with a specific channel

    if(pin==2||pin==4||pin==5){
      //allocating channel 0 for pins 2,4 and 5
       int led_channel = 0;
      //configure LED PWM functionalitites
      ledcSetup (led_channel,freq,resolution);
      ledcAttachPin(pin,led_channel);
      delay(15);}

      
     else if(pin>=12 && pin<=15){
      //allocating channel 1 for pins 12,13,14 and 15
      int led_channel = 1;
      //configure LED PWM functionalitites
      ledcSetup (led_channel,freq,resolution);
      ledcAttachPin(pin, led_channel);
      delay(15);}
    
    else if(pin==17||pin==18 || pin==19){
      //allocating channel 2 for pins 17,18 and 19
      int led_channel = 2;
      //configure LED PWM functionalitites
      ledcSetup (led_channel,freq,resolution);
      ledcAttachPin(pin, led_channel);
      //ledcWrite (led_channel,value);
      delay(15);}

    else if(pin==21||pin==22 || pin==23){
       //allocating channel 4 for pins 21,22 and 23
      int led_channel = 4;
      //configure LED PWM functionalitites
      ledcSetup (led_channel,freq,resolution);
      ledcAttachPin(pin, led_channel);
      delay(15);}

  else if(pin==25 || pin==26){
      //allocating channel 6 for pins 25 and 26
      int led_channel = 6;
      //configure LED PWM functionalitites
      ledcSetup (led_channel,freq,resolution);
      ledcAttachPin(pin, led_channel);
      delay(15);}
  
  else if(pin== 27){
      //allocating channel 7 for pins 27 
      int led_channel = 7;
      //configure LED PWM functionalitites
      ledcSetup (led_channel,freq,resolution);
      ledcAttachPin(pin, led_channel);
     // ledcWrite (led_channel,value);
      delay(15);}
      
  else if(pin==32 || pin==33){
       //allocating channel 10 for pins 32 and 33
      int led_channel = 10;
      //configure LED PWM functionalitites
      ledcSetup (led_channel,freq,resolution);
      ledcAttachPin(pin, led_channel);
      delay(15);}


    else if(pin==34 || pin==35){
       //allocating channel 10 for pins 34 and 35
      int led_channel = 14;
      //configure LED PWM functionalitites
      ledcSetup (led_channel,freq,resolution);
      ledcAttachPin(pin, led_channel);
      delay(15);}
}

//A function which aids the users in easily configuring the PWM output on the pins

void pwm::pwmoutput(int _pin,int _value){

    int pin=_pin;
    int value=_value;
    ledcWrite (led_channel,value);

}

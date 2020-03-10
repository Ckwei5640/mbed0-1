#include "mbed.h"

void Led1(DigitalOut& ledpin)
{
   for(int i=0; i<6; ++i) { 
       ledpin = !ledpin; 
       wait(0.2f);
   }
}

void Led2(DigitalOut& ledpin)
{
   for(int i=0; i<4; ++i) { 
       ledpin = !ledpin; 
       wait(0.2f);
   }
}
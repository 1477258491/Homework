
#include "ioCC2530.h"  


#define LED1 P1_0     // P1_0定义为P1.0
#define LED2 P1_1     // P1_1定义为P1.1


unsigned int temp = 0;

//1ms精确定时
void yanshi(unsigned int time)
{unsigned int i = 0;
     unsigned int j;
  for(i = 0; i < time; i++)
  {
for(j = 0; j < 475; j++)
{   asm("NOP");   
          asm("NOP");
          asm("NOP");
       }  }  }

void main(void)
{
    P1SEL &= ~(0x03);
    P1DIR |= 0x03 ;   
while(1)
{
      LED1 = 1;    
      LED2 = 0;    yanshi(1000);
      LED1 = 0;    
      LED2 = 1;     yanshi(1000);
}    
}

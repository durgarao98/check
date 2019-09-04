/*
 */

#include "wiper.h"

int main(void)
{

    // Insert code
    SET_BIT(DDRD,PD6);   // pin 7 is output
    DDRD&=~((1<<PD0)|(1<<PD1)|(1<<PD2)|(1<<PD3)|(1<<PD4)|(1<<PD5)); // INPUT PIN
    PORTD|=((1<<PD0)|(1<<PD1)|(1<<PD2)|(1<<PD3)|(1<<PD4)|(1<<PD5)); //PULL UP CONFIGURATION



    while(if(READ_BIT(DDRD,PD0))) //engine on
    {
         if((READ_BIT(DDRD,PD1)))
         {
         if((READ_BIT(DDRD,PD3)))
         {
             manual_op(25);
         }
         else if((READ_BIT(DDRD,PD4)))
         {
             manual_op(50);
         }
         else if((READ_BIT(DDRD,PD5)))
         {
             manual_op(75);
         }
         }
         else(())
    }
    ;

    return 0;
}

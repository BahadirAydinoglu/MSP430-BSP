#include <msp430.h>
#include "bsp.h"
/**
 * main.c
 */


#define SW  BIT3                    // Switch -> P1.3
#define LED BIT0                    // Red LED -> P1.0

void main(void) 
{
    WDTCTL = WDTPW | WDTHOLD;       // Stop watchdog timer

    GPIO_Init(PORT1,LED,OUTPUT);
    GPIO_Init(PORT1,SW,INPUT);
    GPIO_InputPullup(PORT1,SW);    
/*
    P1DIR |= LED;                   // Set LED pin -> Output
    P1DIR &= ~SW;                   // Set SW pin -> Input
    P1REN |= SW;                    // Enable Resistor for SW pin
    P1OUT |= SW;                    // Select Pull Up for SW pin   
  */
    while(1)
     {
        if(GPIO_ReadPin(PORT1,SW))
            GPIO_SetPin(PORT1,LED);
        else
            GPIO_ResetPin(PORT1,LED);
        
    }
}


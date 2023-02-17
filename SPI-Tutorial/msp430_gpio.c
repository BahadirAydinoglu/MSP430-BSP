#include <msp430.h>
#include <msp430_gpio.h>

void GPIO_Init(int PORTx,int Pin,int Status)
{
    if(Status == 1)
    {
        if(PORTx==PORT1)
            P1DIR &= ~Pin;
        if(PORTx==PORT2)
            P2DIR &= ~Pin;
    }
    if(Status == 0)
    {
        if(PORTx==PORT1)
            P1DIR |= Pin;
        if(PORTx==PORT2)
            P2DIR |= Pin;

    }
}
void GPIO_InputPullup(int PORTx,int Pin)
{
    if(PORTx==PORT1)
        P1REN |=Pin;
    if(PORTx==PORT2)
        P2REN |=Pin;    
}
void GPIO_SetPin(int PORTx,int Pin)
{ 
    if(PORTx==PORT1)   
        P1OUT |= Pin;   
    if(PORTx==PORT2)
        P2OUT |= Pin;   
 
}
void GPIO_ResetPin(int PORTx,int Pin)
{
    if(PORTx==PORT1)    
        P1OUT &= ~Pin;
    if(PORTx==PORT2)
        P2OUT &= ~Pin;
}
int GPIO_ReadPin(int PORTx,int Pin)
{
    int State;
    if(PORTx==PORT1)
        State = P1IN & Pin;
    if(PORTx==PORT2)
        State = P2IN & Pin;
    return State;
}

































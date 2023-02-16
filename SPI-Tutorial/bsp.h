#include <msp430.h>

#define INPUT 1
#define OUTPUT 0

#define PORT1   1
#define PORT2   2

void GPIO_Init(int PORTx,int Pin,int Status);
void GPIO_InputPullup(int PORTx,int Pin);
void GPIO_SetPin(int PORTx,int Pin);
void GPIO_ResetPin(int  PORTx,int Pin);
int GPIO_ReadPin(int PORTx,int Pin);

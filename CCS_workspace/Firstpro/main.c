#include <msp430.h> 


/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	
	P1DIR = 0X01;//
	P1OUT = 0X01;
	P1OUT = 0X00;
	P1OUT = 0X01;

	return 0;
}

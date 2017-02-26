//******************************************************************************
//  MSP430F20xx Demo - Basic Clock, LPM3 Using WDT ISR, VLO ACLK
//
//  Description: This program operates MSP430 normally in LPM3, pulsing P1.0
//  ~ 6 second intervals. WDT ISR used to wake-up system. All I/O configured
//  as low outputs to eliminate floating inputs. Current consumption does
//  increase when LED is powered on P1.0. Demo for measuring LPM3 current.
//  ACLK = VLO/2, MCLK = SMCLK = default DCO
//
//
//           MSP430F20xx
//         ---------------
//     /|\|            XIN|-
//      | |               |
//      --|RST        XOUT|-
//        |               |
//        |           P1.0|-->LED
/*
 * ======== Standard MSP430 includes ========
 */
#include <msp430.h>
#include <ti/mcu/msp430/Grace.h>
/*
 * ======== Grace related declaration ========
 */




/*
 *  ======== main ========
 */
int main(void)
{
	Grace_init();                 // Activate Grace-generated configuration
  while(1)
  {
	int i;
	P1OUT |= 0x01;                          // Set P1.0 LED on
	for (i = 10000; i>0; i--);              // Delay
	P1OUT &= ~0x01;                         // Reset P1.0 LED off
	__bis_SR_register(LPM3_bits + GIE);               // Enter LPM3
  }

}

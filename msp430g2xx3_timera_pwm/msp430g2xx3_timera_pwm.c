//******************************************************************************
//  MSP430G2xx3 Demo - Timer_A, PWM TA1, Up/Down Mode, DCO SMCLK
//
//  Description: This program generates one PWM output on P1.2 using
//  Timer_A configured for up/down mode. The value in CCR0, 128, defines the PWM
//  period/2 and the value in CCR1 the PWM duty cycles.
//  A 75% duty cycle is on P1.2.
//  SMCLK = MCLK = TACLK = default DCO
//
//               MSP430G2xx3
//            -----------------
//        /|\|              XIN|-
//         | |                 |
//         --|RST          XOUT|-
//           |                 |
//           |         P1.2/TA1|--> CCR1 - 75% PWM
//******************************************************************************
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
	Grace_init();

    __bis_SR_register(LPM0_bits);                       // Enter LPM0
}

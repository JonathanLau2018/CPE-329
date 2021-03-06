#include "msp.h"
#include "set_dco.h"

/**
 * main.c
 */

void main(void) {
    WDT_A->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;     // stop watchdog timer

    int set_freq = FREQ_12_MHZ;
    P1 ->DIR |= (BIT0);
    P1 ->OUT |= (BIT1);
    set_DCO(set_freq);

    //set P4.3 to MCLCK
    P4 ->SEL0 |= (BIT3);
    P4 ->SEL1 &= (~BIT3);
    P4 ->OUT |= BIT3;

    while(1) {

    }

 }



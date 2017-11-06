/*
 */


#include "countDownTimer1.h"
#include "clockfunc.h"
#include "clockSerialHelp.h"

volatile uint16_t ticks;
volatile uint8_t seconds = 59;
volatile uint8_t minutes = 59;
volatile uint8_t hours = 23;

ISR(TIMER0_OVF_vect) {

	ticks++;

}


int main(void) {

    initUSART();
    DDRB |= 0xff;
    initTimer0_Clock();
    sei();

while(1) {

    if (ticks == OVERFLOWS_PER_SECOND) {
        ticks = 0;
        everySecond();
      }
    pollSerial();
}
    return (0);
}

#include "clockfunc.h"

void initTimer0_Clock(void) {
                  /* Normal mode, just used for the overflow interrupt */
  TCCR0B |= (1 << CS00);  /* 8 MHz clock = ~31250 overflows per second */
  TIMSK0 |= (1 << TOIE0);           /* timer overflow interrupt enable */
}



void everySecond(void) {
    seconds++;
    if (seconds > 59) {
	seconds = 0;
	everyMinute();
 }
    PORTB ^= (1 << PB3);
    printTime(hours, minutes, seconds);
}

void everyMinute(void) {
    minutes++;
    if (minutes > 59) {
        minutes = 0;
        everyHour();

    }

}

void everyHour(void) {
    hours++;
    if (hours > 23) {
        hours = 0;

    }
}




#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include <avr/power.h>
#include "USART.h"

#define OVERFLOWS_PER_SECOND	31250 //note to self..if you put ';' here it will not compile in main

extern volatile uint16_t ticks;
extern volatile uint8_t seconds; //in case of compile error remove these values
extern volatile uint8_t minutes;
extern volatile uint8_t hours;






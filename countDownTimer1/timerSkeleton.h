

#include <avr/io.h>


#define OVERFLOWS_PER_SECOND	31250 //note to self..if you put ';' here it will not compile in main

uint16_t ticks;
volatile uint8_t seconds = 59;
volatile uint8_t minutes = 59;
volatile uint8_t hours = 23;
volatile uint8_t days = 1;


void everySecond(void);
void everyMinute(void);
void everyHour(void);
void everyDay(void);

void initTimer0_Clock(void);

void printTime(uint8_t hours, uint8_t minutes, uint8_t seconds);
void pollSerial(void);

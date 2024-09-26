/*
 * software_interrupt.c
 *
 *  Created on: Sep 26, 2024
 *      Author: My Laptop
 */

#include "software_interrupt.h"

int timer0_flag = 0;
int timer0_counter = 0;
int timer1_flag = 0;
int timer1_counter = 0;

void setTimer0(int duration) {
	timer0_flag = 0;
	timer0_counter = duration / TIME_CYCLE;
}

void timerRun0() {
	if (timer0_counter > 0 ) {
		timer0_counter--;
		if (timer0_counter == 0) {
			timer0_flag = 1;
		}
	}
}

void setTimer1(int duration) {
	timer1_flag = 0;
	timer1_counter = duration / TIME_CYCLE;
}

void timerRun1() {
	if (timer1_counter > 0 ) {
		timer1_counter--;
		if (timer1_counter == 0) {
			timer1_flag = 1;
		}
	}
}

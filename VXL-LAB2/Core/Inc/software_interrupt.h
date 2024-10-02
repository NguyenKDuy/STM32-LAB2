/*
 * software_interrupt.h
 *
 *  Created on: Sep 26, 2024
 *      Author: My Laptop
 */

#ifndef INC_SOFTWARE_INTERRUPT_H_
#define INC_SOFTWARE_INTERRUPT_H_

extern int timer0_flag;
extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;

#define TIME_CYCLE 10;

void setTimer0(int duration);
void timerRun0();

void setTimer1(int duration);
void timerRun1();

void setTimer2(int duration);
void timerRun2();

void setTimer3(int duration);
void timerRun3();


#endif /* INC_SOFTWARE_INTERRUPT_H_ */

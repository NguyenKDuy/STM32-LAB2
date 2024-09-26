/*
 * ex1.h
 *
 *  Created on: Sep 26, 2024
 *      Author: My Laptop
 */

#ifndef INC_EX7_H_
#define INC_EX7_H_

#include "main.h"

extern int hour;
extern int minute;

void display7SEG(int num);
void blinkDOT();
void update7SEG (int index);
void updateClockBuffer();
void ex4Run();

#endif /* INC_EX7_H_ */

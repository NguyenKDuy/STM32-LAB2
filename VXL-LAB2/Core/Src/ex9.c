/*
 * ex9.c
 *
 *  Created on: Sep 26, 2024
 *      Author: My Laptop
 */

#include "ex9.h"
#include "stdint.h"

const int MAX_LED_MATRIX = 8;
int index_led_matrix = 0;
uint8_t matrix_buffer[8] = {0x00, 0x3C, 0x66, 0x66, 0x7E, 0x66, 0x66, 0x00}; //letter A

void displayLEDMatrix (uint8_t item, int index) {
			//row
			HAL_GPIO_WritePin(ROW0_GPIO_Port , ROW0_Pin, (index == 0)? SET: RESET);
			HAL_GPIO_WritePin(ROW1_GPIO_Port , ROW1_Pin, (index == 1)? SET: RESET);
			HAL_GPIO_WritePin(ROW2_GPIO_Port , ROW2_Pin, (index == 2)? SET: RESET);
			HAL_GPIO_WritePin(ROW3_GPIO_Port , ROW3_Pin, (index == 3)? SET: RESET);
			HAL_GPIO_WritePin(ROW4_GPIO_Port , ROW4_Pin, (index == 4)? SET: RESET);
			HAL_GPIO_WritePin(ROW5_GPIO_Port , ROW5_Pin, (index == 5)? SET: RESET);
			HAL_GPIO_WritePin(ROW6_GPIO_Port , ROW6_Pin, (index == 6)? SET: RESET);
			HAL_GPIO_WritePin(ROW7_GPIO_Port , ROW7_Pin, (index == 7)? SET: RESET);
			//col
			HAL_GPIO_WritePin(EMN0_GPIO_Port , EMN0_Pin, (item & 0x1)? SET: RESET);
			HAL_GPIO_WritePin(EMN1_GPIO_Port , EMN1_Pin, (item & 0x2)? SET: RESET);
			HAL_GPIO_WritePin(EMN2_GPIO_Port , EMN2_Pin, (item & 0x4)? SET: RESET);
			HAL_GPIO_WritePin(EMN3_GPIO_Port , EMN3_Pin, (item & 0x8)? SET: RESET);
			HAL_GPIO_WritePin(EMN4_GPIO_Port , EMN4_Pin, (item & 0x10)? SET: RESET);
			HAL_GPIO_WritePin(EMN5_GPIO_Port , EMN5_Pin, (item & 0x20)? SET: RESET);
			HAL_GPIO_WritePin(EMN6_GPIO_Port , EMN6_Pin, (item & 0x40)? SET: RESET);
			HAL_GPIO_WritePin(EMN7_GPIO_Port , EMN7_Pin, (item & 0x80)? SET: RESET);
}

void updateLEDMatrix(int index){
	switch (index){
	case 0:
		displayLEDMatrix(matrix_buffer[0],0);
		break;
	case 1:
		displayLEDMatrix(matrix_buffer[1],1);
		break;
	case 2:
		displayLEDMatrix(matrix_buffer[2],2);
		break;
	case 3:
		displayLEDMatrix(matrix_buffer[3],3);
		break;
	case 4:
		displayLEDMatrix(matrix_buffer[4],4);
		break;
	case 5:
		displayLEDMatrix(matrix_buffer[5],5);
		break;
	case 6:
		displayLEDMatrix(matrix_buffer[6],6);
		break;
	case 7:
		displayLEDMatrix(matrix_buffer[7],7);
		break;
	default:
		displayLEDMatrix(0x00,0);
		break;
	 }
}
void ex9Run() {
	if (index_led_matrix >7) {
		index_led_matrix = 0;
	}
	updateLEDMatrix(index_led_matrix++);
}

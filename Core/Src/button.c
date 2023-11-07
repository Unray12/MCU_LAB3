/*
 * button.c
 *
 *  Created on: Oct 22, 2023
 *      Author: PCPV
 */
#include "button.h"

int keyReg0[3] = {NORMAL_STATE};
int keyReg1[3] = {NORMAL_STATE};
int keyReg2[3] = {NORMAL_STATE};

int keyReg3[3] = {NORMAL_STATE};
int timerForKeyPress = 200;
int button_flag[4] = {0, 0, 0, 0};

int isButtonPressed(int index) {
	if(button_flag[index] == 1) {
		button_flag[index] = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess(int index) {
	button_flag[index] = 1;
}

void getKeyInput(int index) {
	keyReg0[index] = keyReg1[index];
	keyReg1[index] = keyReg2[index];

	keyReg2[index] = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_(index + 10));//HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_(index + 10));
	if ((keyReg0[index] == keyReg1[index]) && (keyReg1[index] == keyReg2[index])) {
		if (keyReg3[index] != keyReg2[index]) {
			keyReg3[index] = keyReg2[index];
			if (keyReg2[index] == PRESSED_STATE) {
				subKeyProcess(index);
				timerForKeyPress = 200;
			}
		}
		else {
			timerForKeyPress--;
			if (timerForKeyPress == 0) {
				keyReg3[index] = NORMAL_STATE;
			}
		}
	}
}

//void getKeyInput1(int index) {
//	keyReg0 = keyReg1;
//	keyReg1 = keyReg2;
//
//	keyReg2 = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_(11));//HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_(index + 10));
//	if ((keyReg0 == keyReg1) && (keyReg1 == keyReg2)) {
//		if (keyReg3 != keyReg2) {
//			keyReg3 = keyReg2;
//			if (keyReg2 == PRESSED_STATE) {
//				subKeyProcess(index);
//				timerForKeyPress = 200;
//			}
//		}
//		else {
//			timerForKeyPress--;
//			if (timerForKeyPress == 0) {
//				keyReg3 = NORMAL_STATE;
//			}
//		}
//	}
//}
//void getKeyInput2(int index) {
//	keyReg0 = keyReg1;
//	keyReg1 = keyReg2;
//
//	keyReg2 = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_(12));//HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_(index + 10));
//	if ((keyReg0 == keyReg1) && (keyReg1 == keyReg2)) {
//		if (keyReg3 != keyReg2) {
//			keyReg3 = keyReg2;
//			if (keyReg2 == PRESSED_STATE) {
//				subKeyProcess(index);
//				timerForKeyPress = 200;
//			}
//		}
//		else {
//			timerForKeyPress--;
//			if (timerForKeyPress == 0) {
//				keyReg3 = NORMAL_STATE;
//			}
//		}
//	}
//}




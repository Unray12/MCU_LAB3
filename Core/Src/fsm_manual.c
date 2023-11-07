/*
 * fsm_manual.c
 *
 *  Created on: Nov 3, 2023
 *      Author: PCPV
 */

#include "fsm_manual.h"


void fsm_manual_run() {
	switch (status) {
		case MAN_RED:
//			clearTrafficLight();
			if (timerFlag[3] == 1) {
				setTimer(3, 50); //blinky 2 Hz
				HAL_GPIO_TogglePin(GPIOA, Red1_Pin);
				HAL_GPIO_TogglePin(GPIOA, Red2_Pin);
			}

			if (isButtonPressed(1) == 1) {
				currentLed13++;
				if (currentLed13 > 99)
					currentLed13 = 0;
				updateLedBuffer();
			}

			if(isButtonPressed(0) == 1) {
				status = MAN_AMBER;
				clearTrafficLight();
				currentLed24 = 3; //mode
				updateLedBuffer();
				setTimer(3, 50);
			}

			if (isButtonPressed(2) == 1) {
				realRedTime = currentLed13;
			}
			break;
		case MAN_AMBER:
			if (timerFlag[3] == 1) {
				HAL_GPIO_TogglePin(GPIOA, Yellow1_Pin);
				HAL_GPIO_TogglePin(GPIOA, Yellow2_Pin);
			}

			if (isButtonPressed(1) == 1) {
				currentLed13++;
				if (currentLed13 > 99)
					currentLed13 = 0;
				updateLedBuffer();
			}

			if(isButtonPressed(0) == 1) {
				status = MAN_GREEN;
				clearTrafficLight();
				currentLed24 = 4; //mode
				updateLedBuffer();
				setTimer(3, 50);
			}

			if (isButtonPressed(2) == 1) {
				realAmberTime = currentLed13;
			}
			break;
		case MAN_GREEN:
			if (timerFlag[3] == 1) {
				HAL_GPIO_TogglePin(GPIOA, Green1_Pin);
				HAL_GPIO_TogglePin(GPIOA, Green2_Pin);
			}


			if (isButtonPressed(1) == 1) {
				currentLed13++;
				if (currentLed13 > 99)
					currentLed13 = 0;
				updateLedBuffer();
			}

			if(isButtonPressed(0) == 1) {
				status = MAN_RED;
				clearTrafficLight();
				currentLed24 = 1; //mode
				updateLedBuffer();
				setTimer(0, realAmberTime * 100);
			}

			if (isButtonPressed(2) == 1) {
				realGreenTime = currentLed13;
			}
			break;
		default:
			break;

		if (status > 20 && status < 24) {
//			if (timerFlag[2] == 1) { //for time in 7 seg leds
//				update7SEGLed(index7SEGLed++);
//				if (index7SEGLed > 3)
//					index7SEGLed = 0;
//				setTimer(2, 10);
//			}
		}
	}
//	if (timerFlag[3] == 1)
//		setTimer(3, 50); //blinky 2 Hz
}

/*
 * button.h
 *
 *  Created on: Oct 22, 2023
 *      Author: PCPV
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET
#define GPIO_PIN_(i) ((uint16_t)(1 << (i)))


void subKeyProcess(int index);
void getKeyInput();
int isButtonPressed(int index);
#endif /* INC_BUTTON_H_ */

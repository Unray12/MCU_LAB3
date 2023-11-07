/*
 * myLib.h
 *
 *  Created on: Oct 7, 2023
 *      Author: PCPV
 */

#ifndef INC_MYLIB_H_
#define INC_MYLIB_H_
#include "main.h"
#define GPIO_PIN_(i) ((uint16_t)(1 << (i)))
extern int index7SEGLed;
extern int led_buffer[4];
extern int currentLed13;
extern int currentLed24;
extern int realAmberTime; //real time in second
extern int realGreenTime;
extern int realRedTime;
	void update7SEGLed(int index);
  void updateLedBuffer();
  void enState(uint8_t enIndex);
  void clear7SEG();
  void display7SEG(uint8_t num);
  void clearTrafficLight();
  void onRed1();
  void onGreen1();
  void onAmber1();
  void onRed2();
  void onGreen2();
  void onAmber2();


#endif /* INC_MYLIB_H_ */

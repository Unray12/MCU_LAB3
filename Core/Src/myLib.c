/*
 * myLib.c
 *
 *  Created on: Nov 3, 2023
 *      Author: PCPV
 */
#include "myLib.h"

int index7SEGLed = 0;
int led_buffer[4] = {0, 0, 0, 0};

int currentLed13 = 0;
int currentLed24 = 0;

int realAmberTime = 2; //real time in second
int realGreenTime = 3;
int realRedTime = 5;


void update7SEGLed(int index) {
	enState(index);
	display7SEG(led_buffer[index]);
}

void updateLedBuffer() {
	led_buffer[0] = currentLed13 / 10;
	led_buffer[2] = currentLed13 % 10;

	led_buffer[1] = currentLed24 / 10;
	led_buffer[3] = currentLed24 % 10;
}

  void enState(uint8_t enIndex) {
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_(0), SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_(1), SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_(2), SET);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_(3), SET);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_(enIndex), RESET);
  }

  void clear7SEG() {
  		HAL_GPIO_WritePin(SegA_GPIO_Port, SegA_Pin, SET);
  		HAL_GPIO_WritePin(SegB_GPIO_Port, SegB_Pin, SET);
  		HAL_GPIO_WritePin(SegC_GPIO_Port, SegC_Pin, SET);
  		HAL_GPIO_WritePin(SegD_GPIO_Port, SegD_Pin, SET);
  		HAL_GPIO_WritePin(SegE_GPIO_Port, SegE_Pin, SET);
  		HAL_GPIO_WritePin(SegF_GPIO_Port, SegF_Pin, SET);
  		HAL_GPIO_WritePin(SegG_GPIO_Port, SegG_Pin, SET);
  }

  void display7SEG(uint8_t num) {
  	  switch(num) {
  	  	  case 0:
  	  		HAL_GPIO_WritePin(SegA_GPIO_Port, SegA_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegB_GPIO_Port, SegB_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegC_GPIO_Port, SegC_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegD_GPIO_Port, SegD_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegE_GPIO_Port, SegE_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegF_GPIO_Port, SegF_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegG_GPIO_Port, SegG_Pin, SET);
  	  		break;
  		  case 1:
  	  		HAL_GPIO_WritePin(SegA_GPIO_Port, SegA_Pin, SET);
  	  		HAL_GPIO_WritePin(SegB_GPIO_Port, SegB_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegC_GPIO_Port, SegC_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegD_GPIO_Port, SegD_Pin, SET);
  	  		HAL_GPIO_WritePin(SegE_GPIO_Port, SegE_Pin, SET);
  	  		HAL_GPIO_WritePin(SegF_GPIO_Port, SegF_Pin, SET);
  	  		HAL_GPIO_WritePin(SegG_GPIO_Port, SegG_Pin, SET);
  	  		break;
  		  case 2:
  	  		HAL_GPIO_WritePin(SegA_GPIO_Port, SegA_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegB_GPIO_Port, SegB_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegC_GPIO_Port, SegC_Pin, SET);
  	  		HAL_GPIO_WritePin(SegD_GPIO_Port, SegD_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegE_GPIO_Port, SegE_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegF_GPIO_Port, SegF_Pin, SET);
  	  		HAL_GPIO_WritePin(SegG_GPIO_Port, SegG_Pin, RESET);
  	  		break;
  		  case 3:
  	  		HAL_GPIO_WritePin(SegA_GPIO_Port, SegA_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegB_GPIO_Port, SegB_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegC_GPIO_Port, SegC_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegD_GPIO_Port, SegD_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegE_GPIO_Port, SegE_Pin, SET);
  	  		HAL_GPIO_WritePin(SegF_GPIO_Port, SegF_Pin, SET);
  	  		HAL_GPIO_WritePin(SegG_GPIO_Port, SegG_Pin, RESET);
  	  		break;
  		  case 4:
  	  		HAL_GPIO_WritePin(SegA_GPIO_Port, SegA_Pin, SET);
  	  		HAL_GPIO_WritePin(SegB_GPIO_Port, SegB_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegC_GPIO_Port, SegC_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegD_GPIO_Port, SegD_Pin, SET);
  	  		HAL_GPIO_WritePin(SegE_GPIO_Port, SegE_Pin, SET);
  	  		HAL_GPIO_WritePin(SegF_GPIO_Port, SegF_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegG_GPIO_Port, SegG_Pin, RESET);
  	  		break;
  		  case 5:
  	  		HAL_GPIO_WritePin(SegA_GPIO_Port, SegA_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegB_GPIO_Port, SegB_Pin, SET);
  	  		HAL_GPIO_WritePin(SegC_GPIO_Port, SegC_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegD_GPIO_Port, SegD_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegE_GPIO_Port, SegE_Pin, SET);
  	  		HAL_GPIO_WritePin(SegF_GPIO_Port, SegF_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegG_GPIO_Port, SegG_Pin, RESET);
  	  		break;
  		  case 6:
  	  		HAL_GPIO_WritePin(SegA_GPIO_Port, SegA_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegB_GPIO_Port, SegB_Pin, SET);
  	  		HAL_GPIO_WritePin(SegC_GPIO_Port, SegC_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegD_GPIO_Port, SegD_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegE_GPIO_Port, SegE_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegF_GPIO_Port, SegF_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegG_GPIO_Port, SegG_Pin, RESET);
  	  		break;
  		  case 7:
  	  		HAL_GPIO_WritePin(SegA_GPIO_Port, SegA_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegB_GPIO_Port, SegB_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegC_GPIO_Port, SegC_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegD_GPIO_Port, SegD_Pin, SET);
  	  		HAL_GPIO_WritePin(SegE_GPIO_Port, SegE_Pin, SET);
  	  		HAL_GPIO_WritePin(SegF_GPIO_Port, SegF_Pin, SET);
  	  		HAL_GPIO_WritePin(SegG_GPIO_Port, SegG_Pin, SET);
  	  		break;
  		  case 8:
  	  		HAL_GPIO_WritePin(SegA_GPIO_Port, SegA_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegB_GPIO_Port, SegB_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegC_GPIO_Port, SegC_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegD_GPIO_Port, SegD_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegE_GPIO_Port, SegE_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegF_GPIO_Port, SegF_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegG_GPIO_Port, SegG_Pin, RESET);
  	  		break;
  		  case 9:
  	  		HAL_GPIO_WritePin(SegA_GPIO_Port, SegA_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegB_GPIO_Port, SegB_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegC_GPIO_Port, SegC_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegD_GPIO_Port, SegD_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegE_GPIO_Port, SegE_Pin, SET);
  	  		HAL_GPIO_WritePin(SegF_GPIO_Port, SegF_Pin, RESET);
  	  		HAL_GPIO_WritePin(SegG_GPIO_Port, SegG_Pin, RESET);
  	  		break;
  		  default:
  			HAL_GPIO_WritePin(SegA_GPIO_Port, SegA_Pin, SET);
  		    HAL_GPIO_WritePin(SegB_GPIO_Port, SegB_Pin, RESET);
  		    HAL_GPIO_WritePin(SegC_GPIO_Port, SegC_Pin, RESET);
  		  	HAL_GPIO_WritePin(SegD_GPIO_Port, SegD_Pin, SET);
  		  	HAL_GPIO_WritePin(SegE_GPIO_Port, SegE_Pin, RESET);
  		  	HAL_GPIO_WritePin(SegF_GPIO_Port, SegF_Pin, RESET);
  		  	HAL_GPIO_WritePin(SegG_GPIO_Port, SegG_Pin, RESET);
  	  }
    }

  void clearTrafficLight() {
  	HAL_GPIO_WritePin(GPIOA, Green1_Pin, SET);
  	HAL_GPIO_WritePin(GPIOA, Red1_Pin, SET);
  	HAL_GPIO_WritePin(GPIOA, Yellow1_Pin, SET);
  	HAL_GPIO_WritePin(GPIOA, Green2_Pin, SET);
  	HAL_GPIO_WritePin(GPIOA, Red2_Pin, SET);
  	HAL_GPIO_WritePin(GPIOA, Yellow2_Pin, SET);

  	led_buffer[0] = 0;
  	led_buffer[1] = 0;
  	led_buffer[2] = 0;
  	led_buffer[3] = 0;

  	currentLed13 = 0;
  	currentLed24 = 0;
  	clear7SEG();
  }

  void onRed1() {
	HAL_GPIO_WritePin(GPIOA, Green1_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, Red1_Pin, RESET);
	HAL_GPIO_WritePin(GPIOA, Yellow1_Pin, SET);
  }

  void onAmber1() {
	HAL_GPIO_WritePin(GPIOA, Green1_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, Red1_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, Yellow1_Pin, RESET);
  }

  void onGreen1() {
	HAL_GPIO_WritePin(GPIOA, Green1_Pin, RESET);
	HAL_GPIO_WritePin(GPIOA, Red1_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, Yellow1_Pin, SET);
  }

  void onRed2() {
	HAL_GPIO_WritePin(GPIOA, Green2_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, Red2_Pin, RESET);
	HAL_GPIO_WritePin(GPIOA, Yellow2_Pin, SET);
  }

  void onAmber2() {
	HAL_GPIO_WritePin(GPIOA, Green2_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, Red2_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, Yellow2_Pin, RESET);
  }

  void onGreen2() {
	HAL_GPIO_WritePin(GPIOA, Green2_Pin, RESET);
	HAL_GPIO_WritePin(GPIOA, Red2_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, Yellow2_Pin, SET);
  }


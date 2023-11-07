/*
 * software_timer.c
 *
 *  Created on: Oct 6, 2023
 *      Author: PCPV
 */
#include "software_timer.h"
//#include <stdint.h>

uint16_t timerCounter[9] = {0};
uint8_t timerFlag[9] = {0};

void setTimer(uint8_t index, uint16_t duration) {
	timerCounter[index] = duration;
	timerFlag[index] = 0;
}

void timerRun(uint8_t index){
	if(timerCounter[index] > 0){
		timerCounter[index]--;
		if (timerCounter[index] <= 0){
			timerFlag[index] = 1;
		}
	}
}

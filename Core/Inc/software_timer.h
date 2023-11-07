/*
 * sofware_timer.h
 *
 *  Created on: Oct 6, 2023
 *      Author: PCPV
 */
#include <stdint.h>
#ifndef INC_SOFWARE_TIMER_H_
#define INC_SOFWARE_TIMER_H_

extern uint8_t timerFlag[9];

void setTimer(uint8_t index, uint16_t duration);
void timerRun(uint8_t index);

#endif /* INC_SOFWARE_TIMER_H_ */

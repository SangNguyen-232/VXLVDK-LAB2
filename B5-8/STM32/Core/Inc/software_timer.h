/*
 * software_timer.h
 *
 *  Created on: Oct 6, 2025
 *      Author: Admin
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer0_counter;
extern int timer0_flag;
extern int timer1_counter;
extern int timer1_flag;
extern const int TIMER_CYCLE;

void setTimer0(int duration);
void setTimer1(int duration);
void timer_run(void);

#endif /* INC_SOFTWARE_TIMER_H_ */

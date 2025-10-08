/*
 * software_timer.h
 *
 * Created on: Oct 8, 2025
 * Author: Admin
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

// Timer status flags
extern int t1_flag;
extern int t2_flag;;
extern int t3_flag;

// Timer configuration functions
void setTimer1(int duration_ms);
void setTimer2(int duration_ms);
void setTimer3(int duration_ms);

// Timer update function
void updateTimers(void);

#endif /* INC_SOFTWARE_TIMER_H_ */

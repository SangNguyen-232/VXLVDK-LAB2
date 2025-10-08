/*
 * software_timer.c
 *
 *  Created on: Oct 8, 2025
 *      Author: Admin
 */

#include "software_timer.h"

int timer1_duration = 0;
int t1_flag = 0;

int timer2_duration = 0;
int t2_flag = 0;

int timer3_duration = 0;
int t3_flag = 0;

int timer4_duration = 0;
int t4_flag = 0;

void setTimer1(int duration_ms) {
    timer1_duration = duration_ms;
    t1_flag = 0;
}

void setTimer2(int duration_ms) {
    timer2_duration = duration_ms;
    t2_flag = 0;
}

void setTimer3(int duration_ms) {
    timer3_duration = duration_ms;
    t3_flag = 0;
}

void setTimer4(int duration_ms) {
    timer4_duration = duration_ms;
    t4_flag = 0;
}

void updateTimers(void) {
    if (timer1_duration > 0) {
        timer1_duration--;
        if (timer1_duration <= 0) {
            t1_flag = 1;
        }
    }
    if (timer2_duration > 0) {
        timer2_duration--;
        if (timer2_duration <= 0) {
            t2_flag = 1;
        }
    }
    if (timer3_duration > 0) {
        timer3_duration--;
        if (timer3_duration <= 0) {
            t3_flag = 1;
        }
    }
    if (timer4_duration > 0) {
        timer4_duration--;
        if (timer4_duration <= 0) {
            t4_flag = 1;
        }
    }
}

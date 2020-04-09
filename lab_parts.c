/*
 * lab_parts.c
 *
 *  Created on: Apr 8, 2020
 *      Author: joemm
 */

#include <servo.h>
#include <timer.h>

void part1 (void){
            servo_move(90); //move the servo to angle 90
            timer_waitMillis(300);//wait for a moment
            servo_move(30); //move the servo to angle 30
            timer_waitMillis(300);//wait for a moment
            servo_move(150); //move the servo to angle 150
            timer_waitMillis(300);//wait for a moment
            servo_move(90); //move the servo to angle 90
}



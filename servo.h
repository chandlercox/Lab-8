/*
 * servo.h
 *
 *  Created on: Apr 3, 2020
 *      Author: joemm
 */

#ifndef SERVO_H_
#define SERVO_H_

void servo_init();
void servo_move(int degrees);
int get_angle(void);

#endif /* SERVO_H_ */

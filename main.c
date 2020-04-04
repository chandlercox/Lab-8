

/**
 * main.c
 */
#include <inc/tm4c123gh6pm.h>
#include <timer.h>
#include <lcd.h>
#include <servo.h>
#include <button.h>
int main(void)
{
    timer_init(); //setup the timer
    lcd_init(); //setup the lcd screen
    servo_init();// initalize servo
    button_init(); //initalize button

        servo_move(90); //move the servo to angle 90
        timer_waitMillis(300);//wait for a moment
        servo_move(30); //move the servo to angle 30
        timer_waitMillis(300);//wait for a moment
        servo_move(150); //move the servo to angle 150
        timer_waitMillis(300);//wait for a moment
        servo_move(90); //move the servo to angle 90

    /*int x = 0;
    servo_move(90);
    while(1){
        int w = get_angle();
        int y = button_getButton(); //check button status
        if (y == 3){ //if button three is pushed..
            x++; //increment x
        }
        if (x % 2 != 0){ //if x is odd rotate counter clock wise
            lcd_printf("Current angle: %d\n Counter Clockwise", w); //print angle and direction
            if (y == 1){ //if button one is pushed
                if ((w +1) >= 180){ //if incrementing the angle will be larger than 180
                        servo_move(180); //move to the max value
                    }
            else{
		w += 1;
                servo_move(w); //add one to the angle
            }
            }
            if (y == 2){ //if button two is pushed
                if ((w +5) >= 180){ //if incrementing the angle will be larger than 180
                    servo_move(180); // move to max value
                }
                else {
		w += 5;
                    servo_move(w); // add five to the angle
                }
            }
            if (y == 4){ //if button four is pushed
                servo_move(5); //move to 5 degrees
            }
        }
        if (x % 2 == 0){ //if x is an even number
            lcd_printf("Current angle: %d\n Clockwise", w); //display angle and direction
            if (y==1){ //if button one is pushed
                if ((w -1) <= 0){ //if decreasing the angle will be smaller than 0
                            servo_move(0);  //move to minimum value
                        }
                else{
		    w -= 1;
                    servo_move(w); //decrease the angle by one
                }
            }
            if (y == 2){ //if button two is pushed
                if ((w -5) <= 0){ //if decreasing the angle will be smaller than 0
                            servo_move(0);// move to minimum value
                        }
                else{
		   w -= 5;
                    servo_move(w); //decrease the angle by five
                }
            }
            if (y == 4){ //if button four is pushed
                servo_move(175); //move to angle 175
            }
        }
    }*/


}


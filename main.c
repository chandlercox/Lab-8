

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

   /* int x=90;
    while (x<180){//sweep the servo
        sero_move(x); //move the servo to a position
        x++; //increment angular position
    }*/

    int x = 1;
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
                servo_move(w +1); //add one to the angle
            }
            }
            if (y == 2){ //if button two is pushed
                if ((w +5) >= 180){ //if incrementing the angle will be larger than 180
                    servo_move(180); // move to max value
                }
                else {
                    servo_move(w +5); // add five to the angle
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
                    servo_move(w - 1); //decrease the angle by one
                }
            }
            if (y == 2){ //if button two is pushed
                if ((w -5) <= 0){ //if decreasing the angle will be smaller than 0
                            servo_move(0);// move to minimum value
                        }
                else{
                    servo_move(w - 5); //decrease the angle by five
                }
            }
            if (y == 4){ //if button four is pushed
                servo_move(175); //move to angle 175
            }
        }
    }



}

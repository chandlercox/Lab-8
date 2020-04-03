

/**
 * main.c
 */
#include <inc/tm4c123gh6pm.h>
#include <timer.h>
#include <lcd.h>
#include <servo.h>
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
        int y = button_getButton();
        if (y == 3){
            x++;
        }
        if (x % 2 != 0){ //counter clockwise
            lcd_printf("Current angle: %d\n Counter Clockwise", get_angle);
            if (y == 1){
                if ((get_angle +1) >= 180){
                        servo_move(180);
                    }
            else{
                servo_move(get_angle +1);
            }
            }
            if (y == 2){
                if ((get_angle +5) >= 180){
                    servo_move(180);
                }
                else {
                    servo_move(get_angle +5);
                }
            }
            if (y == 4){
                servo_move(5);
            }
        }
        if (x % 2 == 0){ //clockwise
            lcd_printf("Current angle: %d\n Clockwise", get_angle);
            if (y==1){
                if ((get_angle -1) <= 0){
                            servo_move(0);
                        }
                else{
                    servo_move(get_angle - 1);
                }
            }
            if (y == 2){
                if ((get_angle -5) <= 0){
                            servo_move(0);
                        }
                else{
                    servo_move(get_angle - 5);
                }
            }
            if (y == 4){
                servo_move(175);
            }
        }
    }



}

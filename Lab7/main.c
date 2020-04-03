

/**
 * main.c
 */
#include <inc/tm4c123gh6pm.h>
#include <timer.h>
#include <ping.h>
#include <lcd.h>

int main(void)
{
    timer_init(); //setup the timer
    lcd_init(); //setup the lcd screen
    ping_init(); //setup the ping sensor timer

    //Part 1
    /*while(1){
    ping_trigger(); //should trigger the green LED on the sonar sensor
    timer_waitMillis(500);
    }*/


    // Part 2
    /*while(1){
        long clock_cycles;
        ping_trigger();
        //enableTimer();
        while (update_flag == 0){};
        while (update_flag == 1){};
        if (update_flag == 2){ //second flag received means data is ready
        clock_cycles = ping_getClockCycles();
        lcd_printf("Clock Cycles %lu", time_diff);
        }
        timer_waitMillis(200);
    }*/



    //Part 3
    while (1){
        long clock_cycles;
        float distance;
        ping_trigger();
        while(update_flag ==0){}; //wait for rising edge
        while(update_flag ==1){}; //wait for falling edge
        if(update_flag == 2){ //falling edge has occured
            clock_cycles = ping_getClockCycles(); //get number of clock cycles
            distance = ping_getDistance(); //get distance in centimeters
            lcd_printf("Distance: %lf \n", distance);
        }
        //lcd_printf("Clock Cycles: %lu \n", clock_cycles);

        //lcd_printf("Time: %lf", time_diff);
        //lcd_printf("Overflow: %d"); //figure this part out
        timer_waitMillis(200);
    }


}

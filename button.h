

#ifndef BUTTON_H_
#define BUTTON_H_

#include <stdint.h>
#include <inc/tm4c123gh6pm.h>
#include "lcd.h"
#include "string.h"

void button_init();
uint8_t button_getButton();



#endif /* BUTTON_H_ */

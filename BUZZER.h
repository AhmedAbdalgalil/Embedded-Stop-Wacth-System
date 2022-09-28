#ifndef BUZZER_H_
#define BUZZER_H_
#define BuzzerPort port_c
#define BuzzerPin PIN6
#include "MCAL/GPIO.h"
void Buzzer_init();
void Buzzer_Open();
void Buzzer_Close();
uint8 Buzzer_read();
void Buzzer_Toggle();

#endif

#ifndef LED_H_
#define LED_H_
#include "Helpers/STD_Types.h"
#include "Helpers/Utils.h"
#include "MCAL_REGISTERS/Mem_Map32.h"
#include "MCAL/GPIO.h"
typedef enum
{
	BLU_LED,
	GRE_LED,
	YEL_LED,
	RED_LED,

}LED_name_t;

#define BlueLedPort port_a
#define RedLedPort port_b
#define GreenLedPort port_a
#define YellowLedPort port_a
#define BlueLedPin PIN5
#define RedLedPin PIN7
#define GreenLedPin PIN4
#define YellowLedPin PIN6

void LED_init(LED_name_t led);
void LED_Open(LED_name_t led);
void LED_Close(LED_name_t led);
uint8 LED_read(LED_name_t led);
void LED_Toggle(LED_name_t led);

#endif

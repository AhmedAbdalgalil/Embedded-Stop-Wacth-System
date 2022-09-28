#ifndef GPIO_H__
#define GPIO_H__
#include "../Helpers/STD_Types.h"
#include "../Helpers/Utils.h"
#include"../MCAL_REGISTERS/Mem_Map32.h"
void GPIO_init_pin(uint8 port,uint8 pin,uint8 stat);
void GPIO_write_pin(uint8 reg, uint8 pin, uint8 val);
uint8 GPIO_read_pin(uint8 reg, uint8 pin);
void GPIO_set_pullup(uint8 port, uint8 pin);


#define port_a  0
#define port_b  1
#define port_c  2
#define port_d  3
#define output  1
#define input  0
#define High  1
#define Low  0
#define PIN0  0
#define PIN1  1
#define PIN2  2
#define PIN3  3
#define PIN4  4
#define PIN5  5
#define PIN6  6
#define PIN7  7
#endif

#include "GPIO.h"
 GPIO_init_pin(uint8 port,uint8 pin,uint8 stat){
	 if (port==port_a){
		 WRITE_BIT(DDRA,pin,stat);
	 }
	 if (port==port_b){
		 WRITE_BIT(DDRB,pin,stat);
	 }
	 if (port==port_c){
		 WRITE_BIT(DDRC,pin,stat);
	 }
	 if (port==port_d){
		 WRITE_BIT(DDRD,pin,stat);
	 }
 }
 GPIO_write_pin(uint8 port, uint8 pin, uint8 val){
	 if (port==port_a){
		 WRITE_BIT(PORTA,pin,val);
	 }
	 if (port==port_b){
		 WRITE_BIT(PORTB,pin,val);
	 }
	 if (port==port_c){
		 WRITE_BIT(PORTC,pin,val);
	 }
	 if (port==port_d){
		 WRITE_BIT(PORTD,pin,val);
	 }
 }
//GET_BIT

 uint8 GPIO_read_pin(uint8 port, uint8 pin){
	 if (port==port_a){
		 return GET_BIT(PINA,pin) ;
	 }
	 if (port==port_b){
		 return GET_BIT(PINB,pin) ;
	 }
	 if (port==port_c){
		 return GET_BIT(PINC,pin) ;
	 }
	 if (port==port_d){
		 return GET_BIT(PIND,pin) ;
	 }
	 return 100;//return 100 means ,we have an error
 }
 void GPIO_set_pullup(uint8 port, uint8 pin){
	 GPIO_write_pin( port,  pin,  High);
 }

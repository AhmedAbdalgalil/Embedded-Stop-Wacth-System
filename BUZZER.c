#ifndef BUZZER_C_
#define BUZZER_C_
#include "BUZZER.h"
void Buzzer_init(){
		GPIO_init_pin( BuzzerPort, BuzzerPin, output);

}
void Buzzer_Open(){
		GPIO_write_pin( BuzzerPort, BuzzerPin, High);

	}


void Buzzer_Close( ){
		GPIO_write_pin( BuzzerPort, BuzzerPin, Low);
	}


uint8 Buzzer_read(){
		return GPIO_read_pin( BuzzerPort, BuzzerPin);
}
void Buzzer_Toggle(){
	uint8 stat=0;
		stat=  GPIO_read_pin( BuzzerPort, BuzzerPin);

		if(stat==1){
		GPIO_write_pin( BuzzerPort, BuzzerPin, Low);
		}
		else
		{
			GPIO_write_pin( BuzzerPort, BuzzerPin, High);
		}
	}



#endif

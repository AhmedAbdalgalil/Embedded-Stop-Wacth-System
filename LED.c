#include "LED.h"
void LED_init(LED_name_t led){
	switch (led){
	case BLU_LED:
		GPIO_init_pin( BlueLedPort, BlueLedPin, output);
		break;
	case GRE_LED:
		GPIO_init_pin( GreenLedPort, GreenLedPin, output);
		break;
	case YEL_LED:
		GPIO_init_pin( YellowLedPort, YellowLedPin, output);
		break;
	case RED_LED:
		GPIO_init_pin( RedLedPort, RedLedPin, output);
		break;
	}
}
void LED_Open(LED_name_t led){
	switch (led){
	case BLU_LED:
		GPIO_write_pin( BlueLedPort, BlueLedPin, High);
		break;
	case GRE_LED:
		GPIO_write_pin( GreenLedPort, GreenLedPin, High);
		break;
	case YEL_LED:
		GPIO_write_pin( YellowLedPort, YellowLedPin, High);
		break;
	case RED_LED:
		GPIO_write_pin( RedLedPort, RedLedPin, High);
		break;
	}

}
void LED_Close(LED_name_t led){
	switch (led){
	case BLU_LED:
		GPIO_write_pin( BlueLedPort, BlueLedPin, Low);
		break;
	case GRE_LED:
		GPIO_write_pin( GreenLedPort, GreenLedPin, Low);
		break;
	case YEL_LED:
		GPIO_write_pin( YellowLedPort, YellowLedPin, Low);
		break;
	case RED_LED:
		GPIO_write_pin( RedLedPort, RedLedPin, Low);
		break;
	}

}
uint8 LED_read(LED_name_t led){
	switch (led){
	case BLU_LED:
		return GPIO_read_pin( BlueLedPort, BlueLedPin);
		break;
	case GRE_LED:
		return GPIO_read_pin( GreenLedPort, GreenLedPin);
		break;
	case YEL_LED:
		return GPIO_read_pin( YellowLedPort, YellowLedPin);
		break;
	case RED_LED:
		return GPIO_read_pin( RedLedPort, RedLedPin);
		break;
	}
	return 100;
}
void LED_Toggle(LED_name_t led){
	uint8 stat=0;
	switch (led){
	case BLU_LED:
		stat= GPIO_read_pin( BlueLedPort, BlueLedPin);
		break;
	case GRE_LED:
		stat=  GPIO_read_pin( GreenLedPort, GreenLedPin);
		break;
	case YEL_LED:
		stat=  GPIO_read_pin( YellowLedPort, YellowLedPin);
		break;
	case RED_LED:
		stat=  GPIO_read_pin( RedLedPort, RedLedPin);
		break;
	}

	switch (led){
	case BLU_LED:
		if(stat==1){
		GPIO_write_pin( BlueLedPort, BlueLedPin, Low);
		break;
		}
		else
		{
			GPIO_write_pin( BlueLedPort, BlueLedPin, High);
			break;
		}
	case GRE_LED:
		if(stat==1){
		GPIO_write_pin( GreenLedPort, GreenLedPin, Low);
		break;
		}
		else
		{
			GPIO_write_pin( GreenLedPort, GreenLedPin, High);
			break;
		}

		break;
	case YEL_LED:
		if(stat==1){
		GPIO_write_pin( YellowLedPort, YellowLedPin, Low);
		break;
		}
		else
		{
			GPIO_write_pin( YellowLedPort, YellowLedPin, High);
			break;
		}

		break;
	case RED_LED:
		if(stat==1){
		GPIO_write_pin( RedLedPort, RedLedPin, Low);
		break;
		}
		else
		{
			GPIO_write_pin( RedLedPort, RedLedPin, High);
			break;
		}


		break;
	}

}



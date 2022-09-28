#include "EXT_INT.h"

void NTI0_init(Interrupt_Sense SENSE){
switch (SENSE){
case low_level:
	WRITE_BIT(MCUCR , 0 , Low);
	WRITE_BIT(MCUCR , 1 , Low);
	break;
case Any_logical_change:
	WRITE_BIT(MCUCR , 0 , High);
	WRITE_BIT(MCUCR , 1 , Low);
	break;

case falling_edge:
	WRITE_BIT(MCUCR , 0 , Low);
	WRITE_BIT(MCUCR , 1 , High);
	break;

case rising_edge:
	WRITE_BIT(MCUCR , 0 , High);
	WRITE_BIT(MCUCR , 1 , High);
	break;

}
}

void NTI1_init(Interrupt_Sense SENSE){
switch (SENSE){
case low_level:
	WRITE_BIT(MCUCR , 2 , Low);
	WRITE_BIT(MCUCR , 3 , Low);
	break;
case Any_logical_change:
	WRITE_BIT(MCUCR , 2 , High);
	WRITE_BIT(MCUCR , 3 , Low);
	break;

case falling_edge:
	WRITE_BIT(MCUCR , 2 , Low);
	WRITE_BIT(MCUCR , 3 , High);
	break;

case rising_edge:
	WRITE_BIT(MCUCR , 2 , High);
	WRITE_BIT(MCUCR , 3 , High);
	break;

}
}


void NTI2_init(Interrupt_Sense SENSE){
switch (SENSE){
case low_level:
//#warning "haha"
	break;
case Any_logical_change:
//#warning "haha"
	break;

case falling_edge:
	WRITE_BIT(MCUCSR , 6 , Low);
	break;

case rising_edge:

	WRITE_BIT(MCUCSR , 6 , High);
	break;

}
}

void NTI0_Enable(){
	SET_BIT(GICR,6);
}
void NTI1_Enable(){
	SET_BIT(GICR,7);
}
void NTI2_Enable(){
	SET_BIT(GICR,5);
}
void NTI0_Disable(){
	CLEAR_BIT(GICR,6);
}
void NTI1_Disable(){
	CLEAR_BIT(GICR,7);
}
void NTI2_Disable(){
	CLEAR_BIT(GICR,5);
}
void global_interrupt_enable(){
	sei();//global interrupt enable
}
void global_interrupt_Disable(){
	cli();
}
//

static void(*EX_INT0Ptr)(void)=0;
static void(*EX_INT1Ptr)(void)=0;
static void(*EX_INT2Ptr)(void)=0;
void Set_call_back_NTI0(void(*Func)(void)){
	EX_INT0Ptr=Func;
}
void Set_call_back_NTI1(void(*Func)(void)){
	EX_INT1Ptr=Func;
}
void Set_call_back_NTI2(void(*Func)(void)){
	EX_INT2Ptr=Func;
}

ISR(INT0_vect){
	EX_INT0Ptr();
}
//-------------------------------------
ISR(INT1_vect){
	EX_INT1Ptr();
}
//-----------------------------------
ISR(INT2_vect){
	EX_INT2Ptr();
}


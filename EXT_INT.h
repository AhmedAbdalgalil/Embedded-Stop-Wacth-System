#ifndef EXT_INT_H_
#define EXT_INT_H_
#include "MCAL_REGISTERS/Mem_Map32.h"
#include "Helpers/STD_Types.h"
#include "Helpers/Utils.h"
#include "MCAL/GPIO.h"
typedef enum  {
	low_level,
	 Any_logical_change,
	 falling_edge,
	 rising_edge

}Interrupt_Sense;
void NTI0_init(Interrupt_Sense);
void NTI1_init(Interrupt_Sense);
void NTI2_init(Interrupt_Sense);
void NTI0_Enable();
void NTI1_Enable();
void NTI2_Enable();
void NTI0_Disable();
void NTI1_Disable();
void NTI2_Disable();
void global_interrupt_enable();
void global_interrupt_Disable();
void Set_call_back_NTI0(void(*Func)(void));
void Set_call_back_NTI1(void(*Func)(void));
void Set_call_back_NTI2(void(*Func)(void));
#endif

#include <string.h>
#include <util/delay.h>
#include "MCAL_REGISTERS/Mem_Map32.h"
#include "Led.h"
#include "EXT_INT.h"
#include "Timer.h"
#include "segment.h"
#include "Servent.h"
#include "BUZZER.h"
volatile uint16 runner=1;
void OV_func();
volatile uint8 counter_flage=0;
void NTI1();
int main()
{
Buzzer_init();
uint8 semgmentminutes[2]={0,0};
uint8 semgmentsec[2]={0,0};
Set_call_back_NTI1(NTI1);
TIMER0_Init( TIMER0_NORMAL_MODE,TIMER0_SCALER_8 ,OCO_DISCONNECTED);
NTI1_init(falling_edge);
TIMER0_OV_InterruptEnable();
NTI1_Enable();
TIMER0_OVF_SetCallBack(OV_func);
LED_init(RED_LED);
LED_init(BLU_LED);
SegmentInit();
global_interrupt_enable();
uint8 minutes=0;
uint8 sec=0;
while(1){
	if(counter_flage==1){
	if(runner>3905){
	LED_Toggle(RED_LED);
	runner=0;
	sec++;
	if(sec==60){
		minutes++;
		sec=0;
		semgmentsec[1]=0;
		semgmentsec[0]=0;
	}
	if(minutes==60){
		minutes=0;
		sec=0;
		semgmentminutes[1]=0;
		semgmentminutes[0]=0;
		semgmentsec[1]=0;
		semgmentsec[0]=0;
	}
}

	}
	int2list(semgmentminutes,minutes);
	int2list(semgmentsec,sec);
	SegmentOff(SevenSegment_B);
	SegmentOff(SevenSegment_C);
	SegmentOff(SevenSegment_D);
	SegmentDisplayNumber(semgmentsec[0], SevenSegment_A);
	_delay_ms(1);
	SegmentOff(SevenSegment_A);
	SegmentOff(SevenSegment_C);
	SegmentOff(SevenSegment_D);
	SegmentDisplayNumber(semgmentsec[1], SevenSegment_B);
	_delay_ms(1);
	SegmentOff(SevenSegment_B);
	SegmentOff(SevenSegment_A);
	SegmentOff(SevenSegment_D);
	SegmentDisplayNumber(semgmentminutes[0], SevenSegment_C);
	_delay_ms(1);
	SegmentOff(SevenSegment_A);
	SegmentOff(SevenSegment_C);
	SegmentOff(SevenSegment_A);
	SegmentDisplayNumber(semgmentminutes[1], SevenSegment_D);
	_delay_ms(1);


}


}

void OV_func(){
	if(counter_flage==1)
		runner++;

}


void NTI1(){

	if (counter_flage==0){
		counter_flage=1;
	}
	else
		counter_flage=0;
	Buzzer_Open();
	_delay_ms(50);
	Buzzer_Close();
}

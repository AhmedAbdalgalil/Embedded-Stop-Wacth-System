#ifndef SevenSEG_H_
#define SevenSEG_H_

#include "MCAL/GPIO.h"
#define Enable 1
#define Disable 0
typedef enum
{   SevenSegment_A ,
	SevenSegment_B ,
	SevenSegment_C  ,
	SevenSegment_D
}SevenSegmentSelected;



typedef struct Segment_A{

	    uint8 Segment_port_name ;
		uint8 Segment_pins[4];
		uint8 Segment_EN_port_name ;
		uint8 Enable_pin;


}Segment_t;



void SegmentInit();
void SegmentDisplayNumber(uint8 NumberToDisplay, SevenSegmentSelected Segment_selcted);
void SegmentOff(SevenSegmentSelected Segment_selcted);

#endif

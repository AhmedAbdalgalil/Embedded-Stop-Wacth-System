#include "Servent.h"

 uint8 int_digits(uint16 number){
	uint16 counter=0;
	while (number>0) {
		counter++;
		number=number/10;

	}

	return counter;
}

//the mathematical power
 uint32 powerint(uint32 num,uint8 power){
	uint32 result=1;
	for(uint8 i=0;i<power;i++){
		result=result*num;
	}
	return result;
}


 void int2list(uint8* result,uint16 number){
	uint8 degits;uint16 number_x=number;

	degits=int_digits(number);

	for(uint8 j=0;j<degits;j++){

	for(uint8 i=1;i<degits-j;i++){
		number=number/10;
	}

	*(result+degits-j-1)=number;
	number=number_x-number*powerint(10,degits-j-1);
	number_x=number;
	}
}

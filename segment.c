#include "segment.h"



Segment_t Segment_A = {port_b,//data port
		                      {PIN0,PIN1,PIN2,PIN4},//data pins
							  	  	  	  	  	  port_a,//Enable port
							  	  	  	  	  	  	  	  PIN3   //Enable pin

																		            	};

Segment_t Segment_B ={port_b,
								{PIN0,PIN1,PIN2,PIN4},
									  	  	  	  	  	  port_a
														  	  	  	  ,PIN2
								                                						};

Segment_t Segment_C= {port_b,
							{PIN0,PIN1,PIN2,PIN4},
															port_b
																		,PIN5
					                                  									};
Segment_t Segment_D = {port_b,
									{PIN0,PIN1,PIN2,PIN4},
															port_b
																		,PIN6                 };

void SegmentInit(){
	//Segment_A
	GPIO_init_pin(Segment_A.Segment_port_name,	 Segment_A.Segment_pins[0] ,	 output);
	GPIO_init_pin(Segment_A.Segment_port_name, 	 Segment_A.Segment_pins[1] ,	 output);
	GPIO_init_pin(Segment_A.Segment_port_name, 	 Segment_A.Segment_pins[2] ,	 output);
	GPIO_init_pin(Segment_A.Segment_port_name, 	 Segment_A.Segment_pins[3] ,	 output);
	GPIO_init_pin(Segment_A.Segment_EN_port_name, 	 Segment_A.Enable_pin ,	   		 output);
	//Segment_B
	GPIO_init_pin(Segment_B.Segment_port_name,	 Segment_B.Segment_pins[0] ,	 output);
	GPIO_init_pin(Segment_B.Segment_port_name, 	 Segment_B.Segment_pins[1] ,	 output);
	GPIO_init_pin(Segment_B.Segment_port_name, 	 Segment_B.Segment_pins[2] ,	 output);
	GPIO_init_pin(Segment_B.Segment_port_name, 	 Segment_B.Segment_pins[3] ,	 output);
	GPIO_init_pin(Segment_B.Segment_EN_port_name, 	 Segment_B.Enable_pin ,	   		 output);
	//Segment_C
	GPIO_init_pin(Segment_C.Segment_port_name,	 Segment_C.Segment_pins[0] ,	 output);
	GPIO_init_pin(Segment_C.Segment_port_name, 	 Segment_C.Segment_pins[1] ,	 output);
	GPIO_init_pin(Segment_C.Segment_port_name, 	 Segment_C.Segment_pins[2] ,	 output);
	GPIO_init_pin(Segment_C.Segment_port_name, 	 Segment_C.Segment_pins[3] ,	 output);
	GPIO_init_pin(Segment_C.Segment_EN_port_name, 	 Segment_C.Enable_pin ,	   		 output);
	//Segment_D
	GPIO_init_pin(Segment_D.Segment_port_name,	 Segment_D.Segment_pins[0] ,	 output);
	GPIO_init_pin(Segment_D.Segment_port_name, 	 Segment_D.Segment_pins[1] ,	 output);
	GPIO_init_pin(Segment_D.Segment_port_name, 	 Segment_D.Segment_pins[2] ,	 output);
	GPIO_init_pin(Segment_D.Segment_port_name, 	 Segment_D.Segment_pins[3] ,	 output);
	GPIO_init_pin(Segment_D.Segment_EN_port_name, 	 Segment_D.Enable_pin ,	   		 output);


//disable all segments
	GPIO_write_pin(Segment_A.Segment_EN_port_name, 	 Segment_A.Enable_pin ,	High);
	GPIO_write_pin(Segment_B.Segment_EN_port_name, 	 Segment_B.Enable_pin ,	High);
	GPIO_write_pin(Segment_C.Segment_EN_port_name, 	 Segment_C.Enable_pin ,	High);
	GPIO_write_pin(Segment_D.Segment_EN_port_name, 	 Segment_D.Enable_pin , High);

}
void SegmentDisplayNumber(uint8 NumberToDisplay, SevenSegmentSelected Segment_selcted){


switch(Segment_selcted){
				case SevenSegment_A:

					GPIO_write_pin(Segment_A.Segment_port_name,	 Segment_A.Segment_pins[0] ,	 GET_BIT(NumberToDisplay,0));
					GPIO_write_pin(Segment_A.Segment_port_name,  Segment_A.Segment_pins[1] ,	 GET_BIT(NumberToDisplay,1));
					GPIO_write_pin(Segment_A.Segment_port_name,  Segment_A.Segment_pins[2] ,	 GET_BIT(NumberToDisplay,2));
					GPIO_write_pin(Segment_A.Segment_port_name,  Segment_A.Segment_pins[3] ,	 GET_BIT(NumberToDisplay,3));
					GPIO_write_pin(Segment_A.Segment_EN_port_name,  Segment_A.Enable_pin 		,	 Low);



					                break;
				case SevenSegment_B:

					GPIO_write_pin(Segment_B.Segment_port_name,	 Segment_B.Segment_pins[0] ,	 GET_BIT(NumberToDisplay,0));
					GPIO_write_pin(Segment_B.Segment_port_name,  Segment_B.Segment_pins[1] ,	 GET_BIT(NumberToDisplay,1));
					GPIO_write_pin(Segment_B.Segment_port_name,  Segment_B.Segment_pins[2] ,	 GET_BIT(NumberToDisplay,2));
					GPIO_write_pin(Segment_B.Segment_port_name,  Segment_B.Segment_pins[3] ,	 GET_BIT(NumberToDisplay,3));
					GPIO_write_pin(Segment_B.Segment_EN_port_name,  Segment_B.Enable_pin 		,	 Low);




									break;
				case SevenSegment_C:

					GPIO_write_pin(Segment_C.Segment_port_name,	 Segment_C.Segment_pins[0] ,	 GET_BIT(NumberToDisplay,0));
					GPIO_write_pin(Segment_C.Segment_port_name,  Segment_C.Segment_pins[1] ,	 GET_BIT(NumberToDisplay,1));
					GPIO_write_pin(Segment_C.Segment_port_name,  Segment_C.Segment_pins[2] ,	 GET_BIT(NumberToDisplay,2));
					GPIO_write_pin(Segment_C.Segment_port_name,  Segment_C.Segment_pins[3] ,	 GET_BIT(NumberToDisplay,3));
					GPIO_write_pin(Segment_C.Segment_EN_port_name,  Segment_C.Enable_pin 		,	 Low);







									break;
				case SevenSegment_D:

					GPIO_write_pin(Segment_D.Segment_port_name,	 Segment_D.Segment_pins[0] ,	 GET_BIT(NumberToDisplay,0));
					GPIO_write_pin(Segment_D.Segment_port_name,  Segment_D.Segment_pins[1] ,	 GET_BIT(NumberToDisplay,1));
					GPIO_write_pin(Segment_D.Segment_port_name,  Segment_D.Segment_pins[2] ,	 GET_BIT(NumberToDisplay,2));
					GPIO_write_pin(Segment_D.Segment_port_name,  Segment_D.Segment_pins[3] ,	 GET_BIT(NumberToDisplay,3));
					GPIO_write_pin(Segment_D.Segment_EN_port_name,  Segment_D.Enable_pin 		,	 Low);




									break;
}


}


void SegmentOff(SevenSegmentSelected Segment_selcted){

	switch(Segment_selcted){
					case SevenSegment_A:
/*
						GPIO_write_pin(Segment_A.Segment_port_name,	 Segment_A.Segment_pins[0] ,	Low);
						GPIO_write_pin(Segment_A.Segment_port_name,  Segment_A.Segment_pins[1] ,	Low);
						GPIO_write_pin(Segment_A.Segment_port_name,  Segment_A.Segment_pins[2] ,	Low);
						GPIO_write_pin(Segment_A.Segment_port_name,  Segment_A.Segment_pins[3] ,	Low);*/
						GPIO_write_pin(Segment_A.Segment_EN_port_name,  Segment_A.Enable_pin 		,	High);



						                break;
					case SevenSegment_B:
/*
						GPIO_write_pin(Segment_B.Segment_port_name,	 Segment_B.Segment_pins[0] ,	Low);
						GPIO_write_pin(Segment_B.Segment_port_name,  Segment_B.Segment_pins[1] ,	Low);
						GPIO_write_pin(Segment_B.Segment_port_name,  Segment_B.Segment_pins[2] ,	Low);
						GPIO_write_pin(Segment_B.Segment_port_name,  Segment_B.Segment_pins[3] ,	Low);*/
						GPIO_write_pin(Segment_B.Segment_EN_port_name,  Segment_B.Enable_pin 		,	High);



										break;
					case SevenSegment_C:

						/*GPIO_write_pin(Segment_C.Segment_port_name,	 Segment_C.Segment_pins[0] ,	 Low);
						GPIO_write_pin(Segment_C.Segment_port_name,  Segment_C.Segment_pins[1] ,	 Low);
						GPIO_write_pin(Segment_C.Segment_port_name,  Segment_C.Segment_pins[2] ,	 Low);
						GPIO_write_pin(Segment_C.Segment_port_name,  Segment_C.Segment_pins[3] ,	 Low);*/
						GPIO_write_pin(Segment_C.Segment_EN_port_name,  Segment_C.Enable_pin 		,	High);



										break;
					case SevenSegment_D:

						/*GPIO_write_pin(Segment_D.Segment_port_name,	 Segment_D.Segment_pins[0] ,	 Low);
						GPIO_write_pin(Segment_D.Segment_port_name,  Segment_D.Segment_pins[1] ,	 Low);
						GPIO_write_pin(Segment_D.Segment_port_name,  Segment_D.Segment_pins[2] ,	 Low);
						GPIO_write_pin(Segment_D.Segment_port_name,  Segment_D.Segment_pins[3] ,	 Low);*/
						GPIO_write_pin(Segment_D.Segment_EN_port_name,  Segment_D.Enable_pin 		,	High);



										break;
	}


}


//#include <stm32f10x_lib.h>
#include "sys.h"
#include "usart.h"		
#include "delay.h"	
#include "led.h" 
#include"action.h"
	 	 
//Mini STM32¿ª·¢°å·¶Àı´úÂë3
//´®¿ÚÊµÑé
//ÕıµãÔ­×Ó@ALIENTEK
//¼¼ÊõÂÛÌ³:www.openedv.com	
//9ºÅ¶à¼¶¿ÉÒÔÔÚstand on head£¬splitÖĞµÆ½Å¡
int main(void)
{			
//	u8 flag;

//	u16 times=0;  
	Stm32_Clock_Init(9); //ÏµÍ³Ê±ÖÓÉèÖÃ
	delay_init(72);	     //ÑÓÊ±³õÊ¼»¯ 
	uart_init(500000);	 //´®¿Ú³õÊ¼»¯Îª9600
	LED_Init();
	SetServoLimit(10,0,1023);		  	 //³õÊ¼»¯ÓëLEDÁ¬½ÓµÄÓ²¼ş½Ó¿Ú    
	SetServoLimit(12,0,1023);
//	while(key0==1) ;
	while(1)
	{
				 delay_ms(1000); 
				 stand();
				 delay_ms(500);
//  
//		bow();
//		wave();
//		
//			before_toss();						//	
//			behind_toss();						//Ç°ºó¹ö·­		

//		left_push_up();						//
//	  right_push_up();					//		 
//		push_up();								//Ë«ÊÖ¸©ÎÔ³Å
//		
//		left_turn();							//²àÉí·­
//		right_turn();	
//		
//		stand_on_head();					//µ¹Á¢²¢ÍÈ
//		split();									//µ¹Á¢Åü²æ	
		zibian();									//×Ô±à¶¯×÷
		//bow();
		
		//my_zibian();
		while(1)
			;
	
	}	 
}

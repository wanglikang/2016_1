//#include <stm32f10x_lib.h>
#include "sys.h"
#include "usart.h"		
#include "delay.h"	
#include "led.h" 
#include"action.h"
	 	 
//Mini STM32开发板范例代码3
//串口实验
//正点原子@ALIENTEK
//技术论坛:www.openedv.com	
//9号多级可以在stand on head，split中灯脚�
int main(void)
{			
//	u8 flag;

//	u16 times=0;  
	Stm32_Clock_Init(9); //系统时钟设置
	delay_init(72);	     //延时初始化 
	uart_init(500000);	 //串口初始化为9600
	LED_Init();
	SetServoLimit(10,0,1023);		  	 //初始化与LED连接的硬件接口    
	SetServoLimit(12,0,1023);
//	while(key0==1) ;
	while(1)
	{
			delay_ms(1000); 
			stand();			
			delay_ms(500);

//		bow();
//		wave();
//		
//	before_toss();						//						//回腰不稳，下去，稳，落下，特别稳
	behind_toss();						//前后滚翻		//下去,上来，特别稳，，，，起来，砸地

//		left_push_up();						//
//		right_push_up();					//		 
//		push_up();								//双手俯卧撑
//		
//		left_turn();							//侧身翻
//		right_turn();	
//	
//		stand_on_head();					//倒立并腿
//		split();									//倒立劈叉	
//		zibian();									//自编动作
//		bow();
//		
		
		
//		my_zibian_3();
		while(1)
			;
	
	}	 
}

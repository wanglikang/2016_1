//#include <stm32f10x_lib.h>
#include "sys.h"
#include "usart.h"		
#include "delay.h"	
#include "led.h" 
#include"action.h"
	 	 
//Mini STM32�����巶������3
//����ʵ��
//����ԭ��@ALIENTEK
//������̳:www.openedv.com	
//9�Ŷ༶������stand on head��split�еƽš
int main(void)
{			
//	u8 flag;

//	u16 times=0;  
	Stm32_Clock_Init(9); //ϵͳʱ������
	delay_init(72);	     //��ʱ��ʼ�� 
	uart_init(500000);	 //���ڳ�ʼ��Ϊ9600
	LED_Init();
	SetServoLimit(10,0,1023);		  	 //��ʼ����LED���ӵ�Ӳ���ӿ�    
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
//	before_toss();						//						//�������ȣ���ȥ���ȣ����£��ر���
	behind_toss();						//ǰ�����		//��ȥ,�������ر��ȣ��������������ҵ�

//		left_push_up();						//
//		right_push_up();					//		 
//		push_up();								//˫�ָ��Գ�
//		
//		left_turn();							//����
//		right_turn();	
//	
//		stand_on_head();					//��������
//		split();									//��������	
//		zibian();									//�Աද��
//		bow();
//		
		
		
//		my_zibian_3();
		while(1)
			;
	
	}	 
}

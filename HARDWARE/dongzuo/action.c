#include "action.h"
#include "delay.h"
#include "usart.h"

void stand()
{
	Action_write(1,455,300);
	Action_write(2,223,300);		 
	Action_write(3,705,300);
	Action_write(4,561,300);		  
	Action_write(5,485,300);
	Action_write(6,485,300);
	Action_write(7,497,300);
	Action_write(8,856,300);
	Action_write(9,466,300);			
	Action_write(10,500,300);
	Action();
}
void bow()
{
	SetServoPosition(6,277,300);
	delay_ms(500);
	SetServoPosition(6,496,300);	
	delay_ms(500);
}
void wave()
{
	Action_write(1,506,300);
	Action_write(2,637,500);
	Action();
	delay_ms(700);
	

	Action_write(1,743,500);
	Action_write(2,695,200);
	Action();
	delay_ms(500);


	Action_write(1,506,500);
	Action_write(2,637,200);
	Action();
	delay_ms(500);
	

	Action_write(1,743,500);
	Action_write(2,637,200);
	Action();
	delay_ms(500); 
	
	Action_write(1,455,300);
	Action_write(2,223,500);
	Action();

  delay_ms(1000);
	delay_ms(1000);
	delay_ms(300);
}
void before_toss()
{
////////////////////////起来	
{
	
	Action_write(1,490,400);							   //先支撑着
	Action_write(2,247,450);
	Action_write(3,650,300);
	Action_write(4,552,350);
	Action_write(5,851,600);		
	Action_write(6,240,500);
	Action();						
	delay_ms(800);

	
	Action_write(2,400,300);
	Action_write(3,488,300);		  				 	 //肩膀着地
	Action_write(6,253,300);	
	Action();						
	delay_ms(500);
	
	Action_write(1,659,300);									
	Action_write(2,439,300);				 
	Action_write(3,462,300);		
	Action_write(4,387,300);	
	Action_write(5,320,300);		
	Action_write(6,170,300);												
	Action();						
	delay_ms(800);
	delay_ms(1000);
	
	

	Action_write(8,210,500);
	Action();									//踢腿
	delay_ms(1000);
	delay_ms(200);
		

	Action_write(5,486,200);
	Action_write(9,327,300);	
	Action();										//回腰
	delay_ms(1000);
///////////////////////////////////////////
}


{
/////////////////////////////////////////////////////////////
//													//变成倒立的形状！
//	Action_write(8,542,300);
//  Action_write(9,466,400);	
//	Action_write(10,490,330);
//	Action();									
//	delay_ms(800);	
//  Action_write(8,856,300);
//	Action_write(6,485,300);
//	Action_write(10,477,250);
//	Action();									
//	delay_ms(1000);	
//	delay_ms(200);
//	
///////////////////////////////////hehind_toss()的倒立时脚步动作
	Action_write(7,485,350);
	Action_write(8,532,300);			
	Action_write(9,466,300);
	Action_write(10,820,300);
	Action();						
	delay_ms(1000);


	//////////
	Action_write(6,485,300);
	Action();
	delay_ms(1000);
	//////////////
	Action_write(7,497,300);
	Action_write(8,856,300);					
	Action_write(10,500,300);
	Action();
	delay_ms(1000);
	delay_ms(600);
////////////////////////////////////hehind_toss()的倒立时脚步动作
}






///////////////////////////////腰下去，站起来恢复立正	  
{	
	Action_write(6,798,200);		//双腿由倒立状态变为并直平行地面
	Action();									
	delay_ms(800);	

	
	Action_write(1,659,300);									
	Action_write(2,439,300);				 
	Action_write(3,462,300);						//双腿着地，下脖子
	Action_write(4,387,300);	
	Action_write(5,652,75);	
	Action();									
	delay_ms(1000);	
	delay_ms(500);	



	Action_write(1,558,300);
	Action_write(2,412,200);
	Action_write(3,492,200);											//手翻一下
	Action_write(4,485,300);						
	Action_write(5,123,300);		
	Action();									
	delay_ms(1000);	
	delay_ms(500);	
/*
  Action_write(1,560,300);
	Action_write(2,119,300);/////////////////////////双腿竖直站立，，，准备起来
	Action_write(3,780,300);
	Action_write(4,462,300);		   
	Action_write(5,195,300);		
	Action_write(6,771,300);	
	Action();
	delay_ms(1000);
	
	*/
	Action_write(1,543,300);
	Action_write(2,168,300);											//双腿竖直站立，，，准备起来
	Action_write(3,712,300);
	Action_write(4,526,300);		   
	Action_write(5,170,300);		
	Action_write(6,787,300);	
	Action();
	delay_ms(1000);
	
///

		Action_write(1,455,300);
		Action_write(2,223,300);		 
		Action_write(3,705,300);
		Action_write(4,561,300);		  
		Action_write(5,485,300);
		Action_write(6,485,200);
		Action();
	

///
	
	
	/*
	////////////////////////////////////
	Action_write(1,455,300);
	Action_write(2,223,300);		 
	Action_write(3,705,300);
	Action_write(4,561,300);		  
	Action_write(5,400,250);
	Action();
	delay_ms(1000);
	

	Action_write(5,485,250);
	Action_write(6,485,200);
	Action_write(7,497,350);
	Action();
	
	*/
	////////////////////////////////
}
	delay_ms(1000);
	delay_ms(1000);
	delay_ms(1000);
}


void behind_toss()
{
	
	Action_write(1,457,300);						  
	Action_write(2,224,300);
	Action_write(3,705,300);						  
	Action_write(4,558,350);
	Action_write(5,163,300);					 //先支撑着	  
	Action_write(6,722,300);	
	Action();						
	delay_ms(1000);
	delay_ms(300);
	Action_write(2,431,300);
	Action_write(3,510,300);						  
	Action_write(5,157,300);					 	  //肩膀着地
	Action_write(6,708,300);	
	Action();						
	delay_ms(1000);
/////////////////////////////
//	Action_write(1,629,300);						  
//	Action_write(2,466,300);
//	Action_write(3,480,300);						  
//	Action_write(4,382,350);
//	Action_write(5,678,300);					  //头朝下
//	Action_write(6,791,300);	
//////////////////////////////	
	
	
	/////////////////////////
	Action_write(1,659,300);									
	Action_write(2,439,300);				 
	Action_write(3,462,300);		
	Action_write(4,387,300);	
	Action_write(5,628,300);	//old_pos:678				  //头朝下
	Action_write(6,791,300);	
	//////////////////////
	Action();						
	delay_ms(1000);	 
  delay_ms(1000);
	
	/*
	Action_write(7,497,350);
	Action_write(10,900,350);						//上踢
	Action();						
	delay_ms(1000);
	delay_ms(300);

	Action_write(5,486,150);		//old_pos:505
	Action_write(7,600,350);           //回腰
	Action();						
	delay_ms(1000);
	
	*/
	
	
	Action_write(8,210,500);
	Action();						
	delay_ms(1000);
	delay_ms(300);
	
	Action_write(9,327,300);	
	Action_write(5,486,150);		//old_pos:505
	Action();						
	delay_ms(1000);
	
	
	
	Action_write(7,485,350);
	Action_write(8,532,300);			
	//Action_write(10,505,300);
	Action_write(9,466,300);					
	Action_write(10,820,300);
	Action();						
	delay_ms(1000);


	//////////
	Action_write(6,485,300);
	Action();
	delay_ms(1000);
	//////////////
	Action_write(7,497,300);
	Action_write(8,856,300);
	Action_write(9,466,300);					
	Action_write(10,500,300);
	Action();
	delay_ms(1000);
	delay_ms(600);


  Action_write(6,168,200);
	Action();
	delay_ms(1000);
	
	
//	Action_write(1,659,300);									
//	Action_write(2,439,300);				    //下腿
//	Action_write(3,462,300);		
//	Action_write(4,387,300);	
	Action_write(5,318,75);//////////old_speed:75			
	Action();
	delay_ms(1000);
	



	Action_write(1,543,300);						  
	Action_write(2,408,300);
	Action_write(3,489,300);						  
	Action_write(4,526,300);
	Action_write(5,667,300);	
	Action();						
	delay_ms(800);	 


					  
	Action_write(2,168,300);
	Action_write(3,712,300);						  
	Action_write(5,800,300);
	Action_write(6,183,300);	
	Action_write(7,495,300);
	Action();						
	delay_ms(1000);	 

	
	Action_write(1,455,300);
	Action_write(2,223,300);		 
	Action_write(3,705,300);
	Action_write(4,561,300);
		  
	Action_write(5,485,300);
	Action_write(6,485,300);
	Action_write(7,495,300);
	Action();


	delay_ms(1000);
	delay_ms(1000);
	delay_ms(1000);

							  
}

void right_push_up()		
{

	Action_write(1,490,400);							   //先支撑着
	Action_write(2,247,450);
	Action_write(3,650,300);
	Action_write(4,552,350);
	Action_write(5,851,600);		
	Action_write(6,240,500);
	Action();						
	delay_ms(1000);
	delay_ms(200);

	Action_write(1,367,300);						//tiaozheng chengdi	   
	Action_write(2,169,250);
	Action_write(3,699,250);
	Action_write(4,510,300);
	Action_write(5,717,300);		
	Action_write(6,431,300);
	Action_write(7,496,300);
	Action_write(8,856,300);
	Action_write(9,473,300);		
	Action_write(10,477,300);
	Action();
	delay_ms(1000);
	delay_ms(200);

					 
	Action_write(3,254,300);		//背手
	Action_write(4,269,500);
	Action();						
	delay_ms(1000);
  delay_ms(600);

	                     
	Action_write(1,183,400);
	Action_write(2,279,200);		//下去
	Action();	
  delay_ms(600);	
	

  Action_write(1,367,400);
	Action_write(2,169,200);		//shanglai
	Action();	
  delay_ms(600);	


  Action_write(1,183,400);
	Action_write(2,279,200);		//下去
	Action();	
  delay_ms(600);	
	

  Action_write(1,367,400);
	Action_write(2,169,200);		//shanglai
	Action();	
  delay_ms(600);	

	
  Action_write(3,699,500);				//shouhuifu			   
	Action_write(4,528,350);
	Action();
	delay_ms(1000);
	

	
	Action_write(1,497,300);							   //先支撑着
	Action_write(2,234,250);
	Action_write(3,656,300);
	Action_write(4,548,250);
	Action_write(5,830,400);		
	Action_write(6,149,400);
	Action_write(7,477,400);
	Action_write(8,833,450);
	Action_write(9,468,400);		
	Action_write(10,477,400);
	Action();	
  delay_ms(1000);	
	


	
	Action_write(1,456,300);			  //zhanli
	Action_write(2,216,300);
	Action_write(3,704,300);
	Action_write(4,561,300);		
	Action_write(5,489,350);
	Action_write(6,487,350);	
	Action();						
	delay_ms(1000);
  delay_ms(1000);	
	delay_ms(300);	 
	
}

void left_push_up()
{
	Action_write(1,490,300);							   //先支撑着
	Action_write(2,247,300);
	Action_write(3,650,300);
	Action_write(4,552,300);
	Action_write(5,851,600);		
	Action_write(6,240,500);
	Action();						
	delay_ms(1000);
	delay_ms(200);

	Action_write(1,486,270);							   
	Action_write(2,210,270);
	Action_write(3,737,350);
	Action_write(4,689,350);
	Action_write(5,719,300);		
	Action_write(6,493,300);
	Action_write(7,487,300);
	Action_write(8,849,300);
	Action_write(9,466,300);		
	Action_write(10,477,300);
	Action();
	delay_ms(1000);
	delay_ms(200);


  Action_write(1,839,250);							   
	Action_write(2,656,250);                      //beishou	                                                     
	Action();						
	delay_ms(1000);
	delay_ms(600);

  Action_write(3,642,200);
	Action_write(4,859,400);		  //俯卧撑下去
	Action();							
	delay_ms(600);

	Action_write(3,737,200);
	Action_write(4,689,400);     //上来
	Action();						
	delay_ms(600);

  Action_write(3,642,200);
	Action_write(4,859,400);		  //俯卧撑下去
	Action();							
	delay_ms(600);

	Action_write(3,737,200);
	Action_write(4,689,400);     //上来
	Action();						
	delay_ms(600);

	Action_write(1,486,300);							   
	Action_write(2,212,300);
	Action_write(3,737,350);    //shouhuifu
	Action_write(4,689,350);
	Action_write(5,719,300);		
	Action_write(6,493,300);
	Action_write(7,487,300);
	Action_write(8,849,300);
	Action_write(9,466,300);		
	Action_write(10,477,300);
	Action();
	delay_ms(1000);
	delay_ms(200);

	
  Action_write(1,455,300);	
	Action_write(2,223,270);
	Action_write(3,690,300);
  Action_write(4,561,300);	
	Action_write(5,800,300);
	Action_write(6,183,300);	
	Action();						
	delay_ms(1000);	
	delay_ms(200);	 
	

	Action_write(1,455,300);
	Action_write(2,223,300);		 
	Action_write(3,695,300);
	Action_write(4,561,300);		  
	Action_write(5,485,300);
	Action_write(6,485,300);
	Action();
	delay_ms(1000);
	delay_ms(1000);
	delay_ms(1000);


}

void push_up()
{

  Action_write(1,490,400);							   //先支撑着
	Action_write(2,247,450);
	Action_write(3,650,300);
	Action_write(4,552,350);
	Action_write(5,851,600);		
	Action_write(6,240,500);
	Action();						
	delay_ms(1000);
	delay_ms(200);
 
	
	

	Action_write(1,469,300);							   
	Action_write(2,159,300);
	Action_write(3,715,300);
	Action_write(4,583,300);
	Action_write(5,702,300);		
	Action_write(6,475,500);
	Action();
	delay_ms(1000);
	delay_ms(200);


	

	Action_write(1,236,400);	
	Action_write(2,382,400);		//下去
	Action_write(3,500,400);	
	Action_write(4,821,400);
	Action_write(5,752,500);
	Action();						
	delay_ms(700);
	
	
	Action_write(1,469,300);							   
	Action_write(2,159,300);
	Action_write(3,715,300);
	Action_write(4,583,300);
	Action_write(5,702,300);		
	Action_write(6,475,300);
	Action();
	delay_ms(700);

	Action_write(1,236,400);	
	Action_write(2,382,400);		//下去
	Action_write(3,500,400);	
	Action_write(4,821,400);
	Action_write(5,752,500);
	Action();						
	delay_ms(700);

  Action_write(1,469,300);							   
	Action_write(2,159,300);
	Action_write(3,715,300);
	Action_write(4,583,300);
	Action_write(5,702,300);		
	Action_write(6,475,300);
	Action();
	delay_ms(800);
	


// 		Action_write(1,490,200);							   
// 		Action_write(2,247,200);
// 		Action_write(3,650,200);
// 		Action_write(4,552,200);
// 		Action_write(5,851,300);		
// 		Action_write(6,240,400);
// 		Action();						
// 		delay_ms(800);
		
	
		Action_write(1,490,200);				  
		Action_write(2,168,200);
		Action_write(3,712,200);
		Action_write(4,552,200);
		Action_write(5,800,300);
		Action_write(6,183,400);	
		Action();						
		delay_ms(800);	 
		
		
		Action_write(1,455,300);
		Action_write(2,223,300);		 
		Action_write(3,705,300);
		Action_write(4,561,300);		  
		Action_write(5,485,300);
		Action_write(6,485,300);
		Action();
		delay_ms(1000);
		delay_ms(1000);
		delay_ms(1000);


}

void left_turn()										 //左侧翻终于翻过去了
{
	Action_write(1,753,300);
	Action_write(2,663,400);
	Action_write(3,438,350);
	Action_write(4,559,350);	
	Action_write(5,485,300);
	Action_write(6,487,100);							//双手 侧 不平均
	Action_write(7,603,200);
	Action_write(8,916,200);		   //倾斜
	Action_write(9,483,150);
	Action_write(10,520,200);
	Action();
	delay_ms(1000);					//双手 侧 不平均

				
	Action_write(8,586,180);		//old_speed:130
	Action_write(7,505,70);         //old_speed:50                   //倾斜
	Action();
	delay_ms(1000);
	delay_ms(800);


	Action_write(1,845,450);
	Action_write(2,681,300);
	Action_write(3,271,200);
	Action_write(4,179,400);
	Action_write(7,486,300);	//双手 包环 准备 饭
	Action_write(8,385,300);
 	Action();
	delay_ms(1000);



	Action_write(2,694,300);	
	Action_write(3,273,300);
	Action_write(4,182,300);	
	Action_write(9,425,300);
	Action_write(10,930,700);									
	Action_write(7,394,280);			   //抱头装
	Action_write(8,400,300);
	Action();
	delay_ms(1000);

  
	Action_write(1,480,280);
	Action_write(2,430,280);		 
	Action_write(3,497,300);
	Action_write(4,570,300);		  //起身
	Action_write(7,485,300);
	Action_write(8,582,200);
	Action_write(9,479,300);	
	Action_write(10,769,300);	
	Action();
	delay_ms(1400);

	Action_write(1,455,300);				//恢复立正状态
	Action_write(2,223,200);		 
	Action_write(3,705,600);	
	Action_write(4,561,300);				  
	Action_write(7,497,300);
	Action_write(8,856,400);	
	Action_write(9,479,100);			
	Action_write(10,500,120);	//old_speed:80			//腰部先慢慢的回去
	Action();
	delay_ms(500);
	
	
	//speed：300
	Action_write(10,500,350);				//腰部原速回去
	Action();
	delay_ms(800);

	delay_ms(1000);
	delay_ms(1000); 
	delay_ms(1000); 


}

void right_turn()   //右侧翻	
{

	
	Action_write(1,539,300);
	Action_write(2,415,400);
	Action_write(3,271,350);
	Action_write(4,240,350);	
	Action_write(7,478,300);
	Action_write(8,836,100);							// 双手侧不平均
	Action_write(9,391,150);
	Action_write(10,449,300);		   //  倾斜
	Action();
	delay_ms(1000);					// 双手侧不平均

	//delay_ms(50000);
	
///////////////////////////	
//	Action_write(10,740,130);
//	Action_write(9,451,80);	                                   // 倾斜
//	Action();
//	delay_ms(1000);	
//	delay_ms(800);	
//////////////////////////////

///////////////////////////	
	Action_write(10,740,130);
	//Action_write(9,451,80);	                                   // 倾斜
	Action();
	delay_ms(800);	
//////////////////////////////
	
	Action_write(9,421,80);	 
	
	delay_ms(800);	
	



	Action_write(1,792,300);
	Action_write(2,670,300);
	Action_write(3,277,300);
	Action_write(4,214,300);
	Action_write(9,509,300);	// 双手包环 准备翻
	Action_write(10,980,300);
	Action();
	delay_ms(1000);


	Action_write(7,515,300);
	Action_write(8,398,700);									
	Action_write(9,658,350);			   //  翻
	Action();
	delay_ms(1000);
	

	Action_write(2,437,300);	
	Action_write(3,503,300);
	Action_write(4,512,300);	
	Action_write(7,497,300);
	Action_write(8,558,300);									
	Action_write(9,531,300);			   //fan   2
	Action_write(10,810,350);
	Action();
	delay_ms(900);

  
	Action_write(1,455,300);
	Action_write(2,223,600);		 
	Action_write(3,705,200);
	Action_write(4,561,300);		  
	Action_write(5,485,300);
	Action_write(6,485,300);
	Action_write(7,497,280);
	Action_write(8,856,140);
	Action_write(9,466,350);			
	Action_write(10,490,800);
	
	Action();
	delay_ms(1000); 
	delay_ms(1000);
	delay_ms(1000);

  



}


void zibian_right_turn()   //右侧翻	
{

	
	Action_write(1,539,300);
	Action_write(2,415,400);
	Action_write(3,271,350);
	Action_write(4,240,350);	
	Action_write(7,478,300);
	Action_write(8,836,100);							// 双手侧不平均
	Action_write(9,391,150);
	Action_write(10,449,300);		   //  倾斜
	Action();
	delay_ms(1000);					// 双手侧不平均

				
	
	Action_write(10,740,130);
  Action_write(9,451,80);	                                   // 倾斜
	Action();
	delay_ms(1000);	
  delay_ms(800);	

   Action_write(1,792,300);
	 Action_write(2,670,300);
   Action_write(3,277,300);
	 Action_write(4,214,300);
	 Action_write(9,509,300);	// 双手包环 准备翻
	 Action_write(10,980,300);
	 Action();
   delay_ms(1000);

	Action_write(7,515,300);
	Action_write(8,398,700);									
	Action_write(9,658,350);			   //  翻
	Action();
	delay_ms(1000);
	/*

	Action_write(2,437,300);	
	Action_write(3,503,300);
	Action_write(4,512,300);	
	Action_write(7,497,300);
	Action_write(8,558,300);									
	Action_write(9,531,300);			   //fan   2
	Action_write(10,810,350);
	Action();
	delay_ms(900);

  
  Action_write(1,455,300);
	Action_write(2,223,600);		 
	Action_write(3,705,200);
	Action_write(4,561,300);		  
	Action_write(5,485,300);
	Action_write(6,485,300);
	Action_write(7,497,280);
	Action_write(8,856,140);
	Action_write(9,466,350);			
	Action_write(10,490,800);
	*/
	Action();
  delay_ms(1000); 
  delay_ms(1000);
	delay_ms(1000);

  
}





void stand_on_head()
{
	
/////////////////////////////////////////////////////from before_toss()的趴下
{	Action_write(1,490,400);							   //先支撑着
	Action_write(2,247,450);
	Action_write(3,650,300);
	Action_write(4,552,350);
	Action_write(5,851,600);		
	Action_write(6,240,500);
	Action();						
	delay_ms(800);
	Action_write(2,400,300);
	Action_write(3,488,300);		  				 	 //肩膀着地
	Action_write(6,253,300);	
	Action();						
	delay_ms(500);
	Action_write(1,659,300);									
	Action_write(2,439,300);				 
	Action_write(3,462,300);		
	Action_write(4,387,300);	
	Action_write(5,320,300);		
	Action_write(6,170,300);												
	Action();						
	delay_ms(800);
	delay_ms(1000);
	Action_write(8,210,500);
	Action();									//踢腿
	delay_ms(1000);
	delay_ms(200);
	Action_write(5,486,200);
	Action_write(9,327,300);	
	Action();										//回腰
	delay_ms(1000);
	Action_write(7,485,350);
	Action_write(8,532,300);			
	Action_write(9,466,300);
	Action_write(10,820,300);
	Action();						
	delay_ms(1000);
	//////////
	Action_write(6,485,300);
	Action();
	delay_ms(1000);
	//////////////
	Action_write(7,497,300);
	Action_write(8,856,300);
	Action_write(10,500,300);
	Action();
	delay_ms(1000);
	delay_ms(600);
}


////////////////////////////////////////////////////////////////////////
{	Action_write(1,513,350);
  Action_write(2,631,350);
	Action_write(3,291,350);						//上
  Action_write(4,520,350);		
	Action();									
	delay_ms(1000);	
  delay_ms(1000);	


	Action_write(1,773,250);
	Action_write(2,378,250);				 
	Action_write(3,510,250);							//下
	Action_write(4,290,250);	 
	Action();									
	delay_ms(1000);	
	delay_ms(200);
	
}
	
///////////////////////////////////////////////form behind_toss()的趴下后腰下去站起来恢复立正
{ Action_write(6,168,200);
	Action();
	delay_ms(1000);	
//	Action_write(1,659,300);									
//	Action_write(2,439,300);				    //下腿
//	Action_write(3,462,300);		
//	Action_write(4,387,300);	
	Action_write(5,318,75);//////////old_speed:75			
	Action();
	delay_ms(1000);
	Action_write(1,543,300);						  
	Action_write(2,408,300);
	Action_write(3,489,300);						  
	Action_write(4,526,300);
	Action_write(5,667,300);	
	Action();						
	delay_ms(800);	 
	Action_write(2,168,300);
	Action_write(3,712,300);						  
	Action_write(5,800,300);
	Action_write(6,183,300);	
	Action_write(7,495,300);
	Action();						
	delay_ms(1000);	
	Action_write(1,455,300);
	Action_write(2,223,300);		 
	Action_write(3,705,300);
	Action_write(4,561,300);		  
	Action_write(5,485,300);
	Action_write(6,485,300);
	Action_write(7,495,300);
	Action();
	delay_ms(1000);
	delay_ms(1000);
	delay_ms(1000);
}
/////////////////////////////////////////////////////////////
	
	
}


void split()
{

/////////////////////////////////////////////////////from before_toss()的趴下
	{
	Action_write(1,490,400);							   //先支撑着
	Action_write(2,247,450);
	Action_write(3,650,300);
	Action_write(4,552,350);
	Action_write(5,851,600);		
	Action_write(6,240,500);
	Action();						
	delay_ms(800);
	Action_write(2,400,300);
	Action_write(3,488,300);		  				 	 //肩膀着地
	Action_write(6,253,300);	
	Action();						
	delay_ms(500);
	Action_write(1,659,300);									
	Action_write(2,439,300);				 
	Action_write(3,462,300);		
	Action_write(4,387,300);	
	Action_write(5,320,300);		
	Action_write(6,170,300);												
	Action();						
	delay_ms(800);
	delay_ms(1000);
	Action_write(8,210,500);
	Action();									//踢腿
	delay_ms(1000);
	delay_ms(200);
	Action_write(5,486,200);
	Action_write(9,327,300);	
	Action();										//回腰
	delay_ms(1000);
	Action_write(7,485,350);
	Action_write(8,532,300);			
	Action_write(10,820,300);
	Action();						
	delay_ms(1000);
	//////////
	Action_write(6,485,300);
	Action();
	delay_ms(1000);
	//////////////
	Action_write(7,497,300);
	Action_write(8,856,300);
	Action_write(9,466,300);					
	Action_write(10,500,300);
	Action();
	delay_ms(1000);
	delay_ms(600);
////////////////////////////////////////////////////////////////////////

}



///////////////上、劈叉、下
{
	Action_write(1,513,350);
  Action_write(2,631,350);
	Action_write(3,291,350);						//上
  Action_write(4,520,350);		
	Action();									
	delay_ms(1000);	
  delay_ms(1000);	
	

// 	Action_write(7,180,350);
		Action_write(8,536,350);				 		//劈叉——叉腿
// 	Action_write(9,787,350);		
		Action_write(10,820,350);	
		Action();									
		delay_ms(1000);	
		delay_ms(500);
	
	Action_write(7,497,300);
	Action_write(8,856,300);
	Action_write(9,466,300);					//劈叉——收腿
	Action_write(10,500,300);
	Action();
	delay_ms(1000);


	Action_write(1,773,250);
	Action_write(2,378,250);				 
	Action_write(3,510,250);							//下
	Action_write(4,290,250);	 
	Action();									
	delay_ms(1000);	
	delay_ms(200);
}
	
	







///////////////////////////////////////////////form behind_toss()的趴下后腰下去站起来恢复立正
 { 
	Action_write(6,168,200);
	Action();
	delay_ms(1000);	
//	Action_write(1,659,300);									
//	Action_write(2,439,300);				    //下腿
//	Action_write(3,462,300);		
//	Action_write(4,387,300);	
	Action_write(5,318,75);//////////old_speed:75			
	Action();
	delay_ms(1000);
	Action_write(1,543,300);						  
	Action_write(2,408,300);
	Action_write(3,489,300);						  
	Action_write(4,526,300);
	Action_write(5,667,300);	
	Action();						
	delay_ms(800);	 
	Action_write(2,168,300);
	Action_write(3,712,300);						  
	Action_write(5,800,300);
	Action_write(6,183,300);	
	Action_write(7,495,300);
	Action();						
	delay_ms(1000);	
	Action_write(1,455,300);
	Action_write(2,223,300);		 
	Action_write(3,705,300);
	Action_write(4,561,300);		  
	Action_write(5,485,300);
	Action_write(6,485,300);
	Action_write(7,495,300);
	Action();
	delay_ms(1000);
	delay_ms(1000);
	delay_ms(1000);
}
/////////////////////////////////////////////////////////////

	
}
void zibian()
{
	
	/*
////////////////////////自编动作一	
{
  Action_write(1,456,300);
	Action_write(2,705,300);			
	Action_write(3,333,300);  //张开手
	Action_write(7,555,300);////////old_pos:546
	Action_write(8,901,300);			
	Action_write(9,527,300);
	Action_write(10,529,300);			
	Action(); 
	delay_ms(1000);
	
	
	
	Action_write(7,600,160);
	Action_write(8,916,160);
	delay_ms(1000);
	delay_ms(600);
	
	
	
///////////////////////
	Action_write(8,900,160);///////old_pos:916
//////////////////////
	Action_write(9,458,60);			//抬腿
	Action_write(10,1018,160);
	Action();
	delay_ms(1000);
	delay_ms(1000);
	
	
	Action_write(1,607,250);   //挥手
	Action_write(4,671,250);
	Action_write(9,458,200);
	Action();
	delay_ms(800);
	
	
	Action_write(1,395,250);
	Action_write(4,299,350);
  Action_write(9,642,200);
	Action();
	delay_ms(800);
	
	Action_write(1,607,250);   //挥手
	Action_write(4,671,250);
	Action_write(9,458,200);
	Action();
	delay_ms(800);
	
	Action_write(1,395,250);
	Action_write(4,299,350);
	 Action_write(9,642,200);
	Action();
	delay_ms(1000);
	delay_ms(400);
	
	Action_write(1,452,250);  
	Action_write(2,219,250);
	Action_write(3,709,250);
	Action_write(4,516,250); 
	Action_write(9,468,200);			//挥腿
	Action_write(10,500,200);
	Action();
	delay_ms(1000);
	delay_ms(800);
	
 	Action_write(7,498,200);			
	Action_write(8,858,200); 
	Action();
	delay_ms(1000);

	Action_write(5,485,250);   //站立
	Action_write(6,487,250);
	Action();
	delay_ms(1000);	
}

/////////////////自编动作二


{
  Action_write(1,510,300);  //2
	Action_write(2,428,300);		 
	Action_write(3,509,300);
	Action_write(4,545,300);		  
	Action_write(5,777,300);
	Action_write(6,214,200);
	Action_write(7,476,300);
	Action_write(8,782,100);
	Action_write(9,385,300);			
	Action_write(10,430,300);  //shen shou
	Action();
	delay_ms(1000);


				
	Action_write(8,240,150);		   //ti tui	
	Action_write(7,500,300);		   //
	Action();
	delay_ms(1000);	
	delay_ms(1000);	
	delay_ms(1000);

  Action_write(1,346,300);
	Action_write(2,574,300);		 
	Action_write(3,310,300);
	Action_write(4,747,300);		   //shang qing xie
	Action();
	delay_ms(700);			


		
  Action_write(1,700,300);
	Action_write(2,267,300);		 
	Action_write(3,674,300);
	Action_write(4,218,300);		   //xiaqingxie
	Action();
	delay_ms(1000);	
								 
	


  Action_write(1,346,300);
	Action_write(2,574,300);		 
	Action_write(3,310,300);
	Action_write(4,747,300);		   //shang qing xie
	Action();
	delay_ms(1000);			


		
  Action_write(1,700,300);
	Action_write(2,267,300);		 
	Action_write(3,674,300);
	Action_write(4,218,300);	   //xia qing xie
	Action();
	delay_ms(700);	
				



  Action_write(1,510,300);       //shen shou
	Action_write(2,428,300);		 
	Action_write(3,509,300);
	Action_write(4,545,300);		   
	Action();
	delay_ms(1000);					
	
	Action_write(2,702,150);
	Action_write(3,254,150);		   //3shangyao  shoushou	
	Action_write(5,830,300);	
	Action_write(6,289,200);
	Action_write(8,159,200);
	Action();
	delay_ms(1000);	
	delay_ms(200);	
	
	Action_write(1,580,300);	
	Action_write(4,384,300);
	Action();
	delay_ms(1000);	
	delay_ms(300);	
	
  Action_write(1,510,300);
	Action_write(2,428,300);		 
	Action_write(3,509,300);
	Action_write(4,545,300);		   //
	Action();
	delay_ms(1000);					//shen shou

	Action_write(7,491,300);
	Action_write(8,809,200);
	Action_write(9,388,300);			
	Action_write(10,430,300); 	   //xia tui
	Action();
	delay_ms(1000);	
	delay_ms(1000);	
	delay_ms(1000);

	
	
  Action_write(5,485,300);
  Action_write(6,485,300);
	Action_write(7,497,300);
	Action_write(8,856,300);
	Action_write(9,466,300);			//hui yao
	Action_write(10,500,300);
	Action();
	delay_ms(800);




  Action_write(1,455,300);
	Action_write(2,223,300);		 
	Action_write(3,705,300);
	Action_write(4,561,300);	
	Action();
	delay_ms(1000);
	delay_ms(1000);
}
	
	
	
	
	


//////////自编动作三
*/



{
	Action_write(1,753,300);        //3
	Action_write(2,663,400);
	Action_write(3,438,350);
	Action_write(4,559,350);	
	Action_write(5,485,300);
	Action_write(6,487,100);							
	Action_write(7,603,200);
	Action_write(8,916,200);		   //倾斜
	Action_write(9,483,150);
	Action_write(10,534,200);
	Action();
	delay_ms(1000);				

				
	Action_write(8,586,150);
  Action_write(7,505,50);        //侧倒
	Action();
	delay_ms(1000);
	delay_ms(800);
   
	Action_write(1,558,300);
	Action_write(2,519,300);				//侧翻
	Action_write(3,305,300);
	Action_write(4,268,300);
	Action_write(8,410,300);
	Action();
	delay_ms(1000);	
	
  
	Action_write(2,551,300);
	Action_write(3,209,300);
	Action_write(4,240,350); 			 //单手撑
	Action_write(7,400,250);
  Action_write(10,884,400);
	Action();
	delay_ms(700);					
  
	
	Action_write(7,497,200);				//为了连贯
	Action_write(8,856,200);
	Action();
	delay_ms(300);
	
 
  Action_write(1,455,200);
	Action_write(2,223,200);	
	Action_write(7,497,200);			  //单手倒立 
	Action_write(8,856,200);
	Action_write(9,466,200);			
	Action_write(10,500,200);
	Action();
	delay_ms(1000);
	delay_ms(1000);	
	delay_ms(1000);	
	


  Action_write(2,324,200);					//摆手and腿
	Action_write(8,723,200);
	Action_write(10,610,200);
	Action();
	delay_ms(1000);			

  Action_write(2,223,200);					//摆手and腿
	Action_write(8,856,200);
	Action_write(10,500,200);
	Action();
	delay_ms(1000);			
/*	
	
  Action_write(2,324,200);					//摆手and腿
	Action_write(8,723,200);
	Action_write(10,609,200);
	Action();
	delay_ms(1000);			

  Action_write(2,223,200);					//摆手and腿
	Action_write(8,856,200);
	Action_write(10,500,200);
	Action();
	delay_ms(1000);		














  Action_write(2,639,200);
	Action_write(3,236,200);
	Action_write(4,342,30);
	Action_write(7,499,200);
	Action_write(8,397,200);
	Action();
	delay_ms(1000);
	delay_ms(1000);	
	delay_ms(500);	
	
	Action_write(1,510,300);
	Action_write(2,230,300);
	Action_write(3,523,300);
	Action_write(4,553,300);
  Action_write(8,602,300);
	Action();
	delay_ms(1000);	
	
	Action_write(1,455,300);
	Action_write(2,223,300);		 
	Action_write(3,705,300);
	Action_write(4,561,300);		  
	Action_write(5,485,300);
	Action_write(6,485,300);
	Action_write(7,497,300);
	
	Action_write(8,856,150);
	Action_write(9,466,300);			
	Action_write(10,500,300);
	Action();
	*/
}

	delay_ms(1000);
	delay_ms(1000);
	delay_ms(1000);
	
  
}





void zibian_2()
{
  Action_write(1,456,300);
	Action_write(2,705,300);			
	Action_write(3,333,300);  //zhang kai shou
	Action_write(7,546,300);
	Action_write(8,901,300);			
	Action_write(9,527,300);
	Action_write(10,529,300);			
	Action(); 
	delay_ms(1000);
	
	
	
	Action_write(7,600,160);
	Action_write(8,916,160);
	delay_ms(1000);
	delay_ms(200);
	
	Action_write(9,458,80);			//tai tui
	Action_write(10,1018,160);
	Action();
	delay_ms(1000);
	delay_ms(1000);
	
	
	Action_write(1,607,250);   //hui shou
	Action_write(4,671,250);
	Action_write(9,458,200);
	Action();
	delay_ms(800);
	
	Action_write(1,395,250);
	Action_write(4,299,350);
  Action_write(9,642,200);
	Action();
	delay_ms(800);
	
	Action_write(1,607,250);   //hui shou
	Action_write(4,671,250);
	Action_write(9,458,200);
	Action();
	delay_ms(800);
	
	Action_write(1,395,250);
	Action_write(4,299,350);
	 Action_write(9,642,200);
	Action();
	delay_ms(1000);
	delay_ms(400);
	
	Action_write(1,452,250);  
	Action_write(2,219,250);
	Action_write(3,709,250);
	Action_write(4,516,250); 
	Action_write(9,468,200);			//hui tui
	Action_write(10,500,200);
	Action();
	delay_ms(1000);
	delay_ms(800);
	
 	Action_write(7,498,200);			
	Action_write(8,858,200); 
	Action();
	delay_ms(1000);
	
	
	

	Action_write(5,485,250);   //zhan li
	Action_write(6,487,250);
	Action();
	delay_ms(1000);
	
	

//////////////////////////////////////////////////////////
  Action_write(1,510,300);  /////////////////////////  2
	Action_write(2,428,300);		 
	Action_write(3,509,300);
	Action_write(4,545,300);		  
	Action_write(5,777,300);
	Action_write(6,214,200);
	Action_write(7,476,300);
	Action_write(8,782,100);
	Action_write(9,385,300);			
	Action_write(10,430,300);  //shen shou
	Action();
	delay_ms(1000);


				
	Action_write(8,240,150);		   //ti tui	
	Action_write(7,500,300);		   //
	Action();
	delay_ms(1000);	
	delay_ms(1000);	
	delay_ms(1000);

  Action_write(1,346,300);
	Action_write(2,574,300);		 
	Action_write(3,310,300);
	Action_write(4,747,300);		   //shang qing xie
	Action();
	delay_ms(700);			


		
  Action_write(1,700,300);
	Action_write(2,267,300);		 
	Action_write(3,674,300);
	Action_write(4,218,300);		   //xiaqingxie
	Action();
	delay_ms(1000);	
								 
	


  Action_write(1,346,300);
	Action_write(2,574,300);		 
	Action_write(3,310,300);
	Action_write(4,747,300);		   //shang qing xie
	Action();
	delay_ms(1000);			


		
  Action_write(1,700,300);
	Action_write(2,267,300);		 
	Action_write(3,674,300);
	Action_write(4,218,300);	   //xia qing xie
	Action();
	delay_ms(700);	
				



  Action_write(1,510,300);       //shen shou
	Action_write(2,428,300);		 
	Action_write(3,509,300);
	Action_write(4,545,300);		   
	Action();
	delay_ms(1000);					
	
	Action_write(2,702,150);
	Action_write(3,254,150);		   //3shangyao  shoushou	
	Action_write(5,830,300);	
	Action_write(6,289,200);
	Action_write(8,159,200);
	Action();
	delay_ms(1000);	
	delay_ms(200);	
	
	Action_write(1,580,300);	
	Action_write(4,384,300);
	Action();
	delay_ms(1000);	
	delay_ms(300);	
	
  Action_write(1,510,300);
	Action_write(2,428,300);		 
	Action_write(3,509,300);
	Action_write(4,545,300);		   //
	Action();
	delay_ms(1000);					//shen shou

	Action_write(7,491,300);
	Action_write(8,809,200);
	Action_write(9,388,300);			
	Action_write(10,430,300); 	   //xia tui
	Action();
	delay_ms(1000);	
	delay_ms(1000);	
	delay_ms(1000);

	
	
  Action_write(5,485,300);
  Action_write(6,485,300);
	Action_write(7,497,300);
	Action_write(8,856,300);
	Action_write(9,466,300);			//hui yao
	Action_write(10,500,300);
	Action();
	delay_ms(800);




  Action_write(1,455,300);
	Action_write(2,223,300);		 
	Action_write(3,705,300);
	Action_write(4,561,300);	
	Action();
	delay_ms(1000);
	delay_ms(1000);
	
	/*
	
	Action_write(1,753,300);        //3
	Action_write(2,663,400);
	Action_write(3,438,350);
	Action_write(4,559,350);	
	Action_write(5,485,300);
	Action_write(6,487,100);							
	Action_write(7,603,200);
	Action_write(8,916,200);		   //qingxie
	Action_write(9,483,150);
	Action_write(10,534,200);
	Action();
	delay_ms(1000);				

				
	Action_write(8,586,150);
  Action_write(7,505,50);        //cedao
	Action();
	delay_ms(1000);
	delay_ms(800);
   
	Action_write(1,558,300);
	Action_write(2,519,300);
	Action_write(3,305,300);
	Action_write(4,268,300);
	Action_write(8,410,300);
	Action();
	delay_ms(1000);	
	
  
	Action_write(2,551,300);
	Action_write(3,209,300);
	Action_write(4,240,300);
	Action_write(7,368,350);      //danshoucheng 
  Action_write(10,884,400);
	Action();
	delay_ms(1000);					
  delay_ms(500);	
 
  Action_write(1,455,200);
	Action_write(2,223,200);	
	Action_write(7,497,200);			  //danshoudaoli 
	Action_write(8,856,200);
	Action_write(9,466,200);			
	Action_write(10,500,200);
	Action();
	delay_ms(1000);
	delay_ms(1000);	
	delay_ms(1000);	
	


  Action_write(2,324,200);
	Action_write(8,723,200);
	Action_write(10,610,200);
	Action();
	delay_ms(1000);			

  Action_write(2,223,200);
	Action_write(8,856,200);
	Action_write(10,500,200);
	Action();
	delay_ms(1000);			
	
	
  Action_write(2,324,200);
	Action_write(8,723,200);
	Action_write(10,609,200);
	Action();
	delay_ms(1000);			

  Action_write(2,223,200);
	Action_write(8,856,200);
	Action_write(10,500,200);
	Action();
	delay_ms(1000);		

  Action_write(2,639,200);
	Action_write(3,236,200);
	Action_write(4,342,30);
	Action_write(7,499,200);
	Action_write(8,397,200);
	Action();
	delay_ms(1000);
	delay_ms(1000);	
	delay_ms(500);	
	
	Action_write(1,510,300);
	Action_write(2,230,300);
	Action_write(3,523,300);
	Action_write(4,553,300);
  Action_write(8,602,300);
	Action();
	delay_ms(1000);	
	
	Action_write(1,455,300);
	Action_write(2,223,300);		 
	Action_write(3,705,300);
	Action_write(4,561,300);		  
	Action_write(5,485,300);
	Action_write(6,485,300);
	Action_write(7,497,300);
	Action_write(8,856,150);
	Action_write(9,466,300);			
	Action_write(10,500,300);
	Action();
	delay_ms(1000);
	delay_ms(1000);
	delay_ms(1000);
	*/
  
}






void my_zibian()
{
	Action_write(9,450,100);
	Action();
	delay_ms(500);
	
	Action_write(1,700,300);
	Action_write(2,680,300);
	Action_write(3,512,300);
	Action_write(4,512,300);
	//Action_write(6,600,200);					//腰向前
	Action_write(7,370,200);					//侧着起来
	Action_write(9,370,200);
	Action();
	delay_ms(5000);
	
	
	Action_write(1,455,700);
	Action_write(2,223,700);
	
	
	//Action_write(5,600,300);
	Action_write(7,300,900);
	
	Action();
	delay_ms(1000);										//左脚起来
	
	Action_write(8,700,700);
	Action_write(7,450,700);
	Action();
	delay_ms(2000);

	
	Action_write(8,780,300);
	Action_write(10,600,300);	
	Action();
	delay_ms(1000);
	
	
	
	Action_write(8,856,150);					//左脚收回，，左脚的立正状态
	Action_write(7,497,300);
	Action_write(10,550,300);	
	
	Action_write(9,550,300);	

	Action();
	delay_ms(1000);
	
//////////////////////////////
////////重复向左的动作/////////
//Action_write(1,455,300);
//Action_write(2,223,300);		 
//Action_write(3,705,300);
//Action_write(4,561,300);

	Action_write(10,500,100);
	Action_write(9,450,100);
	Action();
	delay_ms(1000);
	
	
	
	
	Action_write(1,700,300);
	Action_write(2,680,300);
	
	Action_write(3,512,300);
	Action_write(4,512,300);

	//Action_write(6,600,200);					//腰向前
	Action_write(7,370,200);					//侧着起来
	Action_write(9,370,200);
	Action();
	delay_ms(5000);
	
	
	Action_write(1,455,700);
	Action_write(2,223,700);
	
	
	//Action_write(5,600,300);
	Action_write(7,300,900);
	
	Action();
	delay_ms(1000);										//左脚起来
	
	Action_write(8,700,700);
	Action_write(7,450,700);
	Action();
	delay_ms(2000);

	
	Action_write(8,780,300);
	Action_write(10,600,300);	
	Action();
	delay_ms(1000);
	
	
	
	Action_write(8,856,150);					//左脚收回，，左脚的立正状态
	Action_write(7,497,300);
	Action_write(10,550,300);	
	
	Action_write(9,550,300);	

	Action();
	delay_ms(1000);
	

//////////////////////////////	
	stand();
	delay_ms(4800);
	zibian_right_turn();


////////////////////////////

	
	

	}
	

void daoli()
{
	
	Action_write(1,490,400);							   //先支撑着
	Action_write(2,247,450);
	Action_write(3,650,300);
	Action_write(4,552,350);
	Action_write(5,851,600);		
	Action_write(6,240,500);
	Action();						
	delay_ms(1000);
	delay_ms(200);
				

	Action_write(1,773,300);
	Action_write(2,378,300);				 
	Action_write(3,510,300);		
	Action_write(4,290,300);	
	Action_write(5,320,300);		
	Action_write(6,170,300);												//肩膀着地
	Action();						
	delay_ms(800);
	delay_ms(1000);


	Action_write(8,210,500);	
	Action();										// 踢腿（提腿）
	delay_ms(1000);
	delay_ms(200);
	
//////////////////////////////////下一步为了倒立ing稳定
	
	Action_write(3,490,300);		
	Action_write(4,310,300);	
	
	Action();
	delay_ms(200);
///////////////////////////////////////////////////////////	


	Action_write(9,400,800);
	Action_write(5,515,150);        //变成倒立的形状！
	Action();										
	delay_ms(1000);
		
	Action_write(8,542,300);				  
	//////////////////////////////////////
	Action_write(9,466,300);							///////////////配合上个注释
	//////////////////////////////////////
	Action_write(10,820,330);
	Action();									
	delay_ms(800);	


  Action_write(8,856,300);
	Action_write(6,470,300);
	Action_write(7,497,300);
	Action_write(9,466,300);			
	Action_write(10,500,250);
	Action();									
	delay_ms(1000);	
	delay_ms(200);
	
}
	
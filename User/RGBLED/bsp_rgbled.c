#include "bsp_rgbled.h"

extern int c;

void delay(__IO uint32_t nCount)	
{
	for(; nCount != 0; nCount--);
}

void RGBLED_GPIO_Config(void)
{
    GPIO_InitTypeDef GPIO_InitStructure;
		RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOB, ENABLE); 														   
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_6;	
		GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;     
		GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; 
	
		GPIO_Init(GPIOB, &GPIO_InitStructure);	

    GPIO_ResetBits(GPIOB, GPIO_Pin_6);	
}

void One(void)
{
		GPIOB->ODR|= GPIO_Pin_6;
	  GPIOB->ODR|= GPIO_Pin_6;
	  GPIOB->ODR|= GPIO_Pin_6;
	  GPIOB->ODR|= GPIO_Pin_6;	
	  GPIOB->ODR|= GPIO_Pin_6;
	  GPIOB->ODR|= GPIO_Pin_6;
	
    GPIOB->ODR&=~GPIO_Pin_6;
		GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		
}

void Zero(void)
{
		GPIOB->ODR|= GPIO_Pin_6;
	  GPIOB->ODR|= GPIO_Pin_6;
	  GPIOB->ODR|= GPIO_Pin_6;
	
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	

}

void Reset(void)
{
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	
	  GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	
	    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	
	  GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	
	  GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	
	  GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	
	  GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	
	  GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	
	  GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	
	  GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	
	  GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	
	  GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	
	  GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	
	  GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	
	  GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
	  GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
    GPIOB->ODR&=~GPIO_Pin_6;
		
}

void  Brightness(int x)
{
   switch(x)
	 {
		 case 1:     {Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();}break;  //0
		 case 2:     {Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  One(); }break;  //`
		 case 4:     {Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  One();   One(); }break;  //3
		 case 8:     {Zero();  Zero();  Zero();  Zero();  Zero();  One();   One();   One(); }break;  //7
		 case 16:    {Zero();  Zero();  Zero();  Zero();  One();   One();   One();   One(); }break;  //15
		 case 32:    {Zero();  Zero();  Zero();  One();   One();   One();   One();   One(); }break;  //31  
		 case 64:    {Zero();  Zero();  One();   One();   One();   One();   One();   One(); }break;  //63
		 case 128:   {Zero();  One();   One();   One();   One();   One();   One();   One(); }break;  //127
     case 256:	 {One();   One();   One();   One();   One();   One();   One();   One(); }break;  //255	 
	 }
}





void Black(void)
{
   Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
	 
	 Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
	
	 Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
}

void Green(void)
{	
	 Zero();  One();   One();   One();   One();   One();   One();   One();   //127
	
	 Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
	
	 Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0	
}


void Red(void)
{
	 Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
	
   Zero();  One();   One();   One();   One();   One();   One();   One();   //127
	
	 Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
}

void Blue(void)
{

   Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
	
	 Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
	
	 Zero();  One();   One();   One();   One();   One();   One();   One();   //127
}
	
void Red1()
{

   Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
	
	 Zero();  One();   One();   One();   One();   One();   One();   One();   //127
	
	 Zero();  Zero();  Zero();  One();   One();   One();   One();   One();	 //31
}

void Red2()
{

   Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
	
	 Zero();  One();   One();   One();   One();   One();   One();   One();   //127
	
	 Zero();  Zero();  One();   One();   One();   One();   One();   One();   //63
}

void Red3()
{
   Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
	
	 Zero();  One();   One();   One();   One();   One();   One();   One();   //127
	
	 Zero();  One();   Zero();  One();   One();   One();   One();   One();   //95
}
	
void Red4()
{
   Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
	
	 Zero();  One();   One();   One();   One();   One();   One();   One();   //127
	
	 Zero();  One();   One();   One();   One();   One();   One();   One();   //127
}

void Red5()
{
   Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
	
	 Zero();  One();   Zero();  One();   One();   One();   One();   One();   //95
	
	 Zero();  One();   One();   One();   One();   One();   One();   One();   //127
}

void Red6()
{
   Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
	
	 Zero();  Zero();  One();   One();   One();   One();   One();   One();   //63
	
	 Zero();  One();   One();   One();   One();   One();   One();   One();   //127
}

void Red7()
{
   Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
	
	 Zero();  Zero();  Zero();  One();   One();   One();   One();   One();	 //31
	
	Zero();  One();   One();   One();   One();   One();   One();   One();   //127
}

void Blue1()
{
   Zero();  Zero();  Zero();  One();   One();   One();   One();   One();	 //31
	
	 Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
	
	 Zero();  One();   One();   One();   One();   One();   One();   One();   //127
}

void Blue2()
{
   Zero();  Zero();  One();   One();   One();   One();   One();   One();   //63
	
	 Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
	
	 Zero();  One();   One();   One();   One();   One();   One();   One();   //127
}

void Blue3()
{
   Zero();  One();   Zero();  One();   One();   One();   One();   One();   //95
	
	 Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
	
	 Zero();  One();   One();   One();   One();   One();   One();   One();   //127
}

void Blue4()
{
   Zero();  One();   One();   One();   One();   One();   One();   One();   //127
	
	 Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
	
	 Zero();  One();   One();   One();   One();   One();   One();   One();   //127
}

void Blue5()
{
   Zero();  One();   One();   One();   One();   One();   One();   One();   //127
	
	 Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
	
	 Zero();  One();   Zero();  One();   One();   One();   One();   One();   //95
}

void Blue6()
{
   Zero();  One();   One();   One();   One();   One();   One();   One();   //127
	
	 Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
	
	 Zero();  Zero();  One();   One();   One();   One();   One();   One();   //63
}

void Blue7()
{
   Zero();  One();   One();   One();   One();   One();   One();   One();   //127
	
	 Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
	
	 Zero();  Zero();  Zero();  One();   One();   One();   One();   One();	 //31
}

void Green1()
{
   Zero();  One();   One();   One();   One();   One();   One();   One();   //127
	
	 Zero();  Zero();  Zero();  One();   One();   One();   One();   One();	 //31
	
	 Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
}

void Green2()
{
   Zero();  One();   One();   One();   One();   One();   One();   One();   //127
	
	 Zero();  Zero();  One();   One();   One();   One();   One();   One();   //63
	
	 Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
}

void Green3()
{
   Zero();  One();   One();   One();   One();   One();   One();   One();   //127
	
	 Zero();  One();   Zero();  One();   One();   One();   One();   One();   //95
	
	 Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
}

void Green4()
{
   Zero();  One();   One();   One();   One();   One();   One();   One();   //127
	
	 Zero();  One();   One();   One();   One();   One();   One();   One();   //127
	
	 Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
}

void Green5()
{
   Zero();  One();   Zero();  One();   One();   One();   One();   One();   //95
	
	 Zero();  One();   One();   One();   One();   One();   One();   One();   //127
	
	 Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
}

void Green6()
{
   Zero();  Zero();  One();   One();   One();   One();   One();   One();   //63
	
	 Zero();  One();   One();   One();   One();   One();   One();   One();   //127
	
	 Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
}

void Green7()
{
   Zero();  Zero();  Zero();  One();   One();   One();   One();   One();	 //31
	
	 Zero();  One();   One();   One();   One();   One();   One();   One();   //127
	
	 Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
}


void Spectrum_Display(uint16_t x1, uint16_t x2, uint16_t x3, uint16_t x4, uint16_t x5, uint16_t x6, uint16_t x7, uint16_t x8, uint16_t x9, uint16_t x10)
{
	Reset();
  switch (x1){
		case 0:  {Black();Black();Black();Green();Green();Black();Black();Black();} break;
		case 1:  {Black();Black();Black();Black();Black();Black();Black();Green();} break; 
		case 2:  {Black();Black();Black();Black();Black();Black();Blue6();Green();} break;
		case 3:  {Black();Black();Black();Black();Black();Blue3();Blue6();Green();} break;
		case 4:  {Black();Black();Black();Black();Blue();Blue3();Blue6();Green();} break;
		case 5:  {Black();Black();Black();Red7();Blue();Blue3();Blue6();Green();} break;
		case 6:  {Black();Black();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 7:  {Black();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 8:  {Red();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		}
	
		switch (x2){
		case 0:  {Black();Black();Black();Black();Black();Black();Black();Black();} break;
		case 1:  {Black();Black();Black();Black();Black();Black();Black();Green();} break; 
		case 2:  {Black();Black();Black();Black();Black();Black();Blue6();Green();} break;
		case 3:  {Black();Black();Black();Black();Black();Blue3();Blue6();Green();} break;
		case 4:  {Black();Black();Black();Black();Blue();Blue3();Blue6();Green();} break;
		case 5:  {Black();Black();Black();Red7();Blue();Blue3();Blue6();Green();} break;
		case 6:  {Black();Black();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 7:  {Black();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 8:  {Red();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
	}
		
		switch (x3){
		case 0:  {Black();Black();Black();Black();Black();Black();Black();Black();} break;
		case 1:  {Black();Black();Black();Black();Black();Black();Black();Green();} break; 
		case 2:  {Black();Black();Black();Black();Black();Black();Blue6();Green();} break;
		case 3:  {Black();Black();Black();Black();Black();Blue3();Blue6();Green();} break;
		case 4:  {Black();Black();Black();Black();Blue();Blue3();Blue6();Green();} break;
		case 5:  {Black();Black();Black();Red7();Blue();Blue3();Blue6();Green();} break;
		case 6:  {Black();Black();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 7:  {Black();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 8:  {Red();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
	}
		switch (x4){
		case 0:  {Black();Black();Black();Black();Black();Black();Black();Black();} break;
		case 1:  {Black();Black();Black();Black();Black();Black();Black();Green();} break; 
		case 2:  {Black();Black();Black();Black();Black();Black();Blue6();Green();} break;
		case 3:  {Black();Black();Black();Black();Black();Blue3();Blue6();Green();} break;
		case 4:  {Black();Black();Black();Black();Blue();Blue3();Blue6();Green();} break;
		case 5:  {Black();Black();Black();Red7();Blue();Blue3();Blue6();Green();} break;
		case 6:  {Black();Black();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 7:  {Black();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 8:  {Red();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
	}
		switch (x5){
		case 0:  {Black();Black();Black();Black();Black();Black();Black();Black();} break;
		case 1:  {Black();Black();Black();Black();Black();Black();Black();Green();} break; 
		case 2:  {Black();Black();Black();Black();Black();Black();Blue6();Green();} break;
		case 3:  {Black();Black();Black();Black();Black();Blue3();Blue6();Green();} break;
		case 4:  {Black();Black();Black();Black();Blue();Blue3();Blue6();Green();} break;
		case 5:  {Black();Black();Black();Red7();Blue();Blue3();Blue6();Green();} break;
		case 6:  {Black();Black();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 7:  {Black();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 8:  {Red();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
	}
		switch (x6){
		case 0:  {Black();Black();Black();Black();Black();Black();Black();Black();} break;
		case 1:  {Black();Black();Black();Black();Black();Black();Black();Green();} break; 
		case 2:  {Black();Black();Black();Black();Black();Black();Blue6();Green();} break;
		case 3:  {Black();Black();Black();Black();Black();Blue3();Blue6();Green();} break;
		case 4:  {Black();Black();Black();Black();Blue();Blue3();Blue6();Green();} break;
		case 5:  {Black();Black();Black();Red7();Blue();Blue3();Blue6();Green();} break;
		case 6:  {Black();Black();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 7:  {Black();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 8:  {Red();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
	}
		switch (x7){
		case 0:  {Black();Black();Black();Black();Black();Black();Black();Black();} break;
		case 1:  {Black();Black();Black();Black();Black();Black();Black();Green();} break; 
		case 2:  {Black();Black();Black();Black();Black();Black();Blue6();Green();} break;
		case 3:  {Black();Black();Black();Black();Black();Blue3();Blue6();Green();} break;
		case 4:  {Black();Black();Black();Black();Blue();Blue3();Blue6();Green();} break;
		case 5:  {Black();Black();Black();Red7();Blue();Blue3();Blue6();Green();} break;
		case 6:  {Black();Black();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 7:  {Black();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 8:  {Red();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
	}
		switch (x8){
		case 0:  {Black();Black();Black();Black();Black();Black();Black();Black();} break;
		case 1:  {Black();Black();Black();Black();Black();Black();Black();Green();} break; 
		case 2:  {Black();Black();Black();Black();Black();Black();Blue6();Green();} break;
		case 3:  {Black();Black();Black();Black();Black();Blue3();Blue6();Green();} break;
		case 4:  {Black();Black();Black();Black();Blue();Blue3();Blue6();Green();} break;
		case 5:  {Black();Black();Black();Red7();Blue();Blue3();Blue6();Green();} break;
		case 6:  {Black();Black();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 7:  {Black();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 8:  {Red();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;;
	}
		switch (x9){
		case 0:  {Black();Black();Black();Black();Black();Black();Black();Black();} break;
		case 1:  {Black();Black();Black();Black();Black();Black();Black();Green();} break; 
		case 2:  {Black();Black();Black();Black();Black();Black();Blue6();Green();} break;
		case 3:  {Black();Black();Black();Black();Black();Blue3();Blue6();Green();} break;
		case 4:  {Black();Black();Black();Black();Blue();Blue3();Blue6();Green();} break;
		case 5:  {Black();Black();Black();Red7();Blue();Blue3();Blue6();Green();} break;
		case 6:  {Black();Black();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 7:  {Black();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 8:  {Red();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
	}
		switch (x10){
		case 0:  {Black();Black();Black();Black();Black();Black();Black();Black();} break;
		case 1:  {Black();Black();Black();Black();Black();Black();Black();Green();} break; 
		case 2:  {Black();Black();Black();Black();Black();Black();Blue6();Green();} break;
		case 3:  {Black();Black();Black();Black();Black();Blue3();Blue6();Green();} break;
		case 4:  {Black();Black();Black();Black();Blue();Blue3();Blue6();Green();} break;
		case 5:  {Black();Black();Black();Red7();Blue();Blue3();Blue6();Green();} break;
		case 6:  {Black();Black();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 7:  {Black();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 8:  {Red();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
	}
		
	delay(2*c);
}

void Waveform_Display(uint16_t x1, uint16_t x2, uint16_t x3, uint16_t x4, uint16_t x5, uint16_t x6, uint16_t x7, uint16_t x8, uint16_t x9, uint16_t x10)
{

	Reset();
  switch (x1){
		case 0:  {Black();Black();Black();Black();Black();Black();Black();Black();} break;
		case 1:  {Black();Black();Blue3();Green();Green();Blue3();Black();Black();} break; 
		case 2:  {Black();Black();Blue3();Green();Green();Blue3();Blue3();Green();} break;
		case 3:  {Black();Black();Blue3();Green();Green();Blue3();Blue6();Green();} break;
		case 4:  {Black();Black();Blue3();Green();Green();Blue3();Blue6();Green();} break;
		case 5:  {Black();Black();Blue3();Green();Green();Blue3();Blue6();Green();} break;
		case 6:  {Black();Black();Blue3();Green();Green();Blue3();Blue6();Green();} break;
		case 7:  {Black();Red2();Blue3();Green();Green();Blue3();Blue6();Green();} break;
		case 8:  {Red();Red2();Blue3();Green();Green();Blue3();Blue6();Green();} break;
		}
	
		switch (x2){
		case 0:  {Black();Black();Black();Black();Black();Black();Black();Black();} break;
		case 1:  {Black();Black();Black();Black();Black();Black();Black();Green();} break; 
		case 2:  {Black();Black();Black();Black();Black();Black();Blue6();Green();} break;
		case 3:  {Black();Black();Black();Black();Black();Blue3();Blue6();Green();} break;
		case 4:  {Black();Black();Black();Black();Blue();Blue3();Blue6();Green();} break;
		case 5:  {Black();Black();Black();Red7();Blue();Blue3();Blue6();Green();} break;
		case 6:  {Black();Black();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 7:  {Black();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 8:  {Red();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
	}
		
		switch (x3){
		case 0:  {Black();Black();Black();Black();Black();Black();Black();Black();} break;
		case 1:  {Black();Black();Black();Black();Black();Black();Black();Green();} break; 
		case 2:  {Black();Black();Black();Black();Black();Black();Blue6();Green();} break;
		case 3:  {Black();Black();Black();Black();Black();Blue3();Blue6();Green();} break;
		case 4:  {Black();Black();Black();Black();Blue();Blue3();Blue6();Green();} break;
		case 5:  {Black();Black();Black();Red7();Blue();Blue3();Blue6();Green();} break;
		case 6:  {Black();Black();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 7:  {Black();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 8:  {Red();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
	}
		switch (x4){
		case 0:  {Black();Black();Black();Black();Black();Black();Black();Black();} break;
		case 1:  {Black();Black();Black();Black();Black();Black();Black();Green();} break; 
		case 2:  {Black();Black();Black();Black();Black();Black();Blue6();Green();} break;
		case 3:  {Black();Black();Black();Black();Black();Blue3();Blue6();Green();} break;
		case 4:  {Black();Black();Black();Black();Blue();Blue3();Blue6();Green();} break;
		case 5:  {Black();Black();Black();Red7();Blue();Blue3();Blue6();Green();} break;
		case 6:  {Black();Black();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 7:  {Black();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 8:  {Red();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
	}
		switch (x5){
		case 0:  {Black();Black();Black();Black();Black();Black();Black();Black();} break;
		case 1:  {Black();Black();Black();Black();Black();Black();Black();Green();} break; 
		case 2:  {Black();Black();Black();Black();Black();Black();Blue6();Green();} break;
		case 3:  {Black();Black();Black();Black();Black();Blue3();Blue6();Green();} break;
		case 4:  {Black();Black();Black();Black();Blue();Blue3();Blue6();Green();} break;
		case 5:  {Black();Black();Black();Red7();Blue();Blue3();Blue6();Green();} break;
		case 6:  {Black();Black();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 7:  {Black();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 8:  {Red();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
	}
		switch (x6){
		case 0:  {Black();Black();Black();Black();Black();Black();Black();Black();} break;
		case 1:  {Black();Black();Black();Black();Black();Black();Black();Green();} break; 
		case 2:  {Black();Black();Black();Black();Black();Black();Blue6();Green();} break;
		case 3:  {Black();Black();Black();Black();Black();Blue3();Blue6();Green();} break;
		case 4:  {Black();Black();Black();Black();Blue();Blue3();Blue6();Green();} break;
		case 5:  {Black();Black();Black();Red7();Blue();Blue3();Blue6();Green();} break;
		case 6:  {Black();Black();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 7:  {Black();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 8:  {Red();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
	}
		switch (x7){
		case 0:  {Black();Black();Black();Black();Black();Black();Black();Black();} break;
		case 1:  {Black();Black();Black();Black();Black();Black();Black();Green();} break; 
		case 2:  {Black();Black();Black();Black();Black();Black();Blue6();Green();} break;
		case 3:  {Black();Black();Black();Black();Black();Blue3();Blue6();Green();} break;
		case 4:  {Black();Black();Black();Black();Blue();Blue3();Blue6();Green();} break;
		case 5:  {Black();Black();Black();Red7();Blue();Blue3();Blue6();Green();} break;
		case 6:  {Black();Black();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 7:  {Black();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 8:  {Red();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
	}
		switch (x8){
		case 0:  {Black();Black();Black();Black();Black();Black();Black();Black();} break;
		case 1:  {Black();Black();Black();Black();Black();Black();Black();Green();} break; 
		case 2:  {Black();Black();Black();Black();Black();Black();Blue6();Green();} break;
		case 3:  {Black();Black();Black();Black();Black();Blue3();Blue6();Green();} break;
		case 4:  {Black();Black();Black();Black();Blue();Blue3();Blue6();Green();} break;
		case 5:  {Black();Black();Black();Red7();Blue();Blue3();Blue6();Green();} break;
		case 6:  {Black();Black();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 7:  {Black();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 8:  {Red();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;;
	}
		switch (x9){
		case 0:  {Black();Black();Black();Black();Black();Black();Black();Black();} break;
		case 1:  {Black();Black();Black();Black();Black();Black();Black();Green();} break; 
		case 2:  {Black();Black();Black();Black();Black();Black();Blue6();Green();} break;
		case 3:  {Black();Black();Black();Black();Black();Blue3();Blue6();Green();} break;
		case 4:  {Black();Black();Black();Black();Blue();Blue3();Blue6();Green();} break;
		case 5:  {Black();Black();Black();Red7();Blue();Blue3();Blue6();Green();} break;
		case 6:  {Black();Black();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 7:  {Black();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 8:  {Red();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
	}
		switch (x10){
		case 0:  {Black();Black();Black();Black();Black();Black();Black();Black();} break;
		case 1:  {Black();Black();Black();Black();Black();Black();Black();Green();} break; 
		case 2:  {Black();Black();Black();Black();Black();Black();Blue6();Green();} break;
		case 3:  {Black();Black();Black();Black();Black();Blue3();Blue6();Green();} break;
		case 4:  {Black();Black();Black();Black();Blue();Blue3();Blue6();Green();} break;
		case 5:  {Black();Black();Black();Red7();Blue();Blue3();Blue6();Green();} break;
		case 6:  {Black();Black();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 7:  {Black();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
		case 8:  {Red();Red2();Red4();Red7();Blue();Blue3();Blue6();Green();} break;
	}

}

void Flash_Red()
{
 Reset();

		Black();
		Black();
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
		
	  Zero();  Zero();  One();   One();   One();   One();   One();   One();	  //63
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0		
		
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		delay(2*c);
		
		Reset();
		Black();
		Black();
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
		
	  Zero();  One();   One();   One();   One();   One();   One();   One();   //127
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0		
		
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		delay(2*c);		
		
		Reset();
		Black();
		Black();
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
		
	  One();   Zero();  One();   One();   One();   One();   One();   One();   //191
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0		
		
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		delay(2*c);		
		
		Reset();
		Black();
		Black();
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
		
	  One();   One();   One();   One();   One();   One();   One();   One();   //255
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0		
		
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		delay(2*c);	
		
		Reset();
		Black();
		Black();
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
		
	  One();   Zero();  One();   One();   One();   One();   One();   One();   //191
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0		
		
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		delay(2*c);		
		
		Reset();
		Black();
		Black();
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
		
	  Zero();  One();   One();   One();   One();   One();   One();   One();   //127
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0		
		
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		delay(2*c);		
		
		Reset();
		Black();
		Black();
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
		
	  Zero();  Zero();  One();   One();   One();   One();   One();   One();	  //63
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0		
		
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		delay(2*c);
		
		Reset();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		delay(2*c);
}

void Flash_Blue()
{
Reset();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0		
		
	  Zero();  Zero();  One();   One();   One();   One();   One();   One();	  //63		
		
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		delay(2*c);
		
		Reset();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0		
		
	  Zero();  One();   One();   One();   One();   One();   One();   One();   //127		
		
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		delay(2*c);		
		
		Reset();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0		
		
	  One();   Zero();  One();   One();   One();   One();   One();   One();   //191		
		
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		delay(2*c);		
		
		Reset();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0		
		
	  One();   One();   One();   One();   One();   One();   One();   One();   //255		
		
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		delay(2*c);	
		
		Reset();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0		
		
	  One();   Zero();  One();   One();   One();   One();   One();   One();   //191		
		
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		delay(2*c);		
		
		Reset();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0		
		
	  Zero();  One();   One();   One();   One();   One();   One();   One();   //127		
		
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		delay(2*c);	
		
		Reset();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0		
		
	  Zero();  Zero();  One();   One();   One();   One();   One();   One();	  //63		
		
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		delay(2*c);
		
		Reset();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		delay(2*c);
}

void Flash_Green()
{
Reset();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		
		Zero();  Zero();  One();   One();   One();   One();   One();   One();	  //63
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0				
		
		
		Black();
		Black();
		Black();
		delay(2*c);
		
		Reset();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		
		Zero();  One();   One();   One();   One();   One();   One();   One();   //127	
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0				
		
		
		Black();
		Black();
		Black();
		delay(2*c);
		
		Reset();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		
		One();   Zero();  One();   One();   One();   One();   One();   One();   //191	
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0				
		
		
		Black();
		Black();
		Black();
		delay(2*c);
		
		Reset();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		
		One();   One();   One();   One();   One();   One();   One();   One();   //255		
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0				
		
		
		Black();
		Black();
		Black();
		delay(2*c);
		
		Reset();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		
		One();   Zero();  One();   One();   One();   One();   One();   One();   //191	
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0				
		
		
		Black();
		Black();
		Black();
		delay(2*c);
		
		Reset();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		
		Zero();  One();   One();   One();   One();   One();   One();   One();   //127	
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0				
		
		
		Black();
		Black();
		Black();
		delay(2*c);
		
		Reset();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		
		Zero();  Zero();  One();   One();   One();   One();   One();   One();	  //63
	 
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0
   
	  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  Zero();  //0				
		
		
		Black();
		Black();
		Black();
		delay(2*c);
		
		Reset();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		Black();
		delay(2*c);
}

void Circle()
{
    Reset();
		Red();
		Red1();
		Red2();
		Red3();
		Red4();
		Red5();
		Red6();
		Red7();
		Blue();
		Blue1();
		Blue2();
		Blue3();
		Blue4();
		Blue5();
		Blue6();
		Blue7();
		Green();
		Green1();
		Green2();
		Green3();
		Green4();
		Green5();
		Green6();
		Green7();
		delay(c);
		
		Reset();		
		Red1();
		Red2();
		Red3();
		Red4();
		Red5();
		Red6();
		Red7();
		Blue();
		Blue1();
		Blue2();
		Blue3();
		Blue4();
		Blue5();
		Blue6();
		Blue7();
		Green();
		Green1();
		Green2();
		Green3();
		Green4();
		Green5();
		Green6();
		Green7();
		Red();
		delay(c);
		
		Reset();
		Red2();
		Red3();
		Red4();
		Red5();
		Red6();
		Red7();
		Blue();
		Blue1();
		Blue2();
		Blue3();
		Blue4();
		Blue5();
		Blue6();
		Blue7();
		Green();
		Green1();
		Green2();
		Green3();
		Green4();
		Green5();
		Green6();
		Green7();
		Red();
		Red1();
		delay(c);
		
		Reset();
		Red3();
		Red4();
		Red5();
		Red6();
		Red7();
		Blue();
		Blue1();
		Blue2();
		Blue3();
		Blue4();
		Blue5();
		Blue6();
		Blue7();
		Green();
		Green1();
		Green2();
		Green3();
		Green4();
		Green5();
		Green6();
		Green7();
		Red();
		Red1();
		Red2();
		delay(c);
		
		Reset();
		Red4();
		Red5();
		Red6();
		Red7();
		Blue();
		Blue1();
		Blue2();
		Blue3();
		Blue4();
		Blue5();
		Blue6();
		Blue7();
		Green();
		Green1();
		Green2();
		Green3();
		Green4();
		Green5();
		Green6();
		Green7();
		Red();
		Red1();
		Red2();
		Red3();
		delay(c);
		
		Reset();
		Red5();
		Red6();
		Red7();
		Blue();
		Blue1();
		Blue2();
		Blue3();
		Blue4();
		Blue5();
		Blue6();
		Blue7();
		Green();
		Green1();
		Green2();
		Green3();
		Green4();
		Green5();
		Green6();
		Green7();
		Red();
		Red1();
		Red2();
		Red3();
    Red4();
		delay(c);
		
		Reset();
		Red6();
		Red7();
		Blue();
		Blue1();
		Blue2();
		Blue3();
		Blue4();
		Blue5();
		Blue6();
		Blue7();
		Green();
		Green1();
		Green2();
		Green3();
		Green4();
		Green5();
		Green6();
		Green7();
		Red();
		Red1();
		Red2();
		Red3();
    Red4();
		Red5();
		delay(c);
		
		Reset();
		Red7();
		Blue();
		Blue1();
		Blue2();
		Blue3();
		Blue4();
		Blue5();
		Blue6();
		Blue7();
		Green();
		Green1();
		Green2();
		Green3();
		Green4();
		Green5();
		Green6();
		Green7();
		Red();
		Red1();
		Red2();
		Red3();
    Red4();
		Red5();
		Red6();
		delay(c);
	
		Reset();	
		Blue();
		Blue1();
		Blue2();
		Blue3();
		Blue4();
		Blue5();
		Blue6();
		Blue7();
		Green();
		Green1();
		Green2();
		Green3();
		Green4();
		Green5();
		Green6();
		Green7();
		Red();
		Red1();
		Red2();
		Red3();
    Red4();
		Red5();
		Red6();	
		Red7();
		delay(c);
		
    Reset();
		Blue1();
		Blue2();
		Blue3();
		Blue4();
		Blue5();
		Blue6();
		Blue7();
		Green();
		Green1();
		Green2();
		Green3();
		Green4();
		Green5();
		Green6();
		Green7();
		Red();
		Red1();
		Red2();
		Red3();
    Red4();
		Red5();
		Red6();	
		Red7();		
		Blue();
		delay(c);
		
		Reset();	
		Blue2();
		Blue3();
		Blue4();
		Blue5();
		Blue6();
		Blue7();
		Green();
		Green1();
		Green2();
		Green3();
		Green4();
		Green5();
		Green6();
		Green7();
		Red();
		Red1();
		Red2();
		Red3();
    Red4();
		Red5();
		Red6();	
		Red7();		
		Blue();	
		Blue1();
		delay(c);
		
		Reset();	
		Blue3();
		Blue4();
		Blue5();
		Blue6();
		Blue7();
		Green();
		Green1();
		Green2();
		Green3();
		Green4();
		Green5();
		Green6();
		Green7();
		Red();
		Red1();
		Red2();
		Red3();
    Red4();
		Red5();
		Red6();	
		Red7();		
		Blue();	
		Blue1();	
		Blue2();
		delay(c);
		
		Reset();	
		Blue4();
		Blue5();
		Blue6();
		Blue7();
		Green();
		Green1();
		Green2();
		Green3();
		Green4();
		Green5();
		Green6();
		Green7();
		Red();
		Red1();
		Red2();
		Red3();
    Red4();
		Red5();
		Red6();	
		Red7();		
		Blue();	
		Blue1();	
		Blue2();	
		Blue3();
		delay(c);
		
		Reset();
		Blue5();
		Blue6();
		Blue7();
		Green();
		Green1();
		Green2();
		Green3();
		Green4();
		Green5();
		Green6();
		Green7();
		Red();
		Red1();
		Red2();
		Red3();
    Red4();
		Red5();
		Red6();	
		Red7();		
		Blue();	
		Blue1();	
		Blue2();	
		Blue3();		
		Blue4();
		delay(c);
		
		Reset();	
		Blue6();
		Blue7();
		Green();
		Green1();
		Green2();
		Green3();
		Green4();
		Green5();
		Green6();
		Green7();
		Red();
		Red1();
		Red2();
		Red3();
    Red4();
		Red5();
		Red6();	
		Red7();		
		Blue();	
		Blue1();	
		Blue2();	
		Blue3();		
		Blue4();	
		Blue5();
		delay(c);
		
		Reset();	
		Blue7();
		Green();
		Green1();
		Green2();
		Green3();
		Green4();
		Green5();
		Green6();
		Green7();
		Red();
		Red1();
		Red2();
		Red3();
    Red4();
		Red5();
		Red6();	
		Red7();		
		Blue();	
		Blue1();	
		Blue2();	
		Blue3();		
		Blue4();	
		Blue5();	
		Blue6();
		delay(c);
		
		Reset();	
		Green();
		Green1();
		Green2();
		Green3();
		Green4();
		Green5();
		Green6();
		Green7();
		Red();
		Red1();
		Red2();
		Red3();
    Red4();
		Red5();
		Red6();	
		Red7();		
		Blue();	
		Blue1();	
		Blue2();	
		Blue3();		
		Blue4();	
		Blue5();	
		Blue6();	
		Blue7();
		delay(c);
		
		Reset();	
		Green1();
		Green2();
		Green3();
		Green4();
		Green5();
		Green6();
		Green7();
		Red();
		Red1();
		Red2();
		Red3();
    Red4();
		Red5();
		Red6();	
		Red7();		
		Blue();	
		Blue1();	
		Blue2();	
		Blue3();		
		Blue4();	
		Blue5();	
		Blue6();	
		Blue7();	
		Green();
		delay(c);
		
		Reset();	
		Green2();
		Green3();
		Green4();
		Green5();
		Green6();
		Green7();
		Red();
		Red1();
		Red2();
		Red3();
    Red4();
		Red5();
		Red6();	
		Red7();		
		Blue();	
		Blue1();	
		Blue2();	
		Blue3();		
		Blue4();	
		Blue5();	
		Blue6();	
		Blue7();	
		Green();	
		Green1();
		delay(c);
		
		Reset();	
		Green3();
		Green4();
		Green5();
		Green6();
		Green7();
		Red();
		Red1();
		Red2();
		Red3();
    Red4();
		Red5();
		Red6();	
		Red7();		
		Blue();	
		Blue1();	
		Blue2();	
		Blue3();		
		Blue4();	
		Blue5();	
		Blue6();	
		Blue7();	
		Green();	
		Green1();	
		Green2();
		delay(c);
		
		Reset();	
		Green4();
		Green5();
		Green6();
		Green7();
		Red();
		Red1();
		Red2();
		Red3();
    Red4();
		Red5();
		Red6();	
		Red7();		
		Blue();	
		Blue1();	
		Blue2();	
		Blue3();		
		Blue4();	
		Blue5();	
		Blue6();	
		Blue7();	
		Green();	
		Green1();	
		Green2();	
		Green3();
		delay(c);
		
		Reset();	
		Green5();
		Green6();
		Green7();
		Red();
		Red1();
		Red2();
		Red3();
    Red4();
		Red5();
		Red6();	
		Red7();		
		Blue();	
		Blue1();	
		Blue2();	
		Blue3();		
		Blue4();	
		Blue5();	
		Blue6();	
		Blue7();	
		Green();	
		Green1();	
		Green2();	
		Green3();	
		Green4();
		delay(c);
		
		Reset();	
		Green6();
		Green7();
		Red();
		Red1();
		Red2();
		Red3();
    Red4();
		Red5();
		Red6();	
		Red7();		
		Blue();	
		Blue1();	
		Blue2();	
		Blue3();		
		Blue4();	
		Blue5();	
		Blue6();	
		Blue7();	
		Green();	
		Green1();	
		Green2();	
		Green3();	
		Green4();	
		Green5();
		delay(c);
		
		Reset();	
		Green7();
		Red();
		Red1();
		Red2();
		Red3();
    Red4();
		Red5();
		Red6();	
		Red7();		
		Blue();	
		Blue1();	
		Blue2();	
		Blue3();		
		Blue4();	
		Blue5();	
		Blue6();	
		Blue7();	
		Green();	
		Green1();	
		Green2();	
		Green3();	
		Green4();	
		Green5();	
		Green6();
		delay(c);
}

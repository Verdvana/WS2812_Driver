#include "stm32f10x.h"
#include "bsp_rgbled.h"
#include "bsp_Systick.h"


int c=179999;

int main(void)
{
	  RGBLED_GPIO_Config();
    Reset();
	
//    Flash_Red();
//	  Flash_Blue();
//    Flash_Green();
//	
//	  Reset();
//	
//		Brightness(2);
//	  Brightness(1);
//	  Brightness(1);
//	
//		Brightness(4);
//	  Brightness(1);
//	  Brightness(1);
//	
//		Brightness(8);
//	  Brightness(1);
//	  Brightness(1);
//	
//	  Brightness(16);
//	  Brightness(1);
//	  Brightness(1);
//	
//	  Brightness(32);
//	  Brightness(1);
//	  Brightness(1);
//	
//	  Brightness(64);
//	  Brightness(1);
//	  Brightness(1);
//	
//	  Brightness(128);
//	  Brightness(1);
//	  Brightness(1);
//	
//	  Brightness(256);
//	  Brightness(1);
//	  Brightness(1);
	
	
	while(1)
	{	
		
    Circle();
	
		//Screen(8, 2, 0, 0, 0, 0, 0, 0, 0, 0);

		}
}


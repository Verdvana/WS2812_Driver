#include "bsp_SysTick.h"

static __IO u32 TimingDelay;
 
void SysTick_Init(void)
{
	/* SystemFrequency / 1000        1ms�ж�һ��
	 * SystemFrequency / 100000	     10us�ж�һ��
	 * SystemFrequency / 1000000     1us�ж�һ��
	 */                  
	if (SysTick_Config(SystemCoreClock / 1000000))	// ST3.5.0��汾
	{  
		while (1);
	}
	SysTick->CTRL &= ~ SysTick_CTRL_ENABLE_Msk;   // �رյδ�ʱ��  
}


void Delay_us(__IO u32 nTime)
{ 
	TimingDelay = nTime;	

	SysTick->CTRL |=  SysTick_CTRL_ENABLE_Msk;	 // ʹ�ܵδ�ʱ��  

	while(TimingDelay != 0);
}

/*****************************************************************************************/

void TimingDelay_Decrement(void)               //��Ҫ��ӵ��жϷ���SysTick_Handler��
{
	if (TimingDelay != 0x00)
	{ 
		TimingDelay--;
	}
}

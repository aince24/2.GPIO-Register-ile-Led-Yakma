
#include "stm32f4xx.h"
#include "stm32f4_discovery.h"

void config(){
 RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD, ENABLE);
 GPIOD->MODER= 0b01010101000000000000000000000000;
 GPIOD->OTYPER=0x00000000;
 GPIOD->OSPEEDR=0xFFFFFFFF;

 GPIOD->ODR=0x00000000;
}

void delay(uint32_t time){

	while(time--){

	}
}
int main(void)
{
  config();

  while (1)
  {
	  GPIOD->ODR=0xFFFFFFFF;
	  delay(168000000);
	  GPIOD->ODR=0x00000000;
	  delay(168000000);
  }
}


void EVAL_AUDIO_TransferComplete_CallBack(uint32_t pBuffer, uint32_t Size){
  /* TODO, implement your code here */
  return;
}

uint16_t EVAL_AUDIO_GetSampleCallBack(void){
  /* TODO, implement your code here */
  return -1;
}

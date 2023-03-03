/* Includes ------------------------------------------------------------------*/
#include "stm8s.h"
#include "int_test_stm8s_clk.h"

void delay(uint32_t time);
uint32_t clk = 0;

void main(void)
{
  clk_config_16MHz_hsi();
  GPIO_Init(GPIOB, (GPIO_Pin_TypeDef)(GPIO_PIN_2|GPIO_PIN_3|GPIO_PIN_4), GPIO_MODE_OUT_PP_LOW_FAST);
  clk = CLK_GetClockFreq();
  
  //24.000.000/512 = f
  //T = 1/f
  //100ms = 0.1 // 0.1/T = 4688; 1 chu ky de nhay vao ngat nen tru 1
  TIM2_TimeBaseInit(TIM2_PRESCALER_512,46874);
  TIM2_ClearFlag(TIM2_FLAG_UPDATE);
  TIM2_ITConfig(TIM2_IT_UPDATE, ENABLE); //Cho phep ngat
  
  enableInterrupts(); //Ngat toan cuc
  TIM2_Cmd(ENABLE); //Bat Timer2
  while (1)
  {
    GPIO_WriteReverse(GPIOB, (GPIO_Pin_TypeDef)(GPIO_PIN_2|GPIO_PIN_3|GPIO_PIN_4));
    delay(30000);
  }
  
}

void delay(uint32_t time)
{
  while(time--);
}

#ifdef USE_FULL_ASSERT
void assert_failed(u8* file, u32 line)
{
  while (1)
  {
  }
}
#endif

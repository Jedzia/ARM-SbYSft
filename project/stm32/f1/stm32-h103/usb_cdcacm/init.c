//
// Created by Jedzia on 16.04.2019.
//
//#include "../../../../../OpenBLT/Target/ARMCM3_STM32F1_Olimex_STM32H103_GCC/Boot/lib/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_rcc.h"
//#include <stm32f1xx_hal_rcc.h>
//#include <stm32f1xx_hal.h>
#include "io_config.h"

//#include <gpio.h>
//#include <gpio_common.h>
#include <stm32f1xx_hal_gpio.h>

#define GPIO11				(1 << 11)

__weak void HAL_Delay(uint32_t Delay)
{
	for (uint32_t i = 0; i < Delay * 1000; i++)
		__asm__("nop");

}

void HAL_GPIO_WritePin(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin, GPIO_PinState PinState)
{
  /* Check the parameters */
  //assert_param(IS_GPIO_PIN(GPIO_Pin));
  //assert_param(IS_GPIO_PIN_ACTION(PinState));

  if (PinState != GPIO_PIN_RESET)
  {
    GPIOx->BSRR = GPIO_Pin;
  }
  else
  {
    GPIOx->BSRR = (uint32_t)GPIO_Pin << 16U;
  }
}

void HAL_SETUP()
{
	//HAL_Init();
	//HAL_InitTick(TICK_INT_PRIORITY);
	HAL_GPIO_WritePin(USB_DISC_GPIO_Port, USB_DISC_Pin, GPIO_PIN_SET);
	HAL_Delay(100);
}
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

//void Error_Handler(void);

#define Button_Pin GPIO0
#define Button_GPIO_Port GPIOA
#define USB_P_Pin GPIO4
#define USB_P_GPIO_Port GPIOC
#define USB_DISC_Pin GPIO11
#define USB_DISC_GPIO_Port GPIOC
#define LED_Pin GPIO12
#define LED_GPIO_Port GPIOC
#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

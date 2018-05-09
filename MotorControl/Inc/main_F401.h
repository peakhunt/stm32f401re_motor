#ifndef __MAIN_H
#define __MAIN_H

#define B1_Pin                            GPIO_PIN_13
#define B1_GPIO_Port                      GPIOC
#define B1_EXTI_IRQn                      EXTI15_10_IRQn
#define BUSV_Pin                          GPIO_PIN_1
#define BUSV_GPIO_Port                    GPIOC
#define Temperature_feedback_Pin          GPIO_PIN_2
#define Temperature_feedback_GPIO_Port    GPIOC
#define BEMF1_Pin                         GPIO_PIN_3
#define BEMF1_GPIO_Port                   GPIOC
#define A__H1_Pin                         GPIO_PIN_0
#define A__H1_GPIO_Port                   GPIOA
#define Curr_fdbk2_Pin                    GPIO_PIN_1
#define Curr_fdbk2_GPIO_Port              GPIOA
#define USART_TX_Pin                      GPIO_PIN_2
#define USART_TX_GPIO_Port                GPIOA
#define USART_RX_Pin                      GPIO_PIN_3
#define USART_RX_GPIO_Port                GPIOA
#define LD2_Pin                           GPIO_PIN_5
#define LD2_GPIO_Port                     GPIOA
#define DIAG_EN_Pin                       GPIO_PIN_6
#define DIAG_EN_GPIO_Port                 GPIOA
#define BEMF3_Pin                         GPIO_PIN_7
#define BEMF3_GPIO_Port                   GPIOA
#define BEMF2_Pin                         GPIO_PIN_0
#define BEMF2_GPIO_Port                   GPIOB
#define SPEED_Pin                         GPIO_PIN_1
#define SPEED_GPIO_Port                   GPIOB
#define RED_LED_Pin                       GPIO_PIN_2
#define RED_LED_GPIO_Port                 GPIOB
#define Z__H3_Pin                         GPIO_PIN_10
#define Z__H3_GPIO_Port                   GPIOB
#define IN1_Pin                           GPIO_PIN_8
#define IN1_GPIO_Port                     GPIOA
#define IN2_Pin                           GPIO_PIN_9
#define IN2_GPIO_Port                     GPIOA
#define IN3_Pin                           GPIO_PIN_10
#define IN3_GPIO_Port                     GPIOA
#define CPOUT_Pin                         GPIO_PIN_12
#define CPOUT_GPIO_Port                   GPIOA
#define TMS_Pin                           GPIO_PIN_13
#define TMS_GPIO_Port                     GPIOA
#define TCK_Pin                           GPIO_PIN_14
#define TCK_GPIO_Port                     GPIOA
#define EN1_Pin                           GPIO_PIN_10
#define EN1_GPIO_Port                     GPIOC
#define EN2_Pin                           GPIO_PIN_11
#define EN2_GPIO_Port                     GPIOC
#define EN3_Pin                           GPIO_PIN_12
#define EN3_GPIO_Port                     GPIOC
#define B__H2_Pin                         GPIO_PIN_3
#define B__H2_GPIO_Port                   GPIOB
#define CURRENT_REF_Pin                   GPIO_PIN_4
#define CURRENT_REF_GPIO_Port             GPIOB

void _Error_Handler(char *, int);

#define Error_Handler() _Error_Handler(__FILE__, __LINE__)

#endif /* __MAIN_H */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __L6230_H
#define __L6230_H

#include "stdint.h" 
#include "MC_Common.h"

extern void L6230_ECH1CH2_DCH3_IO_Write(void);
extern void L6230_ECH1CH3_DCH2_IO_Write(void);
extern void L6230_ECH2CH3_DCH1_IO_Write(void);
extern void L6230_DCH1CH2CH3_IO_Write(void);
extern void L6230_Start_PWM_generation(void); 
extern void L6230_Stop_PWM_generation(void);
extern void L6230_HFTIM_DC_CH1(uint16_t CCR_value);
extern void L6230_HFTIM_DC_CH2(uint16_t CCR_value);
extern void L6230_HFTIM_DC_CH3(uint16_t CCR_value);
extern void START_Ref_Generation(void);
extern void STOP_Ref_Generation(void);
extern void Set_Ref_Generation(uint16_t);

void EnableInput_CH1_E_CH2_E_CH3_D(void);
void EnableInput_CH1_E_CH2_D_CH3_E(void);
void EnableInput_CH1_D_CH2_E_CH3_E(void);
void DisableInput_CH1_D_CH2_D_CH3_D(void);
void Start_PWM_driving(void);
void Stop_PWM_driving(void);
void HF_TIMx_SetDutyCycle_CH1(uint16_t);
void HF_TIMx_SetDutyCycle_CH2(uint16_t);
void HF_TIMx_SetDutyCycle_CH3(uint16_t);
void Current_Reference_Start(void);
void Current_Reference_Stop(void);
void Current_Reference_Setvalue(uint16_t);


/** @addtogroup DRIVERS     DRIVERS 
 * @brief  Driver Layer
 * @{ 
 */

/** @addtogroup BSP    BSP
 * @brief  BSP Layer
 * @{ 
 */

/** @addtogroup COMPONENTS    COMPONENTS
 * @brief  Components
 * @{ 
 */

/** @addtogroup L6230    L6230
 * @brief  L6230 driver section
 * @{ 
 */



/**
 * @} 
 */

#endif

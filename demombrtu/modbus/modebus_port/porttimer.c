/*
 * FreeModbus Libary: BARE Port
 * Copyright (C) 2006 Christian Walter <wolti@sil.at>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 * File: $Id: porttimer.c,v 1.1 2006/08/22 21:35:13 wolti Exp $
 */

/* ----------------------- Platform includes --------------------------------*/
#include "port.h"
 #include "stdint.h"
/* ----------------------- Modbus includes ----------------------------------*/
#include "mb.h"
#include "mbport.h"
//#include "tim.h"
#include "Config_CMT0.h"

/* ----------------------- static functions ---------------------------------*/
//static void prvvTIMERExpiredISR( void );
 
/* -----------------------    variables     ---------------------------------*/

uint16_t timeout = 0;
uint16_t downcounter = 0;
 
/* ----------------------- Start implementation -----------------------------*/
BOOL
xMBPortTimersInit( USHORT usTim1Timerout50us )
{
//  TIM_MasterConfigTypeDef sMasterConfig;
//
//  htim3.Instance = TIM3;
//  htim3.Init.Prescaler = (HAL_RCC_GetPCLK1Freq() / 1000000) - 1;
//  htim3.Init.CounterMode = TIM_COUNTERMODE_UP;
//  htim3.Init.Period = 50 - 1;
  
  timeout = usTim1Timerout50us;
  
//  if (HAL_TIM_Base_Init(&htim3) != HAL_OK)
//  {
//    return FALSE;
//  }
//
//  sMasterConfig.MasterOutputTrigger = TIM_TRGO_UPDATE;
//  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
//  if (HAL_TIMEx_MasterConfigSynchronization(&htim3, &sMasterConfig) != HAL_OK)
//  {
//    return FALSE;
//  }
//
  return TRUE;
}
 
 
void
vMBPortTimersEnable(  )
{
  /* Enable the timer with the timeout passed to xMBPortTimersInit( ) */
  downcounter = timeout;
//  HAL_TIM_Base_Start_IT(&htim3);
  R_Config_CMT0_Start();
}
 
void
vMBPortTimersDisable(  )
{
  /* Disable any pending timers. */
//  HAL_TIM_Base_Stop_IT(&htim3);
	R_Config_CMT0_Stop();
}
 
/* Create an ISR which is called whenever the timer has expired. This function
* must then call pxMBPortCBTimerExpired( ) to notify the protocol stack that
* the timer has expired.
 
static void prvvTIMERExpiredISR( void )
{
( void )pxMBPortCBTimerExpired(  );
}
*/

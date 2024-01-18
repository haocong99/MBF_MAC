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
 * File: $Id: portserial.c,v 1.1 2006/08/22 21:35:13 wolti Exp $
 */

#include "port.h"
 
/* ----------------------- Modbus includes ----------------------------------*/
#include "mb.h"
#include "mbport.h"
//#include "usart.h"
#include "Config_SCI12.h"
#include "r_smc_entry.h"
#include "r_gpio_rx_if.h"

/* ----------------------- static functions ---------------------------------*/
//static void prvvUARTTxReadyISR( void );
//static void prvvUARTRxISR( void );
char singlechar;
 BOOL xSerial=0;
/* -----------------------    variables     ---------------------------------*/
 
/* ----------------------- Start implementation -----------------------------*/
void
vMBPortSerialEnable( BOOL xRxEnable, BOOL xTxEnable )
{
  /* If xRXEnable enable serial receive interrupts. If xTxENable enable
  * transmitter empty interrupts.
  */
  
  if (xRxEnable ) {
//    __HAL_UART_ENABLE_IT(&huart1, UART_IT_RXNE);
	  R_Config_SCI12_Serial_Receive_Enable();
	  R_Config_SCI12_Serial_Receive((uint8_t*)&singlechar, 1);

  } else {    
//    __HAL_UART_DISABLE_IT(&huart1, UART_IT_RXNE);
	  R_Config_SCI12_Serial_Receive_Disable();
  }
  
  if (xTxEnable ) {

//    __HAL_UART_ENABLE_IT(&huart1, UART_IT_TXE);
	  R_Config_SCI12_Serial_Tranmitter_Enable();
	  xSerial=1;
	  pxMBFrameCBTransmitterEmpty();
	  xSerial+=100;
	  //pxMBFrameCBTransmitterEmpty();

  } else {
//    __HAL_UART_DISABLE_IT(&huart1, UART_IT_TXE);
	  R_Config_SCI12_Serial_Tranmitter_Disable();
  }  
}
 
BOOL
xMBPortSerialInit( UCHAR ucPORT, ULONG ulBaudRate, UCHAR ucDataBits)
{
  /* 
  Do nothing, Initialization is handled by MX_USART3_UART_Init() 
  Fixed port, baudrate, databit and parity  
  */
  return TRUE;
}
 
BOOL
xMBPortSerialPutBytes(volatile UCHAR *ucByte, USHORT usSize)
{
  /* Put a byte in the UARTs transmit buffer. This function is called
  * by the protocol stack if pxMBFrameCBTransmitterEmpty( ) has been
  * called. */
//  return (HAL_OK == HAL_UART_Transmit(&huart1, (uint8_t*)&ucByte, 1, 10));
	//R_Config_SCI12_Serial_Send((uint8_t * const)&ucByte,1);
	R_GPIO_PinWrite(GPIO_PORT_E_PIN_0, GPIO_LEVEL_HIGH);
	//R_SCI12_AsyncTransmit ((uint8_t * const)&ucByte,usSize,false);
	//R_SCI12_AsyncTransmit((uint8_t*)ucByte,usSize);
	R_GPIO_PinWrite(GPIO_PORT_E_PIN_0, GPIO_LEVEL_LOW);
	return TRUE;
}
 
BOOL
xMBPortSerialGetByte( CHAR * pucByte )
{
  /* Return the byte in the UARTs receive buffer. This function is called
  * by the protocol stack after pxMBFrameCBByteReceived( ) has been called.
  */
//  *pucByte = (uint8_t)(huart1.Instance->DR& (uint8_t)0x00FF);
	*pucByte = singlechar;
  return TRUE;
}
 
/* Create an interrupt handler for the transmit buffer empty interrupt
* (or an equivalent) for your target processor. This function should then
* call pxMBFrameCBTransmitterEmpty( ) which tells the protocol stack that
* a new character can be sent. The protocol stack will then call 
* xMBPortSerialPutByte( ) to send the character.
 
static void prvvUARTTxReadyISR( void )
{
pxMBFrameCBTransmitterEmpty(  );
}
*/
 
/* Create an interrupt handler for the receive interrupt for your target
* processor. This function should then call pxMBFrameCBByteReceived( ). The
* protocol stack will then call xMBPortSerialGetByte( ) to retrieve the
* character.
 
static void prvvUARTRxISR( void )
{
pxMBFrameCBByteReceived(  );
}
*/

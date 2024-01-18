/***********************************************************************
*
*  FILE        : blink.c
*  DATE        : 2024-01-04
*  DESCRIPTION : Main Program
*
*  NOTE:THIS IS A TYPICAL EXAMPLE.
*
***********************************************************************/
#include "r_smc_entry.h"
#include "r_gpio_rx_if.h"
#include "string.h"
char print_str[200];
//extern char rx1_buff[60];
extern volatile uint8_t g_rx_char;
extern volatile uint8_t SCI12_rxdone;
int i=0;
#define RS485_DE1 (PORTE.PODR.BIT.B0)
int main(void);

uint32_t g_blinkcnt;

int x=5;

//MD_STATUS R_SCI12_AsyncTransmit (uint8_t * const tx_buf,uint16_t tx_num);

int main(void)
{
	R_Config_SCI12_Start();// RS485 Connect MCC
	R_Config_SCI12_Serial_Receive((uint8_t *)&g_rx_char, 1);
	while(1)
	{

		R_GPIO_PinWrite(GPIO_PORT_2_PIN_7, GPIO_LEVEL_HIGH);
		//		delay_ms(500);
		R_BSP_SoftwareDelay(500, BSP_DELAY_MILLISECS);

		R_GPIO_PinWrite(GPIO_PORT_2_PIN_7, GPIO_LEVEL_LOW);
		R_BSP_SoftwareDelay(500, BSP_DELAY_MILLISECS);
		for(i=0;i<10;i++)
		{
			memset(print_str, 0, sizeof(print_str));
			sprintf(print_str, "Hao dep zai: ID: %d",i);
			R_BSP_SoftwareDelay(1000, BSP_DELAY_MILLISECS);
			RS485_DE1 = 1U; //RS485 send mode
			R_SCI12_AsyncTransmit((uint8_t*)print_str,strlen(print_str));
			RS485_DE1 = 0U; //RS485 send mode
			memset(print_str, 0, sizeof(print_str));
			g_blinkcnt++;
			if(SCI12_rxdone==1U)
			{
				printf("nhan dc");
				SCI12_rxdone=0U;
			}
		}



	}
}

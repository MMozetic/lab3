/*****************************************************************************
* Filename:          D:\RA92-2016\lab3/drivers/my_peripheral_v1_00_a/src/my_peripheral.c
* Version:           1.00.a
* Description:       my_peripheral Driver Source File
* Date:              Mon Mar 18 10:15:23 2019 (by Create and Import Peripheral Wizard)
*****************************************************************************/


/***************************** Include Files *******************************/

#include "my_peripheral.h"

/************************** Function Definitions ***************************/
void MY_PERIPHERAL_ClearScreen(){xil_printf("%c[2J",27);}

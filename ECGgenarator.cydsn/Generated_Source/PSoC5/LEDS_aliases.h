/*******************************************************************************
* File Name: LEDS.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_LEDS_ALIASES_H) /* Pins LEDS_ALIASES_H */
#define CY_PINS_LEDS_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define LEDS_0			(LEDS__0__PC)
#define LEDS_0_INTR	((uint16)((uint16)0x0001u << LEDS__0__SHIFT))

#define LEDS_1			(LEDS__1__PC)
#define LEDS_1_INTR	((uint16)((uint16)0x0001u << LEDS__1__SHIFT))

#define LEDS_INTR_ALL	 ((uint16)(LEDS_0_INTR| LEDS_1_INTR))

#endif /* End Pins LEDS_ALIASES_H */


/* [] END OF FILE */

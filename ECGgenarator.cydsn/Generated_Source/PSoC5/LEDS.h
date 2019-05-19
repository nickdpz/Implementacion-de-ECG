/*******************************************************************************
* File Name: LEDS.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_LEDS_H) /* Pins LEDS_H */
#define CY_PINS_LEDS_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "LEDS_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 LEDS__PORT == 15 && ((LEDS__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    LEDS_Write(uint8 value);
void    LEDS_SetDriveMode(uint8 mode);
uint8   LEDS_ReadDataReg(void);
uint8   LEDS_Read(void);
void    LEDS_SetInterruptMode(uint16 position, uint16 mode);
uint8   LEDS_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the LEDS_SetDriveMode() function.
     *  @{
     */
        #define LEDS_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define LEDS_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define LEDS_DM_RES_UP          PIN_DM_RES_UP
        #define LEDS_DM_RES_DWN         PIN_DM_RES_DWN
        #define LEDS_DM_OD_LO           PIN_DM_OD_LO
        #define LEDS_DM_OD_HI           PIN_DM_OD_HI
        #define LEDS_DM_STRONG          PIN_DM_STRONG
        #define LEDS_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define LEDS_MASK               LEDS__MASK
#define LEDS_SHIFT              LEDS__SHIFT
#define LEDS_WIDTH              2u

/* Interrupt constants */
#if defined(LEDS__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in LEDS_SetInterruptMode() function.
     *  @{
     */
        #define LEDS_INTR_NONE      (uint16)(0x0000u)
        #define LEDS_INTR_RISING    (uint16)(0x0001u)
        #define LEDS_INTR_FALLING   (uint16)(0x0002u)
        #define LEDS_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define LEDS_INTR_MASK      (0x01u) 
#endif /* (LEDS__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define LEDS_PS                     (* (reg8 *) LEDS__PS)
/* Data Register */
#define LEDS_DR                     (* (reg8 *) LEDS__DR)
/* Port Number */
#define LEDS_PRT_NUM                (* (reg8 *) LEDS__PRT) 
/* Connect to Analog Globals */                                                  
#define LEDS_AG                     (* (reg8 *) LEDS__AG)                       
/* Analog MUX bux enable */
#define LEDS_AMUX                   (* (reg8 *) LEDS__AMUX) 
/* Bidirectional Enable */                                                        
#define LEDS_BIE                    (* (reg8 *) LEDS__BIE)
/* Bit-mask for Aliased Register Access */
#define LEDS_BIT_MASK               (* (reg8 *) LEDS__BIT_MASK)
/* Bypass Enable */
#define LEDS_BYP                    (* (reg8 *) LEDS__BYP)
/* Port wide control signals */                                                   
#define LEDS_CTL                    (* (reg8 *) LEDS__CTL)
/* Drive Modes */
#define LEDS_DM0                    (* (reg8 *) LEDS__DM0) 
#define LEDS_DM1                    (* (reg8 *) LEDS__DM1)
#define LEDS_DM2                    (* (reg8 *) LEDS__DM2) 
/* Input Buffer Disable Override */
#define LEDS_INP_DIS                (* (reg8 *) LEDS__INP_DIS)
/* LCD Common or Segment Drive */
#define LEDS_LCD_COM_SEG            (* (reg8 *) LEDS__LCD_COM_SEG)
/* Enable Segment LCD */
#define LEDS_LCD_EN                 (* (reg8 *) LEDS__LCD_EN)
/* Slew Rate Control */
#define LEDS_SLW                    (* (reg8 *) LEDS__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define LEDS_PRTDSI__CAPS_SEL       (* (reg8 *) LEDS__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define LEDS_PRTDSI__DBL_SYNC_IN    (* (reg8 *) LEDS__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define LEDS_PRTDSI__OE_SEL0        (* (reg8 *) LEDS__PRTDSI__OE_SEL0) 
#define LEDS_PRTDSI__OE_SEL1        (* (reg8 *) LEDS__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define LEDS_PRTDSI__OUT_SEL0       (* (reg8 *) LEDS__PRTDSI__OUT_SEL0) 
#define LEDS_PRTDSI__OUT_SEL1       (* (reg8 *) LEDS__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define LEDS_PRTDSI__SYNC_OUT       (* (reg8 *) LEDS__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(LEDS__SIO_CFG)
    #define LEDS_SIO_HYST_EN        (* (reg8 *) LEDS__SIO_HYST_EN)
    #define LEDS_SIO_REG_HIFREQ     (* (reg8 *) LEDS__SIO_REG_HIFREQ)
    #define LEDS_SIO_CFG            (* (reg8 *) LEDS__SIO_CFG)
    #define LEDS_SIO_DIFF           (* (reg8 *) LEDS__SIO_DIFF)
#endif /* (LEDS__SIO_CFG) */

/* Interrupt Registers */
#if defined(LEDS__INTSTAT)
    #define LEDS_INTSTAT            (* (reg8 *) LEDS__INTSTAT)
    #define LEDS_SNAP               (* (reg8 *) LEDS__SNAP)
    
	#define LEDS_0_INTTYPE_REG 		(* (reg8 *) LEDS__0__INTTYPE)
	#define LEDS_1_INTTYPE_REG 		(* (reg8 *) LEDS__1__INTTYPE)
#endif /* (LEDS__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_LEDS_H */


/* [] END OF FILE */

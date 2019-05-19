/*******************************************************************************
* File Name: POUT.h  
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

#if !defined(CY_PINS_POUT_H) /* Pins POUT_H */
#define CY_PINS_POUT_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "POUT_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 POUT__PORT == 15 && ((POUT__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    POUT_Write(uint8 value);
void    POUT_SetDriveMode(uint8 mode);
uint8   POUT_ReadDataReg(void);
uint8   POUT_Read(void);
void    POUT_SetInterruptMode(uint16 position, uint16 mode);
uint8   POUT_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the POUT_SetDriveMode() function.
     *  @{
     */
        #define POUT_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define POUT_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define POUT_DM_RES_UP          PIN_DM_RES_UP
        #define POUT_DM_RES_DWN         PIN_DM_RES_DWN
        #define POUT_DM_OD_LO           PIN_DM_OD_LO
        #define POUT_DM_OD_HI           PIN_DM_OD_HI
        #define POUT_DM_STRONG          PIN_DM_STRONG
        #define POUT_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define POUT_MASK               POUT__MASK
#define POUT_SHIFT              POUT__SHIFT
#define POUT_WIDTH              1u

/* Interrupt constants */
#if defined(POUT__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in POUT_SetInterruptMode() function.
     *  @{
     */
        #define POUT_INTR_NONE      (uint16)(0x0000u)
        #define POUT_INTR_RISING    (uint16)(0x0001u)
        #define POUT_INTR_FALLING   (uint16)(0x0002u)
        #define POUT_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define POUT_INTR_MASK      (0x01u) 
#endif /* (POUT__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define POUT_PS                     (* (reg8 *) POUT__PS)
/* Data Register */
#define POUT_DR                     (* (reg8 *) POUT__DR)
/* Port Number */
#define POUT_PRT_NUM                (* (reg8 *) POUT__PRT) 
/* Connect to Analog Globals */                                                  
#define POUT_AG                     (* (reg8 *) POUT__AG)                       
/* Analog MUX bux enable */
#define POUT_AMUX                   (* (reg8 *) POUT__AMUX) 
/* Bidirectional Enable */                                                        
#define POUT_BIE                    (* (reg8 *) POUT__BIE)
/* Bit-mask for Aliased Register Access */
#define POUT_BIT_MASK               (* (reg8 *) POUT__BIT_MASK)
/* Bypass Enable */
#define POUT_BYP                    (* (reg8 *) POUT__BYP)
/* Port wide control signals */                                                   
#define POUT_CTL                    (* (reg8 *) POUT__CTL)
/* Drive Modes */
#define POUT_DM0                    (* (reg8 *) POUT__DM0) 
#define POUT_DM1                    (* (reg8 *) POUT__DM1)
#define POUT_DM2                    (* (reg8 *) POUT__DM2) 
/* Input Buffer Disable Override */
#define POUT_INP_DIS                (* (reg8 *) POUT__INP_DIS)
/* LCD Common or Segment Drive */
#define POUT_LCD_COM_SEG            (* (reg8 *) POUT__LCD_COM_SEG)
/* Enable Segment LCD */
#define POUT_LCD_EN                 (* (reg8 *) POUT__LCD_EN)
/* Slew Rate Control */
#define POUT_SLW                    (* (reg8 *) POUT__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define POUT_PRTDSI__CAPS_SEL       (* (reg8 *) POUT__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define POUT_PRTDSI__DBL_SYNC_IN    (* (reg8 *) POUT__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define POUT_PRTDSI__OE_SEL0        (* (reg8 *) POUT__PRTDSI__OE_SEL0) 
#define POUT_PRTDSI__OE_SEL1        (* (reg8 *) POUT__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define POUT_PRTDSI__OUT_SEL0       (* (reg8 *) POUT__PRTDSI__OUT_SEL0) 
#define POUT_PRTDSI__OUT_SEL1       (* (reg8 *) POUT__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define POUT_PRTDSI__SYNC_OUT       (* (reg8 *) POUT__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(POUT__SIO_CFG)
    #define POUT_SIO_HYST_EN        (* (reg8 *) POUT__SIO_HYST_EN)
    #define POUT_SIO_REG_HIFREQ     (* (reg8 *) POUT__SIO_REG_HIFREQ)
    #define POUT_SIO_CFG            (* (reg8 *) POUT__SIO_CFG)
    #define POUT_SIO_DIFF           (* (reg8 *) POUT__SIO_DIFF)
#endif /* (POUT__SIO_CFG) */

/* Interrupt Registers */
#if defined(POUT__INTSTAT)
    #define POUT_INTSTAT            (* (reg8 *) POUT__INTSTAT)
    #define POUT_SNAP               (* (reg8 *) POUT__SNAP)
    
	#define POUT_0_INTTYPE_REG 		(* (reg8 *) POUT__0__INTTYPE)
#endif /* (POUT__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_POUT_H */


/* [] END OF FILE */

/*******************************************************************************
* File Name: cyfitter.h
* 
* PSoC Creator  4.2
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2018 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice.h"
#include "cydevice_trm.h"

/* SW */
#define SW__0__INTTYPE CYREG_PICU2_INTTYPE2
#define SW__0__MASK 0x04u
#define SW__0__PC CYREG_PRT2_PC2
#define SW__0__PORT 2u
#define SW__0__SHIFT 2u
#define SW__AG CYREG_PRT2_AG
#define SW__AMUX CYREG_PRT2_AMUX
#define SW__BIE CYREG_PRT2_BIE
#define SW__BIT_MASK CYREG_PRT2_BIT_MASK
#define SW__BYP CYREG_PRT2_BYP
#define SW__CTL CYREG_PRT2_CTL
#define SW__DM0 CYREG_PRT2_DM0
#define SW__DM1 CYREG_PRT2_DM1
#define SW__DM2 CYREG_PRT2_DM2
#define SW__DR CYREG_PRT2_DR
#define SW__INP_DIS CYREG_PRT2_INP_DIS
#define SW__INTSTAT CYREG_PICU2_INTSTAT
#define SW__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define SW__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define SW__LCD_EN CYREG_PRT2_LCD_EN
#define SW__MASK 0x04u
#define SW__PORT 2u
#define SW__PRT CYREG_PRT2_PRT
#define SW__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define SW__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define SW__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define SW__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define SW__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define SW__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define SW__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define SW__PS CYREG_PRT2_PS
#define SW__SHIFT 2u
#define SW__SLW CYREG_PRT2_SLW
#define SW__SNAP CYREG_PICU2_SNAP

/* ISR */
#define ISR__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define ISR__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define ISR__INTC_MASK 0x40u
#define ISR__INTC_NUMBER 6u
#define ISR__INTC_PRIOR_NUM 7u
#define ISR__INTC_PRIOR_REG CYREG_NVIC_PRI_6
#define ISR__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define ISR__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* LEDS */
#define LEDS__0__INTTYPE CYREG_PICU0_INTTYPE6
#define LEDS__0__MASK 0x40u
#define LEDS__0__PC CYREG_PRT0_PC6
#define LEDS__0__PORT 0u
#define LEDS__0__SHIFT 6u
#define LEDS__1__INTTYPE CYREG_PICU0_INTTYPE7
#define LEDS__1__MASK 0x80u
#define LEDS__1__PC CYREG_PRT0_PC7
#define LEDS__1__PORT 0u
#define LEDS__1__SHIFT 7u
#define LEDS__AG CYREG_PRT0_AG
#define LEDS__AMUX CYREG_PRT0_AMUX
#define LEDS__BIE CYREG_PRT0_BIE
#define LEDS__BIT_MASK CYREG_PRT0_BIT_MASK
#define LEDS__BYP CYREG_PRT0_BYP
#define LEDS__CTL CYREG_PRT0_CTL
#define LEDS__DM0 CYREG_PRT0_DM0
#define LEDS__DM1 CYREG_PRT0_DM1
#define LEDS__DM2 CYREG_PRT0_DM2
#define LEDS__DR CYREG_PRT0_DR
#define LEDS__INP_DIS CYREG_PRT0_INP_DIS
#define LEDS__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define LEDS__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define LEDS__LCD_EN CYREG_PRT0_LCD_EN
#define LEDS__MASK 0xC0u
#define LEDS__PORT 0u
#define LEDS__PRT CYREG_PRT0_PRT
#define LEDS__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define LEDS__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define LEDS__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define LEDS__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define LEDS__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define LEDS__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define LEDS__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define LEDS__PS CYREG_PRT0_PS
#define LEDS__SHIFT 6u
#define LEDS__SLW CYREG_PRT0_SLW

/* POUT */
#define POUT__0__INTTYPE CYREG_PICU2_INTTYPE1
#define POUT__0__MASK 0x02u
#define POUT__0__PC CYREG_PRT2_PC1
#define POUT__0__PORT 2u
#define POUT__0__SHIFT 1u
#define POUT__AG CYREG_PRT2_AG
#define POUT__AMUX CYREG_PRT2_AMUX
#define POUT__BIE CYREG_PRT2_BIE
#define POUT__BIT_MASK CYREG_PRT2_BIT_MASK
#define POUT__BYP CYREG_PRT2_BYP
#define POUT__CTL CYREG_PRT2_CTL
#define POUT__DM0 CYREG_PRT2_DM0
#define POUT__DM1 CYREG_PRT2_DM1
#define POUT__DM2 CYREG_PRT2_DM2
#define POUT__DR CYREG_PRT2_DR
#define POUT__INP_DIS CYREG_PRT2_INP_DIS
#define POUT__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define POUT__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define POUT__LCD_EN CYREG_PRT2_LCD_EN
#define POUT__MASK 0x02u
#define POUT__PORT 2u
#define POUT__PRT CYREG_PRT2_PRT
#define POUT__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define POUT__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define POUT__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define POUT__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define POUT__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define POUT__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define POUT__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define POUT__PS CYREG_PRT2_PS
#define POUT__SHIFT 1u
#define POUT__SLW CYREG_PRT2_SLW

/* VDAC8_viDAC8 */
#define VDAC8_viDAC8__CR0 CYREG_DAC0_CR0
#define VDAC8_viDAC8__CR1 CYREG_DAC0_CR1
#define VDAC8_viDAC8__D CYREG_DAC0_D
#define VDAC8_viDAC8__PM_ACT_CFG CYREG_PM_ACT_CFG8
#define VDAC8_viDAC8__PM_ACT_MSK 0x01u
#define VDAC8_viDAC8__PM_STBY_CFG CYREG_PM_STBY_CFG8
#define VDAC8_viDAC8__PM_STBY_MSK 0x01u
#define VDAC8_viDAC8__STROBE CYREG_DAC0_STROBE
#define VDAC8_viDAC8__SW0 CYREG_DAC0_SW0
#define VDAC8_viDAC8__SW2 CYREG_DAC0_SW2
#define VDAC8_viDAC8__SW3 CYREG_DAC0_SW3
#define VDAC8_viDAC8__SW4 CYREG_DAC0_SW4
#define VDAC8_viDAC8__TR CYREG_DAC0_TR
#define VDAC8_viDAC8__TRIM__M1 CYREG_FLSHID_CUST_TABLES_DAC0_M1
#define VDAC8_viDAC8__TRIM__M2 CYREG_FLSHID_CUST_TABLES_DAC0_M2
#define VDAC8_viDAC8__TRIM__M3 CYREG_FLSHID_CUST_TABLES_DAC0_M3
#define VDAC8_viDAC8__TRIM__M4 CYREG_FLSHID_CUST_TABLES_DAC0_M4
#define VDAC8_viDAC8__TRIM__M5 CYREG_FLSHID_CUST_TABLES_DAC0_M5
#define VDAC8_viDAC8__TRIM__M6 CYREG_FLSHID_CUST_TABLES_DAC0_M6
#define VDAC8_viDAC8__TRIM__M7 CYREG_FLSHID_CUST_TABLES_DAC0_M7
#define VDAC8_viDAC8__TRIM__M8 CYREG_FLSHID_CUST_TABLES_DAC0_M8
#define VDAC8_viDAC8__TST CYREG_DAC0_TST

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 24000000U
#define BCLK__BUS_CLK__KHZ 24000U
#define BCLK__BUS_CLK__MHZ 24U
#define CY_PROJECT_NAME "ECGgenarator"
#define CY_VERSION "PSoC Creator  4.2"
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 18u
#define CYDEV_CHIP_DIE_PSOC5LP 2u
#define CYDEV_CHIP_DIE_PSOC5TM 3u
#define CYDEV_CHIP_DIE_TMA4 4u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_FM0P 5u
#define CYDEV_CHIP_FAMILY_FM3 6u
#define CYDEV_CHIP_FAMILY_FM4 7u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_PSOC6 4u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E161069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 18u
#define CYDEV_CHIP_MEMBER_4D 13u
#define CYDEV_CHIP_MEMBER_4E 6u
#define CYDEV_CHIP_MEMBER_4F 19u
#define CYDEV_CHIP_MEMBER_4G 4u
#define CYDEV_CHIP_MEMBER_4H 17u
#define CYDEV_CHIP_MEMBER_4I 23u
#define CYDEV_CHIP_MEMBER_4J 14u
#define CYDEV_CHIP_MEMBER_4K 15u
#define CYDEV_CHIP_MEMBER_4L 22u
#define CYDEV_CHIP_MEMBER_4M 21u
#define CYDEV_CHIP_MEMBER_4N 10u
#define CYDEV_CHIP_MEMBER_4O 7u
#define CYDEV_CHIP_MEMBER_4P 20u
#define CYDEV_CHIP_MEMBER_4Q 12u
#define CYDEV_CHIP_MEMBER_4R 8u
#define CYDEV_CHIP_MEMBER_4S 11u
#define CYDEV_CHIP_MEMBER_4T 9u
#define CYDEV_CHIP_MEMBER_4U 5u
#define CYDEV_CHIP_MEMBER_4V 16u
#define CYDEV_CHIP_MEMBER_5A 3u
#define CYDEV_CHIP_MEMBER_5B 2u
#define CYDEV_CHIP_MEMBER_6A 24u
#define CYDEV_CHIP_MEMBER_FM3 28u
#define CYDEV_CHIP_MEMBER_FM4 29u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 25u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 26u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 27u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5B
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES0 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES1 1u
#define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4P_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4R_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4S_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4T_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4V_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_6A_ES 17u
#define CYDEV_CHIP_REVISION_6A_NO_UDB 33u
#define CYDEV_CHIP_REVISION_6A_PRODUCTION 33u
#define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5B_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_DMA 0
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_ENABLE_MASK 0x20u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x00000000u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 5.0
#define CYDEV_VDDIO0_MV 5000
#define CYDEV_VDDIO1 5.0
#define CYDEV_VDDIO1_MV 5000
#define CYDEV_VDDIO2 5.0
#define CYDEV_VDDIO2_MV 5000
#define CYDEV_VDDIO3 5.0
#define CYDEV_VDDIO3_MV 5000
#define CYDEV_VIO0 5.0
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5.0
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5.0
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5.0
#define CYDEV_VIO3_MV 5000
#define CYIPBLOCK_ARM_CM3_VERSION 0
#define CYIPBLOCK_P3_ANAIF_VERSION 0
#define CYIPBLOCK_P3_CAN_VERSION 0
#define CYIPBLOCK_P3_CAPSENSE_VERSION 0
#define CYIPBLOCK_P3_COMP_VERSION 0
#define CYIPBLOCK_P3_DECIMATOR_VERSION 0
#define CYIPBLOCK_P3_DFB_VERSION 0
#define CYIPBLOCK_P3_DMA_VERSION 0
#define CYIPBLOCK_P3_DRQ_VERSION 0
#define CYIPBLOCK_P3_DSM_VERSION 0
#define CYIPBLOCK_P3_EMIF_VERSION 0
#define CYIPBLOCK_P3_I2C_VERSION 0
#define CYIPBLOCK_P3_LCD_VERSION 0
#define CYIPBLOCK_P3_LPF_VERSION 0
#define CYIPBLOCK_P3_OPAMP_VERSION 0
#define CYIPBLOCK_P3_PM_VERSION 0
#define CYIPBLOCK_P3_SCCT_VERSION 0
#define CYIPBLOCK_P3_TIMER_VERSION 0
#define CYIPBLOCK_P3_USB_VERSION 0
#define CYIPBLOCK_P3_VIDAC_VERSION 0
#define CYIPBLOCK_P3_VREF_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 0
#define CYIPBLOCK_S8_IRQ_VERSION 0
#define CYIPBLOCK_S8_SAR_VERSION 0
#define CYIPBLOCK_S8_SIO_VERSION 0
#define CYIPBLOCK_S8_UDB_VERSION 0
#define DMA_CHANNELS_USED__MASK0 0x00000000u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */

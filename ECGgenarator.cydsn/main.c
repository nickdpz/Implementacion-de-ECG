/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"

uint8 ECGrapido[]={36,36,36,36,37,38,49,50,61,73,78,79,86,90,77,77,66,64,55,47,34,39,37,42,40,35,35,35,56,56,63,71,76,70,61,41,36,43,35,39,35,32,40,85,127,165,194,237,228,190,159,114,77,42,24,23,2,13,23,33,32,37,0};
uint8 ECGideal[]={34,34,34,34,34,41,51,61,69,76,81,83,83,81,76,69,61,51,41,34,34,34,34,34,34,34,34,34,35,37,39,39,36,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,36,47,57,63,66,66,62,55,44,34,34,34,34,34,34,41,82,123,163,204,246,231,190,150,109,68,34,24,14,3,6,17,27,34,0};
uint8 ECGlento[]={35,34,39,42,44,49,59,64,72,77,70,62,61,42,36,39,41,41,34,34,56,102,138,183,224,252,212,179,142,97,59,32,32,16,7,12,21,31,44,43,36,45,42,48,63,59,73,80,86,82,89,79,81,77,66,58,42,41,38,34,38,37,36,41,40,39,36,48,49,41,43,43,46,46,38,35,44,34,35,38,44,41,41,46,41,33,44,41,39,37,36,40,36,34,35,36,36,41,44,44,44,43,45,44,36,46,34,42,36,36,38,36,40,46,0};
uint8 ECGreal[]={37,37,37,37,38,38,50,51,62,73,78,80,86,90,77,78,66,65,55,48,35,40,38,43,41,37,36,35,45,36,37,41,46,43,41,32,37,44,36,40,36,33,37,43,45,43,33,36,35,36,45,41,55,65,61,74,64,69,62,51,33,38,39,39,43,41,49,84,129,156,201,238,226,191,145,111,69,43,24,13,14,7,17,27,33,38,41,0};
uint8 i;
volatile uint8 cont=0;
uint8 lim=83;//,83 para ECGideal,61 para ECGrapido,115 para ECGlento, 87 para ECGreal 

CY_ISR(INT_SW){
    if(cont==3){
        cont=0;
    }else{
        cont++;
    }
 switch (cont)
    {
        case 0:
        lim=83;
        break;
        case 1:
        lim=87;
        break;
        case 2:
        lim=61;
        break;
        case 3:
        lim=115;
        break;
        
        default:
        break;
    }
    LEDS_Write(cont);
    SW_ClearInterrupt();    
}



int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    VDAC8_Start();
    ISR_StartEx(INT_SW);
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    VDAC8_SetValue(255);
    LEDS_Write(cont);
    for(;;)
    {
        switch (cont)
        {
            case 0:
            VDAC8_SetValue(ECGideal[i]);
            break;
            case 1:
            VDAC8_SetValue(ECGreal[i]);
            break;
            case 2:
            VDAC8_SetValue(ECGrapido[i]);
            break;
            case 3:
            VDAC8_SetValue(ECGlento[i]);
            break;
            default:
            /*
            VDAC8_SetValue(0);
            CyDelay(1000);
            VDAC8_SetValue(255);
            CyDelay(1000);*/
            break;
        }
        
        if(i==lim){
            i=0;
        }else{
        i++;
        }
        CyDelay(10);//Retardo de 10ms por que tienen un tiempo de muestreo de 100Hz
        
    }
}

/* [] END OF FILE */

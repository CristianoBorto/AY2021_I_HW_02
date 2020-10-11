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

#include "MyISR.h"


CY_ISR(custom_ISR_Deb)
{
    state++;
    LED_Write(1);
    CyDelay(100);
    LED_Write(0);
    
    if(state==8)
    {
        state=1;
        
    }
    
}

/* [] END OF FILE */

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
#include "MyFunction.h"


CY_ISR(custom_ISR_Deb)
{
    state++;
    Confirm_Blink();
    
    if(state==8)
    {
        state=1;
        
    }
    
}

/* [] END OF FILE */

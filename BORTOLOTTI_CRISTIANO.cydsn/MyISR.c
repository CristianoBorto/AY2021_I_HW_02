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
    state++;//Updating of flag in order to pass through states

    Confirm_Blink();//blinking used to confirm that the switch occured
    
    // required condition in order to return to the first case
    if(state==8)
    {
        state=1;
        
    }

}

/* [] END OF FILE */

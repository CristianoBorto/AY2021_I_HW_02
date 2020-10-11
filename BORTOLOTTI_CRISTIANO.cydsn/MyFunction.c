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
#include "MyFunction.h"

void Start_Blinking(void)
{
   PWM_Green_Start();
   PWM_Red_Start();
   Clock_Deb_Start();
   Clock_Green_Start();
   Clock_Red_Start();

}

void Confirm_Blink(void) //blinking used to confirm the switch from one state to another
{
    LED_Write(1);
    CyDelay(100);
    LED_Write(0);   
}


/* [] END OF FILE */

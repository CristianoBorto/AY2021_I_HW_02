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

void Start_Blinking(void) //starting of all PWMs and Clocks
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

void Set_Compare_Mode(uint8 a, uint8 value1, uint8 value2)
{
    if(a==0)
    {
        PWM_Red_SetCompareMode(value1);
        PWM_Green_SetCompareMode(value2);   
    }
    
    if(a==1)
    {
        PWM_Red_SetCompareMode(value1); 
    }
    
    if(a==2)
    {
        PWM_Green_SetCompareMode(value2); 
    }
}

/* [] END OF FILE */

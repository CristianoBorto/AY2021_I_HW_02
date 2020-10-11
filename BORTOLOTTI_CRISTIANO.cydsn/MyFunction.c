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

void Set_Compare_Mode(uint8 value1, uint8 value2)
{
        PWM_Red_SetCompareMode(value1);
        PWM_Green_SetCompareMode(value2);   
}

void Set_Period(uint8 value1, uint8 value2)
{
        PWM_Red_WritePeriod(value1);
        PWM_Green_WritePeriod(value2);     
}

void Set_Compare(uint8 value1, uint8 value2) //setting of the PWMs compare values, the first value is for red channel
{
    PWM_Red_WriteCompare(value1); 
    PWM_Green_WriteCompare(value2);

}

void Reset_Counter(void) //reset of the PWMs counters
{
    PWM_Red_WriteCounter(0);
    PWM_Green_WriteCounter(0);    
}

/* [] END OF FILE */

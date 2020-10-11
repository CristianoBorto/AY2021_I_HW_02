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

void Start_Blinking(void); //starting of all PWMs and Clocks

void Confirm_Blink(void); //blinking used to confirm the switch from one state to another

void Set_Compare_Mode(uint8 value1, uint8 value2); //setting of the PWMs compare modes, the first value is  for red channel

void Set_Period(uint8 value1, uint8 value2); //setting of the PWMs periods, the first value is for red channel

void Set_Compare(uint8 value1, uint8 value2); //setting of the PWMs compare values, the first value is for red channel

void Reset_Counter(void); //reset of the PWMs counters

/* [] END OF FILE */

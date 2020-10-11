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
#include "MyISR.h"
#include "MyFunction.h"

// definition of all kinds od states
#define step1 1
#define step2 2
#define step3 3
#define step4 4
#define step5 5
#define step6 6
#define step7 7


int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    ISR_Deb_StartEx(custom_ISR_Deb); //addressing the interrupt to my custom ISR and start
    Start_Blinking(); //starting of all PWMs and Clocks
    
    state=0; //initialization of the flag
    while(1)
    {
     if(state==step1){
            Set_Compare_Mode(0, 1, 1);
            PWM_Green_WritePeriod(255);
            PWM_Red_WritePeriod(255);
            PWM_Green_WriteCompare(0);
            PWM_Red_WriteCompare(0);
            PWM_Red_WriteCounter(0);
            PWM_Green_WriteCounter(0);
            while(state==step1);
        }
    
        if(state==step2){
            PWM_Green_WriteCompare(127);
            PWM_Red_WriteCompare(0);
            PWM_Red_WriteCounter(0);
            PWM_Green_WriteCounter(0);
            while(state==step2);
        }
        if(state==step3){
            Set_Compare_Mode(1, 3, 0);
            PWM_Green_WriteCompare(0);
            PWM_Red_WriteCompare(127);
            PWM_Red_WriteCounter(0);
            PWM_Red_WriteCounter(0);
            while(state==step3); //wait until click
        }
        if(state==step4){
            //set modality
            Set_Compare_Mode(0, 1, 3);
            // set period
            PWM_Green_WritePeriod(128);
            PWM_Red_WritePeriod(128);
            //set compare
            PWM_Green_WriteCompare(64);
            PWM_Red_WriteCompare(64);
            //set counter
            PWM_Red_WriteCounter(0);
            PWM_Green_WriteCounter(0);
            while(state==step4); //wait until click
        }
        if(state==step5){
            //set modality
            Set_Compare_Mode(0, 3, 1);
            // set period
            PWM_Green_WritePeriod(64);
            PWM_Red_WritePeriod(64);
            //set compare
            PWM_Green_WriteCompare(32);
            PWM_Red_WriteCompare(32);
            //set counter
            PWM_Red_WriteCounter(0);
            PWM_Green_WriteCounter(0);
            while(state==step5); //wait until click
        }
        if(state==step6){
            //set modality
            Set_Compare_Mode(1, 1, 0);
            // set period
            PWM_Green_WritePeriod(255);
            PWM_Red_WritePeriod(255);
            //set compare
            PWM_Green_WriteCompare(127);
            PWM_Red_WriteCompare(64);
            //set counter
            PWM_Red_WriteCounter(0);
            PWM_Green_WriteCounter(0);
            while(state==step6); //wait until click
        }
        if(state==step7){
            //set modality
            Set_Compare_Mode(1, 3, 0);
            // set period
            PWM_Green_WritePeriod(127);
            PWM_Red_WritePeriod(255);
            //set compare
            PWM_Green_WriteCompare(64);
            PWM_Red_WriteCompare(127);
            //set counter
            PWM_Red_WriteCounter(0);
            PWM_Green_WriteCounter(0);
            while(state==step7); //wait until click
        }

    }
}

/* [] END OF FILE */

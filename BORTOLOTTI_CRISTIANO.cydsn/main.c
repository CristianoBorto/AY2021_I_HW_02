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

//headers inclusion
#include "project.h"
#include "MyISR.h"
#include "MyFunction.h"

// definition of states
#define step1 1
#define step2 2
#define step3 3
#define step4 4
#define step5 5
#define step6 6
#define step7 7

// definition of modalities
#define Less 1
#define Less_Equal 2
#define Greater 3
#define Greater_Equal 4

// definition of time as fraction of period T=254 bit; with f=127 Hz we have a period of 2s
#define Full 254
#define Half 127
#define Quarter 64
#define One_Eighth 32
#define Always_On 0

int main(void)
{
    //initialization phase
    CyGlobalIntEnable; /* Enable global interrupts. */
    ISR_Deb_StartEx(custom_ISR_Deb); //addressing the interrupt to my custom ISR and start
    Confirm_Blink(); //check that the device is working and that the on-board is working
    Start_Peripherals(); //starting of all PWMs and Clocks
    
    state=step1; //initialization of the flag
    while(1)
    {
     if(state==step1){
            //set modality
            Set_Compare_Mode(Less, Less); //setting of the PWMs compare modes, the first value is for red channel
            // set period
            Set_Period(Full, Full); //setting of the PWMs periods, the first value is for red channel
            //set compare
            Set_Compare(Always_On, Always_On); //setting of the PWMs compare values, the first value is for red channel
            //reset counter
            Reset_Counter(); //reset of the PWMs counters
            while(state==step1); //wait until click
        }
    
        if(state==step2){
            /* I put this part anyway in order to make easier code modification in case of pattern modification
            //set modality
            Set_Compare_Mode(Less, Less); //setting of the PWMs compare modes, the first value is for red channel
            // set period
            Set_Period(Full, Full); //setting of the PWMs periods, the first value is for red channel
            */
            //set compare
            Set_Compare(Always_On, Half);
            //reset counter
            Reset_Counter();
            while(state==step2); //wait until click
        }
        if(state==step3){
            //set modality
            Set_Compare_Mode(Greater, Less);
            /*
            // set period
            Set_Period(Full, Full); //setting of the PWMs periods, the first value is for red channel
            */
            //set compare
            Set_Compare(Half, Always_On);
            //reset counter
            Reset_Counter();
            while(state==step3); //wait until click
        }
        if(state==step4){
            //set modality
            Set_Compare_Mode(Less, Greater);
            // set period
            Set_Period(Half, Half);
            //set compare
            Set_Compare(Quarter, Quarter);
            //reset counter
            Reset_Counter();
            while(state==step4); //wait until click
        }
        if(state==step5){
            //set modality
            Set_Compare_Mode(Greater, Less);
            // set period
            Set_Period(Quarter, Quarter);
            //set compare
            Set_Compare(One_Eighth,One_Eighth);
            //reset counter
            Reset_Counter();
            while(state==step5); //wait until click
        }
        if(state==step6){
            //set modality
            Set_Compare_Mode(Less, Less);
            // set period
            Set_Period(Full, Full);
            //set compare
            Set_Compare(Quarter,Half);
            //reset counter
            Reset_Counter();
            while(state==step6); //wait until click
        }
        if(state==step7){
            //set modality
            Set_Compare_Mode(Greater, Less);
            // set period
            Set_Period(Full, Half);
            //set compare
            Set_Compare(Half, Quarter);
            //reset counter
            Reset_Counter();
            while(state==step7); //wait until click
        }

    }
}

/* [] END OF FILE */

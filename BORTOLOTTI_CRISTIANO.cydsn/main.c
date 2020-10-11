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

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    state=0; //initialization of the flag
    while(1)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */

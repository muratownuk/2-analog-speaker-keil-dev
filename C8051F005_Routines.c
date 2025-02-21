/*
    C8051F005_Routines: 
    this module contains routines that are commonly used for the device 
    C8051F005.
*/
#define _C8051F005_ROUTINES_C_ 

/*
    includes 
*/
#include "./SiLABS/c8051F000.h" 
#include "on_off.h" 
#include "C8051F005_Routines.h" 

/*
    function prototypes
*/
void vGlobalInterrupts(bit status);
void vTimer3(bit status);

/*
    routines 
*/
/*
    vGlobalInterrupts: 
    enables/disables global interrupts (EA).

    parameters: status 
        bit status: ON to enable, OFF to disable. 
    return    : none 
*/
void vGlobalInterrupts(bit status){

    if(status==ON) 
        EA=ON; 
    else 
        EA=OFF;

}

/*
    vTimer3:
    start/stop timer 3 (TR3). 
    
    parameters: status 
        bit status: ON to start timer 3, OFF to stop. 
    return    : none
*/
void vTimer3(bit status){

    if(status==ON) 
        TMR3CN|=0x04; 
    else 
        TMR3CN&=~0x04; 

}



 
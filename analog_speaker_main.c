/*
    analog_speaker_main: 
    the main routine where the program starts. the C8051F005 oscillator 
    frequency is set to internal 16MHz.  
*/ 
/*
    includes 
*/
#include "./SiLABS/c8051F000.h" 
#include "on_off.h" 
#include "C8051F005_Init.h" 
#include "C8051F005_Routines.h" 
#include "analog_speaker.h" 

/*
    main routine 
*/
void main(void){ 
    
    vWatchdog(OFF);                     // turn off watchdog timer 
    vOSC_Init();                        // initialize oscillator 
    vDAC0_Init();                       // initialize DAC0
    // initialize timer 3  
    vTimer3_Init(SYSCLK/SAMPLE_RATE_DAC);    

    vGlobalInterrupts(ON);              // enable global interrupts 
    vTimer3(ON);                        // start timer 3  

    while(1) 
        ;                               // forever loop 

}



#ifndef _C8051F005_INIT_H_
    #define _C8051F005_INIT_H_

    /*
        defines
    */
    #define SYSCLK 16000000             // chip operating frequency 

    #ifndef _C8051F005_INIT_C_
        
        // function prototypes (for external use) 
        extern void vWatchdog(bit status); 
        extern void vOSC_Init(void); 
        extern void vTimer3_Init(unsigned int counts); 
        extern void vDAC0_Init(void); 

    #endif

#endif
 
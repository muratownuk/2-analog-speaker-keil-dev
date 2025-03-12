#ifndef _ANALOG_SPEAKER_H_ 
    #define _ANALOG_SPEAKER_H_ 

    /*
        defines 
    */ 
    #define     TIMER3_INT          14  
    #define     SAMPLE_RATE_DAC     100000L     // DAC sampling rate
    #define     PHASE_PRECISION     65536       // range of phase accumulator  
    
    #define     INC                 1 
    #define     DEC                 0 
    #define     LOW_FREQ            750         // siren low frequency          
    #define     HIGH_FREQ           5000        // siren high freuency 
    #define     FREQ_STEP           1           // change of freq. after ISR 
    #define     FREQ_CHANGE_PRESET  5           // number of times ISR calls   
                                                // before freq. change 

    #ifndef _ANALOG_SPEAKER_C_
        
        // function prototypes (for external use) 
        extern void vTimer3_ISR(void); 
  
    #endif

#endif 




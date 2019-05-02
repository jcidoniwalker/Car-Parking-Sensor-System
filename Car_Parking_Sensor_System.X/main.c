/* 
    Car Parking Sensor System
    Author: Joshua Cidoni-Walker
*/

#include "mcc_generated_files/mcc.h"

void send_pulse() {
    TRIG_SetHigh();// Sends trigger pulse
    __delay_us(5);
    TRIG_SetLow();
}

void NeoPixel_Stream(uint8_t *p, uint8_t count) 
{   // sends count x GRB data packets (24-bit each)
    uint8_t bitCount, data;
    while (count--) {
        bitCount = 24;
        do {
            if ((bitCount & 7) == 0) 
                data = *p++;
            SSP1BUF = ((data & 0x80)) ? 0xFE : 0xC0;  // WS2812B 900ns - 350ns           
            data <<= 1;
        } while (--bitCount);
    } 
}

void trigger_danger() {
    PWM7_LoadDutyValue(600);
    uint8_t color[] = {0xFF, 0, 0};
    NeoPixel_Stream(color, sizeof(color)/3);
}

void trigger_warning(int* yellow_warning, uint16_t distance) {
    
    PWM7_LoadDutyValue( (int)-(distance - 30) * 30 );
    uint8_t color[] = {0xFF, 0xFF, 0x00};
    *yellow_warning = ~*yellow_warning;
    if(*yellow_warning == -1) {
        color[0] = 0;
        color[1] = 0;
        color[2] = 0;
    }
    
    for(int i = 0; i < distance*11; i++)
        __delay_ms(1);
    
    NeoPixel_Stream(color, sizeof(color)/3);
}

void trigger_clear() {
    PWM7_LoadDutyValue(100);
    uint8_t color[] = {0, 0xFF, 0};
    NeoPixel_Stream(color, sizeof(color)/3);
}

void main(void)
{
    
    // initialize the device
    SYSTEM_Initialize();
    // initialize the PWM_6
    PWM7_Initialize();
    
    TRIG_SetLow();//set trigger low to being pulse
    uint16_t distance;
    
    int yellow_warning = 0;
    
    while (1)
    {
        send_pulse();
        
        TMR1GIF=0;//resets timer
        TMR1_WriteTimer(0);
        TMR1_StartSinglePulseAcquisition();
        while(!TMR1GIF);// waits for return pulse to end
        
        distance = (int)(TMR1_ReadTimer()/116);
        
        if(distance <= 10)
            trigger_danger();
        else if(distance <= 30)
            trigger_warning(&yellow_warning, distance);
        else
            trigger_clear();
        
        
        __delay_ms(5);//rate of read
    }
}

/**
 End of File
*/

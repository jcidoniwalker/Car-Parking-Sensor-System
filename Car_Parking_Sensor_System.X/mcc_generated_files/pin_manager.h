/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.76
        Device            :  PIC16F18855
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.00
        MPLAB 	          :  MPLAB X 5.10	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set SDO1 aliases
#define SDO1_TRIS                 TRISBbits.TRISB5
#define SDO1_LAT                  LATBbits.LATB5
#define SDO1_PORT                 PORTBbits.RB5
#define SDO1_WPU                  WPUBbits.WPUB5
#define SDO1_OD                   ODCONBbits.ODCB5
#define SDO1_ANS                  ANSELBbits.ANSB5
#define SDO1_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define SDO1_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define SDO1_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define SDO1_GetValue()           PORTBbits.RB5
#define SDO1_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define SDO1_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define SDO1_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define SDO1_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define SDO1_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define SDO1_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define SDO1_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define SDO1_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set SCK1 aliases
#define SCK1_TRIS                 TRISCbits.TRISC3
#define SCK1_LAT                  LATCbits.LATC3
#define SCK1_PORT                 PORTCbits.RC3
#define SCK1_WPU                  WPUCbits.WPUC3
#define SCK1_OD                   ODCONCbits.ODCC3
#define SCK1_ANS                  ANSELCbits.ANSC3
#define SCK1_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define SCK1_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define SCK1_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define SCK1_GetValue()           PORTCbits.RC3
#define SCK1_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define SCK1_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define SCK1_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define SCK1_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define SCK1_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define SCK1_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define SCK1_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define SCK1_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set SDI1 aliases
#define SDI1_TRIS                 TRISCbits.TRISC4
#define SDI1_LAT                  LATCbits.LATC4
#define SDI1_PORT                 PORTCbits.RC4
#define SDI1_WPU                  WPUCbits.WPUC4
#define SDI1_OD                   ODCONCbits.ODCC4
#define SDI1_ANS                  ANSELCbits.ANSC4
#define SDI1_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define SDI1_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define SDI1_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define SDI1_GetValue()           PORTCbits.RC4
#define SDI1_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define SDI1_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define SDI1_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define SDI1_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define SDI1_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define SDI1_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define SDI1_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define SDI1_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set IO_RC5 aliases
#define IO_RC5_TRIS                 TRISCbits.TRISC5
#define IO_RC5_LAT                  LATCbits.LATC5
#define IO_RC5_PORT                 PORTCbits.RC5
#define IO_RC5_WPU                  WPUCbits.WPUC5
#define IO_RC5_OD                   ODCONCbits.ODCC5
#define IO_RC5_ANS                  ANSELCbits.ANSC5
#define IO_RC5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define IO_RC5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define IO_RC5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define IO_RC5_GetValue()           PORTCbits.RC5
#define IO_RC5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define IO_RC5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define IO_RC5_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define IO_RC5_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define IO_RC5_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define IO_RC5_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define IO_RC5_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define IO_RC5_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set TRIG aliases
#define TRIG_TRIS                 TRISCbits.TRISC6
#define TRIG_LAT                  LATCbits.LATC6
#define TRIG_PORT                 PORTCbits.RC6
#define TRIG_WPU                  WPUCbits.WPUC6
#define TRIG_OD                   ODCONCbits.ODCC6
#define TRIG_ANS                  ANSELCbits.ANSC6
#define TRIG_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define TRIG_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define TRIG_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define TRIG_GetValue()           PORTCbits.RC6
#define TRIG_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define TRIG_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define TRIG_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define TRIG_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define TRIG_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define TRIG_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define TRIG_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define TRIG_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()              PORTCbits.RC7
#define RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define RC7_SetPullup()             do { WPUCbits.WPUC7 = 1; } while(0)
#define RC7_ResetPullup()           do { WPUCbits.WPUC7 = 0; } while(0)
#define RC7_SetAnalogMode()         do { ANSELCbits.ANSC7 = 1; } while(0)
#define RC7_SetDigitalMode()        do { ANSELCbits.ANSC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/
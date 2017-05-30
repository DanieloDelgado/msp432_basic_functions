//*****************************************************************************
//
// MSP432 main.c template - Empty main
//
//****************************************************************************

/* DriverLib Includes */
#include <ti/devices/msp432p4xx/driverlib/driverlib.h>

/* Standard Includes */
#include <stdint.h>
#include <stdbool.h>

int main(void)
{
    /* Stop Watchdog  */
    MAP_WDT_A_holdTimer();

    while(1)
    {
        
    }
}

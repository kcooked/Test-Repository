/*|Name of the Project|--------------------------------------------------------
#
# Project: Name of the Project (NOP)
# Program: comments.c
#
# Description:
#   This file is used as a template for Isaiah's style of commenting code. This
# paragraph should contain a description of the project or program. The main 
# file should include important details for future reference.
#
# Peripherals:
#   MCPV-3210S-RQN  - Teknic ClearPath Digital I/O Series for Position Control
#   Python          - UART/Serial Python GUI
#   <Peripheral>    - <short descriptions only>
#
# Signals/Pins:
#   Input A         P3.0    Digital Output
#   Input B         P3.1    Digital Output
#   Enable Input    P3.2    Digital Output
#   HLFB            P1.3    Timer Input
#   <Signal>        <Pin>   <Optional Description>
#
# Author: <Name>
# Date Created: <Date>
# Last Modified: <Today>
# 
# Note: Make it a habit to update the date each day you modify your code.
# -----------------------------------------------------------------------------*/

/*|Includes|-------------------------------------------------------------------*/
/*
#include <example.h>    // <list of functions used> - <purpose>
#include <string.h>     // strtok - Command parsing.
*/

/*|Globals|--------------------------------------------------------------------*/

/*|Macros|---------------------------------------------------------------------*/
#define set_bit(PORT, PIN, BIT) PORT = (BIT) ? (PORT | PIN) : (PORT &~ PIN)

/*|Function Declarations|------------------------------------------------------*/
void initClocks(void);
void executeAction(enum action, int);
void sendData(void);

/*|Main|-----------------------------------------------------------------------*/
int main(void){
	WDTCTL = WDTPW | WDTHOLD;	// Stop the Watchdog Timer
	
	// Variables

	// Initialize MCLK = SMCLK = 8.192 MHz
	initClocks();

	// Initialize GPIO
	initGPIO();

	// Initialize UART Serial Communication
	initUART();

	// Initialize Timer A0 for PWM or Frequency Control
	initTimerA0();

	// Enable Global Interrupts
	__enable_interrupt();

	// Main Loop
	while(42) {

	}

	return 0;
}

/*|functionName|---------------------------------------------------------------
#
# Description:
#   This function... <Description>
#
# Inputs:
#   a   - a number
#   b   - b number
#
# Returns: void
#
# Last Modified: March 1, 2022 by Isaiah Regacho
# -----------------------------------------------------------------------------*/
void functionName(enum action a, int b) {
    for(;;);
}

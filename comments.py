# |Linear Axis MSP430 Example|-------------------------------------------------
#
# Project: Linear Axis MSP430 Example
# Program: linear_axis.py
#
# Description:
#   This program is designed to manipulate the timer output of the MSP430. The
# signals are tailored for Teknic's MCPV ClearPath Motor. The simplest controls
# required are pure digital signals. Other inputs include frequency and PWM
# commands. Frequency commands are preferred as the bi-directional PWM signal 
# requires a deadband around 50% duty to ensure the motor stops. The outputs 
# for each of the control modes will be sent to separate pins to avoid 
# unintentional motion commands being being received by the motor.
#
#   This purpose of this project is to demonstrate the use of the linear axis
# in a lab setting at the British Columbia Institute of Technology. The
# secondary purpose for this project is to be used a Co-Op work term report for
# the University of Victoria.
#
# The program is modified for the Raspberry Pi.
#
# Author: Isaiah Regacho
# 
# Last Modified: October 23, 2021
# -----------------------------------------------------------------------------

# |Package Version Control|----------------------------------------------------
# Python 3.9.2 (default on Raspberry Pi)
#
# Package              | Version    : Command
# ==================== | ========== : =========================================
# matplotlib           | 3.4.3      : pip install matplotlib
# numpy                | 1.21.3     : pip install --upgrade numpy
# pandas               | 1.3.4      : pip install pandas
# pyserial             | 3.5b0      : pip install pyserial
# pyusb                | 1.2.1      : pip install pyusb (requires libusb)
# ==================== | ========== : =========================================
# -----------------------------------------------------------------------------

# |MODULES|--------------------------------------------------------------------


    # -------------------------------------------------------------------------
    # Method: reset_count
    #
    # Description:
    #       This method resets the HLFB counter.
    #
    # Last Modified: March 18, 2021 by Isaiah Regacho
    # -------------------------------------------------------------------------
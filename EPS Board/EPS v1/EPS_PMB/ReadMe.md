This folder contains the Fusion file of the Power Management Board and the user manual for the testing.

# EPS_PMB_Testing_Manual
_Board Designed by Y.U.P., Oct 2024_

## Description
This PCB will be used as EPS Power Management Board. This board contains the MPPT, battery management and the battery heating unit. This PCB takes power input from the Solar Panels, performs maximum power point tracking and supplies this to the battery management system. Since this is a testing board, option to separate the solar power output and the BMS input is provided is provided.

## Errata
- The resistor R14 should be 137 kOhm.

### Solar Input Unit (SIU)
SIU is implemented with the help of LTC3130 DCDC converters. This IC also offers MPPC which can used as backup with the help of switches. P&O algorithm is used. The P is provided through the EPS uC (from the PDB board) - DAC - OpAmp - FB of the LTC3130. In order to sense the power of the panels, INA232, Current, Voltage and Power Monitor is used. The readings are sent to the EPS uC over the I2C.

All three INA232 have different I2C addresses, which are configured with the A0 pin.

### Battery Management Unit (BMU)
The battery management unit consists of two parts,

1. Battery Management System (BMS) deals with the electrical management of the battery, such as charging protection, OVP, OCP and cell balance.
2. Battery Heater System, which senses the battery temperature and sends the reading to EPS uC, which decides if the heater should be turned ON or OFF.

#### BMS
BMS is implemented with two ICs, BQ25713 I2C Narrow VDC (NVDC) Buck-Boost Battery Charge Controller and BQ29209 charge balancer. The NVDC allows the number of charge cycles of the battery to be minimised. They are implemented according to the standard layout.

#### Battery Heater
The battery temperature is sensed with the help of NTC, which will be attached to the battery and soldered on the board. This is done with a simple biasing circuit. The reading is sensed with ADS1110 and sent to the EPS uC over the I2C line.

The heating coil is wrapped over the battery, and the coil is powered with the VSYS voltage level, which is the BMS output. The coil is controlled with an N channel MOSFET, whose gate signal is received straight from the EPS uC.

### Switches on The Board
In order to allow better testing of the board, several solder switches are provided on the board, and the middle connection is the common terminal; one is '0', and the other is '1'.

The `BMS_SEP` is a jumper connection that separates the SIU and BMU.

> NOTE: Operate SW1 ↔ SW4, SW2 ↔ SW5, SW3 ↔ SW6 together to control the MPPT and MPPC mode.

In MPPC mode, the panels will output 12 V constant.

| Switch | 1 | 0 |
|---|---|---|
|SW1, SW4 | MPPC for 2S panel | MPPT for 2S panel |
|SW2, SW5 | MPPC for 6S panel | MPPT for 6S panel |
|SW3, SW6 | MPPC for 7S panel | MPPT for 7S panel |
|BAT_SEP | Shorted: SIU output shorted with BMU input |


## Testing Procedure

0. Understand the schematics and the layout of the board properly.
1. Do not solder board to the full at once. Solder only what you are testing and in parts.
2. Test the BMU and the SIU separately by keeping the BAT_SEP disconnected.
3. Remember to use the correct I2C addresses.

### Battery Heater Testing
1. Check the biasing of the NTC with the help of DMM.
2. Compare the temperature reading with a good reference.
3. Test the functioning of the ADS1110 IC.
4. Check the switching of the battery heater MOSFET with help of any digital logic.
5. Check the heating of the coil.

### BMU Testing
1. Test the BMU by supplying power with the bench supply of 12 V.
2. Check for features such as overcurrent protection and overvoltage protection.
3. Take readings of the different parameters of the battery with the help of I2C from BQ25713 and verify with the DMM.

### SIU Testing
1. Test the SIU in the MPPC configuration (All switches are low). Drain the power in some dummy load resistors.
2. Check the power generation in different power input levels with the help of the Solar Array Simulator.
3. Change the switch positions to the MPPT mode (All switches are high).
4. Implement the MPPT on a microcontroller and perform PILS.

### Cumulative testing
1. Upon successful testing of both SIU and BMU, short the BMS_SEP.
2. Perform and test for the power path management.

## Possible Failures
- Since the output of the multiple DCDC converters is shorted, this can cause possible instability in the system, and effects such as ringing can be seen.

## Improvements necessary for the next boards
- Addition of deployment switches
- After successful testing of the board, the switches can be eliminated to create a more streamlined board and have a more spacious layout.

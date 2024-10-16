# EPS_PMB_Testing_Manual
_Designed by Y.U.P., Oct 2024_ 

## Description
This PCB will be used as EPS Power Management Board. This board contains the MPPT, battery management and the battery heating unit. This PCB takes power input from the Solar Panels, performs maximum powerpoint tracking and supplies this to the battery management system.

## MPPT Unit
MPPT is implemented with the help of LTC3130 DCDC converters. This IC also offers MPPC which can used as backup with the help of switches. P&O algorithm is used. The P is provided through the EPS uC (from PDB board) - DAC - OpAmp - FB of the LTC3130. In order to sense the power of the panels, INA23, Current, Voltage and Power Moniter is used.

## Battery Management Unit

### BMS
### Battery Heater

## Possible Failures
- Since the output of the multiple DCDC converters are shorted, this can cause possible instability in the system and effects such as ringing can be seen.
Testing Procedure

## References
[1] https:\\drive.google.comfiled1Q6Xf40I3hBcPeFQ7CdCO9G9bCQHfkwn0viewusp=drive_link

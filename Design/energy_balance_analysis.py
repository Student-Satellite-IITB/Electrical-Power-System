"""
Energy Balance Analysis
Author: Ameya Marakarkandy 
ameya.marakarkandy@gmail.com
Last Updated: 20/06/2024

This script will help in Electrical Power System Sizing according to Mission Requirements

# Features to be implemented
- Solar Power Generation, OAP Generation required
- Battery Capacity Sizing
- Peak Power Consumption
- Analysis of different Scenarios and Operational Modes

- Orbital calculations and eclipse fraction calculation can be implemented in another script and called here

"""
# Battery Parameters
eta_dis = 0.8
eta_ch = 0.8
Vd = 3.7


Torb = float(input("Orbital Time Period (minutes): "))*60.00
fecl = float(input("Eclipse fraction: "))
Pbus_sun = float(input("Bus Power consumption in sun phase (W): "))
Pbus_ecl = float(input("Bus Eclipse Power Consumption (W): "))

Tecl = fecl*Torb
Tsun = Torb-Tecl
# Energy consumption during discharge in eclipse
Edis = Pbus_ecl*Tecl/eta_dis #

mission_life = float(input("Mission Life (years): "))
if mission_life == 1:
    dod = 0.5

# Energy required for charging the battery
Ech = Edis/eta_ch
Pch = Ech/Tsun
Psun = Pbus_sun + Pch
Pecl = Pbus_ecl

OAP = (Psun*Tsun + Pecl*Tecl)/Torb

print("OAP:"+str(OAP)+"W")
print("Battery Energy discharged (mAh): "+str(Edis/(1000*Vd))+"mAh")

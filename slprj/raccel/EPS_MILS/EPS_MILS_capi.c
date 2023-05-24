#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "EPS_MILS_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 19
#endif
#ifndef SS_INT64
#define SS_INT64 20
#endif
#else
#include "builtin_typeid_types.h"
#include "EPS_MILS.h"
#include "EPS_MILS_capi.h"
#include "EPS_MILS_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 8 , TARGET_STRING (
"EPS_MILS/MATLAB Function" ) , TARGET_STRING ( "duty_cycle" ) , 0 , 0 , 0 , 0
, 0 } , { 1 , 0 , TARGET_STRING (
"EPS_MILS/MATLAB Function/is_active_c2_EPS_MILS" ) , TARGET_STRING (
"is_active_c2_EPS_MILS" ) , 0 , 1 , 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"EPS_MILS/Product" ) , TARGET_STRING ( "Ppv" ) , 0 , 0 , 0 , 0 , 0 } , { 3 ,
0 , TARGET_STRING ( "EPS_MILS/Product1" ) , TARGET_STRING ( "Ppv" ) , 0 , 0 ,
0 , 0 , 0 } , { 4 , 0 , TARGET_STRING ( "EPS_MILS/Product2" ) , TARGET_STRING
( "Ppv0" ) , 0 , 0 , 0 , 0 , 0 } , { 5 , 0 , TARGET_STRING (
"EPS_MILS/Product3" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 , 0 , 0 } , { 6 , 0
, TARGET_STRING ( "EPS_MILS/Step" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
0 } , { 7 , 0 , TARGET_STRING ( "EPS_MILS/Unit Delay" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 8 , 0 , TARGET_STRING ( "EPS_MILS/Unit Delay1" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 9 , 0 , TARGET_STRING (
"EPS_MILS/Current Measurement1/do not delete this gain" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 10 , 0 , TARGET_STRING (
"EPS_MILS/PWM Generator (DC-DC)/Data Type Conversion" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 11 , 0 , TARGET_STRING (
"EPS_MILS/Voltage Measurement1/do not delete this gain" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 12 , 0 , TARGET_STRING (
"EPS_MILS/Voltage Measurement2/do not delete this gain" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 13 , 0 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module/Diode Rsh/VT_ref_array" ) , TARGET_STRING (
"VT" ) , 0 , 0 , 0 , 0 , 1 } , { 14 , 0 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module/Diode Rsh/Product4" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 1 } , { 15 , 0 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module/Diode Rsh/Add1" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 16 , 0 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module/Diode Rsh/Unit Delay" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 17 , 0 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module/IL ctrl/Npar" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 1 } , { 18 , 0 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module/IL ctrl/Product1" ) , TARGET_STRING ( "IL" ) ,
0 , 0 , 0 , 0 , 0 } , { 19 , 0 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module/I_PV/do not delete this gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 20 , 0 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module/V_PV/do not delete this gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 21 , 0 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module1/Diode Rsh/VT_ref_array" ) , TARGET_STRING (
"VT" ) , 0 , 0 , 0 , 0 , 1 } , { 22 , 0 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module1/Diode Rsh/Product4" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 1 } , { 23 , 0 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module1/Diode Rsh/Add1" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 24 , 0 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module1/Diode Rsh/Unit Delay" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 25 , 0 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module1/IL ctrl/1//Sref" ) , TARGET_STRING ( "S/Sref"
) , 0 , 0 , 0 , 0 , 1 } , { 26 , 0 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module1/IL ctrl/Product1" ) , TARGET_STRING ( "IL" )
, 0 , 0 , 0 , 0 , 1 } , { 27 , 0 , TARGET_STRING (
"EPS_MILS/Battery1/Current Measurement/do not delete this gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 28 , 0 , TARGET_STRING (
"EPS_MILS/Battery1/Model/Data Type Conversion1" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 29 , 0 , TARGET_STRING (
"EPS_MILS/Battery1/Model/Data Type Conversion2" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 30 , 0 , TARGET_STRING ( "EPS_MILS/Battery1/Model/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 31 , 0 , TARGET_STRING (
"EPS_MILS/Battery1/Model/Gain2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2
} , { 32 , 0 , TARGET_STRING ( "EPS_MILS/Battery1/Model/R1" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 33 , 0 , TARGET_STRING (
"EPS_MILS/Battery1/Model/Memory2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
0 } , { 34 , 0 , TARGET_STRING ( "EPS_MILS/Battery1/Model/it init" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 35 , 0 , TARGET_STRING (
"EPS_MILS/Battery1/Model/Current filter" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 0 } , { 36 , 0 , TARGET_STRING (
"EPS_MILS/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING ( "" ) , 0
, 0 , 1 , 0 , 0 } , { 37 , 0 , TARGET_STRING (
"EPS_MILS/powergui/EquivalentModel2/State-Space" ) , TARGET_STRING ( "" ) , 0
, 0 , 2 , 0 , 0 } , { 38 , 0 , TARGET_STRING (
"EPS_MILS/powergui/EquivalentModel2/State-Space" ) , TARGET_STRING ( "" ) , 1
, 0 , 3 , 0 , 0 } , { 39 , 0 , TARGET_STRING (
"EPS_MILS/Battery1/Model/Exp/Discrete-Time Integrator" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 40 , 0 , TARGET_STRING (
"EPS_MILS/Battery1/Model/Exp/Gain1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0
, 0 } , { 41 , 0 , TARGET_STRING (
"EPS_MILS/Battery1/Model/Saturation Dynamic/Switch2" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 2 } , { 42 , 0 , TARGET_STRING (
"EPS_MILS/Battery1/Model/Saturation Dynamic1/Switch" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } }
; static const rtwCAPI_BlockParameters rtBlockParameters [ ] = { { 43 ,
TARGET_STRING ( "EPS_MILS/1 Solar Panel module" ) , TARGET_STRING ( "Npar" )
, 0 , 0 , 0 } , { 44 , TARGET_STRING ( "EPS_MILS/1 Solar Panel module1" ) ,
TARGET_STRING ( "Npar" ) , 0 , 0 , 0 } , { 45 , TARGET_STRING (
"EPS_MILS/Battery1" ) , TARGET_STRING ( "BatType" ) , 0 , 0 , 0 } , { 46 ,
TARGET_STRING ( "EPS_MILS/Constant2" ) , TARGET_STRING ( "Value" ) , 0 , 0 ,
0 } , { 47 , TARGET_STRING ( "EPS_MILS/Temperature" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 48 , TARGET_STRING ( "EPS_MILS/Temperature1" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 49 , TARGET_STRING (
"EPS_MILS/Step" ) , TARGET_STRING ( "Time" ) , 0 , 0 , 0 } , { 50 ,
TARGET_STRING ( "EPS_MILS/Step" ) , TARGET_STRING ( "Before" ) , 0 , 0 , 0 }
, { 51 , TARGET_STRING ( "EPS_MILS/Step" ) , TARGET_STRING ( "After" ) , 0 ,
0 , 0 } , { 52 , TARGET_STRING ( "EPS_MILS/Unit Delay" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 53 , TARGET_STRING (
"EPS_MILS/Unit Delay1" ) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 }
, { 54 , TARGET_STRING (
"EPS_MILS/Current Measurement1/do not delete this gain" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 55 , TARGET_STRING (
"EPS_MILS/Voltage Measurement1/do not delete this gain" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 56 , TARGET_STRING (
"EPS_MILS/Voltage Measurement2/do not delete this gain" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 57 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module/Diode Rsh/Rsh_array" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 58 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module/Diode Rsh/Rsh_array_5%Sref" ) , TARGET_STRING
( "Value" ) , 0 , 0 , 0 } , { 59 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module/Diode Rsh/Tref_K1" ) , TARGET_STRING ( "Value"
) , 0 , 0 , 0 } , { 60 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module/Diode Rsh/Tref_K2" ) , TARGET_STRING ( "Value"
) , 0 , 0 , 0 } , { 61 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module/Diode Rsh/one" ) , TARGET_STRING ( "Value" ) ,
0 , 0 , 0 } , { 62 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module/Diode Rsh/one1" ) , TARGET_STRING ( "Value" )
, 0 , 0 , 0 } , { 63 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module/Diode Rsh/EgRef" ) , TARGET_STRING ( "Gain" )
, 0 , 0 , 0 } , { 64 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module/Diode Rsh/I0_array" ) , TARGET_STRING ( "Gain"
) , 0 , 0 , 0 } , { 65 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module/Diode Rsh/VT_ref_array" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 66 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module/Diode Rsh/dEgdT" ) , TARGET_STRING ( "Gain" )
, 0 , 0 , 0 } , { 67 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module/Diode Rsh/Unit Delay" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 68 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module/IL ctrl/0_K" ) , TARGET_STRING ( "Value" ) , 0
, 0 , 0 } , { 69 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module/IL ctrl/IL_module" ) , TARGET_STRING ( "Value"
) , 0 , 0 , 0 } , { 70 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module/IL ctrl/Tref_K" ) , TARGET_STRING ( "Value" )
, 0 , 0 , 0 } , { 71 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module/IL ctrl/1//Sref" ) , TARGET_STRING ( "Gain" )
, 0 , 0 , 0 } , { 72 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module/IL ctrl/alpha_Isc" ) , TARGET_STRING ( "Gain"
) , 0 , 0 , 0 } , { 73 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module/I_PV/do not delete this gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 74 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module/V_PV/do not delete this gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 75 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module/Vdiode/Rs_array_" ) , TARGET_STRING ( "Value"
) , 0 , 0 , 0 } , { 76 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module1/Diode Rsh/Rsh_array" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 77 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module1/Diode Rsh/Rsh_array_5%Sref" ) , TARGET_STRING
( "Value" ) , 0 , 0 , 0 } , { 78 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module1/Diode Rsh/Tref_K1" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 79 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module1/Diode Rsh/Tref_K2" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 80 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module1/Diode Rsh/one" ) , TARGET_STRING ( "Value" )
, 0 , 0 , 0 } , { 81 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module1/Diode Rsh/one1" ) , TARGET_STRING ( "Value" )
, 0 , 0 , 0 } , { 82 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module1/Diode Rsh/EgRef" ) , TARGET_STRING ( "Gain" )
, 0 , 0 , 0 } , { 83 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module1/Diode Rsh/I0_array" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 84 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module1/Diode Rsh/VT_ref_array" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 85 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module1/Diode Rsh/dEgdT" ) , TARGET_STRING ( "Gain" )
, 0 , 0 , 0 } , { 86 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module1/Diode Rsh/Unit Delay" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 87 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module1/IL ctrl/0_K" ) , TARGET_STRING ( "Value" ) ,
0 , 0 , 0 } , { 88 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module1/IL ctrl/IL_module" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 89 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module1/IL ctrl/Tref_K" ) , TARGET_STRING ( "Value" )
, 0 , 0 , 0 } , { 90 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module1/IL ctrl/1//Sref" ) , TARGET_STRING ( "Gain" )
, 0 , 0 , 0 } , { 91 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module1/IL ctrl/alpha_Isc" ) , TARGET_STRING ( "Gain"
) , 0 , 0 , 0 } , { 92 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module1/I_PV/do not delete this gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 93 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module1/V_PV/do not delete this gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 94 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module1/Vdiode/Rs_array_" ) , TARGET_STRING ( "Value"
) , 0 , 0 , 0 } , { 95 , TARGET_STRING (
"EPS_MILS/Battery1/Current Measurement/do not delete this gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 96 , TARGET_STRING (
"EPS_MILS/Battery1/Model/Constant" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0
} , { 97 , TARGET_STRING ( "EPS_MILS/Battery1/Model/Constant1" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 98 , TARGET_STRING (
"EPS_MILS/Battery1/Model/Constant12" ) , TARGET_STRING ( "Value" ) , 0 , 0 ,
0 } , { 99 , TARGET_STRING ( "EPS_MILS/Battery1/Model/Constant9" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 100 , TARGET_STRING (
"EPS_MILS/Battery1/Model/int(i)" ) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0
} , { 101 , TARGET_STRING ( "EPS_MILS/Battery1/Model/int(i)" ) ,
TARGET_STRING ( "UpperSaturationLimit" ) , 0 , 0 , 0 } , { 102 ,
TARGET_STRING ( "EPS_MILS/Battery1/Model/int(i)" ) , TARGET_STRING (
"LowerSaturationLimit" ) , 0 , 0 , 0 } , { 103 , TARGET_STRING (
"EPS_MILS/Battery1/Model/Gain" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , {
104 , TARGET_STRING ( "EPS_MILS/Battery1/Model/Gain2" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 105 , TARGET_STRING ( "EPS_MILS/Battery1/Model/R1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 106 , TARGET_STRING (
"EPS_MILS/Battery1/Model/R2" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , {
107 , TARGET_STRING ( "EPS_MILS/Battery1/Model/R3" ) , TARGET_STRING ( "Gain"
) , 0 , 0 , 0 } , { 108 , TARGET_STRING ( "EPS_MILS/Battery1/Model/Memory2" )
, TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 109 , TARGET_STRING
( "EPS_MILS/Battery1/Model/it init" ) , TARGET_STRING ( "InitialCondition" )
, 0 , 0 , 0 } , { 110 , TARGET_STRING ( "EPS_MILS/Battery1/Model/it init1" )
, TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 111 , TARGET_STRING
( "EPS_MILS/Battery1/Model/Current filter" ) , TARGET_STRING ( "Numerator" )
, 0 , 0 , 0 } , { 112 , TARGET_STRING (
"EPS_MILS/Battery1/Model/Current filter" ) , TARGET_STRING ( "Denominator" )
, 0 , 4 , 0 } , { 113 , TARGET_STRING (
"EPS_MILS/Battery1/Model/Current filter" ) , TARGET_STRING ( "InitialStates"
) , 0 , 0 , 0 } , { 114 , TARGET_STRING ( "EPS_MILS/Diode/Model/eee" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 115 , TARGET_STRING (
"EPS_MILS/PWM Generator (DC-DC)/Compare To Zero/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 116 , TARGET_STRING (
"EPS_MILS/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING (
"DS_param" ) , 0 , 5 , 0 } , { 117 , TARGET_STRING (
"EPS_MILS/powergui/EquivalentModel2/State-Space" ) , TARGET_STRING (
"AS_param" ) , 0 , 6 , 0 } , { 118 , TARGET_STRING (
"EPS_MILS/powergui/EquivalentModel2/State-Space" ) , TARGET_STRING (
"BS_param" ) , 0 , 7 , 0 } , { 119 , TARGET_STRING (
"EPS_MILS/powergui/EquivalentModel2/State-Space" ) , TARGET_STRING (
"CS_param" ) , 0 , 8 , 0 } , { 120 , TARGET_STRING (
"EPS_MILS/powergui/EquivalentModel2/State-Space" ) , TARGET_STRING (
"DS_param" ) , 0 , 9 , 0 } , { 121 , TARGET_STRING (
"EPS_MILS/powergui/EquivalentModel2/State-Space" ) , TARGET_STRING (
"X0_param" ) , 0 , 1 , 0 } , { 122 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module/Diode Rsh/Subsystem/EgRef" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 123 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module/Diode Rsh/Subsystem/k1" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 124 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module1/Diode Rsh/Subsystem/EgRef" ) , TARGET_STRING
( "Value" ) , 0 , 0 , 0 } , { 125 , TARGET_STRING (
"EPS_MILS/1 Solar Panel module1/Diode Rsh/Subsystem/k1" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 126 , TARGET_STRING (
"EPS_MILS/Battery1/Model/Compare To Zero/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 127 , TARGET_STRING (
"EPS_MILS/Battery1/Model/Compare To Zero2/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 128 , TARGET_STRING (
"EPS_MILS/Battery1/Model/E_dyn Charge/Constant1" ) , TARGET_STRING ( "Value"
) , 0 , 0 , 0 } , { 129 , TARGET_STRING (
"EPS_MILS/Battery1/Model/E_dyn Charge/Constant2" ) , TARGET_STRING ( "Value"
) , 0 , 0 , 0 } , { 130 , TARGET_STRING (
"EPS_MILS/Battery1/Model/E_dyn Charge/Constant3" ) , TARGET_STRING ( "Value"
) , 0 , 0 , 0 } , { 131 , TARGET_STRING (
"EPS_MILS/Battery1/Model/E_dyn Charge/Constant4" ) , TARGET_STRING ( "Value"
) , 0 , 0 , 0 } , { 132 , TARGET_STRING (
"EPS_MILS/Battery1/Model/Exp/Discrete-Time Integrator" ) , TARGET_STRING (
"gainval" ) , 0 , 0 , 0 } , { 133 , TARGET_STRING (
"EPS_MILS/Battery1/Model/Exp/Discrete-Time Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 134 , TARGET_STRING (
"EPS_MILS/Battery1/Model/Exp/Gain1" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0
} , { 135 , TARGET_STRING ( "EPS_MILS/Battery1/Model/Exp/Gain4" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 136 , TARGET_STRING (
"EPS_MILS/Battery1/Model/Exp/Saturation" ) , TARGET_STRING ( "UpperLimit" ) ,
0 , 0 , 0 } , { 137 , TARGET_STRING (
"EPS_MILS/Battery1/Model/Exp/Saturation" ) , TARGET_STRING ( "LowerLimit" ) ,
0 , 0 , 0 } , { 138 , TARGET_STRING (
"EPS_MILS/PWM Generator (DC-DC)/Sawtooth Generator/Model/Constant2" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 139 , TARGET_STRING (
"EPS_MILS/PWM Generator (DC-DC)/Sawtooth Generator/Model/Constant3" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 140 , TARGET_STRING (
"EPS_MILS/PWM Generator (DC-DC)/Sawtooth Generator/Model/1\\ib1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 141 , TARGET_STRING (
"EPS_MILS/powergui/EquivalentModel2/Sources/SwitchCurrents" ) , TARGET_STRING
( "Value" ) , 0 , 3 , 0 } , { 142 , TARGET_STRING (
"EPS_MILS/Battery1/Model/Exp/Compare To Zero2/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 } } ; static
int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const rtwCAPI_Signals
rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ;
static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 , ( NULL ) , (
NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_ModelParameters
rtModelParameters [ ] = { { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . hikj040a31 , & rtDW . ggy3kolena
, & rtB . k5gofgmai0 , & rtB . iggnzu3gsi , & rtB . iuz04crxul , & rtB .
dwlavih11j , & rtB . nlbivj4lf3 , & rtB . nf0bwiard0 , & rtB . ixfpr1pnw5 , &
rtB . cvvcberjjn , & rtB . aqm05n1pyd , & rtB . k0p2ap0ikd , & rtB .
dfa50jcwis , & rtB . nutlppxsf5 , & rtB . ksfxdzvis4 , & rtB . intjutf0xv , &
rtB . fi5drgiklu , & rtB . pdyqixdn33 , & rtB . gs1rtf2e3u , & rtB .
nwjgq25zbk , & rtB . jq4n5kfwxa , & rtB . bmzumqbgtq , & rtB . mkqlbqhydw , &
rtB . etwjjxvghh , & rtB . opffrybcih , & rtB . gylnb1tie2 , & rtB .
hoetqsvi5q , & rtB . nmnnshb4os , & rtB . mywmpmosnc , & rtB . cqz5woloyg , &
rtB . od5qrdcbcj , & rtB . hpegnktew3 , & rtB . lovagimr4o , & rtB .
livt5jk2tf , & rtB . eskihpk02k , & rtB . c1gxu3rrmx , & rtB . o5wrrem1qc [ 0
] , & rtB . huk3pt5r1v [ 0 ] , & rtB . dkuvq0253d [ 0 ] , & rtB . fk32bvs2ee
, & rtB . jnas5s0pvv , & rtB . pjzvjmxirm , & rtB . h4js3v5upa , & rtP .
uSolarPanelmodule_Npar , & rtP . uSolarPanelmodule1_Npar , & rtP .
Battery1_BatType , & rtP . Constant2_Value_ijxamwyxru , & rtP .
Temperature_Value , & rtP . Temperature1_Value , & rtP . Step_Time , & rtP .
Step_Y0 , & rtP . Step_YFinal , & rtP . UnitDelay_InitialCondition_o1reyqyrtx
, & rtP . UnitDelay1_InitialCondition , & rtP .
donotdeletethisgain_Gain_aakwgyoy4i , & rtP .
donotdeletethisgain_Gain_owllpgyom1 , & rtP .
donotdeletethisgain_Gain_gif4eynrja , & rtP . Rsh_array_Value , & rtP .
Rsh_array_5Sref_Value , & rtP . Tref_K1_Value , & rtP . Tref_K2_Value , & rtP
. one_Value , & rtP . one1_Value , & rtP . EgRef_Gain , & rtP . I0_array_Gain
, & rtP . VT_ref_array_Gain , & rtP . dEgdT_Gain , & rtP .
UnitDelay_InitialCondition_byazrp2eng , & rtP . u_K_Value , & rtP .
IL_module_Value , & rtP . Tref_K_Value , & rtP . uSref_Gain , & rtP .
alpha_Isc_Gain , & rtP . donotdeletethisgain_Gain , & rtP .
donotdeletethisgain_Gain_i0tbpdvq42 , & rtP . Rs_array_Value , & rtP .
Rsh_array_Value_bqlp4wcosc , & rtP . Rsh_array_5Sref_Value_lkbpzhydcm , & rtP
. Tref_K1_Value_l0p1zui3pw , & rtP . Tref_K2_Value_pctkqeb0jj , & rtP .
one_Value_lrvrdzbc3o , & rtP . one1_Value_c5ubottqde , & rtP .
EgRef_Gain_fnkjuejdev , & rtP . I0_array_Gain_k1y52gw4gn , & rtP .
VT_ref_array_Gain_a0gmuram1c , & rtP . dEgdT_Gain_pzvewxc0mk , & rtP .
UnitDelay_InitialCondition , & rtP . u_K_Value_pxwery2jsn , & rtP .
IL_module_Value_fcyvgl0ruo , & rtP . Tref_K_Value_gszk5qry31 , & rtP .
uSref_Gain_i2bwmxyr3w , & rtP . alpha_Isc_Gain_ecyq2y3zp1 , & rtP .
donotdeletethisgain_Gain_ciqbkivldk , & rtP .
donotdeletethisgain_Gain_g2dyk24vif , & rtP . Rs_array_Value_i3gynv5auc , &
rtP . donotdeletethisgain_Gain_gdixg4fwh0 , & rtP . Constant_Value_mfpmkkcvzy
, & rtP . Constant1_Value , & rtP . Constant12_Value , & rtP .
Constant9_Value , & rtP . inti_gainval , & rtP . inti_UpperSat , & rtP .
inti_LowerSat , & rtP . Gain_Gain , & rtP . Gain2_Gain , & rtP . R1_Gain , &
rtP . R2_Gain , & rtP . R3_Gain , & rtP . Memory2_InitialCondition , & rtP .
itinit_InitialCondition , & rtP . itinit1_InitialCondition , & rtP .
Currentfilter_NumCoef , & rtP . Currentfilter_DenCoef [ 0 ] , & rtP .
Currentfilter_InitialStates , & rtP . eee_Value , & rtP . Constant_Value , &
rtP . StateSpace_DS_param [ 0 ] , & rtP . StateSpace_AS_param [ 0 ] , & rtP .
StateSpace_BS_param [ 0 ] , & rtP . StateSpace_CS_param [ 0 ] , & rtP .
StateSpace_DS_param_prg1zujvs3 [ 0 ] , & rtP . StateSpace_X0_param [ 0 ] , &
rtP . EgRef_Value , & rtP . k1_Gain , & rtP . EgRef_Value_lrhsg5awud , & rtP
. k1_Gain_k5ftzzatnv , & rtP . Constant_Value_bbh4bssdud , & rtP .
Constant_Value_n4vtv1gsyp , & rtP . Constant1_Value_adlo0r1pnz , & rtP .
Constant2_Value_fbpvb5zax4 , & rtP . Constant3_Value_bq22tlhptb , & rtP .
Constant4_Value , & rtP . DiscreteTimeIntegrator_gainval , & rtP .
DiscreteTimeIntegrator_IC , & rtP . Gain1_Gain , & rtP . Gain4_Gain , & rtP .
Saturation_UpperSat , & rtP . Saturation_LowerSat , & rtP . Constant2_Value ,
& rtP . Constant3_Value , & rtP . uib1_Gain , & rtP . SwitchCurrents_Value [
0 ] , & rtP . Constant_Value_pnqn3bfzq5 , } ; static int32_T *
rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } ,
{ "unsigned char" , "uint8_T" , 0 , 0 , sizeof ( uint8_T ) , ( uint8_T )
SS_UINT8 , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } , {
rtwCAPI_VECTOR , 8 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 10 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 12 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 14 , 2
, 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 16 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 18 , 2 , 0 } } ; static const uint_T
rtDimensionArray [ ] = { 1 , 1 , 4 , 1 , 6 , 1 , 2 , 1 , 1 , 2 , 4 , 2 , 4 ,
4 , 4 , 6 , 6 , 4 , 6 , 6 } ; static const real_T rtcapiStoredFloats [ ] = {
5.0E-6 , 0.0 , 1.0 } ; static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { (
NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ;
static const rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * )
& rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , (
int8_T ) 1 , ( uint8_T ) 0 } , { ( NULL ) , ( NULL ) , 3 , 0 } , { ( const
void * ) & rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [
2 ] , ( int8_T ) 0 , ( uint8_T ) 0 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 43 ,
rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 100 ,
rtModelParameters , 0 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 3358607682U , 562655403U , 109193308U , 3957041904U } , ( NULL ) , 0 , (
boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * EPS_MILS_GetCAPIStaticMap ( void ) { return
& mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void EPS_MILS_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void EPS_MILS_host_InitializeDataMapInfo ( EPS_MILS_host_DataMapInfo_T *
dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetPath
( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif

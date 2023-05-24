#ifndef RTW_HEADER_EPS_MILS_h_
#define RTW_HEADER_EPS_MILS_h_
#ifndef EPS_MILS_COMMON_INCLUDES_
#define EPS_MILS_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "EPS_MILS_types.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#include "rt_nonfinite.h"
#define MODEL_NAME EPS_MILS
#define NSAMPLE_TIMES (4) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (42) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (0)   
#elif NCSTATES != 0
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T opffrybcih ; real_T o5wrrem1qc [ 4 ] ; real_T
c1gxu3rrmx ; real_T cqz5woloyg ; real_T eskihpk02k ; real_T od5qrdcbcj ;
real_T h4js3v5upa ; real_T mywmpmosnc ; real_T fk32bvs2ee ; real_T livt5jk2tf
; real_T pjzvjmxirm ; real_T fi5drgiklu ; real_T nlbivj4lf3 ; real_T
gs1rtf2e3u ; real_T huk3pt5r1v [ 6 ] ; real_T dkuvq0253d [ 2 ] ; real_T
nwjgq25zbk ; real_T jq4n5kfwxa ; real_T iggnzu3gsi ; real_T cvvcberjjn ;
real_T k0p2ap0ikd ; real_T iuz04crxul ; real_T nf0bwiard0 ; real_T ixfpr1pnw5
; real_T dwlavih11j ; real_T dfa50jcwis ; real_T k5gofgmai0 ; real_T
aqm05n1pyd ; real_T intjutf0xv ; real_T etwjjxvghh ; real_T nmnnshb4os ;
real_T jnas5s0pvv ; real_T hpegnktew3 ; real_T lovagimr4o ; real_T pdyqixdn33
; real_T ksfxdzvis4 ; real_T nutlppxsf5 ; real_T gylnb1tie2 ; real_T
hoetqsvi5q ; real_T mkqlbqhydw ; real_T bmzumqbgtq ; real_T hikj040a31 ; } B
; typedef struct { real_T mfmnjfzu0e ; real_T fvss2djvki ; real_T bhqjjurcih
; real_T o13ep0zjtp ; real_T ilkonha3co ; real_T p0lr4eegs0 [ 4 ] ; real_T
bqa3xzhwdv ; real_T p2fq3uuisu ; real_T lpmgf5dfgn ; real_T orsz0vf0zs ;
real_T bmqhr21dyv ; real_T l4ezf5ev5p ; real_T f3qkmjhmlg ; real_T pbbyn3soma
; struct { void * AS ; void * BS ; void * CS ; void * DS ; void * DX_COL ;
void * BD_COL ; void * TMP1 ; void * TMP2 ; void * XTMP ; void *
SWITCH_STATUS ; void * SWITCH_STATUS_INIT ; void * SW_CHG ; void * G_STATE ;
void * USWLAST ; void * XKM12 ; void * XKP12 ; void * XLAST ; void * ULAST ;
void * IDX_SW_CHG ; void * Y_SWITCH ; void * SWITCH_TYPES ; void * IDX_OUT_SW
; void * SWITCH_TOPO_SAVED_IDX ; void * SWITCH_MAP ; } eee25gfzar ; struct {
void * AS ; void * BS ; void * CS ; void * DS ; void * DX_COL ; void * BD_COL
; void * TMP1 ; void * TMP2 ; void * XTMP ; void * SWITCH_STATUS ; void *
SWITCH_STATUS_INIT ; void * SW_CHG ; void * G_STATE ; void * USWLAST ; void *
XKM12 ; void * XKP12 ; void * XLAST ; void * ULAST ; void * IDX_SW_CHG ; void
* Y_SWITCH ; void * SWITCH_TYPES ; void * IDX_OUT_SW ; void *
SWITCH_TOPO_SAVED_IDX ; void * SWITCH_MAP ; } f1nkbdwyq1 ; struct { void *
LoggedData [ 2 ] ; } aensh01atu ; struct { void * LoggedData ; } cn4deqbyi1 ;
struct { void * LoggedData ; } cbstezcitj ; struct { void * LoggedData ; }
anqx2zky0b ; struct { void * LoggedData [ 6 ] ; } lvl5wod0vj ; struct { void
* LoggedData [ 2 ] ; } pyrz3b3p5q ; struct { void * LoggedData ; } nfecfav2wp
; struct { void * LoggedData ; } ieagsnlkpu ; struct { void * LoggedData ; }
niebmbwwzh ; struct { void * LoggedData [ 2 ] ; } aiuhviwtmb ; struct { void
* LoggedData [ 2 ] ; } mdgni2w3f0 ; struct { void * LoggedData ; } k4hxqmk0k2
; int32_T gq3kibtyax ; int_T fnv21h2jjw [ 11 ] ; int_T edr1kgzwki [ 11 ] ;
int8_T eg0cnsyviw ; uint8_T o5mh4otnpm ; uint8_T gsmsqta5d1 ; uint8_T
cirw445xfx ; uint8_T ggy3kolena ; boolean_T ah1gqem3fu ; boolean_T occpczy502
; boolean_T oziueijlgt ; boolean_T pp5mt2rwib ; } DW ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T
Battery1_BatType ; real_T uSolarPanelmodule_Npar ; real_T
uSolarPanelmodule1_Npar ; real_T Saturation_UpperSat ; real_T
Saturation_LowerSat ; real_T Constant_Value ; real_T
Constant_Value_bbh4bssdud ; real_T Constant_Value_n4vtv1gsyp ; real_T
Constant_Value_pnqn3bfzq5 ; real_T UnitDelay_InitialCondition ; real_T
StateSpace_DS_param [ 8 ] ; real_T itinit1_InitialCondition ; real_T R2_Gain
; real_T Currentfilter_NumCoef ; real_T Currentfilter_DenCoef [ 2 ] ; real_T
Currentfilter_InitialStates ; real_T itinit_InitialCondition ; real_T
inti_gainval ; real_T inti_UpperSat ; real_T inti_LowerSat ; real_T Gain_Gain
; real_T R3_Gain ; real_T DiscreteTimeIntegrator_gainval ; real_T
DiscreteTimeIntegrator_IC ; real_T Memory2_InitialCondition ; real_T
UnitDelay_InitialCondition_byazrp2eng ; real_T Step_Time ; real_T Step_Y0 ;
real_T Step_YFinal ; real_T uSref_Gain ; real_T StateSpace_AS_param [ 16 ] ;
real_T StateSpace_BS_param [ 24 ] ; real_T StateSpace_CS_param [ 24 ] ;
real_T StateSpace_DS_param_prg1zujvs3 [ 36 ] ; real_T StateSpace_X0_param [ 4
] ; real_T donotdeletethisgain_Gain ; real_T
donotdeletethisgain_Gain_i0tbpdvq42 ; real_T
donotdeletethisgain_Gain_aakwgyoy4i ; real_T
donotdeletethisgain_Gain_owllpgyom1 ; real_T
UnitDelay_InitialCondition_o1reyqyrtx ; real_T UnitDelay1_InitialCondition ;
real_T donotdeletethisgain_Gain_gif4eynrja ; real_T Constant3_Value ; real_T
Constant2_Value ; real_T uib1_Gain ; real_T
donotdeletethisgain_Gain_ciqbkivldk ; real_T
donotdeletethisgain_Gain_g2dyk24vif ; real_T
donotdeletethisgain_Gain_gdixg4fwh0 ; real_T Gain4_Gain ; real_T Gain1_Gain ;
real_T Gain2_Gain ; real_T R1_Gain ; real_T SwitchCurrents_Value [ 2 ] ;
real_T u_K_Value ; real_T Temperature_Value ; real_T Tref_K_Value ; real_T
alpha_Isc_Gain ; real_T IL_module_Value ; real_T Rs_array_Value ; real_T
one1_Value ; real_T Tref_K1_Value ; real_T dEgdT_Gain ; real_T EgRef_Gain ;
real_T Tref_K2_Value ; real_T I0_array_Gain ; real_T EgRef_Value ; real_T
k1_Gain ; real_T Rsh_array_Value ; real_T Rsh_array_5Sref_Value ; real_T
VT_ref_array_Gain ; real_T one_Value ; real_T u_K_Value_pxwery2jsn ; real_T
Constant2_Value_ijxamwyxru ; real_T uSref_Gain_i2bwmxyr3w ; real_T
Temperature1_Value ; real_T Tref_K_Value_gszk5qry31 ; real_T
alpha_Isc_Gain_ecyq2y3zp1 ; real_T IL_module_Value_fcyvgl0ruo ; real_T
Rs_array_Value_i3gynv5auc ; real_T one1_Value_c5ubottqde ; real_T
Tref_K1_Value_l0p1zui3pw ; real_T dEgdT_Gain_pzvewxc0mk ; real_T
EgRef_Gain_fnkjuejdev ; real_T Tref_K2_Value_pctkqeb0jj ; real_T
I0_array_Gain_k1y52gw4gn ; real_T EgRef_Value_lrhsg5awud ; real_T
k1_Gain_k5ftzzatnv ; real_T Rsh_array_Value_bqlp4wcosc ; real_T
Rsh_array_5Sref_Value_lkbpzhydcm ; real_T VT_ref_array_Gain_a0gmuram1c ;
real_T one_Value_lrvrdzbc3o ; real_T Constant_Value_mfpmkkcvzy ; real_T
Constant1_Value ; real_T Constant12_Value ; real_T Constant9_Value ; real_T
Constant1_Value_adlo0r1pnz ; real_T Constant2_Value_fbpvb5zax4 ; real_T
Constant3_Value_bq22tlhptb ; real_T Constant4_Value ; real_T eee_Value ; } ;
extern const char_T * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern DW
rtDW ; extern P rtP ; extern mxArray * mr_EPS_MILS_GetDWork ( ) ; extern void
mr_EPS_MILS_SetDWork ( const mxArray * ssDW ) ; extern mxArray *
mr_EPS_MILS_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * EPS_MILS_GetCAPIStaticMap ( void ) ; extern
SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern const int_T
gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern rtInportTUtable
* gblInportTUtables ; extern const char * gblInportFileName ; extern const
int_T gblNumRootInportBlks ; extern const int_T gblNumModelInputs ; extern
const int_T gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ;
extern const int_T gblInportComplex [ ] ; extern const int_T
gblInportInterpoFlag [ ] ; extern const int_T gblInportContinuous [ ] ;
extern const int_T gblParameterTuningTid ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif

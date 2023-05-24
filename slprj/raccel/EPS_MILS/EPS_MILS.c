#include "EPS_MILS.h"
#include "rtwtypes.h"
#include "mwmathutil.h"
#include "EPS_MILS_private.h"
#include "rt_logging_mmi.h"
#include "EPS_MILS_capi.h"
#include "EPS_MILS_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 3 , & stopRequested ) ; }
rtExtModeShutdown ( 3 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 4 ; const char_T
* gbl_raccel_Version = "10.7 (R2023a) 19-Nov-2022" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 0 ; const int_T
gblNumModelInputs = 0 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ - 1 } ; const int_T gblInportDims [ ] = { - 1 } ; const int_T
gblInportComplex [ ] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1
} ; const int_T gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [
] = { 1 , 1 , 1 , 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes (
SimStruct * S , const char * inportFileName , int * matFileFormat ) { return
rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
#define ofjorohw2w (-1)
B rtB ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS = &
model_S ; void MdlInitialize ( void ) { boolean_T tmp ; rtDW . mfmnjfzu0e =
rtP . UnitDelay_InitialCondition ; { int32_T i , j ; real_T * Ds = ( real_T *
) rtDW . eee25gfzar . DS ; for ( i = 0 ; i < 4 ; i ++ ) { for ( j = 0 ; j < 2
; j ++ ) Ds [ i * 2 + j ] = ( rtP . StateSpace_DS_param [ i + j * 4 ] ) ; } }
rtDW . lpmgf5dfgn = rtP . itinit1_InitialCondition ; rtDW . fvss2djvki = rtP
. Currentfilter_InitialStates ; rtDW . orsz0vf0zs = rtP .
itinit_InitialCondition ; rtDW . eg0cnsyviw = 2 ; rtDW . o5mh4otnpm = 1U ; if
( ssIsFirstInitCond ( rtS ) ) { tmp = slIsRapidAcceleratorSimulating ( ) ; if
( tmp ) { tmp = ssGetGlobalInitialStatesAvailable ( rtS ) ; rtDW . o5mh4otnpm
= ( uint8_T ) ! tmp ; } else { rtDW . o5mh4otnpm = 1U ; } } rtDW . o13ep0zjtp
= rtP . DiscreteTimeIntegrator_IC ; rtDW . bmqhr21dyv = rtP .
Memory2_InitialCondition ; rtDW . ilkonha3co = rtP .
UnitDelay_InitialCondition_byazrp2eng ; { int32_T i , j ; real_T * As = (
real_T * ) rtDW . f1nkbdwyq1 . AS ; real_T * Bs = ( real_T * ) rtDW .
f1nkbdwyq1 . BS ; real_T * Cs = ( real_T * ) rtDW . f1nkbdwyq1 . CS ; real_T
* Ds = ( real_T * ) rtDW . f1nkbdwyq1 . DS ; real_T * X0 = ( real_T * ) &
rtDW . p0lr4eegs0 [ 0 ] ; for ( i = 0 ; i < 4 ; i ++ ) { X0 [ i ] = ( rtP .
StateSpace_X0_param [ i ] ) ; } for ( i = 0 ; i < 4 ; i ++ ) { for ( j = 0 ;
j < 4 ; j ++ ) As [ i * 4 + j ] = ( rtP . StateSpace_AS_param [ i + j * 4 ] )
; for ( j = 0 ; j < 6 ; j ++ ) Bs [ i * 6 + j ] = ( rtP . StateSpace_BS_param
[ i + j * 4 ] ) ; } for ( i = 0 ; i < 6 ; i ++ ) { for ( j = 0 ; j < 4 ; j ++
) Cs [ i * 4 + j ] = ( rtP . StateSpace_CS_param [ i + j * 6 ] ) ; } for ( i
= 0 ; i < 6 ; i ++ ) { for ( j = 0 ; j < 6 ; j ++ ) Ds [ i * 6 + j ] = ( rtP
. StateSpace_DS_param_prg1zujvs3 [ i + j * 6 ] ) ; } { int_T * switch_status
= ( int_T * ) rtDW . f1nkbdwyq1 . SWITCH_STATUS ; int_T * gState = ( int_T *
) rtDW . f1nkbdwyq1 . G_STATE ; real_T * yswitch = ( real_T * ) rtDW .
f1nkbdwyq1 . Y_SWITCH ; int_T * switchTypes = ( int_T * ) rtDW . f1nkbdwyq1 .
SWITCH_TYPES ; int_T * idxOutSw = ( int_T * ) rtDW . f1nkbdwyq1 . IDX_OUT_SW
; int_T * switch_status_init = ( int_T * ) rtDW . f1nkbdwyq1 .
SWITCH_STATUS_INIT ; switch_status [ 0 ] = 0 ; switch_status_init [ 0 ] = 0 ;
gState [ 0 ] = ( int_T ) 0.0 ; yswitch [ 0 ] = 1 / 0.001 ; switchTypes [ 0 ]
= ( int_T ) 3.0 ; idxOutSw [ 0 ] = ( ( int_T ) 0.0 ) - 1 ; switch_status [ 1
] = 0 ; switch_status_init [ 1 ] = 0 ; gState [ 1 ] = ( int_T ) 0.0 ; yswitch
[ 1 ] = 1 / 0.001 ; switchTypes [ 1 ] = ( int_T ) 7.0 ; idxOutSw [ 1 ] = ( (
int_T ) 0.0 ) - 1 ; } } rtDW . bqa3xzhwdv = rtP .
UnitDelay_InitialCondition_o1reyqyrtx ; rtDW . p2fq3uuisu = rtP .
UnitDelay1_InitialCondition ; rtDW . gq3kibtyax = ofjorohw2w ; rtDW .
ggy3kolena = 0U ; rtDW . l4ezf5ev5p = 0.7 ; rtDW . occpczy502 = true ; rtDW .
f3qkmjhmlg = 0.0 ; rtDW . oziueijlgt = true ; rtDW . pbbyn3soma = 0.0 ; rtDW
. pp5mt2rwib = true ; } void MdlStart ( void ) { { bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} { rtDW . eee25gfzar . DS = ( real_T * ) calloc ( 4 * 2 , sizeof ( real_T )
) ; rtDW . eee25gfzar . DX_COL = ( real_T * ) calloc ( 4 , sizeof ( real_T )
) ; rtDW . eee25gfzar . TMP2 = ( real_T * ) calloc ( 2 , sizeof ( real_T ) )
; } rtDW . gsmsqta5d1 = 0U ; rtDW . cirw445xfx = 0U ; { rtDW . f1nkbdwyq1 .
AS = ( real_T * ) calloc ( 4 * 4 , sizeof ( real_T ) ) ; rtDW . f1nkbdwyq1 .
BS = ( real_T * ) calloc ( 4 * 6 , sizeof ( real_T ) ) ; rtDW . f1nkbdwyq1 .
CS = ( real_T * ) calloc ( 6 * 4 , sizeof ( real_T ) ) ; rtDW . f1nkbdwyq1 .
DS = ( real_T * ) calloc ( 6 * 6 , sizeof ( real_T ) ) ; rtDW . f1nkbdwyq1 .
DX_COL = ( real_T * ) calloc ( 6 , sizeof ( real_T ) ) ; rtDW . f1nkbdwyq1 .
TMP2 = ( real_T * ) calloc ( 6 , sizeof ( real_T ) ) ; rtDW . f1nkbdwyq1 .
BD_COL = ( real_T * ) calloc ( 4 , sizeof ( real_T ) ) ; rtDW . f1nkbdwyq1 .
TMP1 = ( real_T * ) calloc ( 4 , sizeof ( real_T ) ) ; rtDW . f1nkbdwyq1 .
XTMP = ( real_T * ) calloc ( 4 , sizeof ( real_T ) ) ; rtDW . f1nkbdwyq1 .
SWITCH_STATUS = ( int_T * ) calloc ( 2 , sizeof ( int_T ) ) ; rtDW .
f1nkbdwyq1 . SW_CHG = ( int_T * ) calloc ( 2 , sizeof ( int_T ) ) ; rtDW .
f1nkbdwyq1 . G_STATE = ( int_T * ) calloc ( 2 , sizeof ( int_T ) ) ; rtDW .
f1nkbdwyq1 . Y_SWITCH = ( real_T * ) calloc ( 2 , sizeof ( real_T ) ) ; rtDW
. f1nkbdwyq1 . SWITCH_TYPES = ( int_T * ) calloc ( 2 , sizeof ( int_T ) ) ;
rtDW . f1nkbdwyq1 . IDX_OUT_SW = ( int_T * ) calloc ( 2 , sizeof ( int_T ) )
; rtDW . f1nkbdwyq1 . SWITCH_STATUS_INIT = ( int_T * ) calloc ( 2 , sizeof (
int_T ) ) ; rtDW . f1nkbdwyq1 . USWLAST = ( real_T * ) calloc ( 2 , sizeof (
real_T ) ) ; } MdlInitialize ( ) ; } void MdlOutputs ( int_T tid ) { real_T
c5mh0vvupg ; real_T duuj1wfuk0 ; real_T dzcsgqfpne ; real_T ei5ilyujth ;
real_T ep4nk3vmeu ; real_T eshuejmrmq ; real_T limqx4i3a5 ; real_T m1x240nuex
; boolean_T kxmobzbpuh ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB .
opffrybcih = rtDW . mfmnjfzu0e ; { real_T accum ; real_T * Ds = ( real_T * )
rtDW . eee25gfzar . DS ; accum = 0.0 ; accum += * ( Ds ++ ) * rtB .
opffrybcih ; accum += * ( Ds ++ ) * rtB . hoetqsvi5q ; rtB . o5wrrem1qc [ 0 ]
= accum ; accum = 0.0 ; accum += * ( Ds ++ ) * rtB . opffrybcih ; accum += *
( Ds ++ ) * rtB . hoetqsvi5q ; rtB . o5wrrem1qc [ 1 ] = accum ; accum = 0.0 ;
accum += * ( Ds ++ ) * rtB . opffrybcih ; accum += * ( Ds ++ ) * rtB .
hoetqsvi5q ; rtB . o5wrrem1qc [ 2 ] = accum ; accum = 0.0 ; accum += * ( Ds
++ ) * rtB . opffrybcih ; accum += * ( Ds ++ ) * rtB . hoetqsvi5q ; rtB .
o5wrrem1qc [ 3 ] = accum ; } rtB . c1gxu3rrmx = rtP . Currentfilter_NumCoef *
rtDW . fvss2djvki ; rtB . cqz5woloyg = ( rtB . c1gxu3rrmx > rtP .
Constant_Value_bbh4bssdud ) ; } if ( ssIsSampleHit ( rtS , 0 , 0 ) ) {
duuj1wfuk0 = rtDW . lpmgf5dfgn ; m1x240nuex = rtP . R2_Gain * rtDW .
lpmgf5dfgn ; eshuejmrmq = 1.000001 * m1x240nuex * 0.96711798839458663 /
0.9999 ; rtB . eskihpk02k = rtDW . orsz0vf0zs ; } if ( ssIsSampleHit ( rtS ,
1 , 0 ) ) { if ( rtDW . o5mh4otnpm != 0 ) { rtDW . bhqjjurcih = rtB .
eskihpk02k ; if ( rtDW . bhqjjurcih >= rtP . inti_UpperSat ) { rtDW .
bhqjjurcih = rtP . inti_UpperSat ; } else if ( rtDW . bhqjjurcih <= rtP .
inti_LowerSat ) { rtDW . bhqjjurcih = rtP . inti_LowerSat ; } } if ( ( rtB .
cqz5woloyg > 0.0 ) && ( rtDW . eg0cnsyviw <= 0 ) ) { rtDW . bhqjjurcih = rtB
. eskihpk02k ; if ( rtDW . bhqjjurcih >= rtP . inti_UpperSat ) { rtDW .
bhqjjurcih = rtP . inti_UpperSat ; } else if ( rtDW . bhqjjurcih <= rtP .
inti_LowerSat ) { rtDW . bhqjjurcih = rtP . inti_LowerSat ; } } if ( rtDW .
bhqjjurcih >= rtP . inti_UpperSat ) { rtDW . bhqjjurcih = rtP . inti_UpperSat
; } else if ( rtDW . bhqjjurcih <= rtP . inti_LowerSat ) { rtDW . bhqjjurcih
= rtP . inti_LowerSat ; } rtB . od5qrdcbcj = rtP . Gain_Gain * rtDW .
bhqjjurcih ; } if ( ssIsSampleHit ( rtS , 0 , 0 ) ) { kxmobzbpuh = ( rtB .
od5qrdcbcj > m1x240nuex ) ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( rtB
. od5qrdcbcj < rtP . Constant9_Value ) { rtB . h4js3v5upa = rtP .
Constant9_Value ; } else { rtB . h4js3v5upa = rtB . od5qrdcbcj ; } } if (
ssIsSampleHit ( rtS , 0 , 0 ) ) { if ( kxmobzbpuh ) { ei5ilyujth = m1x240nuex
; } else { ei5ilyujth = rtB . h4js3v5upa ; } if ( eshuejmrmq <= ei5ilyujth )
{ ei5ilyujth = m1x240nuex ; } dzcsgqfpne = - 0.0099890864064271952 *
duuj1wfuk0 / ( duuj1wfuk0 - ei5ilyujth ) * ei5ilyujth ; limqx4i3a5 = - rtB .
cqz5woloyg * 0.0099890864064271952 * rtB . c1gxu3rrmx * duuj1wfuk0 / (
duuj1wfuk0 - ei5ilyujth ) ; c5mh0vvupg = rtP . R3_Gain * duuj1wfuk0 ; if ( !
( rtB . od5qrdcbcj > c5mh0vvupg ) ) { m1x240nuex = - c5mh0vvupg * 0.999 * 0.1
* 0.9999 ; if ( rtB . od5qrdcbcj < m1x240nuex ) { c5mh0vvupg = m1x240nuex ; }
else { c5mh0vvupg = rtB . od5qrdcbcj ; } } } if ( ssIsSampleHit ( rtS , 1 , 0
) ) { rtB . mywmpmosnc = ( rtB . c1gxu3rrmx < rtP . Constant_Value_n4vtv1gsyp
) ; rtB . fk32bvs2ee = rtDW . o13ep0zjtp ; } if ( ssIsSampleHit ( rtS , 0 , 0
) ) { switch ( ( int32_T ) rtP . Battery1_BatType ) { case 1 : ep4nk3vmeu = -
( rtP . Constant4_Value * rtB . mywmpmosnc ) * 0.0099890864064271952 * ( rtP
. Constant4_Value * rtB . c1gxu3rrmx ) * ( 5.5835999999999864 / ( rtP .
Constant4_Value * c5mh0vvupg + 0.55835999999999864 ) ) ; break ; case 2 :
ep4nk3vmeu = rtP . Constant1_Value_adlo0r1pnz * duuj1wfuk0 ; ep4nk3vmeu = - (
rtP . Constant1_Value_adlo0r1pnz * rtB . mywmpmosnc ) * 0.0099890864064271952
* ( rtP . Constant1_Value_adlo0r1pnz * rtB . c1gxu3rrmx ) * ep4nk3vmeu / (
rtP . Constant1_Value_adlo0r1pnz * c5mh0vvupg + ep4nk3vmeu * 0.1 ) ; break ;
case 3 : ep4nk3vmeu = - ( rtP . Constant3_Value_bq22tlhptb * rtB . mywmpmosnc
) * 0.0099890864064271952 * ( rtP . Constant3_Value_bq22tlhptb * rtB .
c1gxu3rrmx ) * ( 5.5835999999999864 / ( muDoubleScalarAbs ( rtP .
Constant3_Value_bq22tlhptb * c5mh0vvupg ) + 0.55835999999999864 ) ) ; break ;
default : ep4nk3vmeu = - ( rtP . Constant2_Value_fbpvb5zax4 * rtB .
mywmpmosnc ) * 0.0099890864064271952 * ( rtP . Constant2_Value_fbpvb5zax4 *
rtB . c1gxu3rrmx ) * ( 5.5835999999999864 / ( muDoubleScalarAbs ( rtP .
Constant2_Value_fbpvb5zax4 * c5mh0vvupg ) + 0.55835999999999864 ) ) ; break ;
} } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . livt5jk2tf = rtDW .
bmqhr21dyv ; } if ( ssIsSampleHit ( rtS , 0 , 0 ) ) { switch ( ( int32_T )
rtP . Battery1_BatType ) { case 1 : duuj1wfuk0 = rtB . fk32bvs2ee ; break ;
case 2 : if ( ei5ilyujth > rtP . Saturation_UpperSat ) { c5mh0vvupg = rtP .
Saturation_UpperSat ; } else if ( ei5ilyujth < rtP . Saturation_LowerSat ) {
c5mh0vvupg = rtP . Saturation_LowerSat ; } else { c5mh0vvupg = ei5ilyujth ; }
duuj1wfuk0 = muDoubleScalarExp ( - 11.307767944936083 * c5mh0vvupg ) *
0.60462693404467915 ; break ; case 3 : duuj1wfuk0 = rtB . fk32bvs2ee ; break
; default : duuj1wfuk0 = rtB . fk32bvs2ee ; break ; } duuj1wfuk0 = ( ( ( (
dzcsgqfpne + limqx4i3a5 ) + ep4nk3vmeu ) + duuj1wfuk0 ) + - 0.0 * ei5ilyujth
) + rtP . Constant_Value_mfpmkkcvzy ; if ( duuj1wfuk0 > rtP . Constant1_Value
) { rtB . pjzvjmxirm = rtP . Constant1_Value ; } else if ( duuj1wfuk0 < rtB .
livt5jk2tf ) { rtB . pjzvjmxirm = rtB . livt5jk2tf ; } else { rtB .
pjzvjmxirm = duuj1wfuk0 ; } } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB .
fi5drgiklu = rtDW . ilkonha3co ; if ( ssGetTaskTime ( rtS , 1 ) < rtP .
Step_Time ) { rtB . nlbivj4lf3 = rtP . Step_Y0 ; } else { rtB . nlbivj4lf3 =
rtP . Step_YFinal ; } ep4nk3vmeu = rtP . uSref_Gain * rtB . nlbivj4lf3 ; rtB
. gs1rtf2e3u = rtB . pdyqixdn33 * ep4nk3vmeu ; { real_T accum ; int_T *
switch_status = ( int_T * ) rtDW . f1nkbdwyq1 . SWITCH_STATUS ; int_T *
switch_status_init = ( int_T * ) rtDW . f1nkbdwyq1 . SWITCH_STATUS_INIT ;
int_T * SwitchChange = ( int_T * ) rtDW . f1nkbdwyq1 . SW_CHG ; int_T *
gState = ( int_T * ) rtDW . f1nkbdwyq1 . G_STATE ; real_T * yswitch = (
real_T * ) rtDW . f1nkbdwyq1 . Y_SWITCH ; int_T * switchTypes = ( int_T * )
rtDW . f1nkbdwyq1 . SWITCH_TYPES ; int_T * idxOutSw = ( int_T * ) rtDW .
f1nkbdwyq1 . IDX_OUT_SW ; real_T * DxCol = ( real_T * ) rtDW . f1nkbdwyq1 .
DX_COL ; real_T * tmp2 = ( real_T * ) rtDW . f1nkbdwyq1 . TMP2 ; real_T *
BDcol = ( real_T * ) rtDW . f1nkbdwyq1 . BD_COL ; real_T * tmp1 = ( real_T *
) rtDW . f1nkbdwyq1 . TMP1 ; real_T * uswlast = ( real_T * ) rtDW .
f1nkbdwyq1 . USWLAST ; int_T newState ; int_T swChanged = 0 ; int loopsToDo =
20 ; real_T temp ; memcpy ( switch_status_init , switch_status , 2 * sizeof (
int_T ) ) ; memcpy ( uswlast , & rtB . huk3pt5r1v [ 0 ] , 2 * sizeof ( real_T
) ) ; do { if ( loopsToDo == 1 ) { swChanged = 0 ; { int_T i1 ; for ( i1 = 0
; i1 < 2 ; i1 ++ ) { swChanged = ( ( SwitchChange [ i1 ] = switch_status_init
[ i1 ] - switch_status [ i1 ] ) != 0 ) ? 1 : swChanged ; switch_status [ i1 ]
= switch_status_init [ i1 ] ; } } } else { real_T * Cs = ( real_T * ) rtDW .
f1nkbdwyq1 . CS ; real_T * Ds = ( real_T * ) rtDW . f1nkbdwyq1 . DS ; { int_T
i1 ; real_T * y0 = & rtB . huk3pt5r1v [ 0 ] ; for ( i1 = 0 ; i1 < 6 ; i1 ++ )
{ accum = 0.0 ; accum += * ( Cs ++ ) * rtDW . p0lr4eegs0 [ 0 ] ; accum += * (
Cs ++ ) * rtDW . p0lr4eegs0 [ 1 ] ; accum += * ( Cs ++ ) * rtDW . p0lr4eegs0
[ 2 ] ; accum += * ( Cs ++ ) * rtDW . p0lr4eegs0 [ 3 ] ; accum += * ( Ds ++ )
* rtP . SwitchCurrents_Value [ 0 ] ; accum += * ( Ds ++ ) * rtP .
SwitchCurrents_Value [ 1 ] ; accum += * ( Ds ++ ) * rtB . pjzvjmxirm ; accum
+= * ( Ds ++ ) * rtB . fi5drgiklu ; accum += * ( Ds ++ ) * rtB . gs1rtf2e3u ;
accum += * ( Ds ++ ) * rtP . eee_Value ; y0 [ i1 ] = accum ; } } swChanged =
0 ; newState = rtB . huk3pt5r1v [ 0 ] > 0.0 ? 1 : ( ( rtB . huk3pt5r1v [ 0 ]
< 0.0 ) ? 0 : switch_status [ 0 ] ) ; swChanged = ( ( SwitchChange [ 0 ] =
newState - switch_status [ 0 ] ) != 0 ) ? 1 : swChanged ; switch_status [ 0 ]
= newState ; newState = ( ( rtB . huk3pt5r1v [ 1 ] > 0.0 ) && ( gState [ 1 ]
> 0 ) ) || ( rtB . huk3pt5r1v [ 1 ] < 0.0 ) ? 1 : ( ( ( rtB . huk3pt5r1v [ 1
] > 0.0 ) && gState [ 1 ] == 0 ) ? 0 : switch_status [ 1 ] ) ; swChanged = (
( SwitchChange [ 1 ] = newState - switch_status [ 1 ] ) != 0 ) ? 1 :
swChanged ; switch_status [ 1 ] = newState ; } if ( swChanged ) { real_T * As
= ( real_T * ) rtDW . f1nkbdwyq1 . AS ; real_T * Cs = ( real_T * ) rtDW .
f1nkbdwyq1 . CS ; real_T * Bs = ( real_T * ) rtDW . f1nkbdwyq1 . BS ; real_T
* Ds = ( real_T * ) rtDW . f1nkbdwyq1 . DS ; real_T a1 ; { int_T i1 ; for (
i1 = 0 ; i1 < 2 ; i1 ++ ) { if ( SwitchChange [ i1 ] != 0 ) { a1 = 1000.0 *
SwitchChange [ i1 ] ; temp = 1 / ( 1 - Ds [ i1 * 7 ] * a1 ) ; { int_T i2 ;
for ( i2 = 0 ; i2 < 6 ; i2 ++ ) { DxCol [ i2 ] = Ds [ i2 * 6 + i1 ] * temp *
a1 ; } } DxCol [ i1 ] = temp ; BDcol [ 0 ] = Bs [ 0 + i1 ] * a1 ; BDcol [ 1 ]
= Bs [ 6 + i1 ] * a1 ; BDcol [ 2 ] = Bs [ 12 + i1 ] * a1 ; BDcol [ 3 ] = Bs [
18 + i1 ] * a1 ; memcpy ( tmp1 , & Cs [ i1 * 4 ] , 4 * sizeof ( real_T ) ) ;
memset ( & Cs [ i1 * 4 ] , '\0' , 4 * sizeof ( real_T ) ) ; memcpy ( tmp2 , &
Ds [ i1 * 6 ] , 6 * sizeof ( real_T ) ) ; memset ( & Ds [ i1 * 6 ] , '\0' , 6
* sizeof ( real_T ) ) ; { int_T i2 ; for ( i2 = 0 ; i2 < 6 ; i2 ++ ) { a1 =
DxCol [ i2 ] ; Cs [ i2 * 4 + 0 ] += a1 * tmp1 [ 0 ] ; Cs [ i2 * 4 + 1 ] += a1
* tmp1 [ 1 ] ; Cs [ i2 * 4 + 2 ] += a1 * tmp1 [ 2 ] ; Cs [ i2 * 4 + 3 ] += a1
* tmp1 [ 3 ] ; { int_T i3 ; for ( i3 = 0 ; i3 < 6 ; i3 ++ ) { Ds [ i2 * 6 +
i3 ] += a1 * tmp2 [ i3 ] ; } } } } a1 = BDcol [ 0 ] ; As [ 0 + 0 ] += a1 * Cs
[ i1 * 4 + 0 ] ; As [ 0 + 1 ] += a1 * Cs [ i1 * 4 + 1 ] ; As [ 0 + 2 ] += a1
* Cs [ i1 * 4 + 2 ] ; As [ 0 + 3 ] += a1 * Cs [ i1 * 4 + 3 ] ; { int_T i2 ;
for ( i2 = 0 ; i2 < 6 ; i2 ++ ) { Bs [ 0 + i2 ] += a1 * Ds [ i1 * 6 + i2 ] ;
} } a1 = BDcol [ 1 ] ; As [ 4 + 0 ] += a1 * Cs [ i1 * 4 + 0 ] ; As [ 4 + 1 ]
+= a1 * Cs [ i1 * 4 + 1 ] ; As [ 4 + 2 ] += a1 * Cs [ i1 * 4 + 2 ] ; As [ 4 +
3 ] += a1 * Cs [ i1 * 4 + 3 ] ; { int_T i2 ; for ( i2 = 0 ; i2 < 6 ; i2 ++ )
{ Bs [ 6 + i2 ] += a1 * Ds [ i1 * 6 + i2 ] ; } } a1 = BDcol [ 2 ] ; As [ 8 +
0 ] += a1 * Cs [ i1 * 4 + 0 ] ; As [ 8 + 1 ] += a1 * Cs [ i1 * 4 + 1 ] ; As [
8 + 2 ] += a1 * Cs [ i1 * 4 + 2 ] ; As [ 8 + 3 ] += a1 * Cs [ i1 * 4 + 3 ] ;
{ int_T i2 ; for ( i2 = 0 ; i2 < 6 ; i2 ++ ) { Bs [ 12 + i2 ] += a1 * Ds [ i1
* 6 + i2 ] ; } } a1 = BDcol [ 3 ] ; As [ 12 + 0 ] += a1 * Cs [ i1 * 4 + 0 ] ;
As [ 12 + 1 ] += a1 * Cs [ i1 * 4 + 1 ] ; As [ 12 + 2 ] += a1 * Cs [ i1 * 4 +
2 ] ; As [ 12 + 3 ] += a1 * Cs [ i1 * 4 + 3 ] ; { int_T i2 ; for ( i2 = 0 ;
i2 < 6 ; i2 ++ ) { Bs [ 18 + i2 ] += a1 * Ds [ i1 * 6 + i2 ] ; } } } } } } }
while ( swChanged > 0 && -- loopsToDo > 0 ) ; if ( loopsToDo == 0 ) { real_T
* Cs = ( real_T * ) rtDW . f1nkbdwyq1 . CS ; real_T * Ds = ( real_T * ) rtDW
. f1nkbdwyq1 . DS ; { int_T i1 ; real_T * y0 = & rtB . huk3pt5r1v [ 0 ] ; for
( i1 = 0 ; i1 < 6 ; i1 ++ ) { accum = 0.0 ; accum += * ( Cs ++ ) * rtDW .
p0lr4eegs0 [ 0 ] ; accum += * ( Cs ++ ) * rtDW . p0lr4eegs0 [ 1 ] ; accum +=
* ( Cs ++ ) * rtDW . p0lr4eegs0 [ 2 ] ; accum += * ( Cs ++ ) * rtDW .
p0lr4eegs0 [ 3 ] ; accum += * ( Ds ++ ) * rtP . SwitchCurrents_Value [ 0 ] ;
accum += * ( Ds ++ ) * rtP . SwitchCurrents_Value [ 1 ] ; accum += * ( Ds ++
) * rtB . pjzvjmxirm ; accum += * ( Ds ++ ) * rtB . fi5drgiklu ; accum += * (
Ds ++ ) * rtB . gs1rtf2e3u ; accum += * ( Ds ++ ) * rtP . eee_Value ; y0 [ i1
] = accum ; } } } rtB . dkuvq0253d [ 0 ] = ( real_T ) switch_status [ 0 ] ;
rtB . dkuvq0253d [ 1 ] = ( real_T ) switch_status [ 1 ] ; } rtB . nwjgq25zbk
= rtP . donotdeletethisgain_Gain * rtB . huk3pt5r1v [ 4 ] ; rtB . jq4n5kfwxa
= rtP . donotdeletethisgain_Gain_i0tbpdvq42 * rtB . huk3pt5r1v [ 2 ] ; rtB .
iggnzu3gsi = rtB . nwjgq25zbk * rtB . jq4n5kfwxa ; rtB . cvvcberjjn = rtP .
donotdeletethisgain_Gain_aakwgyoy4i * rtB . o5wrrem1qc [ 3 ] ; rtB .
k0p2ap0ikd = rtP . donotdeletethisgain_Gain_owllpgyom1 * rtB . o5wrrem1qc [ 1
] ; rtB . iuz04crxul = rtB . cvvcberjjn * rtB . k0p2ap0ikd ; rtB . nf0bwiard0
= rtDW . bqa3xzhwdv ; rtB . ixfpr1pnw5 = rtDW . p2fq3uuisu ; rtB . dwlavih11j
= rtB . nf0bwiard0 * rtB . ixfpr1pnw5 ; rtDW . gq3kibtyax = ofjorohw2w ;
duuj1wfuk0 = rtB . ixfpr1pnw5 * rtB . nf0bwiard0 ; dzcsgqfpne = duuj1wfuk0 -
rtDW . f3qkmjhmlg ; if ( dzcsgqfpne != 0.0 ) { if ( dzcsgqfpne > 0.0 ) { if (
rtB . nf0bwiard0 - rtDW . pbbyn3soma > 0.0 ) { rtB . hikj040a31 = rtDW .
l4ezf5ev5p - 1.0E-6 ; } else { rtB . hikj040a31 = rtDW . l4ezf5ev5p + 1.0E-6
; } } else if ( rtB . nf0bwiard0 - rtDW . pbbyn3soma > 0.0 ) { rtB .
hikj040a31 = rtDW . l4ezf5ev5p + 1.0E-6 ; } else { rtB . hikj040a31 = rtDW .
l4ezf5ev5p - 1.0E-6 ; } } else { rtB . hikj040a31 = rtDW . l4ezf5ev5p ; } if
( ( rtB . hikj040a31 > 1.0 ) || ( rtB . hikj040a31 < 0.0 ) ) { rtB .
hikj040a31 = rtDW . l4ezf5ev5p ; } rtDW . l4ezf5ev5p = rtB . hikj040a31 ;
rtDW . pbbyn3soma = rtB . nf0bwiard0 ; rtDW . f3qkmjhmlg = duuj1wfuk0 ; rtB .
dfa50jcwis = rtP . donotdeletethisgain_Gain_gif4eynrja * rtB . huk3pt5r1v [ 3
] ; rtB . k5gofgmai0 = rtB . nwjgq25zbk * rtB . jq4n5kfwxa ; rtB . aqm05n1pyd
= ( ( rtB . hikj040a31 != rtP . Constant_Value ) && ( rtB . hikj040a31 >= ( (
muDoubleScalarRem ( ssGetTaskTime ( rtS , 1 ) + rtP . Constant3_Value , rtP .
Constant2_Value ) * rtP . uib1_Gain * 2.0 - 1.0 ) + 1.0 ) * 0.5 ) ) ;
duuj1wfuk0 = rtB . nwjgq25zbk * rtP . Rs_array_Value + rtB . jq4n5kfwxa ; rtB
. intjutf0xv = ( ( muDoubleScalarExp ( 1.0 / rtB . nutlppxsf5 * duuj1wfuk0 )
- rtP . one_Value ) * rtB . ksfxdzvis4 + duuj1wfuk0 / rtP . Rsh_array_Value *
ep4nk3vmeu ) - duuj1wfuk0 / rtP . Rsh_array_5Sref_Value ; ep4nk3vmeu = rtP .
donotdeletethisgain_Gain_ciqbkivldk * rtB . o5wrrem1qc [ 2 ] * rtP .
Rs_array_Value_i3gynv5auc + rtP . donotdeletethisgain_Gain_g2dyk24vif * rtB .
o5wrrem1qc [ 0 ] ; rtB . etwjjxvghh = ( ( muDoubleScalarExp ( 1.0 / rtB .
bmzumqbgtq * ep4nk3vmeu ) - rtP . one_Value_lrvrdzbc3o ) * rtB . mkqlbqhydw +
ep4nk3vmeu / rtP . Rsh_array_Value_bqlp4wcosc * rtB . gylnb1tie2 ) -
ep4nk3vmeu / rtP . Rsh_array_5Sref_Value_lkbpzhydcm ; rtB . nmnnshb4os = rtP
. donotdeletethisgain_Gain_gdixg4fwh0 * rtB . huk3pt5r1v [ 5 ] ; rtB .
jnas5s0pvv = ( ( real_T ) ( rtB . nmnnshb4os < rtP .
Constant_Value_pnqn3bfzq5 ) * rtP . Gain4_Gain - rtB . fk32bvs2ee ) *
muDoubleScalarAbs ( rtB . nmnnshb4os ) * rtP . Gain1_Gain ; rtB . lovagimr4o
= rtP . R1_Gain * rtB . nmnnshb4os ; } if ( ssIsSampleHit ( rtS , 0 , 0 ) ) {
rtB . hpegnktew3 = rtP . Gain2_Gain * ei5ilyujth ; } UNUSED_PARAMETER ( tid )
; } void MdlOutputsTID3 ( int_T tid ) { real_T koo5pfxxnl ; real_T n1e3a5ltuz
; n1e3a5ltuz = rtP . Temperature_Value + rtP . u_K_Value ; rtB . pdyqixdn33 =
( ( n1e3a5ltuz - rtP . Tref_K_Value ) * rtP . alpha_Isc_Gain + rtP .
IL_module_Value ) * rtP . uSolarPanelmodule_Npar ; koo5pfxxnl = n1e3a5ltuz /
rtP . Tref_K2_Value ; rtB . ksfxdzvis4 = muDoubleScalarExp ( rtP .
EgRef_Value - ( ( n1e3a5ltuz - rtP . Tref_K1_Value ) * rtP . dEgdT_Gain + rtP
. one1_Value ) * rtP . EgRef_Gain / ( rtP . k1_Gain * n1e3a5ltuz ) ) * ( rtP
. I0_array_Gain * muDoubleScalarPower ( koo5pfxxnl , 3.0 ) ) ; rtB .
nutlppxsf5 = rtP . VT_ref_array_Gain * koo5pfxxnl ; rtB . gylnb1tie2 = rtP .
uSref_Gain_i2bwmxyr3w * rtP . Constant2_Value_ijxamwyxru ; n1e3a5ltuz = rtP .
Temperature1_Value + rtP . u_K_Value_pxwery2jsn ; rtB . hoetqsvi5q = ( (
n1e3a5ltuz - rtP . Tref_K_Value_gszk5qry31 ) * rtP .
alpha_Isc_Gain_ecyq2y3zp1 + rtP . IL_module_Value_fcyvgl0ruo ) * rtP .
uSolarPanelmodule1_Npar * rtB . gylnb1tie2 ; koo5pfxxnl = n1e3a5ltuz / rtP .
Tref_K2_Value_pctkqeb0jj ; rtB . mkqlbqhydw = muDoubleScalarExp ( rtP .
EgRef_Value_lrhsg5awud - ( ( n1e3a5ltuz - rtP . Tref_K1_Value_l0p1zui3pw ) *
rtP . dEgdT_Gain_pzvewxc0mk + rtP . one1_Value_c5ubottqde ) * rtP .
EgRef_Gain_fnkjuejdev / ( rtP . k1_Gain_k5ftzzatnv * n1e3a5ltuz ) ) * ( rtP .
I0_array_Gain_k1y52gw4gn * muDoubleScalarPower ( koo5pfxxnl , 3.0 ) ) ; rtB .
bmzumqbgtq = rtP . VT_ref_array_Gain_a0gmuram1c * koo5pfxxnl ;
UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) { if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtDW . mfmnjfzu0e = rtB . etwjjxvghh ; rtDW
. fvss2djvki = ( rtB . nmnnshb4os - rtP . Currentfilter_DenCoef [ 1 ] * rtDW
. fvss2djvki ) / rtP . Currentfilter_DenCoef [ 0 ] ; } if ( ssIsSampleHit (
rtS , 0 , 0 ) ) { rtDW . lpmgf5dfgn = rtP . Constant12_Value ; rtDW .
orsz0vf0zs = rtB . hpegnktew3 ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtDW
. o5mh4otnpm = 0U ; rtDW . bhqjjurcih += rtP . inti_gainval * rtB .
nmnnshb4os ; if ( rtDW . bhqjjurcih >= rtP . inti_UpperSat ) { rtDW .
bhqjjurcih = rtP . inti_UpperSat ; } else if ( rtDW . bhqjjurcih <= rtP .
inti_LowerSat ) { rtDW . bhqjjurcih = rtP . inti_LowerSat ; } if ( rtB .
cqz5woloyg > 0.0 ) { rtDW . eg0cnsyviw = 1 ; } else if ( rtB . cqz5woloyg <
0.0 ) { rtDW . eg0cnsyviw = - 1 ; } else if ( rtB . cqz5woloyg == 0.0 ) {
rtDW . eg0cnsyviw = 0 ; } else { rtDW . eg0cnsyviw = 2 ; } rtDW . o13ep0zjtp
+= rtP . DiscreteTimeIntegrator_gainval * rtB . jnas5s0pvv ; rtDW .
bmqhr21dyv = rtB . lovagimr4o ; rtDW . ilkonha3co = rtB . intjutf0xv ; {
const real_T * As = ( real_T * ) rtDW . f1nkbdwyq1 . AS ; const real_T * Bs =
( real_T * ) rtDW . f1nkbdwyq1 . BS ; real_T * xtmp = ( real_T * ) rtDW .
f1nkbdwyq1 . XTMP ; real_T accum ; accum = 0.0 ; accum += * ( As ++ ) * rtDW
. p0lr4eegs0 [ 0 ] ; accum += * ( As ++ ) * rtDW . p0lr4eegs0 [ 1 ] ; accum
+= * ( As ++ ) * rtDW . p0lr4eegs0 [ 2 ] ; accum += * ( As ++ ) * rtDW .
p0lr4eegs0 [ 3 ] ; accum += * ( Bs ++ ) * rtP . SwitchCurrents_Value [ 0 ] ;
accum += * ( Bs ++ ) * rtP . SwitchCurrents_Value [ 1 ] ; accum += * ( Bs ++
) * rtB . pjzvjmxirm ; accum += * ( Bs ++ ) * rtB . fi5drgiklu ; accum += * (
Bs ++ ) * rtB . gs1rtf2e3u ; accum += * ( Bs ++ ) * rtP . eee_Value ; xtmp [
0 ] = accum ; accum = 0.0 ; accum += * ( As ++ ) * rtDW . p0lr4eegs0 [ 0 ] ;
accum += * ( As ++ ) * rtDW . p0lr4eegs0 [ 1 ] ; accum += * ( As ++ ) * rtDW
. p0lr4eegs0 [ 2 ] ; accum += * ( As ++ ) * rtDW . p0lr4eegs0 [ 3 ] ; accum
+= * ( Bs ++ ) * rtP . SwitchCurrents_Value [ 0 ] ; accum += * ( Bs ++ ) *
rtP . SwitchCurrents_Value [ 1 ] ; accum += * ( Bs ++ ) * rtB . pjzvjmxirm ;
accum += * ( Bs ++ ) * rtB . fi5drgiklu ; accum += * ( Bs ++ ) * rtB .
gs1rtf2e3u ; accum += * ( Bs ++ ) * rtP . eee_Value ; xtmp [ 1 ] = accum ;
accum = 0.0 ; accum += * ( As ++ ) * rtDW . p0lr4eegs0 [ 0 ] ; accum += * (
As ++ ) * rtDW . p0lr4eegs0 [ 1 ] ; accum += * ( As ++ ) * rtDW . p0lr4eegs0
[ 2 ] ; accum += * ( As ++ ) * rtDW . p0lr4eegs0 [ 3 ] ; accum += * ( Bs ++ )
* rtP . SwitchCurrents_Value [ 0 ] ; accum += * ( Bs ++ ) * rtP .
SwitchCurrents_Value [ 1 ] ; accum += * ( Bs ++ ) * rtB . pjzvjmxirm ; accum
+= * ( Bs ++ ) * rtB . fi5drgiklu ; accum += * ( Bs ++ ) * rtB . gs1rtf2e3u ;
accum += * ( Bs ++ ) * rtP . eee_Value ; xtmp [ 2 ] = accum ; accum = 0.0 ;
accum += * ( As ++ ) * rtDW . p0lr4eegs0 [ 0 ] ; accum += * ( As ++ ) * rtDW
. p0lr4eegs0 [ 1 ] ; accum += * ( As ++ ) * rtDW . p0lr4eegs0 [ 2 ] ; accum
+= * ( As ++ ) * rtDW . p0lr4eegs0 [ 3 ] ; accum += * ( Bs ++ ) * rtP .
SwitchCurrents_Value [ 0 ] ; accum += * ( Bs ++ ) * rtP .
SwitchCurrents_Value [ 1 ] ; accum += * ( Bs ++ ) * rtB . pjzvjmxirm ; accum
+= * ( Bs ++ ) * rtB . fi5drgiklu ; accum += * ( Bs ++ ) * rtB . gs1rtf2e3u ;
accum += * ( Bs ++ ) * rtP . eee_Value ; xtmp [ 3 ] = accum ; rtDW .
p0lr4eegs0 [ 0 ] = xtmp [ 0 ] ; rtDW . p0lr4eegs0 [ 1 ] = xtmp [ 1 ] ; rtDW .
p0lr4eegs0 [ 2 ] = xtmp [ 2 ] ; rtDW . p0lr4eegs0 [ 3 ] = xtmp [ 3 ] ; {
int_T * gState = ( int_T * ) rtDW . f1nkbdwyq1 . G_STATE ; * ( gState ++ ) =
( int_T ) 0.0 ; * ( gState ++ ) = ( int_T ) rtB . aqm05n1pyd ; } } rtDW .
bqa3xzhwdv = rtB . jq4n5kfwxa ; rtDW . p2fq3uuisu = rtB . nwjgq25zbk ; }
UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID3 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlTerminate ( void ) { { free ( rtDW .
eee25gfzar . DS ) ; free ( rtDW . eee25gfzar . DX_COL ) ; free ( rtDW .
eee25gfzar . TMP2 ) ; } { free ( rtDW . f1nkbdwyq1 . AS ) ; free ( rtDW .
f1nkbdwyq1 . BS ) ; free ( rtDW . f1nkbdwyq1 . CS ) ; free ( rtDW .
f1nkbdwyq1 . DS ) ; free ( rtDW . f1nkbdwyq1 . DX_COL ) ; free ( rtDW .
f1nkbdwyq1 . TMP2 ) ; free ( rtDW . f1nkbdwyq1 . BD_COL ) ; free ( rtDW .
f1nkbdwyq1 . TMP1 ) ; free ( rtDW . f1nkbdwyq1 . XTMP ) ; free ( rtDW .
f1nkbdwyq1 . G_STATE ) ; free ( rtDW . f1nkbdwyq1 . SWITCH_STATUS ) ; free (
rtDW . f1nkbdwyq1 . SW_CHG ) ; free ( rtDW . f1nkbdwyq1 . SWITCH_STATUS_INIT
) ; } } static void mr_EPS_MILS_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void
mr_EPS_MILS_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_EPS_MILS_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_EPS_MILS_restoreDataFromMxArray ( void * destData , const mxArray *
srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_EPS_MILS_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_EPS_MILS_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j
, uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_EPS_MILS_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i
, int j , uint_T numBits ) ; static uint_T
mr_EPS_MILS_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i
, int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar (
mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits
) - 1u ) ; } static void mr_EPS_MILS_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void mr_EPS_MILS_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_EPS_MILS_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_EPS_MILS_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_EPS_MILS_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_EPS_MILS_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
real_T ) fieldVal ) ) ; } static uint_T
mr_EPS_MILS_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray
, mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static uint_T
mr_EPS_MILS_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray
, mwIndex i , int j , mwIndex offset , uint_T numBits ) { const uint_T
fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber ( srcArray
, i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u ) ; }
mxArray * mr_EPS_MILS_GetDWork ( ) { static const char_T * ssDWFieldNames [ 3
] = { "rtB" , "rtDW" , "NULL_PrevZCX" , } ; mxArray * ssDW =
mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_EPS_MILS_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & ( rtB ) ,
sizeof ( rtB ) ) ; { static const char_T * rtdwDataFieldNames [ 26 ] = {
"rtDW.mfmnjfzu0e" , "rtDW.fvss2djvki" , "rtDW.bhqjjurcih" , "rtDW.o13ep0zjtp"
, "rtDW.ilkonha3co" , "rtDW.p0lr4eegs0" , "rtDW.bqa3xzhwdv" ,
"rtDW.p2fq3uuisu" , "rtDW.lpmgf5dfgn" , "rtDW.orsz0vf0zs" , "rtDW.bmqhr21dyv"
, "rtDW.l4ezf5ev5p" , "rtDW.f3qkmjhmlg" , "rtDW.pbbyn3soma" ,
"rtDW.gq3kibtyax" , "rtDW.fnv21h2jjw" , "rtDW.edr1kgzwki" , "rtDW.eg0cnsyviw"
, "rtDW.o5mh4otnpm" , "rtDW.gsmsqta5d1" , "rtDW.cirw445xfx" ,
"rtDW.ggy3kolena" , "rtDW.ah1gqem3fu" , "rtDW.occpczy502" , "rtDW.oziueijlgt"
, "rtDW.pp5mt2rwib" , } ; mxArray * rtdwData = mxCreateStructMatrix ( 1 , 1 ,
26 , rtdwDataFieldNames ) ; mr_EPS_MILS_cacheDataAsMxArray ( rtdwData , 0 , 0
, ( const void * ) & ( rtDW . mfmnjfzu0e ) , sizeof ( rtDW . mfmnjfzu0e ) ) ;
mr_EPS_MILS_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * ) & ( rtDW
. fvss2djvki ) , sizeof ( rtDW . fvss2djvki ) ) ;
mr_EPS_MILS_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void * ) & ( rtDW
. bhqjjurcih ) , sizeof ( rtDW . bhqjjurcih ) ) ;
mr_EPS_MILS_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * ) & ( rtDW
. o13ep0zjtp ) , sizeof ( rtDW . o13ep0zjtp ) ) ;
mr_EPS_MILS_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void * ) & ( rtDW
. ilkonha3co ) , sizeof ( rtDW . ilkonha3co ) ) ;
mr_EPS_MILS_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void * ) & ( rtDW
. p0lr4eegs0 ) , sizeof ( rtDW . p0lr4eegs0 ) ) ;
mr_EPS_MILS_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * ) & ( rtDW
. bqa3xzhwdv ) , sizeof ( rtDW . bqa3xzhwdv ) ) ;
mr_EPS_MILS_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void * ) & ( rtDW
. p2fq3uuisu ) , sizeof ( rtDW . p2fq3uuisu ) ) ;
mr_EPS_MILS_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void * ) & ( rtDW
. lpmgf5dfgn ) , sizeof ( rtDW . lpmgf5dfgn ) ) ;
mr_EPS_MILS_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * ) & ( rtDW
. orsz0vf0zs ) , sizeof ( rtDW . orsz0vf0zs ) ) ;
mr_EPS_MILS_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const void * ) & (
rtDW . bmqhr21dyv ) , sizeof ( rtDW . bmqhr21dyv ) ) ;
mr_EPS_MILS_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const void * ) & (
rtDW . l4ezf5ev5p ) , sizeof ( rtDW . l4ezf5ev5p ) ) ;
mr_EPS_MILS_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const void * ) & (
rtDW . f3qkmjhmlg ) , sizeof ( rtDW . f3qkmjhmlg ) ) ;
mr_EPS_MILS_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void * ) & (
rtDW . pbbyn3soma ) , sizeof ( rtDW . pbbyn3soma ) ) ;
mr_EPS_MILS_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const void * ) & (
rtDW . gq3kibtyax ) , sizeof ( rtDW . gq3kibtyax ) ) ;
mr_EPS_MILS_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const void * ) & (
rtDW . fnv21h2jjw ) , sizeof ( rtDW . fnv21h2jjw ) ) ;
mr_EPS_MILS_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const void * ) & (
rtDW . edr1kgzwki ) , sizeof ( rtDW . edr1kgzwki ) ) ;
mr_EPS_MILS_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const void * ) & (
rtDW . eg0cnsyviw ) , sizeof ( rtDW . eg0cnsyviw ) ) ;
mr_EPS_MILS_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const void * ) & (
rtDW . o5mh4otnpm ) , sizeof ( rtDW . o5mh4otnpm ) ) ;
mr_EPS_MILS_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const void * ) & (
rtDW . gsmsqta5d1 ) , sizeof ( rtDW . gsmsqta5d1 ) ) ;
mr_EPS_MILS_cacheDataAsMxArray ( rtdwData , 0 , 20 , ( const void * ) & (
rtDW . cirw445xfx ) , sizeof ( rtDW . cirw445xfx ) ) ;
mr_EPS_MILS_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const void * ) & (
rtDW . ggy3kolena ) , sizeof ( rtDW . ggy3kolena ) ) ;
mr_EPS_MILS_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const void * ) & (
rtDW . ah1gqem3fu ) , sizeof ( rtDW . ah1gqem3fu ) ) ;
mr_EPS_MILS_cacheDataAsMxArray ( rtdwData , 0 , 23 , ( const void * ) & (
rtDW . occpczy502 ) , sizeof ( rtDW . occpczy502 ) ) ;
mr_EPS_MILS_cacheDataAsMxArray ( rtdwData , 0 , 24 , ( const void * ) & (
rtDW . oziueijlgt ) , sizeof ( rtDW . oziueijlgt ) ) ;
mr_EPS_MILS_cacheDataAsMxArray ( rtdwData , 0 , 25 , ( const void * ) & (
rtDW . pp5mt2rwib ) , sizeof ( rtDW . pp5mt2rwib ) ) ; mxSetFieldByNumber (
ssDW , 0 , 1 , rtdwData ) ; } return ssDW ; } void mr_EPS_MILS_SetDWork (
const mxArray * ssDW ) { ( void ) ssDW ; mr_EPS_MILS_restoreDataFromMxArray (
( void * ) & ( rtB ) , ssDW , 0 , 0 , sizeof ( rtB ) ) ; { const mxArray *
rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_EPS_MILS_restoreDataFromMxArray ( ( void * ) & ( rtDW . mfmnjfzu0e ) ,
rtdwData , 0 , 0 , sizeof ( rtDW . mfmnjfzu0e ) ) ;
mr_EPS_MILS_restoreDataFromMxArray ( ( void * ) & ( rtDW . fvss2djvki ) ,
rtdwData , 0 , 1 , sizeof ( rtDW . fvss2djvki ) ) ;
mr_EPS_MILS_restoreDataFromMxArray ( ( void * ) & ( rtDW . bhqjjurcih ) ,
rtdwData , 0 , 2 , sizeof ( rtDW . bhqjjurcih ) ) ;
mr_EPS_MILS_restoreDataFromMxArray ( ( void * ) & ( rtDW . o13ep0zjtp ) ,
rtdwData , 0 , 3 , sizeof ( rtDW . o13ep0zjtp ) ) ;
mr_EPS_MILS_restoreDataFromMxArray ( ( void * ) & ( rtDW . ilkonha3co ) ,
rtdwData , 0 , 4 , sizeof ( rtDW . ilkonha3co ) ) ;
mr_EPS_MILS_restoreDataFromMxArray ( ( void * ) & ( rtDW . p0lr4eegs0 ) ,
rtdwData , 0 , 5 , sizeof ( rtDW . p0lr4eegs0 ) ) ;
mr_EPS_MILS_restoreDataFromMxArray ( ( void * ) & ( rtDW . bqa3xzhwdv ) ,
rtdwData , 0 , 6 , sizeof ( rtDW . bqa3xzhwdv ) ) ;
mr_EPS_MILS_restoreDataFromMxArray ( ( void * ) & ( rtDW . p2fq3uuisu ) ,
rtdwData , 0 , 7 , sizeof ( rtDW . p2fq3uuisu ) ) ;
mr_EPS_MILS_restoreDataFromMxArray ( ( void * ) & ( rtDW . lpmgf5dfgn ) ,
rtdwData , 0 , 8 , sizeof ( rtDW . lpmgf5dfgn ) ) ;
mr_EPS_MILS_restoreDataFromMxArray ( ( void * ) & ( rtDW . orsz0vf0zs ) ,
rtdwData , 0 , 9 , sizeof ( rtDW . orsz0vf0zs ) ) ;
mr_EPS_MILS_restoreDataFromMxArray ( ( void * ) & ( rtDW . bmqhr21dyv ) ,
rtdwData , 0 , 10 , sizeof ( rtDW . bmqhr21dyv ) ) ;
mr_EPS_MILS_restoreDataFromMxArray ( ( void * ) & ( rtDW . l4ezf5ev5p ) ,
rtdwData , 0 , 11 , sizeof ( rtDW . l4ezf5ev5p ) ) ;
mr_EPS_MILS_restoreDataFromMxArray ( ( void * ) & ( rtDW . f3qkmjhmlg ) ,
rtdwData , 0 , 12 , sizeof ( rtDW . f3qkmjhmlg ) ) ;
mr_EPS_MILS_restoreDataFromMxArray ( ( void * ) & ( rtDW . pbbyn3soma ) ,
rtdwData , 0 , 13 , sizeof ( rtDW . pbbyn3soma ) ) ;
mr_EPS_MILS_restoreDataFromMxArray ( ( void * ) & ( rtDW . gq3kibtyax ) ,
rtdwData , 0 , 14 , sizeof ( rtDW . gq3kibtyax ) ) ;
mr_EPS_MILS_restoreDataFromMxArray ( ( void * ) & ( rtDW . fnv21h2jjw ) ,
rtdwData , 0 , 15 , sizeof ( rtDW . fnv21h2jjw ) ) ;
mr_EPS_MILS_restoreDataFromMxArray ( ( void * ) & ( rtDW . edr1kgzwki ) ,
rtdwData , 0 , 16 , sizeof ( rtDW . edr1kgzwki ) ) ;
mr_EPS_MILS_restoreDataFromMxArray ( ( void * ) & ( rtDW . eg0cnsyviw ) ,
rtdwData , 0 , 17 , sizeof ( rtDW . eg0cnsyviw ) ) ;
mr_EPS_MILS_restoreDataFromMxArray ( ( void * ) & ( rtDW . o5mh4otnpm ) ,
rtdwData , 0 , 18 , sizeof ( rtDW . o5mh4otnpm ) ) ;
mr_EPS_MILS_restoreDataFromMxArray ( ( void * ) & ( rtDW . gsmsqta5d1 ) ,
rtdwData , 0 , 19 , sizeof ( rtDW . gsmsqta5d1 ) ) ;
mr_EPS_MILS_restoreDataFromMxArray ( ( void * ) & ( rtDW . cirw445xfx ) ,
rtdwData , 0 , 20 , sizeof ( rtDW . cirw445xfx ) ) ;
mr_EPS_MILS_restoreDataFromMxArray ( ( void * ) & ( rtDW . ggy3kolena ) ,
rtdwData , 0 , 21 , sizeof ( rtDW . ggy3kolena ) ) ;
mr_EPS_MILS_restoreDataFromMxArray ( ( void * ) & ( rtDW . ah1gqem3fu ) ,
rtdwData , 0 , 22 , sizeof ( rtDW . ah1gqem3fu ) ) ;
mr_EPS_MILS_restoreDataFromMxArray ( ( void * ) & ( rtDW . occpczy502 ) ,
rtdwData , 0 , 23 , sizeof ( rtDW . occpczy502 ) ) ;
mr_EPS_MILS_restoreDataFromMxArray ( ( void * ) & ( rtDW . oziueijlgt ) ,
rtdwData , 0 , 24 , sizeof ( rtDW . oziueijlgt ) ) ;
mr_EPS_MILS_restoreDataFromMxArray ( ( void * ) & ( rtDW . pp5mt2rwib ) ,
rtdwData , 0 , 25 , sizeof ( rtDW . pp5mt2rwib ) ) ; } } mxArray *
mr_EPS_MILS_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 10 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char_T * blockType [ 10 ] = { "S-Function" , "S-Function" , "Scope" , "Scope"
, "Scope" , "Scope" , "Scope" , "Scope" , "Scope" , "Scope" , } ; static
const char_T * blockPath [ 10 ] = {
"EPS_MILS/powergui/EquivalentModel1/State-Space" ,
"EPS_MILS/powergui/EquivalentModel2/State-Space" ,
"EPS_MILS/Comparing Power w and w//o MPPT" , "EPS_MILS/Power " ,
"EPS_MILS/Power generated" , "EPS_MILS/Power w//o MPPT" , "EPS_MILS/Scope" ,
"EPS_MILS/Scope2" , "EPS_MILS/Scope3" , "EPS_MILS/Scope4" , } ; static const
int reason [ 10 ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , } ; for ( subs
[ 0 ] = 0 ; subs [ 0 ] < 10 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockType [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 2 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateDoubleScalar ( ( real_T ) reason [ subs [ 0 ] ] ) ) ; } } return data
; } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 0 ) ;
ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS
, 0 ) ; ssSetNumSampleTimes ( rtS , 3 ) ; ssSetNumBlocks ( rtS , 275 ) ;
ssSetNumBlockIO ( rtS , 42 ) ; ssSetNumBlockParams ( rtS , 208 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 5.0E-6 ) ; ssSetSampleTime ( rtS , 2 , - 2.0 ) ;
ssSetOffsetTime ( rtS , 0 , 1.0 ) ; ssSetOffsetTime ( rtS , 1 , 0.0 ) ;
ssSetOffsetTime ( rtS , 2 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 3358607682U ) ; ssSetChecksumVal ( rtS , 1 ,
562655403U ) ; ssSetChecksumVal ( rtS , 2 , 109193308U ) ; ssSetChecksumVal (
rtS , 3 , 3957041904U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; static struct _ssBlkInfo2 blkInfo2 ;
static struct _ssBlkInfoSLSize blkInfoSLSize ; ( void ) memset ( ( char_T * )
rtS , 0 , sizeof ( SimStruct ) ) ; ( void ) memset ( ( char_T * ) & mdlInfo ,
0 , sizeof ( struct _ssMdlInfo ) ) ; ( void ) memset ( ( char_T * ) &
blkInfo2 , 0 , sizeof ( struct _ssBlkInfo2 ) ) ; ( void ) memset ( ( char_T *
) & blkInfoSLSize , 0 , sizeof ( struct _ssBlkInfoSLSize ) ) ;
ssSetBlkInfo2Ptr ( rtS , & blkInfo2 ) ; ssSetBlkInfoSLSizePtr ( rtS , &
blkInfoSLSize ) ; ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; ssSetExecutionInfo (
rtS , executionInfo ) ; slsaAllocOPModelData ( rtS ) ; { static time_T
mdlPeriod [ NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ;
static time_T mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [
NSAMPLE_TIMES ] ; static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static
boolean_T mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T
mdlPerTaskSampleHits [ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T
mdlTimeOfNextSampleHit [ NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i <
NSAMPLE_TIMES ; i ++ ) { mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ;
mdlTaskTimes [ i ] = 0.0 ; mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } }
ssSetSampleTimePtr ( rtS , & mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , &
mdlOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ;
ssSetTPtr ( rtS , & mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , &
mdlSampleHits [ 0 ] ) ; ssSetTNextWasAdjustedPtr ( rtS , &
mdlTNextWasAdjustedPtr [ 0 ] ) ; ssSetPerTaskSampleHitsPtr ( rtS , &
mdlPerTaskSampleHits [ 0 ] ) ; ssSetTimeOfNextSampleHitPtr ( rtS , &
mdlTimeOfNextSampleHit [ 0 ] ) ; } ssSetSolverMode ( rtS ,
SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS , ( ( void * ) & rtB ) ) ;
( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof ( B ) ) ; } { void *
dwork = ( void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset
( dwork , 0 , sizeof ( DW ) ) ; } { static DataTypeTransInfo dtInfo ; ( void
) memset ( ( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ;
ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo . numDataTypes = 25 ;
dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = &
rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = & rtBTransTable ; dtInfo .
PTransTable = & rtPTransTable ; dtInfo . dataTypeInfoTable =
rtDataTypeInfoTable ; } EPS_MILS_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"EPS_MILS" ) ; ssSetPath ( rtS , "EPS_MILS" ) ; ssSetTStart ( rtS , 0.0 ) ;
ssSetTFinal ( rtS , 2.0 ) ; { static RTWLogInfo rt_DataLoggingInfo ;
rt_DataLoggingInfo . loggingInterval = ( NULL ) ; ssSetRTWLogInfo ( rtS , &
rt_DataLoggingInfo ) ; } { { static int_T rt_LoggedStateWidths [ ] = { 1 , 1
, 1 , 1 , 1 , 4 , 1 , 1 } ; static int_T rt_LoggedStateNumDimensions [ ] = {
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static int_T rt_LoggedStateDimensions [ ] =
{ 1 , 1 , 1 , 1 , 1 , 4 , 1 , 1 } ; static boolean_T rt_LoggedStateIsVarDims
[ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static BuiltInDTypeId
rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ; static int_T
rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static
RTWPreprocessingFcnPtr rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) }
; static const char_T * rt_LoggedStateLabels [ ] = { "DSTATE" , "states" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" } ; static
const char_T * rt_LoggedStateBlockNames [ ] = {
"EPS_MILS/1 Solar Panel module1/Diode Rsh/Unit Delay" ,
"EPS_MILS/Battery1/Model/Current filter" , "EPS_MILS/Battery1/Model/int(i)" ,
"EPS_MILS/Battery1/Model/Exp/Discrete-Time\nIntegrator" ,
"EPS_MILS/1 Solar Panel module/Diode Rsh/Unit Delay" ,
"EPS_MILS/powergui/EquivalentModel2/State-Space" , "EPS_MILS/Unit Delay" ,
"EPS_MILS/Unit Delay1" } ; static const char_T * rt_LoggedStateNames [ ] = {
"DSTATE" , "states" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" } ; static boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 } ; static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ]
= { { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static int_T
rt_LoggedStateIdxList [ ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 } ; static
RTWLogSignalInfo rt_LoggedStateSignalInfo = { 8 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 8 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtDW . mfmnjfzu0e ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtDW . fvss2djvki ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtDW . bhqjjurcih ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtDW . o13ep0zjtp ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtDW . ilkonha3co ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) rtDW . p0lr4eegs0 ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtDW . bqa3xzhwdv ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtDW . p2fq3uuisu ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"xFinal" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
ssSolverInfo slvrInfo ; ssSetStepSize ( rtS , 5.0E-6 ) ; ssSetMinStepSize (
rtS , 0.0 ) ; ssSetMaxNumMinSteps ( rtS , - 1 ) ; ssSetMinStepViolatedError (
rtS , 0 ) ; ssSetMaxStepSize ( rtS , 5.0E-6 ) ; ssSetSolverMaxOrder ( rtS , -
1 ) ; ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , ( NULL )
) ; ssSetNumOutputTimes ( rtS , 0 ) ; ssSetOutputTimesOnly ( rtS , 0 ) ;
ssSetOutputTimesIndex ( rtS , 0 ) ; ssSetZCCacheNeedsReset ( rtS , 0 ) ;
ssSetDerivCacheNeedsReset ( rtS , 0 ) ; ssSetNumNonContDerivSigInfos ( rtS ,
0 ) ; ssSetNonContDerivSigInfos ( rtS , ( NULL ) ) ; ssSetSolverInfo ( rtS ,
& slvrInfo ) ; ssSetSolverName ( rtS , "VariableStepDiscrete" ) ;
ssSetVariableStepSolver ( rtS , 1 ) ; ssSetSolverConsistencyChecking ( rtS ,
0 ) ; ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ;
ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetSolverStateProjection ( rtS ,
0 ) ; ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetTNextTid ( rtS , INT_MIN ) ;
ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 0 ) ; } ssSetChecksumVal ( rtS , 0 ,
3358607682U ) ; ssSetChecksumVal ( rtS , 1 , 562655403U ) ; ssSetChecksumVal
( rtS , 2 , 109193308U ) ; ssSetChecksumVal ( rtS , 3 , 3957041904U ) ; {
static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static
RTWExtModeInfo rt_ExtModeInfo ; static const sysRanDType * systemRan [ 9 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = &
rtAlwaysEnabled ; systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = &
rtAlwaysEnabled ; systemRan [ 4 ] = & rtAlwaysEnabled ; systemRan [ 5 ] = &
rtAlwaysEnabled ; systemRan [ 6 ] = & rtAlwaysEnabled ; systemRan [ 7 ] = &
rtAlwaysEnabled ; systemRan [ 8 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_EPS_MILS_GetSimStateDisallowedBlocks ) ; slsaGetWorkFcnForSimTargetOP (
rtS , mr_EPS_MILS_GetDWork ) ; slsaSetWorkFcnForSimTargetOP ( rtS ,
mr_EPS_MILS_SetDWork ) ; rtP . Saturation_LowerSat = rtMinusInf ; rtP .
inti_LowerSat = rtMinusInf ; rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if
( ssGetErrorStatus ( rtS ) ) { return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 3 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID3 ( tid ) ; }

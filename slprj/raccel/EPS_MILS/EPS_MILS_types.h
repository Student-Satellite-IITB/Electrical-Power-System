#ifndef RTW_HEADER_EPS_MILS_types_h_
#define RTW_HEADER_EPS_MILS_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_struct_GuZC7YYZUOK5mseIsYVPMB_
#define DEFINED_TYPEDEF_FOR_struct_GuZC7YYZUOK5mseIsYVPMB_
typedef struct { real_T time [ 3 ] ; real_T Out [ 3 ] ; real_T phase ; real_T
Period ; real_T Freq ; real_T Delay ; real_T TimeStepZ [ 2 ] ; }
struct_GuZC7YYZUOK5mseIsYVPMB ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_NwyT3gjbxPXn09EQ8T5wmB_
#define DEFINED_TYPEDEF_FOR_struct_NwyT3gjbxPXn09EQ8T5wmB_
typedef struct { real_T SwitchResistance [ 2 ] ; real_T SwitchVf [ 4 ] ;
real_T SwitchType [ 2 ] ; real_T SwitchGateInitialValue [ 2 ] ; real_T
EnableUseOfTLC ; real_T OutputsToResetToZero [ 2 ] ; real_T
NoErrorOnMaxIteration ; real_T Ts ; real_T Interpolate ; real_T SaveMatrices
; real_T BufferSize ; boolean_T TBEON ; uint8_T sl_padding0 [ 7 ] ; real_T A
[ 16 ] ; real_T B [ 24 ] ; real_T C [ 24 ] ; real_T D [ 36 ] ; real_T x0 [ 4
] ; } struct_NwyT3gjbxPXn09EQ8T5wmB ;
#endif
#ifndef SS_UINT64
#define SS_UINT64 19
#endif
#ifndef SS_INT64
#define SS_INT64 20
#endif
typedef struct P_ P ;
#endif

// ========================================================================= //

// includes
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
#include "limits.h"
#include "float.h"



#define JOTAI_NUM_RANDS_ 25

const unsigned rand_primes[JOTAI_NUM_RANDS_] = {179, 103, 479, 647, 229, 37, 271, 557, 263, 607, 18743, 50359, 21929, 48757, 98179, 12907, 52937, 64579, 49957, 52567, 507163, 149939, 412157, 680861, 757751};

int next_i() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
");

}


// ------------------------------------------------------------------------- //

#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  size_t u8 ;
struct pwrctrl_priv {int /*<<< orphan*/  bkeepfwalive; } ;
struct TYPE_3__ {int bIQKInitialized; scalar_t__* ThermalValue_HP; scalar_t__ ThermalValue_HP_index; scalar_t__ TM_Trigger; } ;
struct TYPE_4__ {TYPE_1__ RFCalibrateInfo; } ;
struct hal_data_8188e {int PGMaxGroup; TYPE_2__ odmpriv; scalar_t__ pwrGroupCnt; scalar_t__ LastHMEBoxNum; } ;
struct adapter {struct pwrctrl_priv pwrctrlpriv; struct hal_data_8188e* HalData; } ;

/* Variables and functions */
 size_t HP_THERMAL_NUM ; 

void rtw_hal_def_value_init(struct adapter *adapt)
{
	struct hal_data_8188e *haldata = adapt->HalData;
	struct pwrctrl_priv *pwrctrlpriv;
	u8 i;

	pwrctrlpriv = &adapt->pwrctrlpriv;

	/* init default value */
	if (!pwrctrlpriv->bkeepfwalive)
		haldata->LastHMEBoxNum = 0;

	/* init dm default value */
	haldata->odmpriv.RFCalibrateInfo.bIQKInitialized = false;
	haldata->odmpriv.RFCalibrateInfo.TM_Trigger = 0;/* for IQK */
	haldata->pwrGroupCnt = 0;
	haldata->PGMaxGroup = 13;
	haldata->odmpriv.RFCalibrateInfo.ThermalValue_HP_index = 0;
	for (i = 0; i < HP_THERMAL_NUM; i++)
		haldata->odmpriv.RFCalibrateInfo.ThermalValue_HP[i] = 0;
}


// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // int-bounds
    case 0:
    {
          int _len_adapt0 = 1;
          struct adapter * adapt = (struct adapter *) malloc(_len_adapt0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_adapt0; _i0++) {
            adapt[_i0].pwrctrlpriv.bkeepfwalive = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapt__i0__HalData0 = 1;
          adapt[_i0].HalData = (struct hal_data_8188e *) malloc(_len_adapt__i0__HalData0*sizeof(struct hal_data_8188e));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData0; _j0++) {
            adapt[_i0].HalData->PGMaxGroup = ((-2 * (next_i()%2)) + 1) * next_i();
        adapt[_i0].HalData->odmpriv.RFCalibrateInfo.bIQKInitialized = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapt__i0__HalData_odmpriv_RFCalibrateInfo_ThermalValue_HP0 = 1;
          adapt[_i0].HalData->odmpriv.RFCalibrateInfo.ThermalValue_HP = (long *) malloc(_len_adapt__i0__HalData_odmpriv_RFCalibrateInfo_ThermalValue_HP0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData_odmpriv_RFCalibrateInfo_ThermalValue_HP0; _j0++) {
            adapt[_i0].HalData->odmpriv.RFCalibrateInfo.ThermalValue_HP[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        adapt[_i0].HalData->odmpriv.RFCalibrateInfo.ThermalValue_HP_index = ((-2 * (next_i()%2)) + 1) * next_i();
        adapt[_i0].HalData->odmpriv.RFCalibrateInfo.TM_Trigger = ((-2 * (next_i()%2)) + 1) * next_i();
        adapt[_i0].HalData->pwrGroupCnt = ((-2 * (next_i()%2)) + 1) * next_i();
        adapt[_i0].HalData->LastHMEBoxNum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          rtw_hal_def_value_init(adapt);
          for(int _aux = 0; _aux < _len_adapt0; _aux++) {
          free(adapt[_aux].HalData);
          }
          free(adapt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_adapt0 = 65025;
          struct adapter * adapt = (struct adapter *) malloc(_len_adapt0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_adapt0; _i0++) {
            adapt[_i0].pwrctrlpriv.bkeepfwalive = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapt__i0__HalData0 = 1;
          adapt[_i0].HalData = (struct hal_data_8188e *) malloc(_len_adapt__i0__HalData0*sizeof(struct hal_data_8188e));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData0; _j0++) {
            adapt[_i0].HalData->PGMaxGroup = ((-2 * (next_i()%2)) + 1) * next_i();
        adapt[_i0].HalData->odmpriv.RFCalibrateInfo.bIQKInitialized = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapt__i0__HalData_odmpriv_RFCalibrateInfo_ThermalValue_HP0 = 1;
          adapt[_i0].HalData->odmpriv.RFCalibrateInfo.ThermalValue_HP = (long *) malloc(_len_adapt__i0__HalData_odmpriv_RFCalibrateInfo_ThermalValue_HP0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData_odmpriv_RFCalibrateInfo_ThermalValue_HP0; _j0++) {
            adapt[_i0].HalData->odmpriv.RFCalibrateInfo.ThermalValue_HP[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        adapt[_i0].HalData->odmpriv.RFCalibrateInfo.ThermalValue_HP_index = ((-2 * (next_i()%2)) + 1) * next_i();
        adapt[_i0].HalData->odmpriv.RFCalibrateInfo.TM_Trigger = ((-2 * (next_i()%2)) + 1) * next_i();
        adapt[_i0].HalData->pwrGroupCnt = ((-2 * (next_i()%2)) + 1) * next_i();
        adapt[_i0].HalData->LastHMEBoxNum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          rtw_hal_def_value_init(adapt);
          for(int _aux = 0; _aux < _len_adapt0; _aux++) {
          free(adapt[_aux].HalData);
          }
          free(adapt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_adapt0 = 100;
          struct adapter * adapt = (struct adapter *) malloc(_len_adapt0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_adapt0; _i0++) {
            adapt[_i0].pwrctrlpriv.bkeepfwalive = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapt__i0__HalData0 = 1;
          adapt[_i0].HalData = (struct hal_data_8188e *) malloc(_len_adapt__i0__HalData0*sizeof(struct hal_data_8188e));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData0; _j0++) {
            adapt[_i0].HalData->PGMaxGroup = ((-2 * (next_i()%2)) + 1) * next_i();
        adapt[_i0].HalData->odmpriv.RFCalibrateInfo.bIQKInitialized = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapt__i0__HalData_odmpriv_RFCalibrateInfo_ThermalValue_HP0 = 1;
          adapt[_i0].HalData->odmpriv.RFCalibrateInfo.ThermalValue_HP = (long *) malloc(_len_adapt__i0__HalData_odmpriv_RFCalibrateInfo_ThermalValue_HP0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData_odmpriv_RFCalibrateInfo_ThermalValue_HP0; _j0++) {
            adapt[_i0].HalData->odmpriv.RFCalibrateInfo.ThermalValue_HP[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        adapt[_i0].HalData->odmpriv.RFCalibrateInfo.ThermalValue_HP_index = ((-2 * (next_i()%2)) + 1) * next_i();
        adapt[_i0].HalData->odmpriv.RFCalibrateInfo.TM_Trigger = ((-2 * (next_i()%2)) + 1) * next_i();
        adapt[_i0].HalData->pwrGroupCnt = ((-2 * (next_i()%2)) + 1) * next_i();
        adapt[_i0].HalData->LastHMEBoxNum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          rtw_hal_def_value_init(adapt);
          for(int _aux = 0; _aux < _len_adapt0; _aux++) {
          free(adapt[_aux].HalData);
          }
          free(adapt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

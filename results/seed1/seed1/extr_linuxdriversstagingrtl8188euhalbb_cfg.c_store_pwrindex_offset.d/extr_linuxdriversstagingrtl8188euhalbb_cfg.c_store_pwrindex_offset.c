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

/* Type definitions */
typedef  scalar_t__ u32 ;
struct hal_data_8188e {scalar_t__** MCSTxPowerLevelOriginalOffset; size_t pwrGroupCnt; } ;
struct adapter {struct hal_data_8188e* HalData; } ;

/* Variables and functions */
 scalar_t__ rTxAGC_A_CCK1_Mcs32 ; 
 scalar_t__ rTxAGC_A_Mcs03_Mcs00 ; 
 scalar_t__ rTxAGC_A_Mcs07_Mcs04 ; 
 scalar_t__ rTxAGC_A_Mcs11_Mcs08 ; 
 scalar_t__ rTxAGC_A_Mcs15_Mcs12 ; 
 scalar_t__ rTxAGC_A_Rate18_06 ; 
 scalar_t__ rTxAGC_A_Rate54_24 ; 
 scalar_t__ rTxAGC_B_CCK11_A_CCK2_11 ; 
 scalar_t__ rTxAGC_B_CCK1_55_Mcs32 ; 
 scalar_t__ rTxAGC_B_Mcs03_Mcs00 ; 
 scalar_t__ rTxAGC_B_Mcs07_Mcs04 ; 
 scalar_t__ rTxAGC_B_Mcs11_Mcs08 ; 
 scalar_t__ rTxAGC_B_Mcs15_Mcs12 ; 
 scalar_t__ rTxAGC_B_Rate18_06 ; 
 scalar_t__ rTxAGC_B_Rate54_24 ; 

__attribute__((used)) static void store_pwrindex_offset(struct adapter *adapter,
				  u32 regaddr, u32 bitmask, u32 data)
{
	struct hal_data_8188e *hal_data = adapter->HalData;
	u32 * const power_level_offset =
		hal_data->MCSTxPowerLevelOriginalOffset[hal_data->pwrGroupCnt];

	if (regaddr == rTxAGC_A_Rate18_06)
		power_level_offset[0] = data;
	if (regaddr == rTxAGC_A_Rate54_24)
		power_level_offset[1] = data;
	if (regaddr == rTxAGC_A_CCK1_Mcs32)
		power_level_offset[6] = data;
	if (regaddr == rTxAGC_B_CCK11_A_CCK2_11 && bitmask == 0xffffff00)
		power_level_offset[7] = data;
	if (regaddr == rTxAGC_A_Mcs03_Mcs00)
		power_level_offset[2] = data;
	if (regaddr == rTxAGC_A_Mcs07_Mcs04)
		power_level_offset[3] = data;
	if (regaddr == rTxAGC_A_Mcs11_Mcs08)
		power_level_offset[4] = data;
	if (regaddr == rTxAGC_A_Mcs15_Mcs12) {
		power_level_offset[5] = data;
		hal_data->pwrGroupCnt++;
	}
	if (regaddr == rTxAGC_B_Rate18_06)
		power_level_offset[8] = data;
	if (regaddr == rTxAGC_B_Rate54_24)
		power_level_offset[9] = data;
	if (regaddr == rTxAGC_B_CCK1_55_Mcs32)
		power_level_offset[14] = data;
	if (regaddr == rTxAGC_B_CCK11_A_CCK2_11 && bitmask == 0x000000ff)
		power_level_offset[15] = data;
	if (regaddr == rTxAGC_B_Mcs03_Mcs00)
		power_level_offset[10] = data;
	if (regaddr == rTxAGC_B_Mcs07_Mcs04)
		power_level_offset[11] = data;
	if (regaddr == rTxAGC_B_Mcs11_Mcs08)
		power_level_offset[12] = data;
	if (regaddr == rTxAGC_B_Mcs15_Mcs12)
		power_level_offset[13] = data;
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
          long regaddr = 100;
          long bitmask = 100;
          long data = 100;
          int _len_adapter0 = 1;
          struct adapter * adapter = (struct adapter *) malloc(_len_adapter0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              int _len_adapter__i0__HalData0 = 1;
          adapter[_i0].HalData = (struct hal_data_8188e *) malloc(_len_adapter__i0__HalData0*sizeof(struct hal_data_8188e));
          for(int _j0 = 0; _j0 < _len_adapter__i0__HalData0; _j0++) {
              int _len_adapter__i0__HalData_MCSTxPowerLevelOriginalOffset0 = 1;
          adapter[_i0].HalData->MCSTxPowerLevelOriginalOffset = (long **) malloc(_len_adapter__i0__HalData_MCSTxPowerLevelOriginalOffset0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_adapter__i0__HalData_MCSTxPowerLevelOriginalOffset0; _j0++) {
            int _len_adapter__i0__HalData_MCSTxPowerLevelOriginalOffset1 = 1;
            adapter[_i0].HalData->MCSTxPowerLevelOriginalOffset[_j0] = (long *) malloc(_len_adapter__i0__HalData_MCSTxPowerLevelOriginalOffset1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_adapter__i0__HalData_MCSTxPowerLevelOriginalOffset1; _j1++) {
              adapter[_i0].HalData->MCSTxPowerLevelOriginalOffset[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        adapter[_i0].HalData->pwrGroupCnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          store_pwrindex_offset(adapter,regaddr,bitmask,data);
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(adapter[_aux].HalData);
          }
          free(adapter);
        
        break;
    }
    // big-arr
    case 1:
    {
          long regaddr = 255;
          long bitmask = 255;
          long data = 255;
          int _len_adapter0 = 65025;
          struct adapter * adapter = (struct adapter *) malloc(_len_adapter0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              int _len_adapter__i0__HalData0 = 1;
          adapter[_i0].HalData = (struct hal_data_8188e *) malloc(_len_adapter__i0__HalData0*sizeof(struct hal_data_8188e));
          for(int _j0 = 0; _j0 < _len_adapter__i0__HalData0; _j0++) {
              int _len_adapter__i0__HalData_MCSTxPowerLevelOriginalOffset0 = 1;
          adapter[_i0].HalData->MCSTxPowerLevelOriginalOffset = (long **) malloc(_len_adapter__i0__HalData_MCSTxPowerLevelOriginalOffset0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_adapter__i0__HalData_MCSTxPowerLevelOriginalOffset0; _j0++) {
            int _len_adapter__i0__HalData_MCSTxPowerLevelOriginalOffset1 = 1;
            adapter[_i0].HalData->MCSTxPowerLevelOriginalOffset[_j0] = (long *) malloc(_len_adapter__i0__HalData_MCSTxPowerLevelOriginalOffset1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_adapter__i0__HalData_MCSTxPowerLevelOriginalOffset1; _j1++) {
              adapter[_i0].HalData->MCSTxPowerLevelOriginalOffset[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        adapter[_i0].HalData->pwrGroupCnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          store_pwrindex_offset(adapter,regaddr,bitmask,data);
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(adapter[_aux].HalData);
          }
          free(adapter);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long regaddr = 10;
          long bitmask = 10;
          long data = 10;
          int _len_adapter0 = 100;
          struct adapter * adapter = (struct adapter *) malloc(_len_adapter0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              int _len_adapter__i0__HalData0 = 1;
          adapter[_i0].HalData = (struct hal_data_8188e *) malloc(_len_adapter__i0__HalData0*sizeof(struct hal_data_8188e));
          for(int _j0 = 0; _j0 < _len_adapter__i0__HalData0; _j0++) {
              int _len_adapter__i0__HalData_MCSTxPowerLevelOriginalOffset0 = 1;
          adapter[_i0].HalData->MCSTxPowerLevelOriginalOffset = (long **) malloc(_len_adapter__i0__HalData_MCSTxPowerLevelOriginalOffset0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_adapter__i0__HalData_MCSTxPowerLevelOriginalOffset0; _j0++) {
            int _len_adapter__i0__HalData_MCSTxPowerLevelOriginalOffset1 = 1;
            adapter[_i0].HalData->MCSTxPowerLevelOriginalOffset[_j0] = (long *) malloc(_len_adapter__i0__HalData_MCSTxPowerLevelOriginalOffset1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_adapter__i0__HalData_MCSTxPowerLevelOriginalOffset1; _j1++) {
              adapter[_i0].HalData->MCSTxPowerLevelOriginalOffset[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        adapter[_i0].HalData->pwrGroupCnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          store_pwrindex_offset(adapter,regaddr,bitmask,data);
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(adapter[_aux].HalData);
          }
          free(adapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

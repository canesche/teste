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
typedef  size_t u8 ;
struct hal_data_8188e {size_t** Index24G_CCK_Base; size_t** Index24G_BW40_Base; size_t** OFDM_24G_Diff; size_t** BW20_24G_Diff; } ;
struct adapter {struct hal_data_8188e* HalData; } ;

/* Variables and functions */
 size_t RF_PATH_A ; 
 size_t RF_PATH_B ; 

__attribute__((used)) static void get_tx_power_index(struct adapter *adapt, u8 channel, u8 *cck_pwr,
			       u8 *ofdm_pwr, u8 *bw20_pwr, u8 *bw40_pwr)
{
	struct hal_data_8188e *hal_data = adapt->HalData;
	u8 index = (channel - 1);
	u8 TxCount = 0, path_nums;

	path_nums = 1;

	for (TxCount = 0; TxCount < path_nums; TxCount++) {
		if (TxCount == RF_PATH_A) {
			cck_pwr[TxCount] = hal_data->Index24G_CCK_Base[TxCount][index];
			ofdm_pwr[TxCount] = hal_data->Index24G_BW40_Base[RF_PATH_A][index]+
					    hal_data->OFDM_24G_Diff[TxCount][RF_PATH_A];

			bw20_pwr[TxCount] = hal_data->Index24G_BW40_Base[RF_PATH_A][index]+
					    hal_data->BW20_24G_Diff[TxCount][RF_PATH_A];
			bw40_pwr[TxCount] = hal_data->Index24G_BW40_Base[TxCount][index];
		} else if (TxCount == RF_PATH_B) {
			cck_pwr[TxCount] = hal_data->Index24G_CCK_Base[TxCount][index];
			ofdm_pwr[TxCount] = hal_data->Index24G_BW40_Base[RF_PATH_A][index]+
			hal_data->BW20_24G_Diff[RF_PATH_A][index]+
			hal_data->BW20_24G_Diff[TxCount][index];

			bw20_pwr[TxCount] = hal_data->Index24G_BW40_Base[RF_PATH_A][index]+
			hal_data->BW20_24G_Diff[TxCount][RF_PATH_A]+
			hal_data->BW20_24G_Diff[TxCount][index];
			bw40_pwr[TxCount] = hal_data->Index24G_BW40_Base[TxCount][index];
		}
	}
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
          unsigned long channel = 100;
          int _len_adapt0 = 1;
          struct adapter * adapt = (struct adapter *) malloc(_len_adapt0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_adapt0; _i0++) {
              int _len_adapt__i0__HalData0 = 1;
          adapt[_i0].HalData = (struct hal_data_8188e *) malloc(_len_adapt__i0__HalData0*sizeof(struct hal_data_8188e));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData0; _j0++) {
              int _len_adapt__i0__HalData_Index24G_CCK_Base0 = 1;
          adapt[_i0].HalData->Index24G_CCK_Base = (unsigned long **) malloc(_len_adapt__i0__HalData_Index24G_CCK_Base0*sizeof(unsigned long *));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData_Index24G_CCK_Base0; _j0++) {
            int _len_adapt__i0__HalData_Index24G_CCK_Base1 = 1;
            adapt[_i0].HalData->Index24G_CCK_Base[_j0] = (unsigned long *) malloc(_len_adapt__i0__HalData_Index24G_CCK_Base1*sizeof(unsigned long));
            for(int _j1 = 0; _j1 < _len_adapt__i0__HalData_Index24G_CCK_Base1; _j1++) {
              adapt[_i0].HalData->Index24G_CCK_Base[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_adapt__i0__HalData_Index24G_BW40_Base0 = 1;
          adapt[_i0].HalData->Index24G_BW40_Base = (unsigned long **) malloc(_len_adapt__i0__HalData_Index24G_BW40_Base0*sizeof(unsigned long *));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData_Index24G_BW40_Base0; _j0++) {
            int _len_adapt__i0__HalData_Index24G_BW40_Base1 = 1;
            adapt[_i0].HalData->Index24G_BW40_Base[_j0] = (unsigned long *) malloc(_len_adapt__i0__HalData_Index24G_BW40_Base1*sizeof(unsigned long));
            for(int _j1 = 0; _j1 < _len_adapt__i0__HalData_Index24G_BW40_Base1; _j1++) {
              adapt[_i0].HalData->Index24G_BW40_Base[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_adapt__i0__HalData_OFDM_24G_Diff0 = 1;
          adapt[_i0].HalData->OFDM_24G_Diff = (unsigned long **) malloc(_len_adapt__i0__HalData_OFDM_24G_Diff0*sizeof(unsigned long *));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData_OFDM_24G_Diff0; _j0++) {
            int _len_adapt__i0__HalData_OFDM_24G_Diff1 = 1;
            adapt[_i0].HalData->OFDM_24G_Diff[_j0] = (unsigned long *) malloc(_len_adapt__i0__HalData_OFDM_24G_Diff1*sizeof(unsigned long));
            for(int _j1 = 0; _j1 < _len_adapt__i0__HalData_OFDM_24G_Diff1; _j1++) {
              adapt[_i0].HalData->OFDM_24G_Diff[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_adapt__i0__HalData_BW20_24G_Diff0 = 1;
          adapt[_i0].HalData->BW20_24G_Diff = (unsigned long **) malloc(_len_adapt__i0__HalData_BW20_24G_Diff0*sizeof(unsigned long *));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData_BW20_24G_Diff0; _j0++) {
            int _len_adapt__i0__HalData_BW20_24G_Diff1 = 1;
            adapt[_i0].HalData->BW20_24G_Diff[_j0] = (unsigned long *) malloc(_len_adapt__i0__HalData_BW20_24G_Diff1*sizeof(unsigned long));
            for(int _j1 = 0; _j1 < _len_adapt__i0__HalData_BW20_24G_Diff1; _j1++) {
              adapt[_i0].HalData->BW20_24G_Diff[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          int _len_cck_pwr0 = 1;
          unsigned long * cck_pwr = (unsigned long *) malloc(_len_cck_pwr0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_cck_pwr0; _i0++) {
            cck_pwr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ofdm_pwr0 = 1;
          unsigned long * ofdm_pwr = (unsigned long *) malloc(_len_ofdm_pwr0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_ofdm_pwr0; _i0++) {
            ofdm_pwr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bw20_pwr0 = 1;
          unsigned long * bw20_pwr = (unsigned long *) malloc(_len_bw20_pwr0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_bw20_pwr0; _i0++) {
            bw20_pwr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bw40_pwr0 = 1;
          unsigned long * bw40_pwr = (unsigned long *) malloc(_len_bw40_pwr0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_bw40_pwr0; _i0++) {
            bw40_pwr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_tx_power_index(adapt,channel,cck_pwr,ofdm_pwr,bw20_pwr,bw40_pwr);
          for(int _aux = 0; _aux < _len_adapt0; _aux++) {
          free(adapt[_aux].HalData);
          }
          free(adapt);
          free(cck_pwr);
          free(ofdm_pwr);
          free(bw20_pwr);
          free(bw40_pwr);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long channel = 255;
          int _len_adapt0 = 65025;
          struct adapter * adapt = (struct adapter *) malloc(_len_adapt0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_adapt0; _i0++) {
              int _len_adapt__i0__HalData0 = 1;
          adapt[_i0].HalData = (struct hal_data_8188e *) malloc(_len_adapt__i0__HalData0*sizeof(struct hal_data_8188e));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData0; _j0++) {
              int _len_adapt__i0__HalData_Index24G_CCK_Base0 = 1;
          adapt[_i0].HalData->Index24G_CCK_Base = (unsigned long **) malloc(_len_adapt__i0__HalData_Index24G_CCK_Base0*sizeof(unsigned long *));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData_Index24G_CCK_Base0; _j0++) {
            int _len_adapt__i0__HalData_Index24G_CCK_Base1 = 1;
            adapt[_i0].HalData->Index24G_CCK_Base[_j0] = (unsigned long *) malloc(_len_adapt__i0__HalData_Index24G_CCK_Base1*sizeof(unsigned long));
            for(int _j1 = 0; _j1 < _len_adapt__i0__HalData_Index24G_CCK_Base1; _j1++) {
              adapt[_i0].HalData->Index24G_CCK_Base[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_adapt__i0__HalData_Index24G_BW40_Base0 = 1;
          adapt[_i0].HalData->Index24G_BW40_Base = (unsigned long **) malloc(_len_adapt__i0__HalData_Index24G_BW40_Base0*sizeof(unsigned long *));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData_Index24G_BW40_Base0; _j0++) {
            int _len_adapt__i0__HalData_Index24G_BW40_Base1 = 1;
            adapt[_i0].HalData->Index24G_BW40_Base[_j0] = (unsigned long *) malloc(_len_adapt__i0__HalData_Index24G_BW40_Base1*sizeof(unsigned long));
            for(int _j1 = 0; _j1 < _len_adapt__i0__HalData_Index24G_BW40_Base1; _j1++) {
              adapt[_i0].HalData->Index24G_BW40_Base[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_adapt__i0__HalData_OFDM_24G_Diff0 = 1;
          adapt[_i0].HalData->OFDM_24G_Diff = (unsigned long **) malloc(_len_adapt__i0__HalData_OFDM_24G_Diff0*sizeof(unsigned long *));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData_OFDM_24G_Diff0; _j0++) {
            int _len_adapt__i0__HalData_OFDM_24G_Diff1 = 1;
            adapt[_i0].HalData->OFDM_24G_Diff[_j0] = (unsigned long *) malloc(_len_adapt__i0__HalData_OFDM_24G_Diff1*sizeof(unsigned long));
            for(int _j1 = 0; _j1 < _len_adapt__i0__HalData_OFDM_24G_Diff1; _j1++) {
              adapt[_i0].HalData->OFDM_24G_Diff[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_adapt__i0__HalData_BW20_24G_Diff0 = 1;
          adapt[_i0].HalData->BW20_24G_Diff = (unsigned long **) malloc(_len_adapt__i0__HalData_BW20_24G_Diff0*sizeof(unsigned long *));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData_BW20_24G_Diff0; _j0++) {
            int _len_adapt__i0__HalData_BW20_24G_Diff1 = 1;
            adapt[_i0].HalData->BW20_24G_Diff[_j0] = (unsigned long *) malloc(_len_adapt__i0__HalData_BW20_24G_Diff1*sizeof(unsigned long));
            for(int _j1 = 0; _j1 < _len_adapt__i0__HalData_BW20_24G_Diff1; _j1++) {
              adapt[_i0].HalData->BW20_24G_Diff[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          int _len_cck_pwr0 = 65025;
          unsigned long * cck_pwr = (unsigned long *) malloc(_len_cck_pwr0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_cck_pwr0; _i0++) {
            cck_pwr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ofdm_pwr0 = 65025;
          unsigned long * ofdm_pwr = (unsigned long *) malloc(_len_ofdm_pwr0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_ofdm_pwr0; _i0++) {
            ofdm_pwr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bw20_pwr0 = 65025;
          unsigned long * bw20_pwr = (unsigned long *) malloc(_len_bw20_pwr0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_bw20_pwr0; _i0++) {
            bw20_pwr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bw40_pwr0 = 65025;
          unsigned long * bw40_pwr = (unsigned long *) malloc(_len_bw40_pwr0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_bw40_pwr0; _i0++) {
            bw40_pwr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_tx_power_index(adapt,channel,cck_pwr,ofdm_pwr,bw20_pwr,bw40_pwr);
          for(int _aux = 0; _aux < _len_adapt0; _aux++) {
          free(adapt[_aux].HalData);
          }
          free(adapt);
          free(cck_pwr);
          free(ofdm_pwr);
          free(bw20_pwr);
          free(bw40_pwr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long channel = 10;
          int _len_adapt0 = 100;
          struct adapter * adapt = (struct adapter *) malloc(_len_adapt0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_adapt0; _i0++) {
              int _len_adapt__i0__HalData0 = 1;
          adapt[_i0].HalData = (struct hal_data_8188e *) malloc(_len_adapt__i0__HalData0*sizeof(struct hal_data_8188e));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData0; _j0++) {
              int _len_adapt__i0__HalData_Index24G_CCK_Base0 = 1;
          adapt[_i0].HalData->Index24G_CCK_Base = (unsigned long **) malloc(_len_adapt__i0__HalData_Index24G_CCK_Base0*sizeof(unsigned long *));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData_Index24G_CCK_Base0; _j0++) {
            int _len_adapt__i0__HalData_Index24G_CCK_Base1 = 1;
            adapt[_i0].HalData->Index24G_CCK_Base[_j0] = (unsigned long *) malloc(_len_adapt__i0__HalData_Index24G_CCK_Base1*sizeof(unsigned long));
            for(int _j1 = 0; _j1 < _len_adapt__i0__HalData_Index24G_CCK_Base1; _j1++) {
              adapt[_i0].HalData->Index24G_CCK_Base[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_adapt__i0__HalData_Index24G_BW40_Base0 = 1;
          adapt[_i0].HalData->Index24G_BW40_Base = (unsigned long **) malloc(_len_adapt__i0__HalData_Index24G_BW40_Base0*sizeof(unsigned long *));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData_Index24G_BW40_Base0; _j0++) {
            int _len_adapt__i0__HalData_Index24G_BW40_Base1 = 1;
            adapt[_i0].HalData->Index24G_BW40_Base[_j0] = (unsigned long *) malloc(_len_adapt__i0__HalData_Index24G_BW40_Base1*sizeof(unsigned long));
            for(int _j1 = 0; _j1 < _len_adapt__i0__HalData_Index24G_BW40_Base1; _j1++) {
              adapt[_i0].HalData->Index24G_BW40_Base[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_adapt__i0__HalData_OFDM_24G_Diff0 = 1;
          adapt[_i0].HalData->OFDM_24G_Diff = (unsigned long **) malloc(_len_adapt__i0__HalData_OFDM_24G_Diff0*sizeof(unsigned long *));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData_OFDM_24G_Diff0; _j0++) {
            int _len_adapt__i0__HalData_OFDM_24G_Diff1 = 1;
            adapt[_i0].HalData->OFDM_24G_Diff[_j0] = (unsigned long *) malloc(_len_adapt__i0__HalData_OFDM_24G_Diff1*sizeof(unsigned long));
            for(int _j1 = 0; _j1 < _len_adapt__i0__HalData_OFDM_24G_Diff1; _j1++) {
              adapt[_i0].HalData->OFDM_24G_Diff[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_adapt__i0__HalData_BW20_24G_Diff0 = 1;
          adapt[_i0].HalData->BW20_24G_Diff = (unsigned long **) malloc(_len_adapt__i0__HalData_BW20_24G_Diff0*sizeof(unsigned long *));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData_BW20_24G_Diff0; _j0++) {
            int _len_adapt__i0__HalData_BW20_24G_Diff1 = 1;
            adapt[_i0].HalData->BW20_24G_Diff[_j0] = (unsigned long *) malloc(_len_adapt__i0__HalData_BW20_24G_Diff1*sizeof(unsigned long));
            for(int _j1 = 0; _j1 < _len_adapt__i0__HalData_BW20_24G_Diff1; _j1++) {
              adapt[_i0].HalData->BW20_24G_Diff[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          int _len_cck_pwr0 = 100;
          unsigned long * cck_pwr = (unsigned long *) malloc(_len_cck_pwr0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_cck_pwr0; _i0++) {
            cck_pwr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ofdm_pwr0 = 100;
          unsigned long * ofdm_pwr = (unsigned long *) malloc(_len_ofdm_pwr0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_ofdm_pwr0; _i0++) {
            ofdm_pwr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bw20_pwr0 = 100;
          unsigned long * bw20_pwr = (unsigned long *) malloc(_len_bw20_pwr0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_bw20_pwr0; _i0++) {
            bw20_pwr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bw40_pwr0 = 100;
          unsigned long * bw40_pwr = (unsigned long *) malloc(_len_bw40_pwr0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_bw40_pwr0; _i0++) {
            bw40_pwr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_tx_power_index(adapt,channel,cck_pwr,ofdm_pwr,bw20_pwr,bw40_pwr);
          for(int _aux = 0; _aux < _len_adapt0; _aux++) {
          free(adapt[_aux].HalData);
          }
          free(adapt);
          free(cck_pwr);
          free(ofdm_pwr);
          free(bw20_pwr);
          free(bw40_pwr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  int u8 ;
typedef  int u32 ;
struct dm_priv {scalar_t__ DynamicTxHighPowerLvl; } ;
struct hal_data_8188e {int EEPROMRegulatory; int** MCSTxPowerLevelOriginalOffset; int pwrGroupCnt; int PGMaxGroup; int** TxPwrLegacyHtDiff; int** TxPwrHt20Diff; int** PwrGroupHT40; int** PwrGroupHT20; int /*<<< orphan*/  CurrentChannelBW; struct dm_priv dmpriv; } ;
struct adapter {struct hal_data_8188e* HalData; } ;
typedef  int s8 ;

/* Variables and functions */
 int /*<<< orphan*/  HT_CHANNEL_WIDTH_20 ; 
 int /*<<< orphan*/  HT_CHANNEL_WIDTH_40 ; 
 scalar_t__ TxHighPwrLevel_Level1 ; 
 scalar_t__ TxHighPwrLevel_Level2 ; 

__attribute__((used)) static void get_rx_power_val_by_reg(struct adapter *adapt, u8 channel,
				    u8 index, u32 *powerbase0, u32 *powerbase1,
				    u32 *out_val)
{
	struct hal_data_8188e *hal_data = adapt->HalData;
	struct dm_priv	*pdmpriv = &hal_data->dmpriv;
	u8 i, chnlGroup = 0, pwr_diff_limit[4], customer_pwr_limit;
	s8 pwr_diff = 0;
	u32 write_val, customer_limit, rf;
	u8 regulatory = hal_data->EEPROMRegulatory;

	/*  Index 0 & 1= legacy OFDM, 2-5=HT_MCS rate */

	for (rf = 0; rf < 2; rf++) {
		u8 j = index + (rf ? 8 : 0);

		switch (regulatory) {
		case 0:
			chnlGroup = 0;
			write_val = hal_data->MCSTxPowerLevelOriginalOffset[chnlGroup][index+(rf ? 8 : 0)] +
				((index < 2) ? powerbase0[rf] : powerbase1[rf]);
			break;
		case 1: /*  Realtek regulatory */
			/*  increase power diff defined by Realtek for regulatory */
			if (hal_data->pwrGroupCnt == 1)
				chnlGroup = 0;
			if (hal_data->pwrGroupCnt >= hal_data->PGMaxGroup) {
				if (channel < 3)
					chnlGroup = 0;
				else if (channel < 6)
					chnlGroup = 1;
				else if (channel < 9)
					chnlGroup = 2;
				else if (channel < 12)
					chnlGroup = 3;
				else if (channel < 14)
					chnlGroup = 4;
				else if (channel == 14)
					chnlGroup = 5;
			}
			write_val = hal_data->MCSTxPowerLevelOriginalOffset[chnlGroup][index+(rf ? 8 : 0)] +
					((index < 2) ? powerbase0[rf] : powerbase1[rf]);
			break;
		case 2:	/*  Better regulatory */
				/*  don't increase any power diff */
			write_val = (index < 2) ? powerbase0[rf] : powerbase1[rf];
			break;
		case 3:	/*  Customer defined power diff. */
				/*  increase power diff defined by customer. */
			chnlGroup = 0;

			if (index < 2)
				pwr_diff = hal_data->TxPwrLegacyHtDiff[rf][channel-1];
			else if (hal_data->CurrentChannelBW == HT_CHANNEL_WIDTH_20)
				pwr_diff = hal_data->TxPwrHt20Diff[rf][channel-1];

			if (hal_data->CurrentChannelBW == HT_CHANNEL_WIDTH_40)
				customer_pwr_limit = hal_data->PwrGroupHT40[rf][channel-1];
			else
				customer_pwr_limit = hal_data->PwrGroupHT20[rf][channel-1];

			if (pwr_diff >= customer_pwr_limit)
				pwr_diff = 0;
			else
				pwr_diff = customer_pwr_limit - pwr_diff;

			for (i = 0; i < 4; i++) {
				pwr_diff_limit[i] = (u8)((hal_data->MCSTxPowerLevelOriginalOffset[chnlGroup][j] &
							 (0x7f << (i * 8))) >> (i * 8));

				if (pwr_diff_limit[i] > pwr_diff)
					pwr_diff_limit[i] = pwr_diff;
			}
			customer_limit = (pwr_diff_limit[3]<<24) |
					 (pwr_diff_limit[2]<<16) |
					 (pwr_diff_limit[1]<<8) |
					 (pwr_diff_limit[0]);
			write_val = customer_limit + ((index < 2) ? powerbase0[rf] : powerbase1[rf]);
			break;
		default:
			chnlGroup = 0;
			write_val = hal_data->MCSTxPowerLevelOriginalOffset[chnlGroup][j] +
					((index < 2) ? powerbase0[rf] : powerbase1[rf]);
			break;
		}
/*  20100427 Joseph: Driver dynamic Tx power shall not affect Tx power. It shall be determined by power training mechanism. */
/*  Currently, we cannot fully disable driver dynamic tx power mechanism because it is referenced by BT coexist mechanism. */
/*  In the future, two mechanism shall be separated from each other and maintained independently. Thanks for Lanhsin's reminder. */
		/* 92d do not need this */
		if (pdmpriv->DynamicTxHighPowerLvl == TxHighPwrLevel_Level1)
			write_val = 0x14141414;
		else if (pdmpriv->DynamicTxHighPowerLvl == TxHighPwrLevel_Level2)
			write_val = 0x00000000;

		*(out_val+rf) = write_val;
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
          int channel = 100;
          int index = 100;
          int _len_adapt0 = 1;
          struct adapter * adapt = (struct adapter *) malloc(_len_adapt0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_adapt0; _i0++) {
              int _len_adapt__i0__HalData0 = 1;
          adapt[_i0].HalData = (struct hal_data_8188e *) malloc(_len_adapt__i0__HalData0*sizeof(struct hal_data_8188e));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData0; _j0++) {
            adapt[_i0].HalData->EEPROMRegulatory = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapt__i0__HalData_MCSTxPowerLevelOriginalOffset0 = 1;
          adapt[_i0].HalData->MCSTxPowerLevelOriginalOffset = (int **) malloc(_len_adapt__i0__HalData_MCSTxPowerLevelOriginalOffset0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData_MCSTxPowerLevelOriginalOffset0; _j0++) {
            int _len_adapt__i0__HalData_MCSTxPowerLevelOriginalOffset1 = 1;
            adapt[_i0].HalData->MCSTxPowerLevelOriginalOffset[_j0] = (int *) malloc(_len_adapt__i0__HalData_MCSTxPowerLevelOriginalOffset1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_adapt__i0__HalData_MCSTxPowerLevelOriginalOffset1; _j1++) {
              adapt[_i0].HalData->MCSTxPowerLevelOriginalOffset[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        adapt[_i0].HalData->pwrGroupCnt = ((-2 * (next_i()%2)) + 1) * next_i();
        adapt[_i0].HalData->PGMaxGroup = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapt__i0__HalData_TxPwrLegacyHtDiff0 = 1;
          adapt[_i0].HalData->TxPwrLegacyHtDiff = (int **) malloc(_len_adapt__i0__HalData_TxPwrLegacyHtDiff0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData_TxPwrLegacyHtDiff0; _j0++) {
            int _len_adapt__i0__HalData_TxPwrLegacyHtDiff1 = 1;
            adapt[_i0].HalData->TxPwrLegacyHtDiff[_j0] = (int *) malloc(_len_adapt__i0__HalData_TxPwrLegacyHtDiff1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_adapt__i0__HalData_TxPwrLegacyHtDiff1; _j1++) {
              adapt[_i0].HalData->TxPwrLegacyHtDiff[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_adapt__i0__HalData_TxPwrHt20Diff0 = 1;
          adapt[_i0].HalData->TxPwrHt20Diff = (int **) malloc(_len_adapt__i0__HalData_TxPwrHt20Diff0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData_TxPwrHt20Diff0; _j0++) {
            int _len_adapt__i0__HalData_TxPwrHt20Diff1 = 1;
            adapt[_i0].HalData->TxPwrHt20Diff[_j0] = (int *) malloc(_len_adapt__i0__HalData_TxPwrHt20Diff1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_adapt__i0__HalData_TxPwrHt20Diff1; _j1++) {
              adapt[_i0].HalData->TxPwrHt20Diff[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_adapt__i0__HalData_PwrGroupHT400 = 1;
          adapt[_i0].HalData->PwrGroupHT40 = (int **) malloc(_len_adapt__i0__HalData_PwrGroupHT400*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData_PwrGroupHT400; _j0++) {
            int _len_adapt__i0__HalData_PwrGroupHT401 = 1;
            adapt[_i0].HalData->PwrGroupHT40[_j0] = (int *) malloc(_len_adapt__i0__HalData_PwrGroupHT401*sizeof(int));
            for(int _j1 = 0; _j1 < _len_adapt__i0__HalData_PwrGroupHT401; _j1++) {
              adapt[_i0].HalData->PwrGroupHT40[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_adapt__i0__HalData_PwrGroupHT200 = 1;
          adapt[_i0].HalData->PwrGroupHT20 = (int **) malloc(_len_adapt__i0__HalData_PwrGroupHT200*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData_PwrGroupHT200; _j0++) {
            int _len_adapt__i0__HalData_PwrGroupHT201 = 1;
            adapt[_i0].HalData->PwrGroupHT20[_j0] = (int *) malloc(_len_adapt__i0__HalData_PwrGroupHT201*sizeof(int));
            for(int _j1 = 0; _j1 < _len_adapt__i0__HalData_PwrGroupHT201; _j1++) {
              adapt[_i0].HalData->PwrGroupHT20[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        adapt[_i0].HalData->CurrentChannelBW = ((-2 * (next_i()%2)) + 1) * next_i();
        adapt[_i0].HalData->dmpriv.DynamicTxHighPowerLvl = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_powerbase00 = 1;
          int * powerbase0 = (int *) malloc(_len_powerbase00*sizeof(int));
          for(int _i0 = 0; _i0 < _len_powerbase00; _i0++) {
            powerbase0[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_powerbase10 = 1;
          int * powerbase1 = (int *) malloc(_len_powerbase10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_powerbase10; _i0++) {
            powerbase1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out_val0 = 1;
          int * out_val = (int *) malloc(_len_out_val0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out_val0; _i0++) {
            out_val[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_rx_power_val_by_reg(adapt,channel,index,powerbase0,powerbase1,out_val);
          for(int _aux = 0; _aux < _len_adapt0; _aux++) {
          free(adapt[_aux].HalData);
          }
          free(adapt);
          free(powerbase0);
          free(powerbase1);
          free(out_val);
        
        break;
    }
    // big-arr
    case 1:
    {
          int channel = 255;
          int index = 255;
          int _len_adapt0 = 65025;
          struct adapter * adapt = (struct adapter *) malloc(_len_adapt0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_adapt0; _i0++) {
              int _len_adapt__i0__HalData0 = 1;
          adapt[_i0].HalData = (struct hal_data_8188e *) malloc(_len_adapt__i0__HalData0*sizeof(struct hal_data_8188e));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData0; _j0++) {
            adapt[_i0].HalData->EEPROMRegulatory = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapt__i0__HalData_MCSTxPowerLevelOriginalOffset0 = 1;
          adapt[_i0].HalData->MCSTxPowerLevelOriginalOffset = (int **) malloc(_len_adapt__i0__HalData_MCSTxPowerLevelOriginalOffset0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData_MCSTxPowerLevelOriginalOffset0; _j0++) {
            int _len_adapt__i0__HalData_MCSTxPowerLevelOriginalOffset1 = 1;
            adapt[_i0].HalData->MCSTxPowerLevelOriginalOffset[_j0] = (int *) malloc(_len_adapt__i0__HalData_MCSTxPowerLevelOriginalOffset1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_adapt__i0__HalData_MCSTxPowerLevelOriginalOffset1; _j1++) {
              adapt[_i0].HalData->MCSTxPowerLevelOriginalOffset[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        adapt[_i0].HalData->pwrGroupCnt = ((-2 * (next_i()%2)) + 1) * next_i();
        adapt[_i0].HalData->PGMaxGroup = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapt__i0__HalData_TxPwrLegacyHtDiff0 = 1;
          adapt[_i0].HalData->TxPwrLegacyHtDiff = (int **) malloc(_len_adapt__i0__HalData_TxPwrLegacyHtDiff0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData_TxPwrLegacyHtDiff0; _j0++) {
            int _len_adapt__i0__HalData_TxPwrLegacyHtDiff1 = 1;
            adapt[_i0].HalData->TxPwrLegacyHtDiff[_j0] = (int *) malloc(_len_adapt__i0__HalData_TxPwrLegacyHtDiff1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_adapt__i0__HalData_TxPwrLegacyHtDiff1; _j1++) {
              adapt[_i0].HalData->TxPwrLegacyHtDiff[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_adapt__i0__HalData_TxPwrHt20Diff0 = 1;
          adapt[_i0].HalData->TxPwrHt20Diff = (int **) malloc(_len_adapt__i0__HalData_TxPwrHt20Diff0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData_TxPwrHt20Diff0; _j0++) {
            int _len_adapt__i0__HalData_TxPwrHt20Diff1 = 1;
            adapt[_i0].HalData->TxPwrHt20Diff[_j0] = (int *) malloc(_len_adapt__i0__HalData_TxPwrHt20Diff1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_adapt__i0__HalData_TxPwrHt20Diff1; _j1++) {
              adapt[_i0].HalData->TxPwrHt20Diff[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_adapt__i0__HalData_PwrGroupHT400 = 1;
          adapt[_i0].HalData->PwrGroupHT40 = (int **) malloc(_len_adapt__i0__HalData_PwrGroupHT400*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData_PwrGroupHT400; _j0++) {
            int _len_adapt__i0__HalData_PwrGroupHT401 = 1;
            adapt[_i0].HalData->PwrGroupHT40[_j0] = (int *) malloc(_len_adapt__i0__HalData_PwrGroupHT401*sizeof(int));
            for(int _j1 = 0; _j1 < _len_adapt__i0__HalData_PwrGroupHT401; _j1++) {
              adapt[_i0].HalData->PwrGroupHT40[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_adapt__i0__HalData_PwrGroupHT200 = 1;
          adapt[_i0].HalData->PwrGroupHT20 = (int **) malloc(_len_adapt__i0__HalData_PwrGroupHT200*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData_PwrGroupHT200; _j0++) {
            int _len_adapt__i0__HalData_PwrGroupHT201 = 1;
            adapt[_i0].HalData->PwrGroupHT20[_j0] = (int *) malloc(_len_adapt__i0__HalData_PwrGroupHT201*sizeof(int));
            for(int _j1 = 0; _j1 < _len_adapt__i0__HalData_PwrGroupHT201; _j1++) {
              adapt[_i0].HalData->PwrGroupHT20[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        adapt[_i0].HalData->CurrentChannelBW = ((-2 * (next_i()%2)) + 1) * next_i();
        adapt[_i0].HalData->dmpriv.DynamicTxHighPowerLvl = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_powerbase00 = 65025;
          int * powerbase0 = (int *) malloc(_len_powerbase00*sizeof(int));
          for(int _i0 = 0; _i0 < _len_powerbase00; _i0++) {
            powerbase0[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_powerbase10 = 65025;
          int * powerbase1 = (int *) malloc(_len_powerbase10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_powerbase10; _i0++) {
            powerbase1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out_val0 = 65025;
          int * out_val = (int *) malloc(_len_out_val0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out_val0; _i0++) {
            out_val[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_rx_power_val_by_reg(adapt,channel,index,powerbase0,powerbase1,out_val);
          for(int _aux = 0; _aux < _len_adapt0; _aux++) {
          free(adapt[_aux].HalData);
          }
          free(adapt);
          free(powerbase0);
          free(powerbase1);
          free(out_val);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int channel = 10;
          int index = 10;
          int _len_adapt0 = 100;
          struct adapter * adapt = (struct adapter *) malloc(_len_adapt0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_adapt0; _i0++) {
              int _len_adapt__i0__HalData0 = 1;
          adapt[_i0].HalData = (struct hal_data_8188e *) malloc(_len_adapt__i0__HalData0*sizeof(struct hal_data_8188e));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData0; _j0++) {
            adapt[_i0].HalData->EEPROMRegulatory = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapt__i0__HalData_MCSTxPowerLevelOriginalOffset0 = 1;
          adapt[_i0].HalData->MCSTxPowerLevelOriginalOffset = (int **) malloc(_len_adapt__i0__HalData_MCSTxPowerLevelOriginalOffset0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData_MCSTxPowerLevelOriginalOffset0; _j0++) {
            int _len_adapt__i0__HalData_MCSTxPowerLevelOriginalOffset1 = 1;
            adapt[_i0].HalData->MCSTxPowerLevelOriginalOffset[_j0] = (int *) malloc(_len_adapt__i0__HalData_MCSTxPowerLevelOriginalOffset1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_adapt__i0__HalData_MCSTxPowerLevelOriginalOffset1; _j1++) {
              adapt[_i0].HalData->MCSTxPowerLevelOriginalOffset[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        adapt[_i0].HalData->pwrGroupCnt = ((-2 * (next_i()%2)) + 1) * next_i();
        adapt[_i0].HalData->PGMaxGroup = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapt__i0__HalData_TxPwrLegacyHtDiff0 = 1;
          adapt[_i0].HalData->TxPwrLegacyHtDiff = (int **) malloc(_len_adapt__i0__HalData_TxPwrLegacyHtDiff0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData_TxPwrLegacyHtDiff0; _j0++) {
            int _len_adapt__i0__HalData_TxPwrLegacyHtDiff1 = 1;
            adapt[_i0].HalData->TxPwrLegacyHtDiff[_j0] = (int *) malloc(_len_adapt__i0__HalData_TxPwrLegacyHtDiff1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_adapt__i0__HalData_TxPwrLegacyHtDiff1; _j1++) {
              adapt[_i0].HalData->TxPwrLegacyHtDiff[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_adapt__i0__HalData_TxPwrHt20Diff0 = 1;
          adapt[_i0].HalData->TxPwrHt20Diff = (int **) malloc(_len_adapt__i0__HalData_TxPwrHt20Diff0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData_TxPwrHt20Diff0; _j0++) {
            int _len_adapt__i0__HalData_TxPwrHt20Diff1 = 1;
            adapt[_i0].HalData->TxPwrHt20Diff[_j0] = (int *) malloc(_len_adapt__i0__HalData_TxPwrHt20Diff1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_adapt__i0__HalData_TxPwrHt20Diff1; _j1++) {
              adapt[_i0].HalData->TxPwrHt20Diff[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_adapt__i0__HalData_PwrGroupHT400 = 1;
          adapt[_i0].HalData->PwrGroupHT40 = (int **) malloc(_len_adapt__i0__HalData_PwrGroupHT400*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData_PwrGroupHT400; _j0++) {
            int _len_adapt__i0__HalData_PwrGroupHT401 = 1;
            adapt[_i0].HalData->PwrGroupHT40[_j0] = (int *) malloc(_len_adapt__i0__HalData_PwrGroupHT401*sizeof(int));
            for(int _j1 = 0; _j1 < _len_adapt__i0__HalData_PwrGroupHT401; _j1++) {
              adapt[_i0].HalData->PwrGroupHT40[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_adapt__i0__HalData_PwrGroupHT200 = 1;
          adapt[_i0].HalData->PwrGroupHT20 = (int **) malloc(_len_adapt__i0__HalData_PwrGroupHT200*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData_PwrGroupHT200; _j0++) {
            int _len_adapt__i0__HalData_PwrGroupHT201 = 1;
            adapt[_i0].HalData->PwrGroupHT20[_j0] = (int *) malloc(_len_adapt__i0__HalData_PwrGroupHT201*sizeof(int));
            for(int _j1 = 0; _j1 < _len_adapt__i0__HalData_PwrGroupHT201; _j1++) {
              adapt[_i0].HalData->PwrGroupHT20[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        adapt[_i0].HalData->CurrentChannelBW = ((-2 * (next_i()%2)) + 1) * next_i();
        adapt[_i0].HalData->dmpriv.DynamicTxHighPowerLvl = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_powerbase00 = 100;
          int * powerbase0 = (int *) malloc(_len_powerbase00*sizeof(int));
          for(int _i0 = 0; _i0 < _len_powerbase00; _i0++) {
            powerbase0[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_powerbase10 = 100;
          int * powerbase1 = (int *) malloc(_len_powerbase10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_powerbase10; _i0++) {
            powerbase1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out_val0 = 100;
          int * out_val = (int *) malloc(_len_out_val0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out_val0; _i0++) {
            out_val[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_rx_power_val_by_reg(adapt,channel,index,powerbase0,powerbase1,out_val);
          for(int _aux = 0; _aux < _len_adapt0; _aux++) {
          free(adapt[_aux].HalData);
          }
          free(adapt);
          free(powerbase0);
          free(powerbase1);
          free(out_val);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

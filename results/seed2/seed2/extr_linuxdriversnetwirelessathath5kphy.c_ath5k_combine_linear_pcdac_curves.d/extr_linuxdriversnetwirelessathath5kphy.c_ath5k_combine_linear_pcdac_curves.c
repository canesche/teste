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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int u8 ;
struct TYPE_2__ {int* txp_pd_table; int** tmpL; int txp_min_idx; } ;
struct ath5k_hw {TYPE_1__ ah_txpower; } ;
typedef  int s16 ;

/* Variables and functions */

__attribute__((used)) static void
ath5k_combine_linear_pcdac_curves(struct ath5k_hw *ah, s16* table_min,
						s16 *table_max, u8 pdcurves)
{
	u8	*pcdac_out = ah->ah_txpower.txp_pd_table;
	u8	*pcdac_low_pwr;
	u8	*pcdac_high_pwr;
	u8	*pcdac_tmp;
	u8	pwr;
	s16	max_pwr_idx;
	s16	min_pwr_idx;
	s16	mid_pwr_idx = 0;
	/* Edge flag turns on the 7nth bit on the PCDAC
	 * to declare the higher power curve (force values
	 * to be greater than 64). If we only have one curve
	 * we don't need to set this, if we have 2 curves and
	 * fill the table backwards this can also be used to
	 * switch from higher power curve to lower power curve */
	u8	edge_flag;
	int	i;

	/* When we have only one curve available
	 * that's the higher power curve. If we have
	 * two curves the first is the high power curve
	 * and the next is the low power curve. */
	if (pdcurves > 1) {
		pcdac_low_pwr = ah->ah_txpower.tmpL[1];
		pcdac_high_pwr = ah->ah_txpower.tmpL[0];
		mid_pwr_idx = table_max[1] - table_min[1] - 1;
		max_pwr_idx = (table_max[0] - table_min[0]) / 2;

		/* If table size goes beyond 31.5dB, keep the
		 * upper 31.5dB range when setting tx power.
		 * Note: 126 = 31.5 dB in quarter dB steps */
		if (table_max[0] - table_min[1] > 126)
			min_pwr_idx = table_max[0] - 126;
		else
			min_pwr_idx = table_min[1];

		/* Since we fill table backwards
		 * start from high power curve */
		pcdac_tmp = pcdac_high_pwr;

		edge_flag = 0x40;
	} else {
		pcdac_low_pwr = ah->ah_txpower.tmpL[1]; /* Zeroed */
		pcdac_high_pwr = ah->ah_txpower.tmpL[0];
		min_pwr_idx = table_min[0];
		max_pwr_idx = (table_max[0] - table_min[0]) / 2;
		pcdac_tmp = pcdac_high_pwr;
		edge_flag = 0;
	}

	/* This is used when setting tx power*/
	ah->ah_txpower.txp_min_idx = min_pwr_idx / 2;

	/* Fill Power to PCDAC table backwards */
	pwr = max_pwr_idx;
	for (i = 63; i >= 0; i--) {
		/* Entering lower power range, reset
		 * edge flag and set pcdac_tmp to lower
		 * power curve.*/
		if (edge_flag == 0x40 &&
		(2 * pwr <= (table_max[1] - table_min[0]) || pwr == 0)) {
			edge_flag = 0x00;
			pcdac_tmp = pcdac_low_pwr;
			pwr = mid_pwr_idx / 2;
		}

		/* Don't go below 1, extrapolate below if we have
		 * already switched to the lower power curve -or
		 * we only have one curve and edge_flag is zero
		 * anyway */
		if (pcdac_tmp[pwr] < 1 && (edge_flag == 0x00)) {
			while (i >= 0) {
				pcdac_out[i] = pcdac_out[i + 1];
				i--;
			}
			break;
		}

		pcdac_out[i] = pcdac_tmp[pwr] | edge_flag;

		/* Extrapolate above if pcdac is greater than
		 * 126 -this can happen because we OR pcdac_out
		 * value with edge_flag on high power curve */
		if (pcdac_out[i] > 126)
			pcdac_out[i] = 126;

		/* Decrease by a 0.5dB step */
		pwr--;
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
          int pdcurves = 100;
          int _len_ah0 = 1;
          struct ath5k_hw * ah = (struct ath5k_hw *) malloc(_len_ah0*sizeof(struct ath5k_hw));
          for(int _i0 = 0; _i0 < _len_ah0; _i0++) {
              int _len_ah__i0__ah_txpower_txp_pd_table0 = 1;
          ah[_i0].ah_txpower.txp_pd_table = (int *) malloc(_len_ah__i0__ah_txpower_txp_pd_table0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ah__i0__ah_txpower_txp_pd_table0; _j0++) {
            ah[_i0].ah_txpower.txp_pd_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ah__i0__ah_txpower_tmpL0 = 1;
          ah[_i0].ah_txpower.tmpL = (int **) malloc(_len_ah__i0__ah_txpower_tmpL0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_ah__i0__ah_txpower_tmpL0; _j0++) {
            int _len_ah__i0__ah_txpower_tmpL1 = 1;
            ah[_i0].ah_txpower.tmpL[_j0] = (int *) malloc(_len_ah__i0__ah_txpower_tmpL1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_ah__i0__ah_txpower_tmpL1; _j1++) {
              ah[_i0].ah_txpower.tmpL[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        ah[_i0].ah_txpower.txp_min_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_table_min0 = 1;
          int * table_min = (int *) malloc(_len_table_min0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_table_min0; _i0++) {
            table_min[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_table_max0 = 1;
          int * table_max = (int *) malloc(_len_table_max0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_table_max0; _i0++) {
            table_max[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ath5k_combine_linear_pcdac_curves(ah,table_min,table_max,pdcurves);
          free(ah);
          free(table_min);
          free(table_max);
        
        break;
    }
    // big-arr
    case 1:
    {
          int pdcurves = 255;
          int _len_ah0 = 65025;
          struct ath5k_hw * ah = (struct ath5k_hw *) malloc(_len_ah0*sizeof(struct ath5k_hw));
          for(int _i0 = 0; _i0 < _len_ah0; _i0++) {
              int _len_ah__i0__ah_txpower_txp_pd_table0 = 1;
          ah[_i0].ah_txpower.txp_pd_table = (int *) malloc(_len_ah__i0__ah_txpower_txp_pd_table0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ah__i0__ah_txpower_txp_pd_table0; _j0++) {
            ah[_i0].ah_txpower.txp_pd_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ah__i0__ah_txpower_tmpL0 = 1;
          ah[_i0].ah_txpower.tmpL = (int **) malloc(_len_ah__i0__ah_txpower_tmpL0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_ah__i0__ah_txpower_tmpL0; _j0++) {
            int _len_ah__i0__ah_txpower_tmpL1 = 1;
            ah[_i0].ah_txpower.tmpL[_j0] = (int *) malloc(_len_ah__i0__ah_txpower_tmpL1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_ah__i0__ah_txpower_tmpL1; _j1++) {
              ah[_i0].ah_txpower.tmpL[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        ah[_i0].ah_txpower.txp_min_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_table_min0 = 65025;
          int * table_min = (int *) malloc(_len_table_min0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_table_min0; _i0++) {
            table_min[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_table_max0 = 65025;
          int * table_max = (int *) malloc(_len_table_max0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_table_max0; _i0++) {
            table_max[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ath5k_combine_linear_pcdac_curves(ah,table_min,table_max,pdcurves);
          free(ah);
          free(table_min);
          free(table_max);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int pdcurves = 10;
          int _len_ah0 = 100;
          struct ath5k_hw * ah = (struct ath5k_hw *) malloc(_len_ah0*sizeof(struct ath5k_hw));
          for(int _i0 = 0; _i0 < _len_ah0; _i0++) {
              int _len_ah__i0__ah_txpower_txp_pd_table0 = 1;
          ah[_i0].ah_txpower.txp_pd_table = (int *) malloc(_len_ah__i0__ah_txpower_txp_pd_table0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ah__i0__ah_txpower_txp_pd_table0; _j0++) {
            ah[_i0].ah_txpower.txp_pd_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ah__i0__ah_txpower_tmpL0 = 1;
          ah[_i0].ah_txpower.tmpL = (int **) malloc(_len_ah__i0__ah_txpower_tmpL0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_ah__i0__ah_txpower_tmpL0; _j0++) {
            int _len_ah__i0__ah_txpower_tmpL1 = 1;
            ah[_i0].ah_txpower.tmpL[_j0] = (int *) malloc(_len_ah__i0__ah_txpower_tmpL1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_ah__i0__ah_txpower_tmpL1; _j1++) {
              ah[_i0].ah_txpower.tmpL[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        ah[_i0].ah_txpower.txp_min_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_table_min0 = 100;
          int * table_min = (int *) malloc(_len_table_min0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_table_min0; _i0++) {
            table_min[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_table_max0 = 100;
          int * table_max = (int *) malloc(_len_table_max0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_table_max0; _i0++) {
            table_max[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ath5k_combine_linear_pcdac_curves(ah,table_min,table_max,pdcurves);
          free(ah);
          free(table_min);
          free(table_max);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  size_t u8 ;
struct TYPE_2__ {size_t* txp_pd_table; size_t** tmpL; } ;
struct ath5k_hw {TYPE_1__ ah_txpower; } ;
typedef  size_t s16 ;

/* Variables and functions */
 size_t AR5K_EEPROM_POWER_TABLE_SIZE ; 

__attribute__((used)) static void
ath5k_fill_pwr_to_pcdac_table(struct ath5k_hw *ah, s16* table_min,
							s16 *table_max)
{
	u8	*pcdac_out = ah->ah_txpower.txp_pd_table;
	u8	*pcdac_tmp = ah->ah_txpower.tmpL[0];
	u8	pcdac_0, pcdac_n, pcdac_i, pwr_idx, i;
	s16	min_pwr, max_pwr;

	/* Get table boundaries */
	min_pwr = table_min[0];
	pcdac_0 = pcdac_tmp[0];

	max_pwr = table_max[0];
	pcdac_n = pcdac_tmp[table_max[0] - table_min[0]];

	/* Extrapolate below minimum using pcdac_0 */
	pcdac_i = 0;
	for (i = 0; i < min_pwr; i++)
		pcdac_out[pcdac_i++] = pcdac_0;

	/* Copy values from pcdac_tmp */
	pwr_idx = min_pwr;
	for (i = 0; pwr_idx <= max_pwr &&
		    pcdac_i < AR5K_EEPROM_POWER_TABLE_SIZE; i++) {
		pcdac_out[pcdac_i++] = pcdac_tmp[i];
		pwr_idx++;
	}

	/* Extrapolate above maximum */
	while (pcdac_i < AR5K_EEPROM_POWER_TABLE_SIZE)
		pcdac_out[pcdac_i++] = pcdac_n;

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
          int _len_ah0 = 1;
          struct ath5k_hw * ah = (struct ath5k_hw *) malloc(_len_ah0*sizeof(struct ath5k_hw));
          for(int _i0 = 0; _i0 < _len_ah0; _i0++) {
              int _len_ah__i0__ah_txpower_txp_pd_table0 = 1;
          ah[_i0].ah_txpower.txp_pd_table = (unsigned long *) malloc(_len_ah__i0__ah_txpower_txp_pd_table0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_ah__i0__ah_txpower_txp_pd_table0; _j0++) {
            ah[_i0].ah_txpower.txp_pd_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ah__i0__ah_txpower_tmpL0 = 1;
          ah[_i0].ah_txpower.tmpL = (unsigned long **) malloc(_len_ah__i0__ah_txpower_tmpL0*sizeof(unsigned long *));
          for(int _j0 = 0; _j0 < _len_ah__i0__ah_txpower_tmpL0; _j0++) {
            int _len_ah__i0__ah_txpower_tmpL1 = 1;
            ah[_i0].ah_txpower.tmpL[_j0] = (unsigned long *) malloc(_len_ah__i0__ah_txpower_tmpL1*sizeof(unsigned long));
            for(int _j1 = 0; _j1 < _len_ah__i0__ah_txpower_tmpL1; _j1++) {
              ah[_i0].ah_txpower.tmpL[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_table_min0 = 1;
          unsigned long * table_min = (unsigned long *) malloc(_len_table_min0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_table_min0; _i0++) {
            table_min[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_table_max0 = 1;
          unsigned long * table_max = (unsigned long *) malloc(_len_table_max0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_table_max0; _i0++) {
            table_max[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ath5k_fill_pwr_to_pcdac_table(ah,table_min,table_max);
          free(ah);
          free(table_min);
          free(table_max);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ah0 = 65025;
          struct ath5k_hw * ah = (struct ath5k_hw *) malloc(_len_ah0*sizeof(struct ath5k_hw));
          for(int _i0 = 0; _i0 < _len_ah0; _i0++) {
              int _len_ah__i0__ah_txpower_txp_pd_table0 = 1;
          ah[_i0].ah_txpower.txp_pd_table = (unsigned long *) malloc(_len_ah__i0__ah_txpower_txp_pd_table0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_ah__i0__ah_txpower_txp_pd_table0; _j0++) {
            ah[_i0].ah_txpower.txp_pd_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ah__i0__ah_txpower_tmpL0 = 1;
          ah[_i0].ah_txpower.tmpL = (unsigned long **) malloc(_len_ah__i0__ah_txpower_tmpL0*sizeof(unsigned long *));
          for(int _j0 = 0; _j0 < _len_ah__i0__ah_txpower_tmpL0; _j0++) {
            int _len_ah__i0__ah_txpower_tmpL1 = 1;
            ah[_i0].ah_txpower.tmpL[_j0] = (unsigned long *) malloc(_len_ah__i0__ah_txpower_tmpL1*sizeof(unsigned long));
            for(int _j1 = 0; _j1 < _len_ah__i0__ah_txpower_tmpL1; _j1++) {
              ah[_i0].ah_txpower.tmpL[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_table_min0 = 65025;
          unsigned long * table_min = (unsigned long *) malloc(_len_table_min0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_table_min0; _i0++) {
            table_min[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_table_max0 = 65025;
          unsigned long * table_max = (unsigned long *) malloc(_len_table_max0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_table_max0; _i0++) {
            table_max[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ath5k_fill_pwr_to_pcdac_table(ah,table_min,table_max);
          free(ah);
          free(table_min);
          free(table_max);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ah0 = 100;
          struct ath5k_hw * ah = (struct ath5k_hw *) malloc(_len_ah0*sizeof(struct ath5k_hw));
          for(int _i0 = 0; _i0 < _len_ah0; _i0++) {
              int _len_ah__i0__ah_txpower_txp_pd_table0 = 1;
          ah[_i0].ah_txpower.txp_pd_table = (unsigned long *) malloc(_len_ah__i0__ah_txpower_txp_pd_table0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_ah__i0__ah_txpower_txp_pd_table0; _j0++) {
            ah[_i0].ah_txpower.txp_pd_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ah__i0__ah_txpower_tmpL0 = 1;
          ah[_i0].ah_txpower.tmpL = (unsigned long **) malloc(_len_ah__i0__ah_txpower_tmpL0*sizeof(unsigned long *));
          for(int _j0 = 0; _j0 < _len_ah__i0__ah_txpower_tmpL0; _j0++) {
            int _len_ah__i0__ah_txpower_tmpL1 = 1;
            ah[_i0].ah_txpower.tmpL[_j0] = (unsigned long *) malloc(_len_ah__i0__ah_txpower_tmpL1*sizeof(unsigned long));
            for(int _j1 = 0; _j1 < _len_ah__i0__ah_txpower_tmpL1; _j1++) {
              ah[_i0].ah_txpower.tmpL[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_table_min0 = 100;
          unsigned long * table_min = (unsigned long *) malloc(_len_table_min0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_table_min0; _i0++) {
            table_min[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_table_max0 = 100;
          unsigned long * table_max = (unsigned long *) malloc(_len_table_max0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_table_max0; _i0++) {
            table_max[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ath5k_fill_pwr_to_pcdac_table(ah,table_min,table_max);
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

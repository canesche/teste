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
struct ieee80211_supported_band {size_t band; size_t n_bitrates; TYPE_1__* bitrates; } ;
struct ath5k_hw {int** rate_idx; } ;
struct TYPE_2__ {size_t hw_value; int hw_value_short; } ;

/* Variables and functions */
 size_t AR5K_MAX_RATES ; 

__attribute__((used)) static void
ath5k_setup_rate_idx(struct ath5k_hw *ah, struct ieee80211_supported_band *b)
{
	u8 i;

	for (i = 0; i < AR5K_MAX_RATES; i++)
		ah->rate_idx[b->band][i] = -1;

	for (i = 0; i < b->n_bitrates; i++) {
		ah->rate_idx[b->band][b->bitrates[i].hw_value] = i;
		if (b->bitrates[i].hw_value_short)
			ah->rate_idx[b->band][b->bitrates[i].hw_value_short] = i;
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
          int _len_ah0 = 1;
          struct ath5k_hw * ah = (struct ath5k_hw *) malloc(_len_ah0*sizeof(struct ath5k_hw));
          for(int _i0 = 0; _i0 < _len_ah0; _i0++) {
              int _len_ah__i0__rate_idx0 = 1;
          ah[_i0].rate_idx = (int **) malloc(_len_ah__i0__rate_idx0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_ah__i0__rate_idx0; _j0++) {
            int _len_ah__i0__rate_idx1 = 1;
            ah[_i0].rate_idx[_j0] = (int *) malloc(_len_ah__i0__rate_idx1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_ah__i0__rate_idx1; _j1++) {
              ah[_i0].rate_idx[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_b0 = 1;
          struct ieee80211_supported_band * b = (struct ieee80211_supported_band *) malloc(_len_b0*sizeof(struct ieee80211_supported_band));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0].band = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].n_bitrates = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_b__i0__bitrates0 = 1;
          b[_i0].bitrates = (struct TYPE_2__ *) malloc(_len_b__i0__bitrates0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_b__i0__bitrates0; _j0++) {
            b[_i0].bitrates->hw_value = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].bitrates->hw_value_short = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ath5k_setup_rate_idx(ah,b);
          for(int _aux = 0; _aux < _len_ah0; _aux++) {
          free(*(ah[_aux].rate_idx));
        free(ah[_aux].rate_idx);
          }
          free(ah);
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].bitrates);
          }
          free(b);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ah0 = 65025;
          struct ath5k_hw * ah = (struct ath5k_hw *) malloc(_len_ah0*sizeof(struct ath5k_hw));
          for(int _i0 = 0; _i0 < _len_ah0; _i0++) {
              int _len_ah__i0__rate_idx0 = 1;
          ah[_i0].rate_idx = (int **) malloc(_len_ah__i0__rate_idx0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_ah__i0__rate_idx0; _j0++) {
            int _len_ah__i0__rate_idx1 = 1;
            ah[_i0].rate_idx[_j0] = (int *) malloc(_len_ah__i0__rate_idx1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_ah__i0__rate_idx1; _j1++) {
              ah[_i0].rate_idx[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_b0 = 65025;
          struct ieee80211_supported_band * b = (struct ieee80211_supported_band *) malloc(_len_b0*sizeof(struct ieee80211_supported_band));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0].band = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].n_bitrates = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_b__i0__bitrates0 = 1;
          b[_i0].bitrates = (struct TYPE_2__ *) malloc(_len_b__i0__bitrates0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_b__i0__bitrates0; _j0++) {
            b[_i0].bitrates->hw_value = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].bitrates->hw_value_short = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ath5k_setup_rate_idx(ah,b);
          for(int _aux = 0; _aux < _len_ah0; _aux++) {
          free(*(ah[_aux].rate_idx));
        free(ah[_aux].rate_idx);
          }
          free(ah);
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].bitrates);
          }
          free(b);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ah0 = 100;
          struct ath5k_hw * ah = (struct ath5k_hw *) malloc(_len_ah0*sizeof(struct ath5k_hw));
          for(int _i0 = 0; _i0 < _len_ah0; _i0++) {
              int _len_ah__i0__rate_idx0 = 1;
          ah[_i0].rate_idx = (int **) malloc(_len_ah__i0__rate_idx0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_ah__i0__rate_idx0; _j0++) {
            int _len_ah__i0__rate_idx1 = 1;
            ah[_i0].rate_idx[_j0] = (int *) malloc(_len_ah__i0__rate_idx1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_ah__i0__rate_idx1; _j1++) {
              ah[_i0].rate_idx[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_b0 = 100;
          struct ieee80211_supported_band * b = (struct ieee80211_supported_band *) malloc(_len_b0*sizeof(struct ieee80211_supported_band));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0].band = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].n_bitrates = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_b__i0__bitrates0 = 1;
          b[_i0].bitrates = (struct TYPE_2__ *) malloc(_len_b__i0__bitrates0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_b__i0__bitrates0; _j0++) {
            b[_i0].bitrates->hw_value = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].bitrates->hw_value_short = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ath5k_setup_rate_idx(ah,b);
          for(int _aux = 0; _aux < _len_ah0; _aux++) {
          free(*(ah[_aux].rate_idx));
        free(ah[_aux].rate_idx);
          }
          free(ah);
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].bitrates);
          }
          free(b);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

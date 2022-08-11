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
typedef  int /*<<< orphan*/  u8 ;
struct ath_btcoex_hw {int /*<<< orphan*/ * tx_prio; } ;
struct ath_hw {struct ath_btcoex_hw btcoex_hw; } ;

/* Variables and functions */
 int ATH_BTCOEX_STOMP_MAX ; 

void ath9k_hw_btcoex_set_concur_txprio(struct ath_hw *ah, u8 *stomp_txprio)
{
	struct ath_btcoex_hw *btcoex = &ah->btcoex_hw;
	int i;

	for (i = 0; i < ATH_BTCOEX_STOMP_MAX; i++)
		btcoex->tx_prio[i] = stomp_txprio[i];
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
          struct ath_hw * ah = (struct ath_hw *) malloc(_len_ah0*sizeof(struct ath_hw));
          for(int _i0 = 0; _i0 < _len_ah0; _i0++) {
              int _len_ah__i0__btcoex_hw_tx_prio0 = 1;
          ah[_i0].btcoex_hw.tx_prio = (int *) malloc(_len_ah__i0__btcoex_hw_tx_prio0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ah__i0__btcoex_hw_tx_prio0; _j0++) {
            ah[_i0].btcoex_hw.tx_prio[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_stomp_txprio0 = 1;
          int * stomp_txprio = (int *) malloc(_len_stomp_txprio0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_stomp_txprio0; _i0++) {
            stomp_txprio[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ath9k_hw_btcoex_set_concur_txprio(ah,stomp_txprio);
          free(ah);
          free(stomp_txprio);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ah0 = 65025;
          struct ath_hw * ah = (struct ath_hw *) malloc(_len_ah0*sizeof(struct ath_hw));
          for(int _i0 = 0; _i0 < _len_ah0; _i0++) {
              int _len_ah__i0__btcoex_hw_tx_prio0 = 1;
          ah[_i0].btcoex_hw.tx_prio = (int *) malloc(_len_ah__i0__btcoex_hw_tx_prio0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ah__i0__btcoex_hw_tx_prio0; _j0++) {
            ah[_i0].btcoex_hw.tx_prio[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_stomp_txprio0 = 65025;
          int * stomp_txprio = (int *) malloc(_len_stomp_txprio0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_stomp_txprio0; _i0++) {
            stomp_txprio[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ath9k_hw_btcoex_set_concur_txprio(ah,stomp_txprio);
          free(ah);
          free(stomp_txprio);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ah0 = 100;
          struct ath_hw * ah = (struct ath_hw *) malloc(_len_ah0*sizeof(struct ath_hw));
          for(int _i0 = 0; _i0 < _len_ah0; _i0++) {
              int _len_ah__i0__btcoex_hw_tx_prio0 = 1;
          ah[_i0].btcoex_hw.tx_prio = (int *) malloc(_len_ah__i0__btcoex_hw_tx_prio0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ah__i0__btcoex_hw_tx_prio0; _j0++) {
            ah[_i0].btcoex_hw.tx_prio[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_stomp_txprio0 = 100;
          int * stomp_txprio = (int *) malloc(_len_stomp_txprio0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_stomp_txprio0; _i0++) {
            stomp_txprio[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ath9k_hw_btcoex_set_concur_txprio(ah,stomp_txprio);
          free(ah);
          free(stomp_txprio);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

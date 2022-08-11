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
struct i40e_pfc_stats {int /*<<< orphan*/  priority_xon_2_xoff; int /*<<< orphan*/  priority_xoff_tx; int /*<<< orphan*/  priority_xon_tx; int /*<<< orphan*/  priority_xoff_rx; int /*<<< orphan*/  priority_xon_rx; } ;
struct TYPE_2__ {int /*<<< orphan*/ * priority_xon_2_xoff; int /*<<< orphan*/ * priority_xoff_tx; int /*<<< orphan*/ * priority_xon_tx; int /*<<< orphan*/ * priority_xoff_rx; int /*<<< orphan*/ * priority_xon_rx; } ;
struct i40e_pf {TYPE_1__ stats; } ;

/* Variables and functions */

__attribute__((used)) static inline struct i40e_pfc_stats
i40e_get_pfc_stats(struct i40e_pf *pf, unsigned int i)
{
#define I40E_GET_PFC_STAT(stat, priority) \
	.stat = pf->stats.stat[priority]

	struct i40e_pfc_stats pfc = {
		I40E_GET_PFC_STAT(priority_xon_rx, i),
		I40E_GET_PFC_STAT(priority_xoff_rx, i),
		I40E_GET_PFC_STAT(priority_xon_tx, i),
		I40E_GET_PFC_STAT(priority_xoff_tx, i),
		I40E_GET_PFC_STAT(priority_xon_2_xoff, i),
	};
	return pfc;
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
          unsigned int i = 100;
          int _len_pf0 = 1;
          struct i40e_pf * pf = (struct i40e_pf *) malloc(_len_pf0*sizeof(struct i40e_pf));
          for(int _i0 = 0; _i0 < _len_pf0; _i0++) {
              int _len_pf__i0__stats_priority_xon_2_xoff0 = 1;
          pf[_i0].stats.priority_xon_2_xoff = (int *) malloc(_len_pf__i0__stats_priority_xon_2_xoff0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pf__i0__stats_priority_xon_2_xoff0; _j0++) {
            pf[_i0].stats.priority_xon_2_xoff[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pf__i0__stats_priority_xoff_tx0 = 1;
          pf[_i0].stats.priority_xoff_tx = (int *) malloc(_len_pf__i0__stats_priority_xoff_tx0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pf__i0__stats_priority_xoff_tx0; _j0++) {
            pf[_i0].stats.priority_xoff_tx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pf__i0__stats_priority_xon_tx0 = 1;
          pf[_i0].stats.priority_xon_tx = (int *) malloc(_len_pf__i0__stats_priority_xon_tx0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pf__i0__stats_priority_xon_tx0; _j0++) {
            pf[_i0].stats.priority_xon_tx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pf__i0__stats_priority_xoff_rx0 = 1;
          pf[_i0].stats.priority_xoff_rx = (int *) malloc(_len_pf__i0__stats_priority_xoff_rx0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pf__i0__stats_priority_xoff_rx0; _j0++) {
            pf[_i0].stats.priority_xoff_rx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pf__i0__stats_priority_xon_rx0 = 1;
          pf[_i0].stats.priority_xon_rx = (int *) malloc(_len_pf__i0__stats_priority_xon_rx0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pf__i0__stats_priority_xon_rx0; _j0++) {
            pf[_i0].stats.priority_xon_rx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct i40e_pfc_stats benchRet = i40e_get_pfc_stats(pf,i);
          printf("%d\n", benchRet.priority_xon_2_xoff);
          printf("%d\n", benchRet.priority_xoff_tx);
          printf("%d\n", benchRet.priority_xon_tx);
          printf("%d\n", benchRet.priority_xoff_rx);
          printf("%d\n", benchRet.priority_xon_rx);
          free(pf);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int i = 255;
          int _len_pf0 = 65025;
          struct i40e_pf * pf = (struct i40e_pf *) malloc(_len_pf0*sizeof(struct i40e_pf));
          for(int _i0 = 0; _i0 < _len_pf0; _i0++) {
              int _len_pf__i0__stats_priority_xon_2_xoff0 = 1;
          pf[_i0].stats.priority_xon_2_xoff = (int *) malloc(_len_pf__i0__stats_priority_xon_2_xoff0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pf__i0__stats_priority_xon_2_xoff0; _j0++) {
            pf[_i0].stats.priority_xon_2_xoff[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pf__i0__stats_priority_xoff_tx0 = 1;
          pf[_i0].stats.priority_xoff_tx = (int *) malloc(_len_pf__i0__stats_priority_xoff_tx0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pf__i0__stats_priority_xoff_tx0; _j0++) {
            pf[_i0].stats.priority_xoff_tx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pf__i0__stats_priority_xon_tx0 = 1;
          pf[_i0].stats.priority_xon_tx = (int *) malloc(_len_pf__i0__stats_priority_xon_tx0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pf__i0__stats_priority_xon_tx0; _j0++) {
            pf[_i0].stats.priority_xon_tx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pf__i0__stats_priority_xoff_rx0 = 1;
          pf[_i0].stats.priority_xoff_rx = (int *) malloc(_len_pf__i0__stats_priority_xoff_rx0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pf__i0__stats_priority_xoff_rx0; _j0++) {
            pf[_i0].stats.priority_xoff_rx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pf__i0__stats_priority_xon_rx0 = 1;
          pf[_i0].stats.priority_xon_rx = (int *) malloc(_len_pf__i0__stats_priority_xon_rx0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pf__i0__stats_priority_xon_rx0; _j0++) {
            pf[_i0].stats.priority_xon_rx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct i40e_pfc_stats benchRet = i40e_get_pfc_stats(pf,i);
          printf("%d\n", benchRet.priority_xon_2_xoff);
          printf("%d\n", benchRet.priority_xoff_tx);
          printf("%d\n", benchRet.priority_xon_tx);
          printf("%d\n", benchRet.priority_xoff_rx);
          printf("%d\n", benchRet.priority_xon_rx);
          free(pf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int i = 10;
          int _len_pf0 = 100;
          struct i40e_pf * pf = (struct i40e_pf *) malloc(_len_pf0*sizeof(struct i40e_pf));
          for(int _i0 = 0; _i0 < _len_pf0; _i0++) {
              int _len_pf__i0__stats_priority_xon_2_xoff0 = 1;
          pf[_i0].stats.priority_xon_2_xoff = (int *) malloc(_len_pf__i0__stats_priority_xon_2_xoff0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pf__i0__stats_priority_xon_2_xoff0; _j0++) {
            pf[_i0].stats.priority_xon_2_xoff[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pf__i0__stats_priority_xoff_tx0 = 1;
          pf[_i0].stats.priority_xoff_tx = (int *) malloc(_len_pf__i0__stats_priority_xoff_tx0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pf__i0__stats_priority_xoff_tx0; _j0++) {
            pf[_i0].stats.priority_xoff_tx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pf__i0__stats_priority_xon_tx0 = 1;
          pf[_i0].stats.priority_xon_tx = (int *) malloc(_len_pf__i0__stats_priority_xon_tx0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pf__i0__stats_priority_xon_tx0; _j0++) {
            pf[_i0].stats.priority_xon_tx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pf__i0__stats_priority_xoff_rx0 = 1;
          pf[_i0].stats.priority_xoff_rx = (int *) malloc(_len_pf__i0__stats_priority_xoff_rx0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pf__i0__stats_priority_xoff_rx0; _j0++) {
            pf[_i0].stats.priority_xoff_rx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pf__i0__stats_priority_xon_rx0 = 1;
          pf[_i0].stats.priority_xon_rx = (int *) malloc(_len_pf__i0__stats_priority_xon_rx0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pf__i0__stats_priority_xon_rx0; _j0++) {
            pf[_i0].stats.priority_xon_rx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct i40e_pfc_stats benchRet = i40e_get_pfc_stats(pf,i);
          printf("%d\n", benchRet.priority_xon_2_xoff);
          printf("%d\n", benchRet.priority_xoff_tx);
          printf("%d\n", benchRet.priority_xon_tx);
          printf("%d\n", benchRet.priority_xoff_rx);
          printf("%d\n", benchRet.priority_xon_rx);
          free(pf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct TYPE_2__ {int /*<<< orphan*/ * tx_stats; int /*<<< orphan*/ * rx_stats; } ;
struct nicvf {TYPE_1__ bgx_stats; } ;
struct bgx_stats_msg {size_t idx; int /*<<< orphan*/  stats; scalar_t__ rx; } ;

/* Variables and functions */

__attribute__((used)) static void nicvf_read_bgx_stats(struct nicvf *nic, struct bgx_stats_msg *bgx)
{
	if (bgx->rx)
		nic->bgx_stats.rx_stats[bgx->idx] = bgx->stats;
	else
		nic->bgx_stats.tx_stats[bgx->idx] = bgx->stats;
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
          int _len_nic0 = 1;
          struct nicvf * nic = (struct nicvf *) malloc(_len_nic0*sizeof(struct nicvf));
          for(int _i0 = 0; _i0 < _len_nic0; _i0++) {
              int _len_nic__i0__bgx_stats_tx_stats0 = 1;
          nic[_i0].bgx_stats.tx_stats = (int *) malloc(_len_nic__i0__bgx_stats_tx_stats0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_nic__i0__bgx_stats_tx_stats0; _j0++) {
            nic[_i0].bgx_stats.tx_stats[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nic__i0__bgx_stats_rx_stats0 = 1;
          nic[_i0].bgx_stats.rx_stats = (int *) malloc(_len_nic__i0__bgx_stats_rx_stats0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_nic__i0__bgx_stats_rx_stats0; _j0++) {
            nic[_i0].bgx_stats.rx_stats[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_bgx0 = 1;
          struct bgx_stats_msg * bgx = (struct bgx_stats_msg *) malloc(_len_bgx0*sizeof(struct bgx_stats_msg));
          for(int _i0 = 0; _i0 < _len_bgx0; _i0++) {
            bgx[_i0].idx = ((-2 * (next_i()%2)) + 1) * next_i();
        bgx[_i0].stats = ((-2 * (next_i()%2)) + 1) * next_i();
        bgx[_i0].rx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nicvf_read_bgx_stats(nic,bgx);
          free(nic);
          free(bgx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_nic0 = 65025;
          struct nicvf * nic = (struct nicvf *) malloc(_len_nic0*sizeof(struct nicvf));
          for(int _i0 = 0; _i0 < _len_nic0; _i0++) {
              int _len_nic__i0__bgx_stats_tx_stats0 = 1;
          nic[_i0].bgx_stats.tx_stats = (int *) malloc(_len_nic__i0__bgx_stats_tx_stats0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_nic__i0__bgx_stats_tx_stats0; _j0++) {
            nic[_i0].bgx_stats.tx_stats[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nic__i0__bgx_stats_rx_stats0 = 1;
          nic[_i0].bgx_stats.rx_stats = (int *) malloc(_len_nic__i0__bgx_stats_rx_stats0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_nic__i0__bgx_stats_rx_stats0; _j0++) {
            nic[_i0].bgx_stats.rx_stats[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_bgx0 = 65025;
          struct bgx_stats_msg * bgx = (struct bgx_stats_msg *) malloc(_len_bgx0*sizeof(struct bgx_stats_msg));
          for(int _i0 = 0; _i0 < _len_bgx0; _i0++) {
            bgx[_i0].idx = ((-2 * (next_i()%2)) + 1) * next_i();
        bgx[_i0].stats = ((-2 * (next_i()%2)) + 1) * next_i();
        bgx[_i0].rx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nicvf_read_bgx_stats(nic,bgx);
          free(nic);
          free(bgx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_nic0 = 100;
          struct nicvf * nic = (struct nicvf *) malloc(_len_nic0*sizeof(struct nicvf));
          for(int _i0 = 0; _i0 < _len_nic0; _i0++) {
              int _len_nic__i0__bgx_stats_tx_stats0 = 1;
          nic[_i0].bgx_stats.tx_stats = (int *) malloc(_len_nic__i0__bgx_stats_tx_stats0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_nic__i0__bgx_stats_tx_stats0; _j0++) {
            nic[_i0].bgx_stats.tx_stats[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nic__i0__bgx_stats_rx_stats0 = 1;
          nic[_i0].bgx_stats.rx_stats = (int *) malloc(_len_nic__i0__bgx_stats_rx_stats0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_nic__i0__bgx_stats_rx_stats0; _j0++) {
            nic[_i0].bgx_stats.rx_stats[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_bgx0 = 100;
          struct bgx_stats_msg * bgx = (struct bgx_stats_msg *) malloc(_len_bgx0*sizeof(struct bgx_stats_msg));
          for(int _i0 = 0; _i0 < _len_bgx0; _i0++) {
            bgx[_i0].idx = ((-2 * (next_i()%2)) + 1) * next_i();
        bgx[_i0].stats = ((-2 * (next_i()%2)) + 1) * next_i();
        bgx[_i0].rx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nicvf_read_bgx_stats(nic,bgx);
          free(nic);
          free(bgx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  int u16 ;
struct ctrl_queue {int index; scalar_t__ buf; } ;
struct catc {char* stats_buf; int* stats_vals; TYPE_2__* netdev; } ;
struct TYPE_3__ {int /*<<< orphan*/  rx_errors; int /*<<< orphan*/  rx_frame_errors; int /*<<< orphan*/  tx_errors; int /*<<< orphan*/  tx_aborted_errors; int /*<<< orphan*/  collisions; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;

/* Variables and functions */
 int EthStats ; 
#define  RxFramErr 131 
#define  TxExcessColl 130 
#define  TxMultiColl 129 
#define  TxSingleColl 128 

__attribute__((used)) static void catc_stats_done(struct catc *catc, struct ctrl_queue *q)
{
	int index = q->index - EthStats;
	u16 data, last;

	catc->stats_buf[index] = *((char *)q->buf);

	if (index & 1)
		return;

	data = ((u16)catc->stats_buf[index] << 8) | catc->stats_buf[index + 1];
	last = catc->stats_vals[index >> 1];

	switch (index) {
		case TxSingleColl:
		case TxMultiColl:
			catc->netdev->stats.collisions += data - last;
			break;
		case TxExcessColl:
			catc->netdev->stats.tx_aborted_errors += data - last;
			catc->netdev->stats.tx_errors += data - last;
			break;
		case RxFramErr:
			catc->netdev->stats.rx_frame_errors += data - last;
			catc->netdev->stats.rx_errors += data - last;
			break;
	}

	catc->stats_vals[index >> 1] = data;
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
          int _len_catc0 = 1;
          struct catc * catc = (struct catc *) malloc(_len_catc0*sizeof(struct catc));
          for(int _i0 = 0; _i0 < _len_catc0; _i0++) {
              int _len_catc__i0__stats_buf0 = 1;
          catc[_i0].stats_buf = (char *) malloc(_len_catc__i0__stats_buf0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_catc__i0__stats_buf0; _j0++) {
            catc[_i0].stats_buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_catc__i0__stats_vals0 = 1;
          catc[_i0].stats_vals = (int *) malloc(_len_catc__i0__stats_vals0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_catc__i0__stats_vals0; _j0++) {
            catc[_i0].stats_vals[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_catc__i0__netdev0 = 1;
          catc[_i0].netdev = (struct TYPE_4__ *) malloc(_len_catc__i0__netdev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_catc__i0__netdev0; _j0++) {
            catc[_i0].netdev->stats.rx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        catc[_i0].netdev->stats.rx_frame_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        catc[_i0].netdev->stats.tx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        catc[_i0].netdev->stats.tx_aborted_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        catc[_i0].netdev->stats.collisions = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_q0 = 1;
          struct ctrl_queue * q = (struct ctrl_queue *) malloc(_len_q0*sizeof(struct ctrl_queue));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].buf = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          catc_stats_done(catc,q);
          for(int _aux = 0; _aux < _len_catc0; _aux++) {
          free(catc[_aux].stats_buf);
          }
          for(int _aux = 0; _aux < _len_catc0; _aux++) {
          free(catc[_aux].stats_vals);
          }
          for(int _aux = 0; _aux < _len_catc0; _aux++) {
          free(catc[_aux].netdev);
          }
          free(catc);
          free(q);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_catc0 = 65025;
          struct catc * catc = (struct catc *) malloc(_len_catc0*sizeof(struct catc));
          for(int _i0 = 0; _i0 < _len_catc0; _i0++) {
              int _len_catc__i0__stats_buf0 = 1;
          catc[_i0].stats_buf = (char *) malloc(_len_catc__i0__stats_buf0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_catc__i0__stats_buf0; _j0++) {
            catc[_i0].stats_buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_catc__i0__stats_vals0 = 1;
          catc[_i0].stats_vals = (int *) malloc(_len_catc__i0__stats_vals0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_catc__i0__stats_vals0; _j0++) {
            catc[_i0].stats_vals[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_catc__i0__netdev0 = 1;
          catc[_i0].netdev = (struct TYPE_4__ *) malloc(_len_catc__i0__netdev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_catc__i0__netdev0; _j0++) {
            catc[_i0].netdev->stats.rx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        catc[_i0].netdev->stats.rx_frame_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        catc[_i0].netdev->stats.tx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        catc[_i0].netdev->stats.tx_aborted_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        catc[_i0].netdev->stats.collisions = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_q0 = 65025;
          struct ctrl_queue * q = (struct ctrl_queue *) malloc(_len_q0*sizeof(struct ctrl_queue));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].buf = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          catc_stats_done(catc,q);
          for(int _aux = 0; _aux < _len_catc0; _aux++) {
          free(catc[_aux].stats_buf);
          }
          for(int _aux = 0; _aux < _len_catc0; _aux++) {
          free(catc[_aux].stats_vals);
          }
          for(int _aux = 0; _aux < _len_catc0; _aux++) {
          free(catc[_aux].netdev);
          }
          free(catc);
          free(q);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_catc0 = 100;
          struct catc * catc = (struct catc *) malloc(_len_catc0*sizeof(struct catc));
          for(int _i0 = 0; _i0 < _len_catc0; _i0++) {
              int _len_catc__i0__stats_buf0 = 1;
          catc[_i0].stats_buf = (char *) malloc(_len_catc__i0__stats_buf0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_catc__i0__stats_buf0; _j0++) {
            catc[_i0].stats_buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_catc__i0__stats_vals0 = 1;
          catc[_i0].stats_vals = (int *) malloc(_len_catc__i0__stats_vals0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_catc__i0__stats_vals0; _j0++) {
            catc[_i0].stats_vals[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_catc__i0__netdev0 = 1;
          catc[_i0].netdev = (struct TYPE_4__ *) malloc(_len_catc__i0__netdev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_catc__i0__netdev0; _j0++) {
            catc[_i0].netdev->stats.rx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        catc[_i0].netdev->stats.rx_frame_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        catc[_i0].netdev->stats.tx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        catc[_i0].netdev->stats.tx_aborted_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        catc[_i0].netdev->stats.collisions = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_q0 = 100;
          struct ctrl_queue * q = (struct ctrl_queue *) malloc(_len_q0*sizeof(struct ctrl_queue));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].buf = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          catc_stats_done(catc,q);
          for(int _aux = 0; _aux < _len_catc0; _aux++) {
          free(catc[_aux].stats_buf);
          }
          for(int _aux = 0; _aux < _len_catc0; _aux++) {
          free(catc[_aux].stats_vals);
          }
          for(int _aux = 0; _aux < _len_catc0; _aux++) {
          free(catc[_aux].netdev);
          }
          free(catc);
          free(q);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

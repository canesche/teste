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
struct lag_tracker {TYPE_1__* netdev_state; } ;
struct TYPE_2__ {int /*<<< orphan*/  link_up; int /*<<< orphan*/  tx_enabled; } ;

/* Variables and functions */

__attribute__((used)) static void mlx5_infer_tx_affinity_mapping(struct lag_tracker *tracker,
					   u8 *port1, u8 *port2)
{
	*port1 = 1;
	*port2 = 2;
	if (!tracker->netdev_state[0].tx_enabled ||
	    !tracker->netdev_state[0].link_up) {
		*port1 = 2;
		return;
	}

	if (!tracker->netdev_state[1].tx_enabled ||
	    !tracker->netdev_state[1].link_up)
		*port2 = 1;
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
          int _len_tracker0 = 1;
          struct lag_tracker * tracker = (struct lag_tracker *) malloc(_len_tracker0*sizeof(struct lag_tracker));
          for(int _i0 = 0; _i0 < _len_tracker0; _i0++) {
              int _len_tracker__i0__netdev_state0 = 1;
          tracker[_i0].netdev_state = (struct TYPE_2__ *) malloc(_len_tracker__i0__netdev_state0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_tracker__i0__netdev_state0; _j0++) {
            tracker[_i0].netdev_state->link_up = ((-2 * (next_i()%2)) + 1) * next_i();
        tracker[_i0].netdev_state->tx_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_port10 = 1;
          int * port1 = (int *) malloc(_len_port10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_port10; _i0++) {
            port1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_port20 = 1;
          int * port2 = (int *) malloc(_len_port20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_port20; _i0++) {
            port2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mlx5_infer_tx_affinity_mapping(tracker,port1,port2);
          for(int _aux = 0; _aux < _len_tracker0; _aux++) {
          free(tracker[_aux].netdev_state);
          }
          free(tracker);
          free(port1);
          free(port2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_tracker0 = 65025;
          struct lag_tracker * tracker = (struct lag_tracker *) malloc(_len_tracker0*sizeof(struct lag_tracker));
          for(int _i0 = 0; _i0 < _len_tracker0; _i0++) {
              int _len_tracker__i0__netdev_state0 = 1;
          tracker[_i0].netdev_state = (struct TYPE_2__ *) malloc(_len_tracker__i0__netdev_state0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_tracker__i0__netdev_state0; _j0++) {
            tracker[_i0].netdev_state->link_up = ((-2 * (next_i()%2)) + 1) * next_i();
        tracker[_i0].netdev_state->tx_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_port10 = 65025;
          int * port1 = (int *) malloc(_len_port10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_port10; _i0++) {
            port1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_port20 = 65025;
          int * port2 = (int *) malloc(_len_port20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_port20; _i0++) {
            port2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mlx5_infer_tx_affinity_mapping(tracker,port1,port2);
          for(int _aux = 0; _aux < _len_tracker0; _aux++) {
          free(tracker[_aux].netdev_state);
          }
          free(tracker);
          free(port1);
          free(port2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_tracker0 = 100;
          struct lag_tracker * tracker = (struct lag_tracker *) malloc(_len_tracker0*sizeof(struct lag_tracker));
          for(int _i0 = 0; _i0 < _len_tracker0; _i0++) {
              int _len_tracker__i0__netdev_state0 = 1;
          tracker[_i0].netdev_state = (struct TYPE_2__ *) malloc(_len_tracker__i0__netdev_state0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_tracker__i0__netdev_state0; _j0++) {
            tracker[_i0].netdev_state->link_up = ((-2 * (next_i()%2)) + 1) * next_i();
        tracker[_i0].netdev_state->tx_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_port10 = 100;
          int * port1 = (int *) malloc(_len_port10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_port10; _i0++) {
            port1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_port20 = 100;
          int * port2 = (int *) malloc(_len_port20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_port20; _i0++) {
            port2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mlx5_infer_tx_affinity_mapping(tracker,port1,port2);
          for(int _aux = 0; _aux < _len_tracker0; _aux++) {
          free(tracker[_aux].netdev_state);
          }
          free(tracker);
          free(port1);
          free(port2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

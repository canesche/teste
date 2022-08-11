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
typedef  int /*<<< orphan*/  u8 ;
typedef  size_t u16 ;
struct brcmf_flowring_ring {size_t hash_id; } ;
struct brcmf_flowring {TYPE_1__* hash; struct brcmf_flowring_ring** rings; } ;
struct TYPE_2__ {int /*<<< orphan*/  fifo; } ;

/* Variables and functions */

u8 brcmf_flowring_tid(struct brcmf_flowring *flow, u16 flowid)
{
	struct brcmf_flowring_ring *ring;

	ring = flow->rings[flowid];

	return flow->hash[ring->hash_id].fifo;
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
          unsigned long flowid = 100;
          int _len_flow0 = 1;
          struct brcmf_flowring * flow = (struct brcmf_flowring *) malloc(_len_flow0*sizeof(struct brcmf_flowring));
          for(int _i0 = 0; _i0 < _len_flow0; _i0++) {
              int _len_flow__i0__hash0 = 1;
          flow[_i0].hash = (struct TYPE_2__ *) malloc(_len_flow__i0__hash0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_flow__i0__hash0; _j0++) {
            flow[_i0].hash->fifo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_flow__i0__rings0 = 1;
          flow[_i0].rings = (struct brcmf_flowring_ring **) malloc(_len_flow__i0__rings0*sizeof(struct brcmf_flowring_ring *));
          for(int _j0 = 0; _j0 < _len_flow__i0__rings0; _j0++) {
            int _len_flow__i0__rings1 = 1;
            flow[_i0].rings[_j0] = (struct brcmf_flowring_ring *) malloc(_len_flow__i0__rings1*sizeof(struct brcmf_flowring_ring));
            for(int _j1 = 0; _j1 < _len_flow__i0__rings1; _j1++) {
              flow[_i0].rings[_j0]->hash_id = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = brcmf_flowring_tid(flow,flowid);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_flow0; _aux++) {
          free(flow[_aux].hash);
          }
          for(int _aux = 0; _aux < _len_flow0; _aux++) {
          free(*(flow[_aux].rings));
        free(flow[_aux].rings);
          }
          free(flow);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long flowid = 255;
          int _len_flow0 = 65025;
          struct brcmf_flowring * flow = (struct brcmf_flowring *) malloc(_len_flow0*sizeof(struct brcmf_flowring));
          for(int _i0 = 0; _i0 < _len_flow0; _i0++) {
              int _len_flow__i0__hash0 = 1;
          flow[_i0].hash = (struct TYPE_2__ *) malloc(_len_flow__i0__hash0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_flow__i0__hash0; _j0++) {
            flow[_i0].hash->fifo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_flow__i0__rings0 = 1;
          flow[_i0].rings = (struct brcmf_flowring_ring **) malloc(_len_flow__i0__rings0*sizeof(struct brcmf_flowring_ring *));
          for(int _j0 = 0; _j0 < _len_flow__i0__rings0; _j0++) {
            int _len_flow__i0__rings1 = 1;
            flow[_i0].rings[_j0] = (struct brcmf_flowring_ring *) malloc(_len_flow__i0__rings1*sizeof(struct brcmf_flowring_ring));
            for(int _j1 = 0; _j1 < _len_flow__i0__rings1; _j1++) {
              flow[_i0].rings[_j0]->hash_id = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = brcmf_flowring_tid(flow,flowid);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_flow0; _aux++) {
          free(flow[_aux].hash);
          }
          for(int _aux = 0; _aux < _len_flow0; _aux++) {
          free(*(flow[_aux].rings));
        free(flow[_aux].rings);
          }
          free(flow);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long flowid = 10;
          int _len_flow0 = 100;
          struct brcmf_flowring * flow = (struct brcmf_flowring *) malloc(_len_flow0*sizeof(struct brcmf_flowring));
          for(int _i0 = 0; _i0 < _len_flow0; _i0++) {
              int _len_flow__i0__hash0 = 1;
          flow[_i0].hash = (struct TYPE_2__ *) malloc(_len_flow__i0__hash0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_flow__i0__hash0; _j0++) {
            flow[_i0].hash->fifo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_flow__i0__rings0 = 1;
          flow[_i0].rings = (struct brcmf_flowring_ring **) malloc(_len_flow__i0__rings0*sizeof(struct brcmf_flowring_ring *));
          for(int _j0 = 0; _j0 < _len_flow__i0__rings0; _j0++) {
            int _len_flow__i0__rings1 = 1;
            flow[_i0].rings[_j0] = (struct brcmf_flowring_ring *) malloc(_len_flow__i0__rings1*sizeof(struct brcmf_flowring_ring));
            for(int _j1 = 0; _j1 < _len_flow__i0__rings1; _j1++) {
              flow[_i0].rings[_j0]->hash_id = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = brcmf_flowring_tid(flow,flowid);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_flow0; _aux++) {
          free(flow[_aux].hash);
          }
          for(int _aux = 0; _aux < _len_flow0; _aux++) {
          free(*(flow[_aux].rings));
        free(flow[_aux].rings);
          }
          free(flow);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

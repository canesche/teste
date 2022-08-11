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
struct vxge_hw_ring_rxd_1 {int /*<<< orphan*/  control_0; } ;
struct __vxge_hw_ring {TYPE_2__* stats; } ;
struct TYPE_3__ {scalar_t__ usage_cnt; } ;
struct TYPE_4__ {TYPE_1__ common_stats; } ;

/* Variables and functions */
 int /*<<< orphan*/  VXGE_HW_RING_RXD_LIST_OWN_ADAPTER ; 

void vxge_hw_ring_rxd_post_post(struct __vxge_hw_ring *ring, void *rxdh)
{
	struct vxge_hw_ring_rxd_1 *rxdp = (struct vxge_hw_ring_rxd_1 *)rxdh;

	rxdp->control_0	= VXGE_HW_RING_RXD_LIST_OWN_ADAPTER;

	if (ring->stats->common_stats.usage_cnt > 0)
		ring->stats->common_stats.usage_cnt--;
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
          int _len_ring0 = 1;
          struct __vxge_hw_ring * ring = (struct __vxge_hw_ring *) malloc(_len_ring0*sizeof(struct __vxge_hw_ring));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
              int _len_ring__i0__stats0 = 1;
          ring[_i0].stats = (struct TYPE_4__ *) malloc(_len_ring__i0__stats0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ring__i0__stats0; _j0++) {
            ring[_i0].stats->common_stats.usage_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * rxdh;
          vxge_hw_ring_rxd_post_post(ring,rxdh);
          for(int _aux = 0; _aux < _len_ring0; _aux++) {
          free(ring[_aux].stats);
          }
          free(ring);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ring0 = 65025;
          struct __vxge_hw_ring * ring = (struct __vxge_hw_ring *) malloc(_len_ring0*sizeof(struct __vxge_hw_ring));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
              int _len_ring__i0__stats0 = 1;
          ring[_i0].stats = (struct TYPE_4__ *) malloc(_len_ring__i0__stats0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ring__i0__stats0; _j0++) {
            ring[_i0].stats->common_stats.usage_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * rxdh;
          vxge_hw_ring_rxd_post_post(ring,rxdh);
          for(int _aux = 0; _aux < _len_ring0; _aux++) {
          free(ring[_aux].stats);
          }
          free(ring);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ring0 = 100;
          struct __vxge_hw_ring * ring = (struct __vxge_hw_ring *) malloc(_len_ring0*sizeof(struct __vxge_hw_ring));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
              int _len_ring__i0__stats0 = 1;
          ring[_i0].stats = (struct TYPE_4__ *) malloc(_len_ring__i0__stats0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ring__i0__stats0; _j0++) {
            ring[_i0].stats->common_stats.usage_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * rxdh;
          vxge_hw_ring_rxd_post_post(ring,rxdh);
          for(int _aux = 0; _aux < _len_ring0; _aux++) {
          free(ring[_aux].stats);
          }
          free(ring);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

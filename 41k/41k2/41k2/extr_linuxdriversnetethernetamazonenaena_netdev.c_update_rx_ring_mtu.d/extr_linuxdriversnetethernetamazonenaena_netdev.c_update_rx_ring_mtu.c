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
struct ena_adapter {int num_queues; TYPE_1__* rx_ring; } ;
struct TYPE_2__ {int mtu; } ;

/* Variables and functions */

__attribute__((used)) static void update_rx_ring_mtu(struct ena_adapter *adapter, int mtu)
{
	int i;

	for (i = 0; i < adapter->num_queues; i++)
		adapter->rx_ring[i].mtu = mtu;
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
          int mtu = 100;
          int _len_adapter0 = 1;
          struct ena_adapter * adapter = (struct ena_adapter *) malloc(_len_adapter0*sizeof(struct ena_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].num_queues = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapter__i0__rx_ring0 = 1;
          adapter[_i0].rx_ring = (struct TYPE_2__ *) malloc(_len_adapter__i0__rx_ring0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_adapter__i0__rx_ring0; _j0++) {
            adapter[_i0].rx_ring->mtu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          update_rx_ring_mtu(adapter,mtu);
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(adapter[_aux].rx_ring);
          }
          free(adapter);
        
        break;
    }
    // big-arr
    case 1:
    {
          int mtu = 255;
          int _len_adapter0 = 65025;
          struct ena_adapter * adapter = (struct ena_adapter *) malloc(_len_adapter0*sizeof(struct ena_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].num_queues = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapter__i0__rx_ring0 = 1;
          adapter[_i0].rx_ring = (struct TYPE_2__ *) malloc(_len_adapter__i0__rx_ring0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_adapter__i0__rx_ring0; _j0++) {
            adapter[_i0].rx_ring->mtu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          update_rx_ring_mtu(adapter,mtu);
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(adapter[_aux].rx_ring);
          }
          free(adapter);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mtu = 10;
          int _len_adapter0 = 100;
          struct ena_adapter * adapter = (struct ena_adapter *) malloc(_len_adapter0*sizeof(struct ena_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].num_queues = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapter__i0__rx_ring0 = 1;
          adapter[_i0].rx_ring = (struct TYPE_2__ *) malloc(_len_adapter__i0__rx_ring0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_adapter__i0__rx_ring0; _j0++) {
            adapter[_i0].rx_ring->mtu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          update_rx_ring_mtu(adapter,mtu);
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(adapter[_aux].rx_ring);
          }
          free(adapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

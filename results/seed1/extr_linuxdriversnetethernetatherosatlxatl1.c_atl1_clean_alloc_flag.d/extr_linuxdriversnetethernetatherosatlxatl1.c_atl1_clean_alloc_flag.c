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
typedef  size_t u16 ;
struct rx_return_desc {size_t buf_indx; } ;
struct atl1_rfd_ring {size_t next_to_clean; size_t count; TYPE_1__* buffer_info; } ;
struct atl1_adapter {struct atl1_rfd_ring rfd_ring; } ;
struct TYPE_2__ {scalar_t__ alloced; } ;

/* Variables and functions */

__attribute__((used)) static void atl1_clean_alloc_flag(struct atl1_adapter *adapter,
	struct rx_return_desc *rrd, u16 offset)
{
	struct atl1_rfd_ring *rfd_ring = &adapter->rfd_ring;

	while (rfd_ring->next_to_clean != (rrd->buf_indx + offset)) {
		rfd_ring->buffer_info[rfd_ring->next_to_clean].alloced = 0;
		if (++rfd_ring->next_to_clean == rfd_ring->count) {
			rfd_ring->next_to_clean = 0;
		}
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
          unsigned long offset = 100;
          int _len_adapter0 = 1;
          struct atl1_adapter * adapter = (struct atl1_adapter *) malloc(_len_adapter0*sizeof(struct atl1_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].rfd_ring.next_to_clean = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].rfd_ring.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapter__i0__rfd_ring_buffer_info0 = 1;
          adapter[_i0].rfd_ring.buffer_info = (struct TYPE_2__ *) malloc(_len_adapter__i0__rfd_ring_buffer_info0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_adapter__i0__rfd_ring_buffer_info0; _j0++) {
            adapter[_i0].rfd_ring.buffer_info->alloced = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rrd0 = 1;
          struct rx_return_desc * rrd = (struct rx_return_desc *) malloc(_len_rrd0*sizeof(struct rx_return_desc));
          for(int _i0 = 0; _i0 < _len_rrd0; _i0++) {
            rrd[_i0].buf_indx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          atl1_clean_alloc_flag(adapter,rrd,offset);
          free(adapter);
          free(rrd);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long offset = 255;
          int _len_adapter0 = 65025;
          struct atl1_adapter * adapter = (struct atl1_adapter *) malloc(_len_adapter0*sizeof(struct atl1_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].rfd_ring.next_to_clean = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].rfd_ring.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapter__i0__rfd_ring_buffer_info0 = 1;
          adapter[_i0].rfd_ring.buffer_info = (struct TYPE_2__ *) malloc(_len_adapter__i0__rfd_ring_buffer_info0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_adapter__i0__rfd_ring_buffer_info0; _j0++) {
            adapter[_i0].rfd_ring.buffer_info->alloced = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rrd0 = 65025;
          struct rx_return_desc * rrd = (struct rx_return_desc *) malloc(_len_rrd0*sizeof(struct rx_return_desc));
          for(int _i0 = 0; _i0 < _len_rrd0; _i0++) {
            rrd[_i0].buf_indx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          atl1_clean_alloc_flag(adapter,rrd,offset);
          free(adapter);
          free(rrd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long offset = 10;
          int _len_adapter0 = 100;
          struct atl1_adapter * adapter = (struct atl1_adapter *) malloc(_len_adapter0*sizeof(struct atl1_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].rfd_ring.next_to_clean = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].rfd_ring.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapter__i0__rfd_ring_buffer_info0 = 1;
          adapter[_i0].rfd_ring.buffer_info = (struct TYPE_2__ *) malloc(_len_adapter__i0__rfd_ring_buffer_info0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_adapter__i0__rfd_ring_buffer_info0; _j0++) {
            adapter[_i0].rfd_ring.buffer_info->alloced = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rrd0 = 100;
          struct rx_return_desc * rrd = (struct rx_return_desc *) malloc(_len_rrd0*sizeof(struct rx_return_desc));
          for(int _i0 = 0; _i0 < _len_rrd0; _i0++) {
            rrd[_i0].buf_indx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          atl1_clean_alloc_flag(adapter,rrd,offset);
          free(adapter);
          free(rrd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

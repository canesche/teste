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
struct atl1c_tpd_ring {scalar_t__ desc; struct atl1c_buffer* buffer_info; } ;
struct atl1c_tpd_desc {int dummy; } ;
struct atl1c_buffer {int dummy; } ;
struct atl1c_adapter {struct atl1c_tpd_ring* tpd_ring; } ;

/* Variables and functions */

__attribute__((used)) static struct atl1c_buffer *
atl1c_get_tx_buffer(struct atl1c_adapter *adapter, struct atl1c_tpd_desc *tpd)
{
	struct atl1c_tpd_ring *tpd_ring = adapter->tpd_ring;

	return &tpd_ring->buffer_info[tpd -
			(struct atl1c_tpd_desc *)tpd_ring->desc];
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
          int _len_adapter0 = 1;
          struct atl1c_adapter * adapter = (struct atl1c_adapter *) malloc(_len_adapter0*sizeof(struct atl1c_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              int _len_adapter__i0__tpd_ring0 = 1;
          adapter[_i0].tpd_ring = (struct atl1c_tpd_ring *) malloc(_len_adapter__i0__tpd_ring0*sizeof(struct atl1c_tpd_ring));
          for(int _j0 = 0; _j0 < _len_adapter__i0__tpd_ring0; _j0++) {
            adapter[_i0].tpd_ring->desc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapter__i0__tpd_ring_buffer_info0 = 1;
          adapter[_i0].tpd_ring->buffer_info = (struct atl1c_buffer *) malloc(_len_adapter__i0__tpd_ring_buffer_info0*sizeof(struct atl1c_buffer));
          for(int _j0 = 0; _j0 < _len_adapter__i0__tpd_ring_buffer_info0; _j0++) {
            adapter[_i0].tpd_ring->buffer_info->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_tpd0 = 1;
          struct atl1c_tpd_desc * tpd = (struct atl1c_tpd_desc *) malloc(_len_tpd0*sizeof(struct atl1c_tpd_desc));
          for(int _i0 = 0; _i0 < _len_tpd0; _i0++) {
            tpd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct atl1c_buffer * benchRet = atl1c_get_tx_buffer(adapter,tpd);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(adapter[_aux].tpd_ring);
          }
          free(adapter);
          free(tpd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_adapter0 = 65025;
          struct atl1c_adapter * adapter = (struct atl1c_adapter *) malloc(_len_adapter0*sizeof(struct atl1c_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              int _len_adapter__i0__tpd_ring0 = 1;
          adapter[_i0].tpd_ring = (struct atl1c_tpd_ring *) malloc(_len_adapter__i0__tpd_ring0*sizeof(struct atl1c_tpd_ring));
          for(int _j0 = 0; _j0 < _len_adapter__i0__tpd_ring0; _j0++) {
            adapter[_i0].tpd_ring->desc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapter__i0__tpd_ring_buffer_info0 = 1;
          adapter[_i0].tpd_ring->buffer_info = (struct atl1c_buffer *) malloc(_len_adapter__i0__tpd_ring_buffer_info0*sizeof(struct atl1c_buffer));
          for(int _j0 = 0; _j0 < _len_adapter__i0__tpd_ring_buffer_info0; _j0++) {
            adapter[_i0].tpd_ring->buffer_info->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_tpd0 = 65025;
          struct atl1c_tpd_desc * tpd = (struct atl1c_tpd_desc *) malloc(_len_tpd0*sizeof(struct atl1c_tpd_desc));
          for(int _i0 = 0; _i0 < _len_tpd0; _i0++) {
            tpd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct atl1c_buffer * benchRet = atl1c_get_tx_buffer(adapter,tpd);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(adapter[_aux].tpd_ring);
          }
          free(adapter);
          free(tpd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_adapter0 = 100;
          struct atl1c_adapter * adapter = (struct atl1c_adapter *) malloc(_len_adapter0*sizeof(struct atl1c_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              int _len_adapter__i0__tpd_ring0 = 1;
          adapter[_i0].tpd_ring = (struct atl1c_tpd_ring *) malloc(_len_adapter__i0__tpd_ring0*sizeof(struct atl1c_tpd_ring));
          for(int _j0 = 0; _j0 < _len_adapter__i0__tpd_ring0; _j0++) {
            adapter[_i0].tpd_ring->desc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapter__i0__tpd_ring_buffer_info0 = 1;
          adapter[_i0].tpd_ring->buffer_info = (struct atl1c_buffer *) malloc(_len_adapter__i0__tpd_ring_buffer_info0*sizeof(struct atl1c_buffer));
          for(int _j0 = 0; _j0 < _len_adapter__i0__tpd_ring_buffer_info0; _j0++) {
            adapter[_i0].tpd_ring->buffer_info->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_tpd0 = 100;
          struct atl1c_tpd_desc * tpd = (struct atl1c_tpd_desc *) malloc(_len_tpd0*sizeof(struct atl1c_tpd_desc));
          for(int _i0 = 0; _i0 < _len_tpd0; _i0++) {
            tpd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct atl1c_buffer * benchRet = atl1c_get_tx_buffer(adapter,tpd);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(adapter[_aux].tpd_ring);
          }
          free(adapter);
          free(tpd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct rx_ring {size_t sbq_curr_idx; size_t sbq_len; int /*<<< orphan*/  sbq_free_cnt; struct bq_desc* sbq; } ;
struct bq_desc {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static struct bq_desc *ql_get_curr_sbuf(struct rx_ring *rx_ring)
{
	struct bq_desc *sbq_desc = &rx_ring->sbq[rx_ring->sbq_curr_idx];
	rx_ring->sbq_curr_idx++;
	if (rx_ring->sbq_curr_idx == rx_ring->sbq_len)
		rx_ring->sbq_curr_idx = 0;
	rx_ring->sbq_free_cnt++;
	return sbq_desc;
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
          int _len_rx_ring0 = 1;
          struct rx_ring * rx_ring = (struct rx_ring *) malloc(_len_rx_ring0*sizeof(struct rx_ring));
          for(int _i0 = 0; _i0 < _len_rx_ring0; _i0++) {
            rx_ring[_i0].sbq_curr_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        rx_ring[_i0].sbq_len = ((-2 * (next_i()%2)) + 1) * next_i();
        rx_ring[_i0].sbq_free_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rx_ring__i0__sbq0 = 1;
          rx_ring[_i0].sbq = (struct bq_desc *) malloc(_len_rx_ring__i0__sbq0*sizeof(struct bq_desc));
          for(int _j0 = 0; _j0 < _len_rx_ring__i0__sbq0; _j0++) {
            rx_ring[_i0].sbq->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct bq_desc * benchRet = ql_get_curr_sbuf(rx_ring);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_rx_ring0; _aux++) {
          free(rx_ring[_aux].sbq);
          }
          free(rx_ring);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_rx_ring0 = 65025;
          struct rx_ring * rx_ring = (struct rx_ring *) malloc(_len_rx_ring0*sizeof(struct rx_ring));
          for(int _i0 = 0; _i0 < _len_rx_ring0; _i0++) {
            rx_ring[_i0].sbq_curr_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        rx_ring[_i0].sbq_len = ((-2 * (next_i()%2)) + 1) * next_i();
        rx_ring[_i0].sbq_free_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rx_ring__i0__sbq0 = 1;
          rx_ring[_i0].sbq = (struct bq_desc *) malloc(_len_rx_ring__i0__sbq0*sizeof(struct bq_desc));
          for(int _j0 = 0; _j0 < _len_rx_ring__i0__sbq0; _j0++) {
            rx_ring[_i0].sbq->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct bq_desc * benchRet = ql_get_curr_sbuf(rx_ring);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_rx_ring0; _aux++) {
          free(rx_ring[_aux].sbq);
          }
          free(rx_ring);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_rx_ring0 = 100;
          struct rx_ring * rx_ring = (struct rx_ring *) malloc(_len_rx_ring0*sizeof(struct rx_ring));
          for(int _i0 = 0; _i0 < _len_rx_ring0; _i0++) {
            rx_ring[_i0].sbq_curr_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        rx_ring[_i0].sbq_len = ((-2 * (next_i()%2)) + 1) * next_i();
        rx_ring[_i0].sbq_free_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rx_ring__i0__sbq0 = 1;
          rx_ring[_i0].sbq = (struct bq_desc *) malloc(_len_rx_ring__i0__sbq0*sizeof(struct bq_desc));
          for(int _j0 = 0; _j0 < _len_rx_ring__i0__sbq0; _j0++) {
            rx_ring[_i0].sbq->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct bq_desc * benchRet = ql_get_curr_sbuf(rx_ring);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_rx_ring0; _aux++) {
          free(rx_ring[_aux].sbq);
          }
          free(rx_ring);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct bnxt_tx_ring_info {scalar_t__ tx_cons; scalar_t__ tx_prod; } ;
struct bnxt_rx_ring_info {scalar_t__ rx_next_cons; scalar_t__ rx_sw_agg_prod; scalar_t__ rx_agg_prod; scalar_t__ rx_prod; } ;
struct bnxt_cp_ring_info {scalar_t__ cp_raw_cons; } ;
struct bnxt_napi {struct bnxt_rx_ring_info* rx_ring; struct bnxt_tx_ring_info* tx_ring; struct bnxt_cp_ring_info cp_ring; } ;
struct bnxt {int cp_nr_rings; struct bnxt_napi** bnapi; } ;

/* Variables and functions */

__attribute__((used)) static void bnxt_clear_ring_indices(struct bnxt *bp)
{
	int i;

	if (!bp->bnapi)
		return;

	for (i = 0; i < bp->cp_nr_rings; i++) {
		struct bnxt_napi *bnapi = bp->bnapi[i];
		struct bnxt_cp_ring_info *cpr;
		struct bnxt_rx_ring_info *rxr;
		struct bnxt_tx_ring_info *txr;

		if (!bnapi)
			continue;

		cpr = &bnapi->cp_ring;
		cpr->cp_raw_cons = 0;

		txr = bnapi->tx_ring;
		if (txr) {
			txr->tx_prod = 0;
			txr->tx_cons = 0;
		}

		rxr = bnapi->rx_ring;
		if (rxr) {
			rxr->rx_prod = 0;
			rxr->rx_agg_prod = 0;
			rxr->rx_sw_agg_prod = 0;
			rxr->rx_next_cons = 0;
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
          int _len_bp0 = 1;
          struct bnxt * bp = (struct bnxt *) malloc(_len_bp0*sizeof(struct bnxt));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].cp_nr_rings = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bp__i0__bnapi0 = 1;
          bp[_i0].bnapi = (struct bnxt_napi **) malloc(_len_bp__i0__bnapi0*sizeof(struct bnxt_napi *));
          for(int _j0 = 0; _j0 < _len_bp__i0__bnapi0; _j0++) {
            int _len_bp__i0__bnapi1 = 1;
            bp[_i0].bnapi[_j0] = (struct bnxt_napi *) malloc(_len_bp__i0__bnapi1*sizeof(struct bnxt_napi));
            for(int _j1 = 0; _j1 < _len_bp__i0__bnapi1; _j1++) {
                int _len_bp__i0__bnapi__j0__rx_ring0 = 1;
          bp[_i0].bnapi[_j0]->rx_ring = (struct bnxt_rx_ring_info *) malloc(_len_bp__i0__bnapi__j0__rx_ring0*sizeof(struct bnxt_rx_ring_info));
          for(int _j0 = 0; _j0 < _len_bp__i0__bnapi__j0__rx_ring0; _j0++) {
            bp[_i0].bnapi[_j0]->rx_ring->rx_next_cons = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].bnapi[_j0]->rx_ring->rx_sw_agg_prod = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].bnapi[_j0]->rx_ring->rx_agg_prod = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].bnapi[_j0]->rx_ring->rx_prod = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bp__i0__bnapi__j0__tx_ring0 = 1;
          bp[_i0].bnapi[_j0]->tx_ring = (struct bnxt_tx_ring_info *) malloc(_len_bp__i0__bnapi__j0__tx_ring0*sizeof(struct bnxt_tx_ring_info));
          for(int _j0 = 0; _j0 < _len_bp__i0__bnapi__j0__tx_ring0; _j0++) {
            bp[_i0].bnapi[_j0]->tx_ring->tx_cons = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].bnapi[_j0]->tx_ring->tx_prod = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        bp[_i0].bnapi[_j0]->cp_ring.cp_raw_cons = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          bnxt_clear_ring_indices(bp);
          for(int _aux = 0; _aux < _len_bp0; _aux++) {
          free(*(bp[_aux].bnapi));
        free(bp[_aux].bnapi);
          }
          free(bp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_bp0 = 65025;
          struct bnxt * bp = (struct bnxt *) malloc(_len_bp0*sizeof(struct bnxt));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].cp_nr_rings = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bp__i0__bnapi0 = 1;
          bp[_i0].bnapi = (struct bnxt_napi **) malloc(_len_bp__i0__bnapi0*sizeof(struct bnxt_napi *));
          for(int _j0 = 0; _j0 < _len_bp__i0__bnapi0; _j0++) {
            int _len_bp__i0__bnapi1 = 1;
            bp[_i0].bnapi[_j0] = (struct bnxt_napi *) malloc(_len_bp__i0__bnapi1*sizeof(struct bnxt_napi));
            for(int _j1 = 0; _j1 < _len_bp__i0__bnapi1; _j1++) {
                int _len_bp__i0__bnapi__j0__rx_ring0 = 1;
          bp[_i0].bnapi[_j0]->rx_ring = (struct bnxt_rx_ring_info *) malloc(_len_bp__i0__bnapi__j0__rx_ring0*sizeof(struct bnxt_rx_ring_info));
          for(int _j0 = 0; _j0 < _len_bp__i0__bnapi__j0__rx_ring0; _j0++) {
            bp[_i0].bnapi[_j0]->rx_ring->rx_next_cons = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].bnapi[_j0]->rx_ring->rx_sw_agg_prod = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].bnapi[_j0]->rx_ring->rx_agg_prod = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].bnapi[_j0]->rx_ring->rx_prod = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bp__i0__bnapi__j0__tx_ring0 = 1;
          bp[_i0].bnapi[_j0]->tx_ring = (struct bnxt_tx_ring_info *) malloc(_len_bp__i0__bnapi__j0__tx_ring0*sizeof(struct bnxt_tx_ring_info));
          for(int _j0 = 0; _j0 < _len_bp__i0__bnapi__j0__tx_ring0; _j0++) {
            bp[_i0].bnapi[_j0]->tx_ring->tx_cons = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].bnapi[_j0]->tx_ring->tx_prod = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        bp[_i0].bnapi[_j0]->cp_ring.cp_raw_cons = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          bnxt_clear_ring_indices(bp);
          for(int _aux = 0; _aux < _len_bp0; _aux++) {
          free(*(bp[_aux].bnapi));
        free(bp[_aux].bnapi);
          }
          free(bp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_bp0 = 100;
          struct bnxt * bp = (struct bnxt *) malloc(_len_bp0*sizeof(struct bnxt));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].cp_nr_rings = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bp__i0__bnapi0 = 1;
          bp[_i0].bnapi = (struct bnxt_napi **) malloc(_len_bp__i0__bnapi0*sizeof(struct bnxt_napi *));
          for(int _j0 = 0; _j0 < _len_bp__i0__bnapi0; _j0++) {
            int _len_bp__i0__bnapi1 = 1;
            bp[_i0].bnapi[_j0] = (struct bnxt_napi *) malloc(_len_bp__i0__bnapi1*sizeof(struct bnxt_napi));
            for(int _j1 = 0; _j1 < _len_bp__i0__bnapi1; _j1++) {
                int _len_bp__i0__bnapi__j0__rx_ring0 = 1;
          bp[_i0].bnapi[_j0]->rx_ring = (struct bnxt_rx_ring_info *) malloc(_len_bp__i0__bnapi__j0__rx_ring0*sizeof(struct bnxt_rx_ring_info));
          for(int _j0 = 0; _j0 < _len_bp__i0__bnapi__j0__rx_ring0; _j0++) {
            bp[_i0].bnapi[_j0]->rx_ring->rx_next_cons = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].bnapi[_j0]->rx_ring->rx_sw_agg_prod = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].bnapi[_j0]->rx_ring->rx_agg_prod = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].bnapi[_j0]->rx_ring->rx_prod = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bp__i0__bnapi__j0__tx_ring0 = 1;
          bp[_i0].bnapi[_j0]->tx_ring = (struct bnxt_tx_ring_info *) malloc(_len_bp__i0__bnapi__j0__tx_ring0*sizeof(struct bnxt_tx_ring_info));
          for(int _j0 = 0; _j0 < _len_bp__i0__bnapi__j0__tx_ring0; _j0++) {
            bp[_i0].bnapi[_j0]->tx_ring->tx_cons = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].bnapi[_j0]->tx_ring->tx_prod = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        bp[_i0].bnapi[_j0]->cp_ring.cp_raw_cons = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          bnxt_clear_ring_indices(bp);
          for(int _aux = 0; _aux < _len_bp0; _aux++) {
          free(*(bp[_aux].bnapi));
        free(bp[_aux].bnapi);
          }
          free(bp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct sdma_txreq {int dummy; } ;
struct sdma_engine {size_t tx_head; size_t sdma_mask; struct sdma_txreq** tx_ring; } ;

/* Variables and functions */

__attribute__((used)) static inline struct sdma_txreq *get_txhead(struct sdma_engine *sde)
{
	return sde->tx_ring[sde->tx_head & sde->sdma_mask];
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
          int _len_sde0 = 1;
          struct sdma_engine * sde = (struct sdma_engine *) malloc(_len_sde0*sizeof(struct sdma_engine));
          for(int _i0 = 0; _i0 < _len_sde0; _i0++) {
            sde[_i0].tx_head = ((-2 * (next_i()%2)) + 1) * next_i();
        sde[_i0].sdma_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sde__i0__tx_ring0 = 1;
          sde[_i0].tx_ring = (struct sdma_txreq **) malloc(_len_sde__i0__tx_ring0*sizeof(struct sdma_txreq *));
          for(int _j0 = 0; _j0 < _len_sde__i0__tx_ring0; _j0++) {
            int _len_sde__i0__tx_ring1 = 1;
            sde[_i0].tx_ring[_j0] = (struct sdma_txreq *) malloc(_len_sde__i0__tx_ring1*sizeof(struct sdma_txreq));
            for(int _j1 = 0; _j1 < _len_sde__i0__tx_ring1; _j1++) {
              sde[_i0].tx_ring[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct sdma_txreq * benchRet = get_txhead(sde);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_sde0; _aux++) {
          free(*(sde[_aux].tx_ring));
        free(sde[_aux].tx_ring);
          }
          free(sde);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sde0 = 65025;
          struct sdma_engine * sde = (struct sdma_engine *) malloc(_len_sde0*sizeof(struct sdma_engine));
          for(int _i0 = 0; _i0 < _len_sde0; _i0++) {
            sde[_i0].tx_head = ((-2 * (next_i()%2)) + 1) * next_i();
        sde[_i0].sdma_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sde__i0__tx_ring0 = 1;
          sde[_i0].tx_ring = (struct sdma_txreq **) malloc(_len_sde__i0__tx_ring0*sizeof(struct sdma_txreq *));
          for(int _j0 = 0; _j0 < _len_sde__i0__tx_ring0; _j0++) {
            int _len_sde__i0__tx_ring1 = 1;
            sde[_i0].tx_ring[_j0] = (struct sdma_txreq *) malloc(_len_sde__i0__tx_ring1*sizeof(struct sdma_txreq));
            for(int _j1 = 0; _j1 < _len_sde__i0__tx_ring1; _j1++) {
              sde[_i0].tx_ring[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct sdma_txreq * benchRet = get_txhead(sde);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_sde0; _aux++) {
          free(*(sde[_aux].tx_ring));
        free(sde[_aux].tx_ring);
          }
          free(sde);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sde0 = 100;
          struct sdma_engine * sde = (struct sdma_engine *) malloc(_len_sde0*sizeof(struct sdma_engine));
          for(int _i0 = 0; _i0 < _len_sde0; _i0++) {
            sde[_i0].tx_head = ((-2 * (next_i()%2)) + 1) * next_i();
        sde[_i0].sdma_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sde__i0__tx_ring0 = 1;
          sde[_i0].tx_ring = (struct sdma_txreq **) malloc(_len_sde__i0__tx_ring0*sizeof(struct sdma_txreq *));
          for(int _j0 = 0; _j0 < _len_sde__i0__tx_ring0; _j0++) {
            int _len_sde__i0__tx_ring1 = 1;
            sde[_i0].tx_ring[_j0] = (struct sdma_txreq *) malloc(_len_sde__i0__tx_ring1*sizeof(struct sdma_txreq));
            for(int _j1 = 0; _j1 < _len_sde__i0__tx_ring1; _j1++) {
              sde[_i0].tx_ring[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct sdma_txreq * benchRet = get_txhead(sde);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_sde0; _aux++) {
          free(*(sde[_aux].tx_ring));
        free(sde[_aux].tx_ring);
          }
          free(sde);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct mv_cesa_tdma_desc {int flags; int /*<<< orphan*/  next_dma; TYPE_2__* next; } ;
struct TYPE_6__ {TYPE_2__* first; struct mv_cesa_tdma_desc* last; } ;
struct mv_cesa_req {TYPE_3__ chain; } ;
struct TYPE_4__ {struct mv_cesa_tdma_desc* last; TYPE_2__* first; } ;
struct mv_cesa_engine {TYPE_1__ chain; } ;
struct TYPE_5__ {int flags; int /*<<< orphan*/  cur_dma; } ;

/* Variables and functions */
 int CESA_TDMA_BREAK_CHAIN ; 
 int CESA_TDMA_SET_STATE ; 

void mv_cesa_tdma_chain(struct mv_cesa_engine *engine,
			struct mv_cesa_req *dreq)
{
	if (engine->chain.first == NULL && engine->chain.last == NULL) {
		engine->chain.first = dreq->chain.first;
		engine->chain.last  = dreq->chain.last;
	} else {
		struct mv_cesa_tdma_desc *last;

		last = engine->chain.last;
		last->next = dreq->chain.first;
		engine->chain.last = dreq->chain.last;

		/*
		 * Break the DMA chain if the CESA_TDMA_BREAK_CHAIN is set on
		 * the last element of the current chain, or if the request
		 * being queued needs the IV regs to be set before lauching
		 * the request.
		 */
		if (!(last->flags & CESA_TDMA_BREAK_CHAIN) &&
		    !(dreq->chain.first->flags & CESA_TDMA_SET_STATE))
			last->next_dma = dreq->chain.first->cur_dma;
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
          int _len_engine0 = 1;
          struct mv_cesa_engine * engine = (struct mv_cesa_engine *) malloc(_len_engine0*sizeof(struct mv_cesa_engine));
          for(int _i0 = 0; _i0 < _len_engine0; _i0++) {
              int _len_engine__i0__chain_last0 = 1;
          engine[_i0].chain.last = (struct mv_cesa_tdma_desc *) malloc(_len_engine__i0__chain_last0*sizeof(struct mv_cesa_tdma_desc));
          for(int _j0 = 0; _j0 < _len_engine__i0__chain_last0; _j0++) {
            engine[_i0].chain.last->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        engine[_i0].chain.last->next_dma = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_engine__i0__chain_last_next0 = 1;
          engine[_i0].chain.last->next = (struct TYPE_5__ *) malloc(_len_engine__i0__chain_last_next0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_engine__i0__chain_last_next0; _j0++) {
            engine[_i0].chain.last->next->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        engine[_i0].chain.last->next->cur_dma = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_engine__i0__chain_first0 = 1;
          engine[_i0].chain.first = (struct TYPE_5__ *) malloc(_len_engine__i0__chain_first0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_engine__i0__chain_first0; _j0++) {
            engine[_i0].chain.first->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        engine[_i0].chain.first->cur_dma = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_dreq0 = 1;
          struct mv_cesa_req * dreq = (struct mv_cesa_req *) malloc(_len_dreq0*sizeof(struct mv_cesa_req));
          for(int _i0 = 0; _i0 < _len_dreq0; _i0++) {
              int _len_dreq__i0__chain_first0 = 1;
          dreq[_i0].chain.first = (struct TYPE_5__ *) malloc(_len_dreq__i0__chain_first0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_dreq__i0__chain_first0; _j0++) {
            dreq[_i0].chain.first->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        dreq[_i0].chain.first->cur_dma = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dreq__i0__chain_last0 = 1;
          dreq[_i0].chain.last = (struct mv_cesa_tdma_desc *) malloc(_len_dreq__i0__chain_last0*sizeof(struct mv_cesa_tdma_desc));
          for(int _j0 = 0; _j0 < _len_dreq__i0__chain_last0; _j0++) {
            dreq[_i0].chain.last->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        dreq[_i0].chain.last->next_dma = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dreq__i0__chain_last_next0 = 1;
          dreq[_i0].chain.last->next = (struct TYPE_5__ *) malloc(_len_dreq__i0__chain_last_next0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_dreq__i0__chain_last_next0; _j0++) {
            dreq[_i0].chain.last->next->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        dreq[_i0].chain.last->next->cur_dma = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          mv_cesa_tdma_chain(engine,dreq);
          free(engine);
          free(dreq);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_engine0 = 65025;
          struct mv_cesa_engine * engine = (struct mv_cesa_engine *) malloc(_len_engine0*sizeof(struct mv_cesa_engine));
          for(int _i0 = 0; _i0 < _len_engine0; _i0++) {
              int _len_engine__i0__chain_last0 = 1;
          engine[_i0].chain.last = (struct mv_cesa_tdma_desc *) malloc(_len_engine__i0__chain_last0*sizeof(struct mv_cesa_tdma_desc));
          for(int _j0 = 0; _j0 < _len_engine__i0__chain_last0; _j0++) {
            engine[_i0].chain.last->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        engine[_i0].chain.last->next_dma = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_engine__i0__chain_last_next0 = 1;
          engine[_i0].chain.last->next = (struct TYPE_5__ *) malloc(_len_engine__i0__chain_last_next0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_engine__i0__chain_last_next0; _j0++) {
            engine[_i0].chain.last->next->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        engine[_i0].chain.last->next->cur_dma = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_engine__i0__chain_first0 = 1;
          engine[_i0].chain.first = (struct TYPE_5__ *) malloc(_len_engine__i0__chain_first0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_engine__i0__chain_first0; _j0++) {
            engine[_i0].chain.first->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        engine[_i0].chain.first->cur_dma = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_dreq0 = 65025;
          struct mv_cesa_req * dreq = (struct mv_cesa_req *) malloc(_len_dreq0*sizeof(struct mv_cesa_req));
          for(int _i0 = 0; _i0 < _len_dreq0; _i0++) {
              int _len_dreq__i0__chain_first0 = 1;
          dreq[_i0].chain.first = (struct TYPE_5__ *) malloc(_len_dreq__i0__chain_first0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_dreq__i0__chain_first0; _j0++) {
            dreq[_i0].chain.first->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        dreq[_i0].chain.first->cur_dma = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dreq__i0__chain_last0 = 1;
          dreq[_i0].chain.last = (struct mv_cesa_tdma_desc *) malloc(_len_dreq__i0__chain_last0*sizeof(struct mv_cesa_tdma_desc));
          for(int _j0 = 0; _j0 < _len_dreq__i0__chain_last0; _j0++) {
            dreq[_i0].chain.last->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        dreq[_i0].chain.last->next_dma = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dreq__i0__chain_last_next0 = 1;
          dreq[_i0].chain.last->next = (struct TYPE_5__ *) malloc(_len_dreq__i0__chain_last_next0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_dreq__i0__chain_last_next0; _j0++) {
            dreq[_i0].chain.last->next->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        dreq[_i0].chain.last->next->cur_dma = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          mv_cesa_tdma_chain(engine,dreq);
          free(engine);
          free(dreq);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_engine0 = 100;
          struct mv_cesa_engine * engine = (struct mv_cesa_engine *) malloc(_len_engine0*sizeof(struct mv_cesa_engine));
          for(int _i0 = 0; _i0 < _len_engine0; _i0++) {
              int _len_engine__i0__chain_last0 = 1;
          engine[_i0].chain.last = (struct mv_cesa_tdma_desc *) malloc(_len_engine__i0__chain_last0*sizeof(struct mv_cesa_tdma_desc));
          for(int _j0 = 0; _j0 < _len_engine__i0__chain_last0; _j0++) {
            engine[_i0].chain.last->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        engine[_i0].chain.last->next_dma = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_engine__i0__chain_last_next0 = 1;
          engine[_i0].chain.last->next = (struct TYPE_5__ *) malloc(_len_engine__i0__chain_last_next0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_engine__i0__chain_last_next0; _j0++) {
            engine[_i0].chain.last->next->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        engine[_i0].chain.last->next->cur_dma = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_engine__i0__chain_first0 = 1;
          engine[_i0].chain.first = (struct TYPE_5__ *) malloc(_len_engine__i0__chain_first0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_engine__i0__chain_first0; _j0++) {
            engine[_i0].chain.first->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        engine[_i0].chain.first->cur_dma = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_dreq0 = 100;
          struct mv_cesa_req * dreq = (struct mv_cesa_req *) malloc(_len_dreq0*sizeof(struct mv_cesa_req));
          for(int _i0 = 0; _i0 < _len_dreq0; _i0++) {
              int _len_dreq__i0__chain_first0 = 1;
          dreq[_i0].chain.first = (struct TYPE_5__ *) malloc(_len_dreq__i0__chain_first0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_dreq__i0__chain_first0; _j0++) {
            dreq[_i0].chain.first->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        dreq[_i0].chain.first->cur_dma = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dreq__i0__chain_last0 = 1;
          dreq[_i0].chain.last = (struct mv_cesa_tdma_desc *) malloc(_len_dreq__i0__chain_last0*sizeof(struct mv_cesa_tdma_desc));
          for(int _j0 = 0; _j0 < _len_dreq__i0__chain_last0; _j0++) {
            dreq[_i0].chain.last->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        dreq[_i0].chain.last->next_dma = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dreq__i0__chain_last_next0 = 1;
          dreq[_i0].chain.last->next = (struct TYPE_5__ *) malloc(_len_dreq__i0__chain_last_next0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_dreq__i0__chain_last_next0; _j0++) {
            dreq[_i0].chain.last->next->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        dreq[_i0].chain.last->next->cur_dma = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          mv_cesa_tdma_chain(engine,dreq);
          free(engine);
          free(dreq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

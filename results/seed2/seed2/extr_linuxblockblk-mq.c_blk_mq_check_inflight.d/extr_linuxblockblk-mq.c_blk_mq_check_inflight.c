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
struct request {TYPE_1__* part; } ;
struct mq_inflight {int /*<<< orphan*/ * inflight; TYPE_1__* part; } ;
struct blk_mq_hw_ctx {int dummy; } ;
struct TYPE_2__ {scalar_t__ partno; } ;

/* Variables and functions */

__attribute__((used)) static void blk_mq_check_inflight(struct blk_mq_hw_ctx *hctx,
				  struct request *rq, void *priv,
				  bool reserved)
{
	struct mq_inflight *mi = priv;

	/*
	 * index[0] counts the specific partition that was asked for. index[1]
	 * counts the ones that are active on the whole device, so increment
	 * that if mi->part is indeed a partition, and not a whole device.
	 */
	if (rq->part == mi->part)
		mi->inflight[0]++;
	if (mi->part->partno)
		mi->inflight[1]++;
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
          int reserved = 100;
          int _len_hctx0 = 1;
          struct blk_mq_hw_ctx * hctx = (struct blk_mq_hw_ctx *) malloc(_len_hctx0*sizeof(struct blk_mq_hw_ctx));
          for(int _i0 = 0; _i0 < _len_hctx0; _i0++) {
            hctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rq0 = 1;
          struct request * rq = (struct request *) malloc(_len_rq0*sizeof(struct request));
          for(int _i0 = 0; _i0 < _len_rq0; _i0++) {
              int _len_rq__i0__part0 = 1;
          rq[_i0].part = (struct TYPE_2__ *) malloc(_len_rq__i0__part0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_rq__i0__part0; _j0++) {
            rq[_i0].part->partno = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * priv;
          blk_mq_check_inflight(hctx,rq,priv,reserved);
          free(hctx);
          for(int _aux = 0; _aux < _len_rq0; _aux++) {
          free(rq[_aux].part);
          }
          free(rq);
        
        break;
    }
    // big-arr
    case 1:
    {
          int reserved = 255;
          int _len_hctx0 = 65025;
          struct blk_mq_hw_ctx * hctx = (struct blk_mq_hw_ctx *) malloc(_len_hctx0*sizeof(struct blk_mq_hw_ctx));
          for(int _i0 = 0; _i0 < _len_hctx0; _i0++) {
            hctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rq0 = 65025;
          struct request * rq = (struct request *) malloc(_len_rq0*sizeof(struct request));
          for(int _i0 = 0; _i0 < _len_rq0; _i0++) {
              int _len_rq__i0__part0 = 1;
          rq[_i0].part = (struct TYPE_2__ *) malloc(_len_rq__i0__part0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_rq__i0__part0; _j0++) {
            rq[_i0].part->partno = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * priv;
          blk_mq_check_inflight(hctx,rq,priv,reserved);
          free(hctx);
          for(int _aux = 0; _aux < _len_rq0; _aux++) {
          free(rq[_aux].part);
          }
          free(rq);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int reserved = 10;
          int _len_hctx0 = 100;
          struct blk_mq_hw_ctx * hctx = (struct blk_mq_hw_ctx *) malloc(_len_hctx0*sizeof(struct blk_mq_hw_ctx));
          for(int _i0 = 0; _i0 < _len_hctx0; _i0++) {
            hctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rq0 = 100;
          struct request * rq = (struct request *) malloc(_len_rq0*sizeof(struct request));
          for(int _i0 = 0; _i0 < _len_rq0; _i0++) {
              int _len_rq__i0__part0 = 1;
          rq[_i0].part = (struct TYPE_2__ *) malloc(_len_rq__i0__part0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_rq__i0__part0; _j0++) {
            rq[_i0].part->partno = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * priv;
          blk_mq_check_inflight(hctx,rq,priv,reserved);
          free(hctx);
          for(int _aux = 0; _aux < _len_rq0; _aux++) {
          free(rq[_aux].part);
          }
          free(rq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

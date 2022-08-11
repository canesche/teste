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
struct blk_mq_tags {int dummy; } ;
struct blk_mq_alloc_data {int flags; TYPE_1__* hctx; } ;
struct TYPE_2__ {struct blk_mq_tags* tags; struct blk_mq_tags* sched_tags; } ;

/* Variables and functions */
 int BLK_MQ_REQ_INTERNAL ; 

__attribute__((used)) static inline struct blk_mq_tags *blk_mq_tags_from_data(struct blk_mq_alloc_data *data)
{
	if (data->flags & BLK_MQ_REQ_INTERNAL)
		return data->hctx->sched_tags;

	return data->hctx->tags;
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
          int _len_data0 = 1;
          struct blk_mq_alloc_data * data = (struct blk_mq_alloc_data *) malloc(_len_data0*sizeof(struct blk_mq_alloc_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_data__i0__hctx0 = 1;
          data[_i0].hctx = (struct TYPE_2__ *) malloc(_len_data__i0__hctx0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_data__i0__hctx0; _j0++) {
              int _len_data__i0__hctx_tags0 = 1;
          data[_i0].hctx->tags = (struct blk_mq_tags *) malloc(_len_data__i0__hctx_tags0*sizeof(struct blk_mq_tags));
          for(int _j0 = 0; _j0 < _len_data__i0__hctx_tags0; _j0++) {
            data[_i0].hctx->tags->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__hctx_sched_tags0 = 1;
          data[_i0].hctx->sched_tags = (struct blk_mq_tags *) malloc(_len_data__i0__hctx_sched_tags0*sizeof(struct blk_mq_tags));
          for(int _j0 = 0; _j0 < _len_data__i0__hctx_sched_tags0; _j0++) {
            data[_i0].hctx->sched_tags->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct blk_mq_tags * benchRet = blk_mq_tags_from_data(data);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].hctx);
          }
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_data0 = 65025;
          struct blk_mq_alloc_data * data = (struct blk_mq_alloc_data *) malloc(_len_data0*sizeof(struct blk_mq_alloc_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_data__i0__hctx0 = 1;
          data[_i0].hctx = (struct TYPE_2__ *) malloc(_len_data__i0__hctx0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_data__i0__hctx0; _j0++) {
              int _len_data__i0__hctx_tags0 = 1;
          data[_i0].hctx->tags = (struct blk_mq_tags *) malloc(_len_data__i0__hctx_tags0*sizeof(struct blk_mq_tags));
          for(int _j0 = 0; _j0 < _len_data__i0__hctx_tags0; _j0++) {
            data[_i0].hctx->tags->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__hctx_sched_tags0 = 1;
          data[_i0].hctx->sched_tags = (struct blk_mq_tags *) malloc(_len_data__i0__hctx_sched_tags0*sizeof(struct blk_mq_tags));
          for(int _j0 = 0; _j0 < _len_data__i0__hctx_sched_tags0; _j0++) {
            data[_i0].hctx->sched_tags->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct blk_mq_tags * benchRet = blk_mq_tags_from_data(data);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].hctx);
          }
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_data0 = 100;
          struct blk_mq_alloc_data * data = (struct blk_mq_alloc_data *) malloc(_len_data0*sizeof(struct blk_mq_alloc_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_data__i0__hctx0 = 1;
          data[_i0].hctx = (struct TYPE_2__ *) malloc(_len_data__i0__hctx0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_data__i0__hctx0; _j0++) {
              int _len_data__i0__hctx_tags0 = 1;
          data[_i0].hctx->tags = (struct blk_mq_tags *) malloc(_len_data__i0__hctx_tags0*sizeof(struct blk_mq_tags));
          for(int _j0 = 0; _j0 < _len_data__i0__hctx_tags0; _j0++) {
            data[_i0].hctx->tags->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data__i0__hctx_sched_tags0 = 1;
          data[_i0].hctx->sched_tags = (struct blk_mq_tags *) malloc(_len_data__i0__hctx_sched_tags0*sizeof(struct blk_mq_tags));
          for(int _j0 = 0; _j0 < _len_data__i0__hctx_sched_tags0; _j0++) {
            data[_i0].hctx->sched_tags->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct blk_mq_tags * benchRet = blk_mq_tags_from_data(data);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].hctx);
          }
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

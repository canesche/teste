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
struct rt2x00_dev {struct data_queue* atim; struct data_queue* tx; TYPE_1__* ops; } ;
struct data_queue {int dummy; } ;
typedef  enum data_queue_qid { ____Placeholder_data_queue_qid } data_queue_qid ;
struct TYPE_2__ {int const tx_queues; } ;

/* Variables and functions */
 int const QID_ATIM ; 

__attribute__((used)) static inline struct data_queue *
rt2x00queue_get_tx_queue(struct rt2x00_dev *rt2x00dev,
			 const enum data_queue_qid queue)
{
	if (queue < rt2x00dev->ops->tx_queues && rt2x00dev->tx)
		return &rt2x00dev->tx[queue];

	if (queue == QID_ATIM)
		return rt2x00dev->atim;

	return NULL;
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
          const enum data_queue_qid queue = 0;
          int _len_rt2x00dev0 = 1;
          struct rt2x00_dev * rt2x00dev = (struct rt2x00_dev *) malloc(_len_rt2x00dev0*sizeof(struct rt2x00_dev));
          for(int _i0 = 0; _i0 < _len_rt2x00dev0; _i0++) {
              int _len_rt2x00dev__i0__atim0 = 1;
          rt2x00dev[_i0].atim = (struct data_queue *) malloc(_len_rt2x00dev__i0__atim0*sizeof(struct data_queue));
          for(int _j0 = 0; _j0 < _len_rt2x00dev__i0__atim0; _j0++) {
            rt2x00dev[_i0].atim->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rt2x00dev__i0__tx0 = 1;
          rt2x00dev[_i0].tx = (struct data_queue *) malloc(_len_rt2x00dev__i0__tx0*sizeof(struct data_queue));
          for(int _j0 = 0; _j0 < _len_rt2x00dev__i0__tx0; _j0++) {
            rt2x00dev[_i0].tx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rt2x00dev__i0__ops0 = 1;
          rt2x00dev[_i0].ops = (struct TYPE_2__ *) malloc(_len_rt2x00dev__i0__ops0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_rt2x00dev__i0__ops0; _j0++) {
            rt2x00dev[_i0].ops->tx_queues = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct data_queue * benchRet = rt2x00queue_get_tx_queue(rt2x00dev,queue);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_rt2x00dev0; _aux++) {
          free(rt2x00dev[_aux].atim);
          }
          for(int _aux = 0; _aux < _len_rt2x00dev0; _aux++) {
          free(rt2x00dev[_aux].tx);
          }
          for(int _aux = 0; _aux < _len_rt2x00dev0; _aux++) {
          free(rt2x00dev[_aux].ops);
          }
          free(rt2x00dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          const enum data_queue_qid queue = 0;
          int _len_rt2x00dev0 = 65025;
          struct rt2x00_dev * rt2x00dev = (struct rt2x00_dev *) malloc(_len_rt2x00dev0*sizeof(struct rt2x00_dev));
          for(int _i0 = 0; _i0 < _len_rt2x00dev0; _i0++) {
              int _len_rt2x00dev__i0__atim0 = 1;
          rt2x00dev[_i0].atim = (struct data_queue *) malloc(_len_rt2x00dev__i0__atim0*sizeof(struct data_queue));
          for(int _j0 = 0; _j0 < _len_rt2x00dev__i0__atim0; _j0++) {
            rt2x00dev[_i0].atim->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rt2x00dev__i0__tx0 = 1;
          rt2x00dev[_i0].tx = (struct data_queue *) malloc(_len_rt2x00dev__i0__tx0*sizeof(struct data_queue));
          for(int _j0 = 0; _j0 < _len_rt2x00dev__i0__tx0; _j0++) {
            rt2x00dev[_i0].tx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rt2x00dev__i0__ops0 = 1;
          rt2x00dev[_i0].ops = (struct TYPE_2__ *) malloc(_len_rt2x00dev__i0__ops0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_rt2x00dev__i0__ops0; _j0++) {
            rt2x00dev[_i0].ops->tx_queues = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct data_queue * benchRet = rt2x00queue_get_tx_queue(rt2x00dev,queue);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_rt2x00dev0; _aux++) {
          free(rt2x00dev[_aux].atim);
          }
          for(int _aux = 0; _aux < _len_rt2x00dev0; _aux++) {
          free(rt2x00dev[_aux].tx);
          }
          for(int _aux = 0; _aux < _len_rt2x00dev0; _aux++) {
          free(rt2x00dev[_aux].ops);
          }
          free(rt2x00dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const enum data_queue_qid queue = 0;
          int _len_rt2x00dev0 = 100;
          struct rt2x00_dev * rt2x00dev = (struct rt2x00_dev *) malloc(_len_rt2x00dev0*sizeof(struct rt2x00_dev));
          for(int _i0 = 0; _i0 < _len_rt2x00dev0; _i0++) {
              int _len_rt2x00dev__i0__atim0 = 1;
          rt2x00dev[_i0].atim = (struct data_queue *) malloc(_len_rt2x00dev__i0__atim0*sizeof(struct data_queue));
          for(int _j0 = 0; _j0 < _len_rt2x00dev__i0__atim0; _j0++) {
            rt2x00dev[_i0].atim->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rt2x00dev__i0__tx0 = 1;
          rt2x00dev[_i0].tx = (struct data_queue *) malloc(_len_rt2x00dev__i0__tx0*sizeof(struct data_queue));
          for(int _j0 = 0; _j0 < _len_rt2x00dev__i0__tx0; _j0++) {
            rt2x00dev[_i0].tx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rt2x00dev__i0__ops0 = 1;
          rt2x00dev[_i0].ops = (struct TYPE_2__ *) malloc(_len_rt2x00dev__i0__ops0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_rt2x00dev__i0__ops0; _j0++) {
            rt2x00dev[_i0].ops->tx_queues = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct data_queue * benchRet = rt2x00queue_get_tx_queue(rt2x00dev,queue);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_rt2x00dev0; _aux++) {
          free(rt2x00dev[_aux].atim);
          }
          for(int _aux = 0; _aux < _len_rt2x00dev0; _aux++) {
          free(rt2x00dev[_aux].tx);
          }
          for(int _aux = 0; _aux < _len_rt2x00dev0; _aux++) {
          free(rt2x00dev[_aux].ops);
          }
          free(rt2x00dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

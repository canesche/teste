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
struct request_queue {int /*<<< orphan*/ * softirq_done_fn; } ;
typedef  int /*<<< orphan*/  softirq_done_fn ;

/* Variables and functions */

void blk_queue_softirq_done(struct request_queue *q, softirq_done_fn *fn)
{
	q->softirq_done_fn = fn;
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
          int _len_q0 = 1;
          struct request_queue * q = (struct request_queue *) malloc(_len_q0*sizeof(struct request_queue));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
              int _len_q__i0__softirq_done_fn0 = 1;
          q[_i0].softirq_done_fn = (int *) malloc(_len_q__i0__softirq_done_fn0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_q__i0__softirq_done_fn0; _j0++) {
            q[_i0].softirq_done_fn[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_fn0 = 1;
          int * fn = (int *) malloc(_len_fn0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fn0; _i0++) {
            fn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          blk_queue_softirq_done(q,fn);
          for(int _aux = 0; _aux < _len_q0; _aux++) {
          free(q[_aux].softirq_done_fn);
          }
          free(q);
          free(fn);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_q0 = 65025;
          struct request_queue * q = (struct request_queue *) malloc(_len_q0*sizeof(struct request_queue));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
              int _len_q__i0__softirq_done_fn0 = 1;
          q[_i0].softirq_done_fn = (int *) malloc(_len_q__i0__softirq_done_fn0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_q__i0__softirq_done_fn0; _j0++) {
            q[_i0].softirq_done_fn[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_fn0 = 65025;
          int * fn = (int *) malloc(_len_fn0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fn0; _i0++) {
            fn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          blk_queue_softirq_done(q,fn);
          for(int _aux = 0; _aux < _len_q0; _aux++) {
          free(q[_aux].softirq_done_fn);
          }
          free(q);
          free(fn);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_q0 = 100;
          struct request_queue * q = (struct request_queue *) malloc(_len_q0*sizeof(struct request_queue));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
              int _len_q__i0__softirq_done_fn0 = 1;
          q[_i0].softirq_done_fn = (int *) malloc(_len_q__i0__softirq_done_fn0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_q__i0__softirq_done_fn0; _j0++) {
            q[_i0].softirq_done_fn[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_fn0 = 100;
          int * fn = (int *) malloc(_len_fn0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fn0; _i0++) {
            fn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          blk_queue_softirq_done(q,fn);
          for(int _aux = 0; _aux < _len_q0; _aux++) {
          free(q[_aux].softirq_done_fn);
          }
          free(q);
          free(fn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

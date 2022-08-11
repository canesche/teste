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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int allocated; int /*<<< orphan*/  first_bucket; int /*<<< orphan*/ * queue; } ;
typedef  int /*<<< orphan*/  FFFrameQueueGlobal ;
typedef  TYPE_1__ FFFrameQueue ;

/* Variables and functions */

void ff_framequeue_init(FFFrameQueue *fq, FFFrameQueueGlobal *fqg)
{
    fq->queue = &fq->first_bucket;
    fq->allocated = 1;
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
          int _len_fq0 = 1;
          struct TYPE_3__ * fq = (struct TYPE_3__ *) malloc(_len_fq0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_fq0; _i0++) {
            fq[_i0].allocated = ((-2 * (next_i()%2)) + 1) * next_i();
        fq[_i0].first_bucket = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fq__i0__queue0 = 1;
          fq[_i0].queue = (int *) malloc(_len_fq__i0__queue0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fq__i0__queue0; _j0++) {
            fq[_i0].queue[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_fqg0 = 1;
          int * fqg = (int *) malloc(_len_fqg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fqg0; _i0++) {
            fqg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_framequeue_init(fq,fqg);
          for(int _aux = 0; _aux < _len_fq0; _aux++) {
          free(fq[_aux].queue);
          }
          free(fq);
          free(fqg);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_fq0 = 65025;
          struct TYPE_3__ * fq = (struct TYPE_3__ *) malloc(_len_fq0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_fq0; _i0++) {
            fq[_i0].allocated = ((-2 * (next_i()%2)) + 1) * next_i();
        fq[_i0].first_bucket = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fq__i0__queue0 = 1;
          fq[_i0].queue = (int *) malloc(_len_fq__i0__queue0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fq__i0__queue0; _j0++) {
            fq[_i0].queue[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_fqg0 = 65025;
          int * fqg = (int *) malloc(_len_fqg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fqg0; _i0++) {
            fqg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_framequeue_init(fq,fqg);
          for(int _aux = 0; _aux < _len_fq0; _aux++) {
          free(fq[_aux].queue);
          }
          free(fq);
          free(fqg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_fq0 = 100;
          struct TYPE_3__ * fq = (struct TYPE_3__ *) malloc(_len_fq0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_fq0; _i0++) {
            fq[_i0].allocated = ((-2 * (next_i()%2)) + 1) * next_i();
        fq[_i0].first_bucket = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fq__i0__queue0 = 1;
          fq[_i0].queue = (int *) malloc(_len_fq__i0__queue0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fq__i0__queue0; _j0++) {
            fq[_i0].queue[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_fqg0 = 100;
          int * fqg = (int *) malloc(_len_fqg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fqg0; _i0++) {
            fqg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_framequeue_init(fq,fqg);
          for(int _aux = 0; _aux < _len_fq0; _aux++) {
          free(fq[_aux].queue);
          }
          free(fq);
          free(fqg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

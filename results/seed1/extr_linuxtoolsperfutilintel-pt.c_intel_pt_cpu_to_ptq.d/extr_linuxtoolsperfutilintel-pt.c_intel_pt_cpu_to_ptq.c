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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct intel_pt_queue {int dummy; } ;
struct TYPE_4__ {unsigned int nr_queues; TYPE_1__* queue_array; } ;
struct intel_pt {TYPE_2__ queues; } ;
struct TYPE_3__ {int cpu; struct intel_pt_queue* priv; } ;

/* Variables and functions */

__attribute__((used)) static struct intel_pt_queue *intel_pt_cpu_to_ptq(struct intel_pt *pt, int cpu)
{
	unsigned i, j;

	if (cpu < 0 || !pt->queues.nr_queues)
		return NULL;

	if ((unsigned)cpu >= pt->queues.nr_queues)
		i = pt->queues.nr_queues - 1;
	else
		i = cpu;

	if (pt->queues.queue_array[i].cpu == cpu)
		return pt->queues.queue_array[i].priv;

	for (j = 0; i > 0; j++) {
		if (pt->queues.queue_array[--i].cpu == cpu)
			return pt->queues.queue_array[i].priv;
	}

	for (; j < pt->queues.nr_queues; j++) {
		if (pt->queues.queue_array[j].cpu == cpu)
			return pt->queues.queue_array[j].priv;
	}

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
          int cpu = 100;
          int _len_pt0 = 1;
          struct intel_pt * pt = (struct intel_pt *) malloc(_len_pt0*sizeof(struct intel_pt));
          for(int _i0 = 0; _i0 < _len_pt0; _i0++) {
            pt[_i0].queues.nr_queues = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pt__i0__queues_queue_array0 = 1;
          pt[_i0].queues.queue_array = (struct TYPE_3__ *) malloc(_len_pt__i0__queues_queue_array0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_pt__i0__queues_queue_array0; _j0++) {
            pt[_i0].queues.queue_array->cpu = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pt__i0__queues_queue_array_priv0 = 1;
          pt[_i0].queues.queue_array->priv = (struct intel_pt_queue *) malloc(_len_pt__i0__queues_queue_array_priv0*sizeof(struct intel_pt_queue));
          for(int _j0 = 0; _j0 < _len_pt__i0__queues_queue_array_priv0; _j0++) {
            pt[_i0].queues.queue_array->priv->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct intel_pt_queue * benchRet = intel_pt_cpu_to_ptq(pt,cpu);
          printf("%d\n", (*benchRet).dummy);
          free(pt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int cpu = 255;
          int _len_pt0 = 65025;
          struct intel_pt * pt = (struct intel_pt *) malloc(_len_pt0*sizeof(struct intel_pt));
          for(int _i0 = 0; _i0 < _len_pt0; _i0++) {
            pt[_i0].queues.nr_queues = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pt__i0__queues_queue_array0 = 1;
          pt[_i0].queues.queue_array = (struct TYPE_3__ *) malloc(_len_pt__i0__queues_queue_array0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_pt__i0__queues_queue_array0; _j0++) {
            pt[_i0].queues.queue_array->cpu = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pt__i0__queues_queue_array_priv0 = 1;
          pt[_i0].queues.queue_array->priv = (struct intel_pt_queue *) malloc(_len_pt__i0__queues_queue_array_priv0*sizeof(struct intel_pt_queue));
          for(int _j0 = 0; _j0 < _len_pt__i0__queues_queue_array_priv0; _j0++) {
            pt[_i0].queues.queue_array->priv->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct intel_pt_queue * benchRet = intel_pt_cpu_to_ptq(pt,cpu);
          printf("%d\n", (*benchRet).dummy);
          free(pt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cpu = 10;
          int _len_pt0 = 100;
          struct intel_pt * pt = (struct intel_pt *) malloc(_len_pt0*sizeof(struct intel_pt));
          for(int _i0 = 0; _i0 < _len_pt0; _i0++) {
            pt[_i0].queues.nr_queues = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pt__i0__queues_queue_array0 = 1;
          pt[_i0].queues.queue_array = (struct TYPE_3__ *) malloc(_len_pt__i0__queues_queue_array0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_pt__i0__queues_queue_array0; _j0++) {
            pt[_i0].queues.queue_array->cpu = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pt__i0__queues_queue_array_priv0 = 1;
          pt[_i0].queues.queue_array->priv = (struct intel_pt_queue *) malloc(_len_pt__i0__queues_queue_array_priv0*sizeof(struct intel_pt_queue));
          for(int _j0 = 0; _j0 < _len_pt__i0__queues_queue_array_priv0; _j0++) {
            pt[_i0].queues.queue_array->priv->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct intel_pt_queue * benchRet = intel_pt_cpu_to_ptq(pt,cpu);
          printf("%d\n", (*benchRet).dummy);
          free(pt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

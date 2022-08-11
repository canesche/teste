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
struct intel_gvt_irq {TYPE_1__* events; } ;
struct TYPE_2__ {int /*<<< orphan*/  v_handler; int /*<<< orphan*/ * info; } ;

/* Variables and functions */
 int INTEL_GVT_EVENT_MAX ; 
 int /*<<< orphan*/  handle_default_event_virt ; 

__attribute__((used)) static void init_events(
	struct intel_gvt_irq *irq)
{
	int i;

	for (i = 0; i < INTEL_GVT_EVENT_MAX; i++) {
		irq->events[i].info = NULL;
		irq->events[i].v_handler = handle_default_event_virt;
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
          int _len_irq0 = 1;
          struct intel_gvt_irq * irq = (struct intel_gvt_irq *) malloc(_len_irq0*sizeof(struct intel_gvt_irq));
          for(int _i0 = 0; _i0 < _len_irq0; _i0++) {
              int _len_irq__i0__events0 = 1;
          irq[_i0].events = (struct TYPE_2__ *) malloc(_len_irq__i0__events0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_irq__i0__events0; _j0++) {
            irq[_i0].events->v_handler = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_irq__i0__events_info0 = 1;
          irq[_i0].events->info = (int *) malloc(_len_irq__i0__events_info0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_irq__i0__events_info0; _j0++) {
            irq[_i0].events->info[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          init_events(irq);
          for(int _aux = 0; _aux < _len_irq0; _aux++) {
          free(irq[_aux].events);
          }
          free(irq);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_irq0 = 65025;
          struct intel_gvt_irq * irq = (struct intel_gvt_irq *) malloc(_len_irq0*sizeof(struct intel_gvt_irq));
          for(int _i0 = 0; _i0 < _len_irq0; _i0++) {
              int _len_irq__i0__events0 = 1;
          irq[_i0].events = (struct TYPE_2__ *) malloc(_len_irq__i0__events0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_irq__i0__events0; _j0++) {
            irq[_i0].events->v_handler = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_irq__i0__events_info0 = 1;
          irq[_i0].events->info = (int *) malloc(_len_irq__i0__events_info0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_irq__i0__events_info0; _j0++) {
            irq[_i0].events->info[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          init_events(irq);
          for(int _aux = 0; _aux < _len_irq0; _aux++) {
          free(irq[_aux].events);
          }
          free(irq);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_irq0 = 100;
          struct intel_gvt_irq * irq = (struct intel_gvt_irq *) malloc(_len_irq0*sizeof(struct intel_gvt_irq));
          for(int _i0 = 0; _i0 < _len_irq0; _i0++) {
              int _len_irq__i0__events0 = 1;
          irq[_i0].events = (struct TYPE_2__ *) malloc(_len_irq__i0__events0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_irq__i0__events0; _j0++) {
            irq[_i0].events->v_handler = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_irq__i0__events_info0 = 1;
          irq[_i0].events->info = (int *) malloc(_len_irq__i0__events_info0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_irq__i0__events_info0; _j0++) {
            irq[_i0].events->info[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          init_events(irq);
          for(int _aux = 0; _aux < _len_irq0; _aux++) {
          free(irq[_aux].events);
          }
          free(irq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

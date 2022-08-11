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
struct pl330_thread {int id; struct pl330_dmac* dmac; } ;
struct TYPE_2__ {int num_events; } ;
struct pl330_dmac {int* events; TYPE_1__ pcfg; } ;

/* Variables and functions */

__attribute__((used)) static inline void _free_event(struct pl330_thread *thrd, int ev)
{
	struct pl330_dmac *pl330 = thrd->dmac;

	/* If the event is valid and was held by the thread */
	if (ev >= 0 && ev < pl330->pcfg.num_events
			&& pl330->events[ev] == thrd->id)
		pl330->events[ev] = -1;
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
          int ev = 100;
          int _len_thrd0 = 1;
          struct pl330_thread * thrd = (struct pl330_thread *) malloc(_len_thrd0*sizeof(struct pl330_thread));
          for(int _i0 = 0; _i0 < _len_thrd0; _i0++) {
            thrd[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_thrd__i0__dmac0 = 1;
          thrd[_i0].dmac = (struct pl330_dmac *) malloc(_len_thrd__i0__dmac0*sizeof(struct pl330_dmac));
          for(int _j0 = 0; _j0 < _len_thrd__i0__dmac0; _j0++) {
              int _len_thrd__i0__dmac_events0 = 1;
          thrd[_i0].dmac->events = (int *) malloc(_len_thrd__i0__dmac_events0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_thrd__i0__dmac_events0; _j0++) {
            thrd[_i0].dmac->events[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        thrd[_i0].dmac->pcfg.num_events = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          _free_event(thrd,ev);
          for(int _aux = 0; _aux < _len_thrd0; _aux++) {
          free(thrd[_aux].dmac);
          }
          free(thrd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int ev = 255;
          int _len_thrd0 = 65025;
          struct pl330_thread * thrd = (struct pl330_thread *) malloc(_len_thrd0*sizeof(struct pl330_thread));
          for(int _i0 = 0; _i0 < _len_thrd0; _i0++) {
            thrd[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_thrd__i0__dmac0 = 1;
          thrd[_i0].dmac = (struct pl330_dmac *) malloc(_len_thrd__i0__dmac0*sizeof(struct pl330_dmac));
          for(int _j0 = 0; _j0 < _len_thrd__i0__dmac0; _j0++) {
              int _len_thrd__i0__dmac_events0 = 1;
          thrd[_i0].dmac->events = (int *) malloc(_len_thrd__i0__dmac_events0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_thrd__i0__dmac_events0; _j0++) {
            thrd[_i0].dmac->events[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        thrd[_i0].dmac->pcfg.num_events = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          _free_event(thrd,ev);
          for(int _aux = 0; _aux < _len_thrd0; _aux++) {
          free(thrd[_aux].dmac);
          }
          free(thrd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ev = 10;
          int _len_thrd0 = 100;
          struct pl330_thread * thrd = (struct pl330_thread *) malloc(_len_thrd0*sizeof(struct pl330_thread));
          for(int _i0 = 0; _i0 < _len_thrd0; _i0++) {
            thrd[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_thrd__i0__dmac0 = 1;
          thrd[_i0].dmac = (struct pl330_dmac *) malloc(_len_thrd__i0__dmac0*sizeof(struct pl330_dmac));
          for(int _j0 = 0; _j0 < _len_thrd__i0__dmac0; _j0++) {
              int _len_thrd__i0__dmac_events0 = 1;
          thrd[_i0].dmac->events = (int *) malloc(_len_thrd__i0__dmac_events0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_thrd__i0__dmac_events0; _j0++) {
            thrd[_i0].dmac->events[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        thrd[_i0].dmac->pcfg.num_events = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          _free_event(thrd,ev);
          for(int _aux = 0; _aux < _len_thrd0; _aux++) {
          free(thrd[_aux].dmac);
          }
          free(thrd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

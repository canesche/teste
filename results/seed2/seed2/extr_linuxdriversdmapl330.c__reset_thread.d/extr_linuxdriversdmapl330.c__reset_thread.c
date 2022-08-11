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
struct pl330_thread {int id; int req_running; TYPE_1__* req; struct pl330_dmac* dmac; } ;
struct pl330_dmac {int mcbufsz; scalar_t__ mcode_bus; scalar_t__ mcode_cpu; } ;
struct TYPE_2__ {int /*<<< orphan*/ * desc; scalar_t__ mc_bus; scalar_t__ mc_cpu; } ;

/* Variables and functions */

__attribute__((used)) static inline void _reset_thread(struct pl330_thread *thrd)
{
	struct pl330_dmac *pl330 = thrd->dmac;

	thrd->req[0].mc_cpu = pl330->mcode_cpu
				+ (thrd->id * pl330->mcbufsz);
	thrd->req[0].mc_bus = pl330->mcode_bus
				+ (thrd->id * pl330->mcbufsz);
	thrd->req[0].desc = NULL;

	thrd->req[1].mc_cpu = thrd->req[0].mc_cpu
				+ pl330->mcbufsz / 2;
	thrd->req[1].mc_bus = thrd->req[0].mc_bus
				+ pl330->mcbufsz / 2;
	thrd->req[1].desc = NULL;

	thrd->req_running = -1;
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
          int _len_thrd0 = 1;
          struct pl330_thread * thrd = (struct pl330_thread *) malloc(_len_thrd0*sizeof(struct pl330_thread));
          for(int _i0 = 0; _i0 < _len_thrd0; _i0++) {
            thrd[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
        thrd[_i0].req_running = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_thrd__i0__req0 = 1;
          thrd[_i0].req = (struct TYPE_2__ *) malloc(_len_thrd__i0__req0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_thrd__i0__req0; _j0++) {
              int _len_thrd__i0__req_desc0 = 1;
          thrd[_i0].req->desc = (int *) malloc(_len_thrd__i0__req_desc0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_thrd__i0__req_desc0; _j0++) {
            thrd[_i0].req->desc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        thrd[_i0].req->mc_bus = ((-2 * (next_i()%2)) + 1) * next_i();
        thrd[_i0].req->mc_cpu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_thrd__i0__dmac0 = 1;
          thrd[_i0].dmac = (struct pl330_dmac *) malloc(_len_thrd__i0__dmac0*sizeof(struct pl330_dmac));
          for(int _j0 = 0; _j0 < _len_thrd__i0__dmac0; _j0++) {
            thrd[_i0].dmac->mcbufsz = ((-2 * (next_i()%2)) + 1) * next_i();
        thrd[_i0].dmac->mcode_bus = ((-2 * (next_i()%2)) + 1) * next_i();
        thrd[_i0].dmac->mcode_cpu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          _reset_thread(thrd);
          for(int _aux = 0; _aux < _len_thrd0; _aux++) {
          free(thrd[_aux].req);
          }
          for(int _aux = 0; _aux < _len_thrd0; _aux++) {
          free(thrd[_aux].dmac);
          }
          free(thrd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_thrd0 = 65025;
          struct pl330_thread * thrd = (struct pl330_thread *) malloc(_len_thrd0*sizeof(struct pl330_thread));
          for(int _i0 = 0; _i0 < _len_thrd0; _i0++) {
            thrd[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
        thrd[_i0].req_running = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_thrd__i0__req0 = 1;
          thrd[_i0].req = (struct TYPE_2__ *) malloc(_len_thrd__i0__req0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_thrd__i0__req0; _j0++) {
              int _len_thrd__i0__req_desc0 = 1;
          thrd[_i0].req->desc = (int *) malloc(_len_thrd__i0__req_desc0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_thrd__i0__req_desc0; _j0++) {
            thrd[_i0].req->desc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        thrd[_i0].req->mc_bus = ((-2 * (next_i()%2)) + 1) * next_i();
        thrd[_i0].req->mc_cpu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_thrd__i0__dmac0 = 1;
          thrd[_i0].dmac = (struct pl330_dmac *) malloc(_len_thrd__i0__dmac0*sizeof(struct pl330_dmac));
          for(int _j0 = 0; _j0 < _len_thrd__i0__dmac0; _j0++) {
            thrd[_i0].dmac->mcbufsz = ((-2 * (next_i()%2)) + 1) * next_i();
        thrd[_i0].dmac->mcode_bus = ((-2 * (next_i()%2)) + 1) * next_i();
        thrd[_i0].dmac->mcode_cpu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          _reset_thread(thrd);
          for(int _aux = 0; _aux < _len_thrd0; _aux++) {
          free(thrd[_aux].req);
          }
          for(int _aux = 0; _aux < _len_thrd0; _aux++) {
          free(thrd[_aux].dmac);
          }
          free(thrd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_thrd0 = 100;
          struct pl330_thread * thrd = (struct pl330_thread *) malloc(_len_thrd0*sizeof(struct pl330_thread));
          for(int _i0 = 0; _i0 < _len_thrd0; _i0++) {
            thrd[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
        thrd[_i0].req_running = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_thrd__i0__req0 = 1;
          thrd[_i0].req = (struct TYPE_2__ *) malloc(_len_thrd__i0__req0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_thrd__i0__req0; _j0++) {
              int _len_thrd__i0__req_desc0 = 1;
          thrd[_i0].req->desc = (int *) malloc(_len_thrd__i0__req_desc0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_thrd__i0__req_desc0; _j0++) {
            thrd[_i0].req->desc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        thrd[_i0].req->mc_bus = ((-2 * (next_i()%2)) + 1) * next_i();
        thrd[_i0].req->mc_cpu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_thrd__i0__dmac0 = 1;
          thrd[_i0].dmac = (struct pl330_dmac *) malloc(_len_thrd__i0__dmac0*sizeof(struct pl330_dmac));
          for(int _j0 = 0; _j0 < _len_thrd__i0__dmac0; _j0++) {
            thrd[_i0].dmac->mcbufsz = ((-2 * (next_i()%2)) + 1) * next_i();
        thrd[_i0].dmac->mcode_bus = ((-2 * (next_i()%2)) + 1) * next_i();
        thrd[_i0].dmac->mcode_cpu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          _reset_thread(thrd);
          for(int _aux = 0; _aux < _len_thrd0; _aux++) {
          free(thrd[_aux].req);
          }
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

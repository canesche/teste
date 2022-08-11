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
struct rsxx_dma {int dummy; } ;
struct dma_tracker_list {TYPE_1__* list; } ;
struct TYPE_2__ {struct rsxx_dma* dma; } ;

/* Variables and functions */

__attribute__((used)) static void set_tracker_dma(struct dma_tracker_list *trackers,
			    int tag,
			    struct rsxx_dma *dma)
{
	trackers->list[tag].dma = dma;
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
          int tag = 100;
          int _len_trackers0 = 1;
          struct dma_tracker_list * trackers = (struct dma_tracker_list *) malloc(_len_trackers0*sizeof(struct dma_tracker_list));
          for(int _i0 = 0; _i0 < _len_trackers0; _i0++) {
              int _len_trackers__i0__list0 = 1;
          trackers[_i0].list = (struct TYPE_2__ *) malloc(_len_trackers__i0__list0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_trackers__i0__list0; _j0++) {
              int _len_trackers__i0__list_dma0 = 1;
          trackers[_i0].list->dma = (struct rsxx_dma *) malloc(_len_trackers__i0__list_dma0*sizeof(struct rsxx_dma));
          for(int _j0 = 0; _j0 < _len_trackers__i0__list_dma0; _j0++) {
            trackers[_i0].list->dma->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_dma0 = 1;
          struct rsxx_dma * dma = (struct rsxx_dma *) malloc(_len_dma0*sizeof(struct rsxx_dma));
          for(int _i0 = 0; _i0 < _len_dma0; _i0++) {
            dma[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_tracker_dma(trackers,tag,dma);
          for(int _aux = 0; _aux < _len_trackers0; _aux++) {
          free(trackers[_aux].list);
          }
          free(trackers);
          free(dma);
        
        break;
    }
    // big-arr
    case 1:
    {
          int tag = 255;
          int _len_trackers0 = 65025;
          struct dma_tracker_list * trackers = (struct dma_tracker_list *) malloc(_len_trackers0*sizeof(struct dma_tracker_list));
          for(int _i0 = 0; _i0 < _len_trackers0; _i0++) {
              int _len_trackers__i0__list0 = 1;
          trackers[_i0].list = (struct TYPE_2__ *) malloc(_len_trackers__i0__list0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_trackers__i0__list0; _j0++) {
              int _len_trackers__i0__list_dma0 = 1;
          trackers[_i0].list->dma = (struct rsxx_dma *) malloc(_len_trackers__i0__list_dma0*sizeof(struct rsxx_dma));
          for(int _j0 = 0; _j0 < _len_trackers__i0__list_dma0; _j0++) {
            trackers[_i0].list->dma->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_dma0 = 65025;
          struct rsxx_dma * dma = (struct rsxx_dma *) malloc(_len_dma0*sizeof(struct rsxx_dma));
          for(int _i0 = 0; _i0 < _len_dma0; _i0++) {
            dma[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_tracker_dma(trackers,tag,dma);
          for(int _aux = 0; _aux < _len_trackers0; _aux++) {
          free(trackers[_aux].list);
          }
          free(trackers);
          free(dma);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int tag = 10;
          int _len_trackers0 = 100;
          struct dma_tracker_list * trackers = (struct dma_tracker_list *) malloc(_len_trackers0*sizeof(struct dma_tracker_list));
          for(int _i0 = 0; _i0 < _len_trackers0; _i0++) {
              int _len_trackers__i0__list0 = 1;
          trackers[_i0].list = (struct TYPE_2__ *) malloc(_len_trackers__i0__list0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_trackers__i0__list0; _j0++) {
              int _len_trackers__i0__list_dma0 = 1;
          trackers[_i0].list->dma = (struct rsxx_dma *) malloc(_len_trackers__i0__list_dma0*sizeof(struct rsxx_dma));
          for(int _j0 = 0; _j0 < _len_trackers__i0__list_dma0; _j0++) {
            trackers[_i0].list->dma->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_dma0 = 100;
          struct rsxx_dma * dma = (struct rsxx_dma *) malloc(_len_dma0*sizeof(struct rsxx_dma));
          for(int _i0 = 0; _i0 < _len_dma0; _i0++) {
            dma[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_tracker_dma(trackers,tag,dma);
          for(int _aux = 0; _aux < _len_trackers0; _aux++) {
          free(trackers[_aux].list);
          }
          free(trackers);
          free(dma);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

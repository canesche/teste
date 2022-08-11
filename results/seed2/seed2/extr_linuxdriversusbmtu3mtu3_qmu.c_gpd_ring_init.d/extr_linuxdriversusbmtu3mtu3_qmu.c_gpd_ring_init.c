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
struct qmu_gpd {int dummy; } ;
struct mtu3_gpd_ring {struct qmu_gpd* end; struct qmu_gpd* dequeue; struct qmu_gpd* enqueue; struct qmu_gpd* start; } ;

/* Variables and functions */
 int MAX_GPD_NUM ; 

__attribute__((used)) static void gpd_ring_init(struct mtu3_gpd_ring *ring, struct qmu_gpd *gpd)
{
	ring->start = gpd;
	ring->enqueue = gpd;
	ring->dequeue = gpd;
	ring->end = gpd + MAX_GPD_NUM - 1;
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
          int _len_ring0 = 1;
          struct mtu3_gpd_ring * ring = (struct mtu3_gpd_ring *) malloc(_len_ring0*sizeof(struct mtu3_gpd_ring));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
              int _len_ring__i0__end0 = 1;
          ring[_i0].end = (struct qmu_gpd *) malloc(_len_ring__i0__end0*sizeof(struct qmu_gpd));
          for(int _j0 = 0; _j0 < _len_ring__i0__end0; _j0++) {
            ring[_i0].end->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ring__i0__dequeue0 = 1;
          ring[_i0].dequeue = (struct qmu_gpd *) malloc(_len_ring__i0__dequeue0*sizeof(struct qmu_gpd));
          for(int _j0 = 0; _j0 < _len_ring__i0__dequeue0; _j0++) {
            ring[_i0].dequeue->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ring__i0__enqueue0 = 1;
          ring[_i0].enqueue = (struct qmu_gpd *) malloc(_len_ring__i0__enqueue0*sizeof(struct qmu_gpd));
          for(int _j0 = 0; _j0 < _len_ring__i0__enqueue0; _j0++) {
            ring[_i0].enqueue->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ring__i0__start0 = 1;
          ring[_i0].start = (struct qmu_gpd *) malloc(_len_ring__i0__start0*sizeof(struct qmu_gpd));
          for(int _j0 = 0; _j0 < _len_ring__i0__start0; _j0++) {
            ring[_i0].start->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_gpd0 = 1;
          struct qmu_gpd * gpd = (struct qmu_gpd *) malloc(_len_gpd0*sizeof(struct qmu_gpd));
          for(int _i0 = 0; _i0 < _len_gpd0; _i0++) {
            gpd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gpd_ring_init(ring,gpd);
          for(int _aux = 0; _aux < _len_ring0; _aux++) {
          free(ring[_aux].end);
          }
          for(int _aux = 0; _aux < _len_ring0; _aux++) {
          free(ring[_aux].dequeue);
          }
          for(int _aux = 0; _aux < _len_ring0; _aux++) {
          free(ring[_aux].enqueue);
          }
          for(int _aux = 0; _aux < _len_ring0; _aux++) {
          free(ring[_aux].start);
          }
          free(ring);
          free(gpd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ring0 = 65025;
          struct mtu3_gpd_ring * ring = (struct mtu3_gpd_ring *) malloc(_len_ring0*sizeof(struct mtu3_gpd_ring));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
              int _len_ring__i0__end0 = 1;
          ring[_i0].end = (struct qmu_gpd *) malloc(_len_ring__i0__end0*sizeof(struct qmu_gpd));
          for(int _j0 = 0; _j0 < _len_ring__i0__end0; _j0++) {
            ring[_i0].end->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ring__i0__dequeue0 = 1;
          ring[_i0].dequeue = (struct qmu_gpd *) malloc(_len_ring__i0__dequeue0*sizeof(struct qmu_gpd));
          for(int _j0 = 0; _j0 < _len_ring__i0__dequeue0; _j0++) {
            ring[_i0].dequeue->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ring__i0__enqueue0 = 1;
          ring[_i0].enqueue = (struct qmu_gpd *) malloc(_len_ring__i0__enqueue0*sizeof(struct qmu_gpd));
          for(int _j0 = 0; _j0 < _len_ring__i0__enqueue0; _j0++) {
            ring[_i0].enqueue->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ring__i0__start0 = 1;
          ring[_i0].start = (struct qmu_gpd *) malloc(_len_ring__i0__start0*sizeof(struct qmu_gpd));
          for(int _j0 = 0; _j0 < _len_ring__i0__start0; _j0++) {
            ring[_i0].start->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_gpd0 = 65025;
          struct qmu_gpd * gpd = (struct qmu_gpd *) malloc(_len_gpd0*sizeof(struct qmu_gpd));
          for(int _i0 = 0; _i0 < _len_gpd0; _i0++) {
            gpd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gpd_ring_init(ring,gpd);
          for(int _aux = 0; _aux < _len_ring0; _aux++) {
          free(ring[_aux].end);
          }
          for(int _aux = 0; _aux < _len_ring0; _aux++) {
          free(ring[_aux].dequeue);
          }
          for(int _aux = 0; _aux < _len_ring0; _aux++) {
          free(ring[_aux].enqueue);
          }
          for(int _aux = 0; _aux < _len_ring0; _aux++) {
          free(ring[_aux].start);
          }
          free(ring);
          free(gpd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ring0 = 100;
          struct mtu3_gpd_ring * ring = (struct mtu3_gpd_ring *) malloc(_len_ring0*sizeof(struct mtu3_gpd_ring));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
              int _len_ring__i0__end0 = 1;
          ring[_i0].end = (struct qmu_gpd *) malloc(_len_ring__i0__end0*sizeof(struct qmu_gpd));
          for(int _j0 = 0; _j0 < _len_ring__i0__end0; _j0++) {
            ring[_i0].end->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ring__i0__dequeue0 = 1;
          ring[_i0].dequeue = (struct qmu_gpd *) malloc(_len_ring__i0__dequeue0*sizeof(struct qmu_gpd));
          for(int _j0 = 0; _j0 < _len_ring__i0__dequeue0; _j0++) {
            ring[_i0].dequeue->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ring__i0__enqueue0 = 1;
          ring[_i0].enqueue = (struct qmu_gpd *) malloc(_len_ring__i0__enqueue0*sizeof(struct qmu_gpd));
          for(int _j0 = 0; _j0 < _len_ring__i0__enqueue0; _j0++) {
            ring[_i0].enqueue->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ring__i0__start0 = 1;
          ring[_i0].start = (struct qmu_gpd *) malloc(_len_ring__i0__start0*sizeof(struct qmu_gpd));
          for(int _j0 = 0; _j0 < _len_ring__i0__start0; _j0++) {
            ring[_i0].start->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_gpd0 = 100;
          struct qmu_gpd * gpd = (struct qmu_gpd *) malloc(_len_gpd0*sizeof(struct qmu_gpd));
          for(int _i0 = 0; _i0 < _len_gpd0; _i0++) {
            gpd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gpd_ring_init(ring,gpd);
          for(int _aux = 0; _aux < _len_ring0; _aux++) {
          free(ring[_aux].end);
          }
          for(int _aux = 0; _aux < _len_ring0; _aux++) {
          free(ring[_aux].dequeue);
          }
          for(int _aux = 0; _aux < _len_ring0; _aux++) {
          free(ring[_aux].enqueue);
          }
          for(int _aux = 0; _aux < _len_ring0; _aux++) {
          free(ring[_aux].start);
          }
          free(ring);
          free(gpd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

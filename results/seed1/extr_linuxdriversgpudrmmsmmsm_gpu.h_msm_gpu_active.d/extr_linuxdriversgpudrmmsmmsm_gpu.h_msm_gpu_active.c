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
struct msm_ringbuffer {scalar_t__ seqno; TYPE_1__* memptrs; } ;
struct msm_gpu {int nr_rings; struct msm_ringbuffer** rb; } ;
struct TYPE_2__ {scalar_t__ fence; } ;

/* Variables and functions */

__attribute__((used)) static inline bool msm_gpu_active(struct msm_gpu *gpu)
{
	int i;

	for (i = 0; i < gpu->nr_rings; i++) {
		struct msm_ringbuffer *ring = gpu->rb[i];

		if (ring->seqno > ring->memptrs->fence)
			return true;
	}

	return false;
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
          int _len_gpu0 = 1;
          struct msm_gpu * gpu = (struct msm_gpu *) malloc(_len_gpu0*sizeof(struct msm_gpu));
          for(int _i0 = 0; _i0 < _len_gpu0; _i0++) {
            gpu[_i0].nr_rings = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_gpu__i0__rb0 = 1;
          gpu[_i0].rb = (struct msm_ringbuffer **) malloc(_len_gpu__i0__rb0*sizeof(struct msm_ringbuffer *));
          for(int _j0 = 0; _j0 < _len_gpu__i0__rb0; _j0++) {
            int _len_gpu__i0__rb1 = 1;
            gpu[_i0].rb[_j0] = (struct msm_ringbuffer *) malloc(_len_gpu__i0__rb1*sizeof(struct msm_ringbuffer));
            for(int _j1 = 0; _j1 < _len_gpu__i0__rb1; _j1++) {
              gpu[_i0].rb[_j0]->seqno = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_gpu__i0__rb__j0__memptrs0 = 1;
          gpu[_i0].rb[_j0]->memptrs = (struct TYPE_2__ *) malloc(_len_gpu__i0__rb__j0__memptrs0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_gpu__i0__rb__j0__memptrs0; _j0++) {
            gpu[_i0].rb[_j0]->memptrs->fence = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int benchRet = msm_gpu_active(gpu);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_gpu0; _aux++) {
          free(*(gpu[_aux].rb));
        free(gpu[_aux].rb);
          }
          free(gpu);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_gpu0 = 65025;
          struct msm_gpu * gpu = (struct msm_gpu *) malloc(_len_gpu0*sizeof(struct msm_gpu));
          for(int _i0 = 0; _i0 < _len_gpu0; _i0++) {
            gpu[_i0].nr_rings = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_gpu__i0__rb0 = 1;
          gpu[_i0].rb = (struct msm_ringbuffer **) malloc(_len_gpu__i0__rb0*sizeof(struct msm_ringbuffer *));
          for(int _j0 = 0; _j0 < _len_gpu__i0__rb0; _j0++) {
            int _len_gpu__i0__rb1 = 1;
            gpu[_i0].rb[_j0] = (struct msm_ringbuffer *) malloc(_len_gpu__i0__rb1*sizeof(struct msm_ringbuffer));
            for(int _j1 = 0; _j1 < _len_gpu__i0__rb1; _j1++) {
              gpu[_i0].rb[_j0]->seqno = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_gpu__i0__rb__j0__memptrs0 = 1;
          gpu[_i0].rb[_j0]->memptrs = (struct TYPE_2__ *) malloc(_len_gpu__i0__rb__j0__memptrs0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_gpu__i0__rb__j0__memptrs0; _j0++) {
            gpu[_i0].rb[_j0]->memptrs->fence = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int benchRet = msm_gpu_active(gpu);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_gpu0; _aux++) {
          free(*(gpu[_aux].rb));
        free(gpu[_aux].rb);
          }
          free(gpu);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_gpu0 = 100;
          struct msm_gpu * gpu = (struct msm_gpu *) malloc(_len_gpu0*sizeof(struct msm_gpu));
          for(int _i0 = 0; _i0 < _len_gpu0; _i0++) {
            gpu[_i0].nr_rings = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_gpu__i0__rb0 = 1;
          gpu[_i0].rb = (struct msm_ringbuffer **) malloc(_len_gpu__i0__rb0*sizeof(struct msm_ringbuffer *));
          for(int _j0 = 0; _j0 < _len_gpu__i0__rb0; _j0++) {
            int _len_gpu__i0__rb1 = 1;
            gpu[_i0].rb[_j0] = (struct msm_ringbuffer *) malloc(_len_gpu__i0__rb1*sizeof(struct msm_ringbuffer));
            for(int _j1 = 0; _j1 < _len_gpu__i0__rb1; _j1++) {
              gpu[_i0].rb[_j0]->seqno = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_gpu__i0__rb__j0__memptrs0 = 1;
          gpu[_i0].rb[_j0]->memptrs = (struct TYPE_2__ *) malloc(_len_gpu__i0__rb__j0__memptrs0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_gpu__i0__rb__j0__memptrs0; _j0++) {
            gpu[_i0].rb[_j0]->memptrs->fence = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int benchRet = msm_gpu_active(gpu);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_gpu0; _aux++) {
          free(*(gpu[_aux].rb));
        free(gpu[_aux].rb);
          }
          free(gpu);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

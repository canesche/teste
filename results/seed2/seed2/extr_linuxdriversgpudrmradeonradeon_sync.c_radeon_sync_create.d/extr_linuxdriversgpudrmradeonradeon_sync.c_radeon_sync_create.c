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
struct radeon_sync {int /*<<< orphan*/ * last_vm_update; int /*<<< orphan*/ ** sync_to; int /*<<< orphan*/ ** semaphores; } ;

/* Variables and functions */
 unsigned int RADEON_NUM_RINGS ; 
 unsigned int RADEON_NUM_SYNCS ; 

void radeon_sync_create(struct radeon_sync *sync)
{
	unsigned i;

	for (i = 0; i < RADEON_NUM_SYNCS; ++i)
		sync->semaphores[i] = NULL;

	for (i = 0; i < RADEON_NUM_RINGS; ++i)
		sync->sync_to[i] = NULL;

	sync->last_vm_update = NULL;
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
          int _len_sync0 = 1;
          struct radeon_sync * sync = (struct radeon_sync *) malloc(_len_sync0*sizeof(struct radeon_sync));
          for(int _i0 = 0; _i0 < _len_sync0; _i0++) {
              int _len_sync__i0__last_vm_update0 = 1;
          sync[_i0].last_vm_update = (int *) malloc(_len_sync__i0__last_vm_update0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sync__i0__last_vm_update0; _j0++) {
            sync[_i0].last_vm_update[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sync__i0__sync_to0 = 1;
          sync[_i0].sync_to = (int **) malloc(_len_sync__i0__sync_to0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_sync__i0__sync_to0; _j0++) {
            int _len_sync__i0__sync_to1 = 1;
            sync[_i0].sync_to[_j0] = (int *) malloc(_len_sync__i0__sync_to1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_sync__i0__sync_to1; _j1++) {
              sync[_i0].sync_to[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_sync__i0__semaphores0 = 1;
          sync[_i0].semaphores = (int **) malloc(_len_sync__i0__semaphores0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_sync__i0__semaphores0; _j0++) {
            int _len_sync__i0__semaphores1 = 1;
            sync[_i0].semaphores[_j0] = (int *) malloc(_len_sync__i0__semaphores1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_sync__i0__semaphores1; _j1++) {
              sync[_i0].semaphores[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          radeon_sync_create(sync);
          for(int _aux = 0; _aux < _len_sync0; _aux++) {
          free(sync[_aux].last_vm_update);
          }
          for(int _aux = 0; _aux < _len_sync0; _aux++) {
          free(*(sync[_aux].sync_to));
        free(sync[_aux].sync_to);
          }
          for(int _aux = 0; _aux < _len_sync0; _aux++) {
          free(*(sync[_aux].semaphores));
        free(sync[_aux].semaphores);
          }
          free(sync);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sync0 = 65025;
          struct radeon_sync * sync = (struct radeon_sync *) malloc(_len_sync0*sizeof(struct radeon_sync));
          for(int _i0 = 0; _i0 < _len_sync0; _i0++) {
              int _len_sync__i0__last_vm_update0 = 1;
          sync[_i0].last_vm_update = (int *) malloc(_len_sync__i0__last_vm_update0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sync__i0__last_vm_update0; _j0++) {
            sync[_i0].last_vm_update[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sync__i0__sync_to0 = 1;
          sync[_i0].sync_to = (int **) malloc(_len_sync__i0__sync_to0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_sync__i0__sync_to0; _j0++) {
            int _len_sync__i0__sync_to1 = 1;
            sync[_i0].sync_to[_j0] = (int *) malloc(_len_sync__i0__sync_to1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_sync__i0__sync_to1; _j1++) {
              sync[_i0].sync_to[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_sync__i0__semaphores0 = 1;
          sync[_i0].semaphores = (int **) malloc(_len_sync__i0__semaphores0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_sync__i0__semaphores0; _j0++) {
            int _len_sync__i0__semaphores1 = 1;
            sync[_i0].semaphores[_j0] = (int *) malloc(_len_sync__i0__semaphores1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_sync__i0__semaphores1; _j1++) {
              sync[_i0].semaphores[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          radeon_sync_create(sync);
          for(int _aux = 0; _aux < _len_sync0; _aux++) {
          free(sync[_aux].last_vm_update);
          }
          for(int _aux = 0; _aux < _len_sync0; _aux++) {
          free(*(sync[_aux].sync_to));
        free(sync[_aux].sync_to);
          }
          for(int _aux = 0; _aux < _len_sync0; _aux++) {
          free(*(sync[_aux].semaphores));
        free(sync[_aux].semaphores);
          }
          free(sync);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sync0 = 100;
          struct radeon_sync * sync = (struct radeon_sync *) malloc(_len_sync0*sizeof(struct radeon_sync));
          for(int _i0 = 0; _i0 < _len_sync0; _i0++) {
              int _len_sync__i0__last_vm_update0 = 1;
          sync[_i0].last_vm_update = (int *) malloc(_len_sync__i0__last_vm_update0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sync__i0__last_vm_update0; _j0++) {
            sync[_i0].last_vm_update[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sync__i0__sync_to0 = 1;
          sync[_i0].sync_to = (int **) malloc(_len_sync__i0__sync_to0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_sync__i0__sync_to0; _j0++) {
            int _len_sync__i0__sync_to1 = 1;
            sync[_i0].sync_to[_j0] = (int *) malloc(_len_sync__i0__sync_to1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_sync__i0__sync_to1; _j1++) {
              sync[_i0].sync_to[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_sync__i0__semaphores0 = 1;
          sync[_i0].semaphores = (int **) malloc(_len_sync__i0__semaphores0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_sync__i0__semaphores0; _j0++) {
            int _len_sync__i0__semaphores1 = 1;
            sync[_i0].semaphores[_j0] = (int *) malloc(_len_sync__i0__semaphores1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_sync__i0__semaphores1; _j1++) {
              sync[_i0].semaphores[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          radeon_sync_create(sync);
          for(int _aux = 0; _aux < _len_sync0; _aux++) {
          free(sync[_aux].last_vm_update);
          }
          for(int _aux = 0; _aux < _len_sync0; _aux++) {
          free(*(sync[_aux].sync_to));
        free(sync[_aux].sync_to);
          }
          for(int _aux = 0; _aux < _len_sync0; _aux++) {
          free(*(sync[_aux].semaphores));
        free(sync[_aux].semaphores);
          }
          free(sync);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

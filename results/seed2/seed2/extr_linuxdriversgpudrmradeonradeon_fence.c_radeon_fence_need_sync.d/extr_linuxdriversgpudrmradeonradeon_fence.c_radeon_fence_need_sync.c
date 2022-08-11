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
struct radeon_fence_driver {scalar_t__* sync_seq; } ;
struct radeon_fence {int ring; scalar_t__ seq; TYPE_1__* rdev; } ;
struct TYPE_2__ {struct radeon_fence_driver* fence_drv; } ;

/* Variables and functions */

bool radeon_fence_need_sync(struct radeon_fence *fence, int dst_ring)
{
	struct radeon_fence_driver *fdrv;

	if (!fence) {
		return false;
	}

	if (fence->ring == dst_ring) {
		return false;
	}

	/* we are protected by the ring mutex */
	fdrv = &fence->rdev->fence_drv[dst_ring];
	if (fence->seq <= fdrv->sync_seq[fence->ring]) {
		return false;
	}

	return true;
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
          int dst_ring = 100;
          int _len_fence0 = 1;
          struct radeon_fence * fence = (struct radeon_fence *) malloc(_len_fence0*sizeof(struct radeon_fence));
          for(int _i0 = 0; _i0 < _len_fence0; _i0++) {
            fence[_i0].ring = ((-2 * (next_i()%2)) + 1) * next_i();
        fence[_i0].seq = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fence__i0__rdev0 = 1;
          fence[_i0].rdev = (struct TYPE_2__ *) malloc(_len_fence__i0__rdev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_fence__i0__rdev0; _j0++) {
              int _len_fence__i0__rdev_fence_drv0 = 1;
          fence[_i0].rdev->fence_drv = (struct radeon_fence_driver *) malloc(_len_fence__i0__rdev_fence_drv0*sizeof(struct radeon_fence_driver));
          for(int _j0 = 0; _j0 < _len_fence__i0__rdev_fence_drv0; _j0++) {
              int _len_fence__i0__rdev_fence_drv_sync_seq0 = 1;
          fence[_i0].rdev->fence_drv->sync_seq = (long *) malloc(_len_fence__i0__rdev_fence_drv_sync_seq0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_fence__i0__rdev_fence_drv_sync_seq0; _j0++) {
            fence[_i0].rdev->fence_drv->sync_seq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = radeon_fence_need_sync(fence,dst_ring);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fence0; _aux++) {
          free(fence[_aux].rdev);
          }
          free(fence);
        
        break;
    }
    // big-arr
    case 1:
    {
          int dst_ring = 255;
          int _len_fence0 = 65025;
          struct radeon_fence * fence = (struct radeon_fence *) malloc(_len_fence0*sizeof(struct radeon_fence));
          for(int _i0 = 0; _i0 < _len_fence0; _i0++) {
            fence[_i0].ring = ((-2 * (next_i()%2)) + 1) * next_i();
        fence[_i0].seq = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fence__i0__rdev0 = 1;
          fence[_i0].rdev = (struct TYPE_2__ *) malloc(_len_fence__i0__rdev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_fence__i0__rdev0; _j0++) {
              int _len_fence__i0__rdev_fence_drv0 = 1;
          fence[_i0].rdev->fence_drv = (struct radeon_fence_driver *) malloc(_len_fence__i0__rdev_fence_drv0*sizeof(struct radeon_fence_driver));
          for(int _j0 = 0; _j0 < _len_fence__i0__rdev_fence_drv0; _j0++) {
              int _len_fence__i0__rdev_fence_drv_sync_seq0 = 1;
          fence[_i0].rdev->fence_drv->sync_seq = (long *) malloc(_len_fence__i0__rdev_fence_drv_sync_seq0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_fence__i0__rdev_fence_drv_sync_seq0; _j0++) {
            fence[_i0].rdev->fence_drv->sync_seq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = radeon_fence_need_sync(fence,dst_ring);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fence0; _aux++) {
          free(fence[_aux].rdev);
          }
          free(fence);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int dst_ring = 10;
          int _len_fence0 = 100;
          struct radeon_fence * fence = (struct radeon_fence *) malloc(_len_fence0*sizeof(struct radeon_fence));
          for(int _i0 = 0; _i0 < _len_fence0; _i0++) {
            fence[_i0].ring = ((-2 * (next_i()%2)) + 1) * next_i();
        fence[_i0].seq = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fence__i0__rdev0 = 1;
          fence[_i0].rdev = (struct TYPE_2__ *) malloc(_len_fence__i0__rdev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_fence__i0__rdev0; _j0++) {
              int _len_fence__i0__rdev_fence_drv0 = 1;
          fence[_i0].rdev->fence_drv = (struct radeon_fence_driver *) malloc(_len_fence__i0__rdev_fence_drv0*sizeof(struct radeon_fence_driver));
          for(int _j0 = 0; _j0 < _len_fence__i0__rdev_fence_drv0; _j0++) {
              int _len_fence__i0__rdev_fence_drv_sync_seq0 = 1;
          fence[_i0].rdev->fence_drv->sync_seq = (long *) malloc(_len_fence__i0__rdev_fence_drv_sync_seq0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_fence__i0__rdev_fence_drv_sync_seq0; _j0++) {
            fence[_i0].rdev->fence_drv->sync_seq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = radeon_fence_need_sync(fence,dst_ring);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fence0; _aux++) {
          free(fence[_aux].rdev);
          }
          free(fence);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

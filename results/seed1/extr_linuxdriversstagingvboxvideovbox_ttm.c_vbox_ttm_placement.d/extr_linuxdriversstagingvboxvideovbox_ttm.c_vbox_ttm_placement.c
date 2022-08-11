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
typedef  unsigned int u32 ;
struct TYPE_3__ {unsigned int num_placement; unsigned int num_busy_placement; TYPE_2__* busy_placement; TYPE_2__* placement; } ;
struct vbox_bo {TYPE_2__* placements; TYPE_1__ placement; } ;
struct TYPE_4__ {int flags; scalar_t__ lpfn; scalar_t__ fpfn; } ;

/* Variables and functions */
 int TTM_PL_FLAG_SYSTEM ; 
 int TTM_PL_FLAG_UNCACHED ; 
 int TTM_PL_FLAG_VRAM ; 
 int TTM_PL_FLAG_WC ; 
 int TTM_PL_MASK_CACHING ; 

void vbox_ttm_placement(struct vbox_bo *bo, int domain)
{
	unsigned int i;
	u32 c = 0;

	bo->placement.placement = bo->placements;
	bo->placement.busy_placement = bo->placements;

	if (domain & TTM_PL_FLAG_VRAM)
		bo->placements[c++].flags =
		    TTM_PL_FLAG_WC | TTM_PL_FLAG_UNCACHED | TTM_PL_FLAG_VRAM;
	if (domain & TTM_PL_FLAG_SYSTEM)
		bo->placements[c++].flags =
		    TTM_PL_MASK_CACHING | TTM_PL_FLAG_SYSTEM;
	if (!c)
		bo->placements[c++].flags =
		    TTM_PL_MASK_CACHING | TTM_PL_FLAG_SYSTEM;

	bo->placement.num_placement = c;
	bo->placement.num_busy_placement = c;

	for (i = 0; i < c; ++i) {
		bo->placements[i].fpfn = 0;
		bo->placements[i].lpfn = 0;
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
          int domain = 100;
          int _len_bo0 = 1;
          struct vbox_bo * bo = (struct vbox_bo *) malloc(_len_bo0*sizeof(struct vbox_bo));
          for(int _i0 = 0; _i0 < _len_bo0; _i0++) {
              int _len_bo__i0__placements0 = 1;
          bo[_i0].placements = (struct TYPE_4__ *) malloc(_len_bo__i0__placements0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_bo__i0__placements0; _j0++) {
            bo[_i0].placements->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        bo[_i0].placements->lpfn = ((-2 * (next_i()%2)) + 1) * next_i();
        bo[_i0].placements->fpfn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        bo[_i0].placement.num_placement = ((-2 * (next_i()%2)) + 1) * next_i();
        bo[_i0].placement.num_busy_placement = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bo__i0__placement_busy_placement0 = 1;
          bo[_i0].placement.busy_placement = (struct TYPE_4__ *) malloc(_len_bo__i0__placement_busy_placement0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_bo__i0__placement_busy_placement0; _j0++) {
            bo[_i0].placement.busy_placement->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        bo[_i0].placement.busy_placement->lpfn = ((-2 * (next_i()%2)) + 1) * next_i();
        bo[_i0].placement.busy_placement->fpfn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bo__i0__placement_placement0 = 1;
          bo[_i0].placement.placement = (struct TYPE_4__ *) malloc(_len_bo__i0__placement_placement0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_bo__i0__placement_placement0; _j0++) {
            bo[_i0].placement.placement->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        bo[_i0].placement.placement->lpfn = ((-2 * (next_i()%2)) + 1) * next_i();
        bo[_i0].placement.placement->fpfn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          vbox_ttm_placement(bo,domain);
          for(int _aux = 0; _aux < _len_bo0; _aux++) {
          free(bo[_aux].placements);
          }
          free(bo);
        
        break;
    }
    // big-arr
    case 1:
    {
          int domain = 255;
          int _len_bo0 = 65025;
          struct vbox_bo * bo = (struct vbox_bo *) malloc(_len_bo0*sizeof(struct vbox_bo));
          for(int _i0 = 0; _i0 < _len_bo0; _i0++) {
              int _len_bo__i0__placements0 = 1;
          bo[_i0].placements = (struct TYPE_4__ *) malloc(_len_bo__i0__placements0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_bo__i0__placements0; _j0++) {
            bo[_i0].placements->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        bo[_i0].placements->lpfn = ((-2 * (next_i()%2)) + 1) * next_i();
        bo[_i0].placements->fpfn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        bo[_i0].placement.num_placement = ((-2 * (next_i()%2)) + 1) * next_i();
        bo[_i0].placement.num_busy_placement = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bo__i0__placement_busy_placement0 = 1;
          bo[_i0].placement.busy_placement = (struct TYPE_4__ *) malloc(_len_bo__i0__placement_busy_placement0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_bo__i0__placement_busy_placement0; _j0++) {
            bo[_i0].placement.busy_placement->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        bo[_i0].placement.busy_placement->lpfn = ((-2 * (next_i()%2)) + 1) * next_i();
        bo[_i0].placement.busy_placement->fpfn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bo__i0__placement_placement0 = 1;
          bo[_i0].placement.placement = (struct TYPE_4__ *) malloc(_len_bo__i0__placement_placement0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_bo__i0__placement_placement0; _j0++) {
            bo[_i0].placement.placement->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        bo[_i0].placement.placement->lpfn = ((-2 * (next_i()%2)) + 1) * next_i();
        bo[_i0].placement.placement->fpfn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          vbox_ttm_placement(bo,domain);
          for(int _aux = 0; _aux < _len_bo0; _aux++) {
          free(bo[_aux].placements);
          }
          free(bo);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int domain = 10;
          int _len_bo0 = 100;
          struct vbox_bo * bo = (struct vbox_bo *) malloc(_len_bo0*sizeof(struct vbox_bo));
          for(int _i0 = 0; _i0 < _len_bo0; _i0++) {
              int _len_bo__i0__placements0 = 1;
          bo[_i0].placements = (struct TYPE_4__ *) malloc(_len_bo__i0__placements0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_bo__i0__placements0; _j0++) {
            bo[_i0].placements->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        bo[_i0].placements->lpfn = ((-2 * (next_i()%2)) + 1) * next_i();
        bo[_i0].placements->fpfn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        bo[_i0].placement.num_placement = ((-2 * (next_i()%2)) + 1) * next_i();
        bo[_i0].placement.num_busy_placement = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bo__i0__placement_busy_placement0 = 1;
          bo[_i0].placement.busy_placement = (struct TYPE_4__ *) malloc(_len_bo__i0__placement_busy_placement0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_bo__i0__placement_busy_placement0; _j0++) {
            bo[_i0].placement.busy_placement->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        bo[_i0].placement.busy_placement->lpfn = ((-2 * (next_i()%2)) + 1) * next_i();
        bo[_i0].placement.busy_placement->fpfn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bo__i0__placement_placement0 = 1;
          bo[_i0].placement.placement = (struct TYPE_4__ *) malloc(_len_bo__i0__placement_placement0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_bo__i0__placement_placement0; _j0++) {
            bo[_i0].placement.placement->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        bo[_i0].placement.placement->lpfn = ((-2 * (next_i()%2)) + 1) * next_i();
        bo[_i0].placement.placement->fpfn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          vbox_ttm_placement(bo,domain);
          for(int _aux = 0; _aux < _len_bo0; _aux++) {
          free(bo[_aux].placements);
          }
          free(bo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

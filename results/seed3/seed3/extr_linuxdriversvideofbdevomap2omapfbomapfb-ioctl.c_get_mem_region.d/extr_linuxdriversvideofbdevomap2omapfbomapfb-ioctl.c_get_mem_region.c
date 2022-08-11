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
typedef  int u8 ;
struct omapfb_info {int id; struct omapfb2_device* fbdev; } ;
struct omapfb2_mem_region {int dummy; } ;
struct omapfb2_device {int num_fbs; struct omapfb2_mem_region* regions; } ;

/* Variables and functions */
 int OMAPFB_MEM_IDX_ENABLED ; 
 int OMAPFB_MEM_IDX_MASK ; 

__attribute__((used)) static struct omapfb2_mem_region *get_mem_region(struct omapfb_info *ofbi,
						 u8 mem_idx)
{
	struct omapfb2_device *fbdev = ofbi->fbdev;

	if (mem_idx & OMAPFB_MEM_IDX_ENABLED)
		mem_idx &= OMAPFB_MEM_IDX_MASK;
	else
		mem_idx = ofbi->id;

	if (mem_idx >= fbdev->num_fbs)
		return NULL;

	return &fbdev->regions[mem_idx];
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
          int mem_idx = 100;
          int _len_ofbi0 = 1;
          struct omapfb_info * ofbi = (struct omapfb_info *) malloc(_len_ofbi0*sizeof(struct omapfb_info));
          for(int _i0 = 0; _i0 < _len_ofbi0; _i0++) {
            ofbi[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ofbi__i0__fbdev0 = 1;
          ofbi[_i0].fbdev = (struct omapfb2_device *) malloc(_len_ofbi__i0__fbdev0*sizeof(struct omapfb2_device));
          for(int _j0 = 0; _j0 < _len_ofbi__i0__fbdev0; _j0++) {
            ofbi[_i0].fbdev->num_fbs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ofbi__i0__fbdev_regions0 = 1;
          ofbi[_i0].fbdev->regions = (struct omapfb2_mem_region *) malloc(_len_ofbi__i0__fbdev_regions0*sizeof(struct omapfb2_mem_region));
          for(int _j0 = 0; _j0 < _len_ofbi__i0__fbdev_regions0; _j0++) {
            ofbi[_i0].fbdev->regions->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct omapfb2_mem_region * benchRet = get_mem_region(ofbi,mem_idx);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_ofbi0; _aux++) {
          free(ofbi[_aux].fbdev);
          }
          free(ofbi);
        
        break;
    }
    // big-arr
    case 1:
    {
          int mem_idx = 255;
          int _len_ofbi0 = 65025;
          struct omapfb_info * ofbi = (struct omapfb_info *) malloc(_len_ofbi0*sizeof(struct omapfb_info));
          for(int _i0 = 0; _i0 < _len_ofbi0; _i0++) {
            ofbi[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ofbi__i0__fbdev0 = 1;
          ofbi[_i0].fbdev = (struct omapfb2_device *) malloc(_len_ofbi__i0__fbdev0*sizeof(struct omapfb2_device));
          for(int _j0 = 0; _j0 < _len_ofbi__i0__fbdev0; _j0++) {
            ofbi[_i0].fbdev->num_fbs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ofbi__i0__fbdev_regions0 = 1;
          ofbi[_i0].fbdev->regions = (struct omapfb2_mem_region *) malloc(_len_ofbi__i0__fbdev_regions0*sizeof(struct omapfb2_mem_region));
          for(int _j0 = 0; _j0 < _len_ofbi__i0__fbdev_regions0; _j0++) {
            ofbi[_i0].fbdev->regions->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct omapfb2_mem_region * benchRet = get_mem_region(ofbi,mem_idx);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_ofbi0; _aux++) {
          free(ofbi[_aux].fbdev);
          }
          free(ofbi);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mem_idx = 10;
          int _len_ofbi0 = 100;
          struct omapfb_info * ofbi = (struct omapfb_info *) malloc(_len_ofbi0*sizeof(struct omapfb_info));
          for(int _i0 = 0; _i0 < _len_ofbi0; _i0++) {
            ofbi[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ofbi__i0__fbdev0 = 1;
          ofbi[_i0].fbdev = (struct omapfb2_device *) malloc(_len_ofbi__i0__fbdev0*sizeof(struct omapfb2_device));
          for(int _j0 = 0; _j0 < _len_ofbi__i0__fbdev0; _j0++) {
            ofbi[_i0].fbdev->num_fbs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ofbi__i0__fbdev_regions0 = 1;
          ofbi[_i0].fbdev->regions = (struct omapfb2_mem_region *) malloc(_len_ofbi__i0__fbdev_regions0*sizeof(struct omapfb2_mem_region));
          for(int _j0 = 0; _j0 < _len_ofbi__i0__fbdev_regions0; _j0++) {
            ofbi[_i0].fbdev->regions->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct omapfb2_mem_region * benchRet = get_mem_region(ofbi,mem_idx);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_ofbi0; _aux++) {
          free(ofbi[_aux].fbdev);
          }
          free(ofbi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  region_element ;
struct TYPE_6__ {int /*<<< orphan*/ * right; int /*<<< orphan*/ * left; } ;
struct TYPE_7__ {TYPE_1__ combine; } ;
struct TYPE_8__ {TYPE_2__ elementdata; int /*<<< orphan*/  type; } ;
struct TYPE_9__ {int num_children; TYPE_3__ node; } ;
typedef  TYPE_4__ GpRegion ;
typedef  int /*<<< orphan*/  CombineMode ;

/* Variables and functions */

__attribute__((used)) static inline void fuse_region(GpRegion* region, region_element* left,
        region_element* right, const CombineMode mode)
{
    region->node.type = mode;
    region->node.elementdata.combine.left = left;
    region->node.elementdata.combine.right = right;
    region->num_children += 2;
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
          const int mode = 100;
          int _len_region0 = 1;
          struct TYPE_9__ * region = (struct TYPE_9__ *) malloc(_len_region0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_region0; _i0++) {
            region[_i0].num_children = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_region__i0__node_elementdata_combine_right0 = 1;
          region[_i0].node.elementdata.combine.right = (int *) malloc(_len_region__i0__node_elementdata_combine_right0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_region__i0__node_elementdata_combine_right0; _j0++) {
            region[_i0].node.elementdata.combine.right[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_region__i0__node_elementdata_combine_left0 = 1;
          region[_i0].node.elementdata.combine.left = (int *) malloc(_len_region__i0__node_elementdata_combine_left0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_region__i0__node_elementdata_combine_left0; _j0++) {
            region[_i0].node.elementdata.combine.left[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        region[_i0].node.type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_left0 = 1;
          int * left = (int *) malloc(_len_left0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_left0; _i0++) {
            left[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_right0 = 1;
          int * right = (int *) malloc(_len_right0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_right0; _i0++) {
            right[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fuse_region(region,left,right,mode);
          free(region);
          free(left);
          free(right);
        
        break;
    }
    // big-arr
    case 1:
    {
          const int mode = 255;
          int _len_region0 = 65025;
          struct TYPE_9__ * region = (struct TYPE_9__ *) malloc(_len_region0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_region0; _i0++) {
            region[_i0].num_children = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_region__i0__node_elementdata_combine_right0 = 1;
          region[_i0].node.elementdata.combine.right = (int *) malloc(_len_region__i0__node_elementdata_combine_right0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_region__i0__node_elementdata_combine_right0; _j0++) {
            region[_i0].node.elementdata.combine.right[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_region__i0__node_elementdata_combine_left0 = 1;
          region[_i0].node.elementdata.combine.left = (int *) malloc(_len_region__i0__node_elementdata_combine_left0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_region__i0__node_elementdata_combine_left0; _j0++) {
            region[_i0].node.elementdata.combine.left[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        region[_i0].node.type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_left0 = 65025;
          int * left = (int *) malloc(_len_left0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_left0; _i0++) {
            left[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_right0 = 65025;
          int * right = (int *) malloc(_len_right0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_right0; _i0++) {
            right[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fuse_region(region,left,right,mode);
          free(region);
          free(left);
          free(right);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const int mode = 10;
          int _len_region0 = 100;
          struct TYPE_9__ * region = (struct TYPE_9__ *) malloc(_len_region0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_region0; _i0++) {
            region[_i0].num_children = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_region__i0__node_elementdata_combine_right0 = 1;
          region[_i0].node.elementdata.combine.right = (int *) malloc(_len_region__i0__node_elementdata_combine_right0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_region__i0__node_elementdata_combine_right0; _j0++) {
            region[_i0].node.elementdata.combine.right[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_region__i0__node_elementdata_combine_left0 = 1;
          region[_i0].node.elementdata.combine.left = (int *) malloc(_len_region__i0__node_elementdata_combine_left0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_region__i0__node_elementdata_combine_left0; _j0++) {
            region[_i0].node.elementdata.combine.left[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        region[_i0].node.type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_left0 = 100;
          int * left = (int *) malloc(_len_left0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_left0; _i0++) {
            left[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_right0 = 100;
          int * right = (int *) malloc(_len_right0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_right0; _i0++) {
            right[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fuse_region(region,left,right,mode);
          free(region);
          free(left);
          free(right);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

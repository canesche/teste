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
typedef  int u8 ;
struct TYPE_3__ {int pos; } ;
struct csiphy_lanes_cfg {int num_data; TYPE_2__* data; TYPE_1__ clk; } ;
struct TYPE_4__ {int pos; } ;

/* Variables and functions */

__attribute__((used)) static u8 csiphy_get_lane_mask(struct csiphy_lanes_cfg *lane_cfg)
{
	u8 lane_mask;
	int i;

	lane_mask = 1 << lane_cfg->clk.pos;

	for (i = 0; i < lane_cfg->num_data; i++)
		lane_mask |= 1 << lane_cfg->data[i].pos;

	return lane_mask;
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
          int _len_lane_cfg0 = 1;
          struct csiphy_lanes_cfg * lane_cfg = (struct csiphy_lanes_cfg *) malloc(_len_lane_cfg0*sizeof(struct csiphy_lanes_cfg));
          for(int _i0 = 0; _i0 < _len_lane_cfg0; _i0++) {
            lane_cfg[_i0].num_data = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_lane_cfg__i0__data0 = 1;
          lane_cfg[_i0].data = (struct TYPE_4__ *) malloc(_len_lane_cfg__i0__data0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_lane_cfg__i0__data0; _j0++) {
            lane_cfg[_i0].data->pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        lane_cfg[_i0].clk.pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = csiphy_get_lane_mask(lane_cfg);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_lane_cfg0; _aux++) {
          free(lane_cfg[_aux].data);
          }
          free(lane_cfg);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_lane_cfg0 = 65025;
          struct csiphy_lanes_cfg * lane_cfg = (struct csiphy_lanes_cfg *) malloc(_len_lane_cfg0*sizeof(struct csiphy_lanes_cfg));
          for(int _i0 = 0; _i0 < _len_lane_cfg0; _i0++) {
            lane_cfg[_i0].num_data = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_lane_cfg__i0__data0 = 1;
          lane_cfg[_i0].data = (struct TYPE_4__ *) malloc(_len_lane_cfg__i0__data0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_lane_cfg__i0__data0; _j0++) {
            lane_cfg[_i0].data->pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        lane_cfg[_i0].clk.pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = csiphy_get_lane_mask(lane_cfg);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_lane_cfg0; _aux++) {
          free(lane_cfg[_aux].data);
          }
          free(lane_cfg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_lane_cfg0 = 100;
          struct csiphy_lanes_cfg * lane_cfg = (struct csiphy_lanes_cfg *) malloc(_len_lane_cfg0*sizeof(struct csiphy_lanes_cfg));
          for(int _i0 = 0; _i0 < _len_lane_cfg0; _i0++) {
            lane_cfg[_i0].num_data = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_lane_cfg__i0__data0 = 1;
          lane_cfg[_i0].data = (struct TYPE_4__ *) malloc(_len_lane_cfg__i0__data0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_lane_cfg__i0__data0; _j0++) {
            lane_cfg[_i0].data->pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        lane_cfg[_i0].clk.pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = csiphy_get_lane_mask(lane_cfg);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_lane_cfg0; _aux++) {
          free(lane_cfg[_aux].data);
          }
          free(lane_cfg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

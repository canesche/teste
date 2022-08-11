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
typedef  size_t u32 ;
struct rga_addr_offset {int dummy; } ;
struct rga_corners_addr_offset {struct rga_addr_offset right_bottom; struct rga_addr_offset right_top; struct rga_addr_offset left_bottom; struct rga_addr_offset left_top; } ;
typedef  enum e_rga_start_pos { ____Placeholder_e_rga_start_pos } e_rga_start_pos ;

/* Variables and functions */
#define  LB 131 
#define  LT 130 
#define  RB 129 
#define  RT 128 

__attribute__((used)) static struct rga_addr_offset *rga_lookup_draw_pos(struct
		rga_corners_addr_offset
		* offsets, u32 rotate_mode,
		u32 mirr_mode)
{
	static enum e_rga_start_pos rot_mir_point_matrix[4][4] = {
		{
			LT, RT, LB, RB,
		},
		{
			RT, LT, RB, LB,
		},
		{
			RB, LB, RT, LT,
		},
		{
			LB, RB, LT, RT,
		},
	};

	if (!offsets)
		return NULL;

	switch (rot_mir_point_matrix[rotate_mode][mirr_mode]) {
	case LT:
		return &offsets->left_top;
	case LB:
		return &offsets->left_bottom;
	case RT:
		return &offsets->right_top;
	case RB:
		return &offsets->right_bottom;
	}

	return NULL;
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
          unsigned long rotate_mode = 100;
          unsigned long mirr_mode = 100;
          int _len_offsets0 = 1;
          struct rga_corners_addr_offset * offsets = (struct rga_corners_addr_offset *) malloc(_len_offsets0*sizeof(struct rga_corners_addr_offset));
          for(int _i0 = 0; _i0 < _len_offsets0; _i0++) {
            offsets[_i0].right_bottom.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        offsets[_i0].right_top.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        offsets[_i0].left_bottom.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        offsets[_i0].left_top.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct rga_addr_offset * benchRet = rga_lookup_draw_pos(offsets,rotate_mode,mirr_mode);
          printf("%d\n", (*benchRet).dummy);
          free(offsets);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long rotate_mode = 255;
          unsigned long mirr_mode = 255;
          int _len_offsets0 = 65025;
          struct rga_corners_addr_offset * offsets = (struct rga_corners_addr_offset *) malloc(_len_offsets0*sizeof(struct rga_corners_addr_offset));
          for(int _i0 = 0; _i0 < _len_offsets0; _i0++) {
            offsets[_i0].right_bottom.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        offsets[_i0].right_top.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        offsets[_i0].left_bottom.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        offsets[_i0].left_top.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct rga_addr_offset * benchRet = rga_lookup_draw_pos(offsets,rotate_mode,mirr_mode);
          printf("%d\n", (*benchRet).dummy);
          free(offsets);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long rotate_mode = 10;
          unsigned long mirr_mode = 10;
          int _len_offsets0 = 100;
          struct rga_corners_addr_offset * offsets = (struct rga_corners_addr_offset *) malloc(_len_offsets0*sizeof(struct rga_corners_addr_offset));
          for(int _i0 = 0; _i0 < _len_offsets0; _i0++) {
            offsets[_i0].right_bottom.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        offsets[_i0].right_top.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        offsets[_i0].left_bottom.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        offsets[_i0].left_top.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct rga_addr_offset * benchRet = rga_lookup_draw_pos(offsets,rotate_mode,mirr_mode);
          printf("%d\n", (*benchRet).dummy);
          free(offsets);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

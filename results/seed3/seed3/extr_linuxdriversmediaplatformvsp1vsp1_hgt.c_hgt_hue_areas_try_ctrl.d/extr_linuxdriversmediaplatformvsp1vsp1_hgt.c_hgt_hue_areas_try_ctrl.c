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
typedef  scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__* p_u8; } ;
struct v4l2_ctrl {TYPE_1__ p_new; } ;

/* Variables and functions */
 int EINVAL ; 
 int HGT_NUM_HUE_AREAS ; 

__attribute__((used)) static int hgt_hue_areas_try_ctrl(struct v4l2_ctrl *ctrl)
{
	const u8 *values = ctrl->p_new.p_u8;
	unsigned int i;

	/*
	 * The hardware has constraints on the hue area boundaries beyond the
	 * control min, max and step. The values must match one of the following
	 * expressions.
	 *
	 * 0L <= 0U <= 1L <= 1U <= 2L <= 2U <= 3L <= 3U <= 4L <= 4U <= 5L <= 5U
	 * 0U <= 1L <= 1U <= 2L <= 2U <= 3L <= 3U <= 4L <= 4U <= 5L <= 5U <= 0L
	 *
	 * Start by verifying the common part...
	 */
	for (i = 1; i < (HGT_NUM_HUE_AREAS * 2) - 1; ++i) {
		if (values[i] > values[i+1])
			return -EINVAL;
	}

	/* ... and handle 0L separately. */
	if (values[0] > values[1] && values[11] > values[0])
		return -EINVAL;

	return 0;
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
          int _len_ctrl0 = 1;
          struct v4l2_ctrl * ctrl = (struct v4l2_ctrl *) malloc(_len_ctrl0*sizeof(struct v4l2_ctrl));
          for(int _i0 = 0; _i0 < _len_ctrl0; _i0++) {
              int _len_ctrl__i0__p_new_p_u80 = 1;
          ctrl[_i0].p_new.p_u8 = (long *) malloc(_len_ctrl__i0__p_new_p_u80*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ctrl__i0__p_new_p_u80; _j0++) {
            ctrl[_i0].p_new.p_u8[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = hgt_hue_areas_try_ctrl(ctrl);
          printf("%d\n", benchRet); 
          free(ctrl);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ctrl0 = 65025;
          struct v4l2_ctrl * ctrl = (struct v4l2_ctrl *) malloc(_len_ctrl0*sizeof(struct v4l2_ctrl));
          for(int _i0 = 0; _i0 < _len_ctrl0; _i0++) {
              int _len_ctrl__i0__p_new_p_u80 = 1;
          ctrl[_i0].p_new.p_u8 = (long *) malloc(_len_ctrl__i0__p_new_p_u80*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ctrl__i0__p_new_p_u80; _j0++) {
            ctrl[_i0].p_new.p_u8[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = hgt_hue_areas_try_ctrl(ctrl);
          printf("%d\n", benchRet); 
          free(ctrl);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ctrl0 = 100;
          struct v4l2_ctrl * ctrl = (struct v4l2_ctrl *) malloc(_len_ctrl0*sizeof(struct v4l2_ctrl));
          for(int _i0 = 0; _i0 < _len_ctrl0; _i0++) {
              int _len_ctrl__i0__p_new_p_u80 = 1;
          ctrl[_i0].p_new.p_u8 = (long *) malloc(_len_ctrl__i0__p_new_p_u80*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ctrl__i0__p_new_p_u80; _j0++) {
            ctrl[_i0].p_new.p_u8[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = hgt_hue_areas_try_ctrl(ctrl);
          printf("%d\n", benchRet); 
          free(ctrl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

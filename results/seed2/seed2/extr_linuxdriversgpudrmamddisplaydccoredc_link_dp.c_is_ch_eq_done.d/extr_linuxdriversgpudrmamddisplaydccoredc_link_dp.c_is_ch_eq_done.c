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
struct TYPE_4__ {int /*<<< orphan*/  CHANNEL_EQ_DONE_0; int /*<<< orphan*/  SYMBOL_LOCKED_0; } ;
union lane_status {TYPE_2__ bits; } ;
struct TYPE_3__ {int /*<<< orphan*/  INTERLANE_ALIGN_DONE; } ;
union lane_align_status_updated {TYPE_1__ bits; } ;
typedef  size_t uint32_t ;
typedef  enum dc_lane_count { ____Placeholder_dc_lane_count } dc_lane_count ;

/* Variables and functions */

__attribute__((used)) static bool is_ch_eq_done(enum dc_lane_count ln_count,
	union lane_status *dpcd_lane_status,
	union lane_align_status_updated *lane_status_updated)
{
	bool done = true;
	uint32_t lane;
	if (!lane_status_updated->bits.INTERLANE_ALIGN_DONE)
		done = false;
	else {
		for (lane = 0; lane < (uint32_t)(ln_count); lane++) {
			if (!dpcd_lane_status[lane].bits.SYMBOL_LOCKED_0 ||
				!dpcd_lane_status[lane].bits.CHANNEL_EQ_DONE_0)
				done = false;
		}
	}
	return done;

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
          enum dc_lane_count ln_count = 0;
          int _len_dpcd_lane_status0 = 1;
          union lane_status * dpcd_lane_status = (union lane_status *) malloc(_len_dpcd_lane_status0*sizeof(union lane_status));
          for(int _i0 = 0; _i0 < _len_dpcd_lane_status0; _i0++) {
            dpcd_lane_status[_i0] = 0;
          }
          int _len_lane_status_updated0 = 1;
          union lane_align_status_updated * lane_status_updated = (union lane_align_status_updated *) malloc(_len_lane_status_updated0*sizeof(union lane_align_status_updated));
          for(int _i0 = 0; _i0 < _len_lane_status_updated0; _i0++) {
            lane_status_updated[_i0] = 0;
          }
          int benchRet = is_ch_eq_done(ln_count,dpcd_lane_status,lane_status_updated);
          printf("%d\n", benchRet); 
          free(dpcd_lane_status);
          free(lane_status_updated);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum dc_lane_count ln_count = 0;
          int _len_dpcd_lane_status0 = 65025;
          union lane_status * dpcd_lane_status = (union lane_status *) malloc(_len_dpcd_lane_status0*sizeof(union lane_status));
          for(int _i0 = 0; _i0 < _len_dpcd_lane_status0; _i0++) {
            dpcd_lane_status[_i0] = 0;
          }
          int _len_lane_status_updated0 = 65025;
          union lane_align_status_updated * lane_status_updated = (union lane_align_status_updated *) malloc(_len_lane_status_updated0*sizeof(union lane_align_status_updated));
          for(int _i0 = 0; _i0 < _len_lane_status_updated0; _i0++) {
            lane_status_updated[_i0] = 0;
          }
          int benchRet = is_ch_eq_done(ln_count,dpcd_lane_status,lane_status_updated);
          printf("%d\n", benchRet); 
          free(dpcd_lane_status);
          free(lane_status_updated);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum dc_lane_count ln_count = 0;
          int _len_dpcd_lane_status0 = 100;
          union lane_status * dpcd_lane_status = (union lane_status *) malloc(_len_dpcd_lane_status0*sizeof(union lane_status));
          for(int _i0 = 0; _i0 < _len_dpcd_lane_status0; _i0++) {
            dpcd_lane_status[_i0] = 0;
          }
          int _len_lane_status_updated0 = 100;
          union lane_align_status_updated * lane_status_updated = (union lane_align_status_updated *) malloc(_len_lane_status_updated0*sizeof(union lane_align_status_updated));
          for(int _i0 = 0; _i0 < _len_lane_status_updated0; _i0++) {
            lane_status_updated[_i0] = 0;
          }
          int benchRet = is_ch_eq_done(ln_count,dpcd_lane_status,lane_status_updated);
          printf("%d\n", benchRet); 
          free(dpcd_lane_status);
          free(lane_status_updated);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

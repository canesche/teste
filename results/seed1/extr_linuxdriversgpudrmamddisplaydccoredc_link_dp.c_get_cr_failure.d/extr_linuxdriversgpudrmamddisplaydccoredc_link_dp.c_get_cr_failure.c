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
struct TYPE_2__ {int /*<<< orphan*/  CR_DONE_0; } ;
union lane_status {TYPE_1__ bits; } ;
typedef  enum link_training_result { ____Placeholder_link_training_result } link_training_result ;
typedef  enum dc_lane_count { ____Placeholder_dc_lane_count } dc_lane_count ;

/* Variables and functions */
 int LANE_COUNT_FOUR ; 
 int LANE_COUNT_ONE ; 
 int LANE_COUNT_TWO ; 
 int LINK_TRAINING_CR_FAIL_LANE0 ; 
 int LINK_TRAINING_CR_FAIL_LANE1 ; 
 int LINK_TRAINING_CR_FAIL_LANE23 ; 
 int LINK_TRAINING_SUCCESS ; 

__attribute__((used)) static enum link_training_result get_cr_failure(enum dc_lane_count ln_count,
					union lane_status *dpcd_lane_status)
{
	enum link_training_result result = LINK_TRAINING_SUCCESS;

	if (ln_count >= LANE_COUNT_ONE && !dpcd_lane_status[0].bits.CR_DONE_0)
		result = LINK_TRAINING_CR_FAIL_LANE0;
	else if (ln_count >= LANE_COUNT_TWO && !dpcd_lane_status[1].bits.CR_DONE_0)
		result = LINK_TRAINING_CR_FAIL_LANE1;
	else if (ln_count >= LANE_COUNT_FOUR && !dpcd_lane_status[2].bits.CR_DONE_0)
		result = LINK_TRAINING_CR_FAIL_LANE23;
	else if (ln_count >= LANE_COUNT_FOUR && !dpcd_lane_status[3].bits.CR_DONE_0)
		result = LINK_TRAINING_CR_FAIL_LANE23;
	return result;
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
          enum link_training_result benchRet = get_cr_failure(ln_count,dpcd_lane_status);
          free(dpcd_lane_status);
        
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
          enum link_training_result benchRet = get_cr_failure(ln_count,dpcd_lane_status);
          free(dpcd_lane_status);
        
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
          enum link_training_result benchRet = get_cr_failure(ln_count,dpcd_lane_status);
          free(dpcd_lane_status);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

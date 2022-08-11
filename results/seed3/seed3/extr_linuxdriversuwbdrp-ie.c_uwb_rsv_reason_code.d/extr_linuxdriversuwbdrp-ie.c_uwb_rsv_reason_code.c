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
struct uwb_rsv {size_t state; } ;

/* Variables and functions */
#define  UWB_DRP_REASON_ACCEPTED 149 
#define  UWB_DRP_REASON_CONFLICT 148 
#define  UWB_DRP_REASON_DENIED 147 
#define  UWB_DRP_REASON_MODIFIED 146 
#define  UWB_DRP_REASON_PENDING 145 
#define  UWB_RSV_STATE_O_ESTABLISHED 144 
#define  UWB_RSV_STATE_O_INITIATED 143 
#define  UWB_RSV_STATE_O_MODIFIED 142 
#define  UWB_RSV_STATE_O_MOVE_COMBINING 141 
#define  UWB_RSV_STATE_O_MOVE_EXPANDING 140 
#define  UWB_RSV_STATE_O_MOVE_REDUCING 139 
#define  UWB_RSV_STATE_O_PENDING 138 
#define  UWB_RSV_STATE_O_TO_BE_MOVED 137 
#define  UWB_RSV_STATE_T_ACCEPTED 136 
#define  UWB_RSV_STATE_T_CONFLICT 135 
#define  UWB_RSV_STATE_T_DENIED 134 
#define  UWB_RSV_STATE_T_EXPANDING_ACCEPTED 133 
#define  UWB_RSV_STATE_T_EXPANDING_CONFLICT 132 
#define  UWB_RSV_STATE_T_EXPANDING_DENIED 131 
#define  UWB_RSV_STATE_T_EXPANDING_PENDING 130 
#define  UWB_RSV_STATE_T_PENDING 129 
#define  UWB_RSV_STATE_T_RESIZED 128 

__attribute__((used)) static int uwb_rsv_reason_code(struct uwb_rsv *rsv)
{
	static const int reason_codes[] = {
		[UWB_RSV_STATE_O_INITIATED]          = UWB_DRP_REASON_ACCEPTED,
		[UWB_RSV_STATE_O_PENDING]            = UWB_DRP_REASON_ACCEPTED,
		[UWB_RSV_STATE_O_MODIFIED]           = UWB_DRP_REASON_MODIFIED,
		[UWB_RSV_STATE_O_ESTABLISHED]        = UWB_DRP_REASON_ACCEPTED,
		[UWB_RSV_STATE_O_TO_BE_MOVED]        = UWB_DRP_REASON_ACCEPTED,
		[UWB_RSV_STATE_O_MOVE_COMBINING]     = UWB_DRP_REASON_MODIFIED,
		[UWB_RSV_STATE_O_MOVE_REDUCING]      = UWB_DRP_REASON_MODIFIED,
		[UWB_RSV_STATE_O_MOVE_EXPANDING]     = UWB_DRP_REASON_ACCEPTED,
		[UWB_RSV_STATE_T_ACCEPTED]           = UWB_DRP_REASON_ACCEPTED,
		[UWB_RSV_STATE_T_CONFLICT]           = UWB_DRP_REASON_CONFLICT,
		[UWB_RSV_STATE_T_PENDING]            = UWB_DRP_REASON_PENDING,
		[UWB_RSV_STATE_T_DENIED]             = UWB_DRP_REASON_DENIED,
		[UWB_RSV_STATE_T_RESIZED]            = UWB_DRP_REASON_ACCEPTED,
		[UWB_RSV_STATE_T_EXPANDING_ACCEPTED] = UWB_DRP_REASON_ACCEPTED,
		[UWB_RSV_STATE_T_EXPANDING_CONFLICT] = UWB_DRP_REASON_CONFLICT,
		[UWB_RSV_STATE_T_EXPANDING_PENDING]  = UWB_DRP_REASON_PENDING,
		[UWB_RSV_STATE_T_EXPANDING_DENIED]   = UWB_DRP_REASON_DENIED,
	};

	return reason_codes[rsv->state];
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
          int _len_rsv0 = 1;
          struct uwb_rsv * rsv = (struct uwb_rsv *) malloc(_len_rsv0*sizeof(struct uwb_rsv));
          for(int _i0 = 0; _i0 < _len_rsv0; _i0++) {
            rsv[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uwb_rsv_reason_code(rsv);
          printf("%d\n", benchRet); 
          free(rsv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_rsv0 = 65025;
          struct uwb_rsv * rsv = (struct uwb_rsv *) malloc(_len_rsv0*sizeof(struct uwb_rsv));
          for(int _i0 = 0; _i0 < _len_rsv0; _i0++) {
            rsv[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uwb_rsv_reason_code(rsv);
          printf("%d\n", benchRet); 
          free(rsv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_rsv0 = 100;
          struct uwb_rsv * rsv = (struct uwb_rsv *) malloc(_len_rsv0*sizeof(struct uwb_rsv));
          for(int _i0 = 0; _i0 < _len_rsv0; _i0++) {
            rsv[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uwb_rsv_reason_code(rsv);
          printf("%d\n", benchRet); 
          free(rsv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ frame_idx; scalar_t__* field_order_cnt; void* bottom_is_reference; void* top_is_reference; void* is_long_term; int /*<<< orphan*/  surface; } ;
typedef  TYPE_1__ VdpReferenceFrameH264 ;

/* Variables and functions */
 void* VDP_FALSE ; 
 int /*<<< orphan*/  VDP_INVALID_HANDLE ; 

__attribute__((used)) static void vdpau_h264_clear_rf(VdpReferenceFrameH264 *rf)
{
    rf->surface             = VDP_INVALID_HANDLE;
    rf->is_long_term        = VDP_FALSE;
    rf->top_is_reference    = VDP_FALSE;
    rf->bottom_is_reference = VDP_FALSE;
    rf->field_order_cnt[0]  = 0;
    rf->field_order_cnt[1]  = 0;
    rf->frame_idx           = 0;
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
          int _len_rf0 = 1;
          struct TYPE_3__ * rf = (struct TYPE_3__ *) malloc(_len_rf0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_rf0; _i0++) {
            rf[_i0].frame_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rf__i0__field_order_cnt0 = 1;
          rf[_i0].field_order_cnt = (long *) malloc(_len_rf__i0__field_order_cnt0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_rf__i0__field_order_cnt0; _j0++) {
            rf[_i0].field_order_cnt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        rf[_i0].surface = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vdpau_h264_clear_rf(rf);
          for(int _aux = 0; _aux < _len_rf0; _aux++) {
          free(rf[_aux].field_order_cnt);
          }
          free(rf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_rf0 = 65025;
          struct TYPE_3__ * rf = (struct TYPE_3__ *) malloc(_len_rf0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_rf0; _i0++) {
            rf[_i0].frame_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rf__i0__field_order_cnt0 = 1;
          rf[_i0].field_order_cnt = (long *) malloc(_len_rf__i0__field_order_cnt0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_rf__i0__field_order_cnt0; _j0++) {
            rf[_i0].field_order_cnt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        rf[_i0].surface = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vdpau_h264_clear_rf(rf);
          for(int _aux = 0; _aux < _len_rf0; _aux++) {
          free(rf[_aux].field_order_cnt);
          }
          free(rf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_rf0 = 100;
          struct TYPE_3__ * rf = (struct TYPE_3__ *) malloc(_len_rf0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_rf0; _i0++) {
            rf[_i0].frame_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rf__i0__field_order_cnt0 = 1;
          rf[_i0].field_order_cnt = (long *) malloc(_len_rf__i0__field_order_cnt0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_rf__i0__field_order_cnt0; _j0++) {
            rf[_i0].field_order_cnt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        rf[_i0].surface = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vdpau_h264_clear_rf(rf);
          for(int _aux = 0; _aux < _len_rf0; _aux++) {
          free(rf[_aux].field_order_cnt);
          }
          free(rf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

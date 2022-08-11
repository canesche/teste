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
typedef  int u32 ;
struct mxsfb_drm_private {TYPE_1__* devdata; } ;
struct TYPE_2__ {int hs_wdth_mask; int hs_wdth_shift; } ;

/* Variables and functions */

__attribute__((used)) static u32 set_hsync_pulse_width(struct mxsfb_drm_private *mxsfb, u32 val)
{
	return (val & mxsfb->devdata->hs_wdth_mask) <<
		mxsfb->devdata->hs_wdth_shift;
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
          int val = 100;
          int _len_mxsfb0 = 1;
          struct mxsfb_drm_private * mxsfb = (struct mxsfb_drm_private *) malloc(_len_mxsfb0*sizeof(struct mxsfb_drm_private));
          for(int _i0 = 0; _i0 < _len_mxsfb0; _i0++) {
              int _len_mxsfb__i0__devdata0 = 1;
          mxsfb[_i0].devdata = (struct TYPE_2__ *) malloc(_len_mxsfb__i0__devdata0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mxsfb__i0__devdata0; _j0++) {
            mxsfb[_i0].devdata->hs_wdth_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        mxsfb[_i0].devdata->hs_wdth_shift = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = set_hsync_pulse_width(mxsfb,val);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mxsfb0; _aux++) {
          free(mxsfb[_aux].devdata);
          }
          free(mxsfb);
        
        break;
    }
    // big-arr
    case 1:
    {
          int val = 255;
          int _len_mxsfb0 = 65025;
          struct mxsfb_drm_private * mxsfb = (struct mxsfb_drm_private *) malloc(_len_mxsfb0*sizeof(struct mxsfb_drm_private));
          for(int _i0 = 0; _i0 < _len_mxsfb0; _i0++) {
              int _len_mxsfb__i0__devdata0 = 1;
          mxsfb[_i0].devdata = (struct TYPE_2__ *) malloc(_len_mxsfb__i0__devdata0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mxsfb__i0__devdata0; _j0++) {
            mxsfb[_i0].devdata->hs_wdth_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        mxsfb[_i0].devdata->hs_wdth_shift = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = set_hsync_pulse_width(mxsfb,val);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mxsfb0; _aux++) {
          free(mxsfb[_aux].devdata);
          }
          free(mxsfb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int val = 10;
          int _len_mxsfb0 = 100;
          struct mxsfb_drm_private * mxsfb = (struct mxsfb_drm_private *) malloc(_len_mxsfb0*sizeof(struct mxsfb_drm_private));
          for(int _i0 = 0; _i0 < _len_mxsfb0; _i0++) {
              int _len_mxsfb__i0__devdata0 = 1;
          mxsfb[_i0].devdata = (struct TYPE_2__ *) malloc(_len_mxsfb__i0__devdata0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mxsfb__i0__devdata0; _j0++) {
            mxsfb[_i0].devdata->hs_wdth_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        mxsfb[_i0].devdata->hs_wdth_shift = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = set_hsync_pulse_width(mxsfb,val);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mxsfb0; _aux++) {
          free(mxsfb[_aux].devdata);
          }
          free(mxsfb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

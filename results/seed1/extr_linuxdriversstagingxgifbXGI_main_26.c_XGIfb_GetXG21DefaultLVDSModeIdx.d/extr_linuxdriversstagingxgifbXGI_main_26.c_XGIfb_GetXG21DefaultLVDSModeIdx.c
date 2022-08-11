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
struct TYPE_3__ {scalar_t__ LVDSHDE; scalar_t__ LVDSVDE; } ;
struct xgifb_video_info {TYPE_1__ lvds_data; } ;
struct TYPE_4__ {scalar_t__ mode_no; scalar_t__ xres; scalar_t__ yres; int bpp; } ;

/* Variables and functions */
 TYPE_2__* XGIbios_mode ; 

__attribute__((used)) static int XGIfb_GetXG21DefaultLVDSModeIdx(struct xgifb_video_info *xgifb_info)
{
	int i = 0;

	while ((XGIbios_mode[i].mode_no != 0) &&
	       (XGIbios_mode[i].xres <= xgifb_info->lvds_data.LVDSHDE)) {
		if ((XGIbios_mode[i].xres == xgifb_info->lvds_data.LVDSHDE) &&
		    (XGIbios_mode[i].yres == xgifb_info->lvds_data.LVDSVDE) &&
		    (XGIbios_mode[i].bpp == 8)) {
			return i;
		}
		i++;
	}

	return -1;
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
          int _len_xgifb_info0 = 1;
          struct xgifb_video_info * xgifb_info = (struct xgifb_video_info *) malloc(_len_xgifb_info0*sizeof(struct xgifb_video_info));
          for(int _i0 = 0; _i0 < _len_xgifb_info0; _i0++) {
            xgifb_info[_i0].lvds_data.LVDSHDE = ((-2 * (next_i()%2)) + 1) * next_i();
        xgifb_info[_i0].lvds_data.LVDSVDE = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = XGIfb_GetXG21DefaultLVDSModeIdx(xgifb_info);
          printf("%d\n", benchRet); 
          free(xgifb_info);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_xgifb_info0 = 65025;
          struct xgifb_video_info * xgifb_info = (struct xgifb_video_info *) malloc(_len_xgifb_info0*sizeof(struct xgifb_video_info));
          for(int _i0 = 0; _i0 < _len_xgifb_info0; _i0++) {
            xgifb_info[_i0].lvds_data.LVDSHDE = ((-2 * (next_i()%2)) + 1) * next_i();
        xgifb_info[_i0].lvds_data.LVDSVDE = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = XGIfb_GetXG21DefaultLVDSModeIdx(xgifb_info);
          printf("%d\n", benchRet); 
          free(xgifb_info);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_xgifb_info0 = 100;
          struct xgifb_video_info * xgifb_info = (struct xgifb_video_info *) malloc(_len_xgifb_info0*sizeof(struct xgifb_video_info));
          for(int _i0 = 0; _i0 < _len_xgifb_info0; _i0++) {
            xgifb_info[_i0].lvds_data.LVDSHDE = ((-2 * (next_i()%2)) + 1) * next_i();
        xgifb_info[_i0].lvds_data.LVDSVDE = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = XGIfb_GetXG21DefaultLVDSModeIdx(xgifb_info);
          printf("%d\n", benchRet); 
          free(xgifb_info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

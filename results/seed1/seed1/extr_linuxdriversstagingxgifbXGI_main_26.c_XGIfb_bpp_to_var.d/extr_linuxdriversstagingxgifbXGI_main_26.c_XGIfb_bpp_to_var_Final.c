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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct xgifb_video_info {int video_cmap_len; } ;
struct TYPE_8__ {int offset; int length; } ;
struct TYPE_7__ {int length; int /*<<< orphan*/  offset; } ;
struct TYPE_6__ {int offset; int length; } ;
struct TYPE_5__ {int offset; int length; } ;
struct fb_var_screeninfo {int bits_per_pixel; TYPE_4__ transp; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; } ;

/* Variables and functions */

__attribute__((used)) static void XGIfb_bpp_to_var(struct xgifb_video_info *xgifb_info,
			     struct fb_var_screeninfo *var)
{
	switch (var->bits_per_pixel) {
	case 8:
		var->red.offset = 0;
		var->green.offset = 0;
		var->blue.offset = 0;
		var->red.length = 6;
		var->green.length = 6;
		var->blue.length = 6;
		xgifb_info->video_cmap_len = 256;
		break;
	case 16:
		var->red.offset = 11;
		var->red.length = 5;
		var->green.offset = 5;
		var->green.length = 6;
		var->blue.offset = 0;
		var->blue.length = 5;
		var->transp.offset = 0;
		var->transp.length = 0;
		xgifb_info->video_cmap_len = 16;
		break;
	case 32:
		var->red.offset = 16;
		var->red.length = 8;
		var->green.offset = 8;
		var->green.length = 8;
		var->blue.offset = 0;
		var->blue.length = 8;
		var->transp.offset = 24;
		var->transp.length = 8;
		xgifb_info->video_cmap_len = 16;
		break;
	}
}


// ------------------------------------------------------------------------- //




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
            xgifb_info[_i0].video_cmap_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_var0 = 1;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].transp.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].transp.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].blue.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].blue.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].green.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].green.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].red.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].red.length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          XGIfb_bpp_to_var(xgifb_info,var);
          free(xgifb_info);
          free(var);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_xgifb_info0 = 65025;
          struct xgifb_video_info * xgifb_info = (struct xgifb_video_info *) malloc(_len_xgifb_info0*sizeof(struct xgifb_video_info));
          for(int _i0 = 0; _i0 < _len_xgifb_info0; _i0++) {
            xgifb_info[_i0].video_cmap_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_var0 = 65025;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].transp.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].transp.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].blue.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].blue.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].green.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].green.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].red.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].red.length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          XGIfb_bpp_to_var(xgifb_info,var);
          free(xgifb_info);
          free(var);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_xgifb_info0 = 100;
          struct xgifb_video_info * xgifb_info = (struct xgifb_video_info *) malloc(_len_xgifb_info0*sizeof(struct xgifb_video_info));
          for(int _i0 = 0; _i0 < _len_xgifb_info0; _i0++) {
            xgifb_info[_i0].video_cmap_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_var0 = 100;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].transp.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].transp.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].blue.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].blue.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].green.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].green.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].red.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].red.length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          XGIfb_bpp_to_var(xgifb_info,var);
          free(xgifb_info);
          free(var);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

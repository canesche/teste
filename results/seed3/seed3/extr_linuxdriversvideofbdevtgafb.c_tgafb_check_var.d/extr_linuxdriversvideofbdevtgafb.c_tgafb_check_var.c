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
struct tga_par {scalar_t__ tga_type; } ;
struct TYPE_7__ {int length; scalar_t__ offset; } ;
struct TYPE_6__ {int length; int offset; } ;
struct TYPE_5__ {int length; int offset; } ;
struct fb_var_screeninfo {int bits_per_pixel; int xres_virtual; int xres; int yres_virtual; int yres; int pixclock; int vmode; scalar_t__ nonstd; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; } ;
struct TYPE_8__ {int smem_len; } ;
struct fb_info {TYPE_4__ fix; scalar_t__ par; } ;

/* Variables and functions */
 int EINVAL ; 
 int FB_VMODE_MASK ; 
 int FB_VMODE_NONINTERLACED ; 
 int TGA_PLL_MAX_FREQ ; 
 scalar_t__ TGA_TYPE_8PLANE ; 

__attribute__((used)) static int
tgafb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
{
	struct tga_par *par = (struct tga_par *)info->par;

	if (par->tga_type == TGA_TYPE_8PLANE) {
		if (var->bits_per_pixel != 8)
			return -EINVAL;
	} else {
		if (var->bits_per_pixel != 32)
			return -EINVAL;
	}
	var->red.length = var->green.length = var->blue.length = 8;
	if (var->bits_per_pixel == 32) {
		var->red.offset = 16;
		var->green.offset = 8;
		var->blue.offset = 0;
	}

	if (var->xres_virtual != var->xres || var->yres_virtual != var->yres)
		return -EINVAL;
	if (var->xres * var->yres * (var->bits_per_pixel >> 3) > info->fix.smem_len)
		return -EINVAL;
	if (var->nonstd)
		return -EINVAL;
	if (1000000000 / var->pixclock > TGA_PLL_MAX_FREQ)
		return -EINVAL;
	if ((var->vmode & FB_VMODE_MASK) != FB_VMODE_NONINTERLACED)
		return -EINVAL;

	/* Some of the acceleration routines assume the line width is
	   a multiple of 8 bytes.  */
	if (var->xres * (par->tga_type == TGA_TYPE_8PLANE ? 1 : 4) % 8)
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
          int _len_var0 = 1;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].xres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].xres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].yres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].yres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].pixclock = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].vmode = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].nonstd = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].blue.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].blue.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].green.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].green.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].red.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].red.offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info0 = 1;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].fix.smem_len = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].par = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tgafb_check_var(var,info);
          printf("%d\n", benchRet); 
          free(var);
          free(info);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_var0 = 65025;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].xres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].xres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].yres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].yres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].pixclock = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].vmode = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].nonstd = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].blue.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].blue.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].green.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].green.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].red.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].red.offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info0 = 65025;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].fix.smem_len = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].par = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tgafb_check_var(var,info);
          printf("%d\n", benchRet); 
          free(var);
          free(info);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_var0 = 100;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].xres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].xres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].yres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].yres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].pixclock = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].vmode = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].nonstd = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].blue.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].blue.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].green.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].green.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].red.length = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].red.offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info0 = 100;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].fix.smem_len = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].par = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tgafb_check_var(var,info);
          printf("%d\n", benchRet); 
          free(var);
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

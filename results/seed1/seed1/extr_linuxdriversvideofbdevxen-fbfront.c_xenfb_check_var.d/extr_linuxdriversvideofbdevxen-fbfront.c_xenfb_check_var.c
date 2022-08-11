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
struct xenfb_info {TYPE_1__* page; int /*<<< orphan*/  feature_resize; } ;
struct fb_var_screeninfo {int xres; int yres; int bits_per_pixel; int xres_virtual; int yres_virtual; } ;
struct TYPE_4__ {int line_length; int smem_len; } ;
struct fb_info {TYPE_2__ fix; struct xenfb_info* par; } ;
struct TYPE_3__ {int depth; } ;

/* Variables and functions */
 int EINVAL ; 
 size_t KPARAM_HEIGHT ; 
 size_t KPARAM_WIDTH ; 
 int XENFB_DEPTH ; 
 int* video ; 

__attribute__((used)) static int
xenfb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
{
	struct xenfb_info *xenfb_info;
	int required_mem_len;

	xenfb_info = info->par;

	if (!xenfb_info->feature_resize) {
		if (var->xres == video[KPARAM_WIDTH] &&
		    var->yres == video[KPARAM_HEIGHT] &&
		    var->bits_per_pixel == xenfb_info->page->depth) {
			return 0;
		}
		return -EINVAL;
	}

	/* Can't resize past initial width and height */
	if (var->xres > video[KPARAM_WIDTH] || var->yres > video[KPARAM_HEIGHT])
		return -EINVAL;

	required_mem_len = var->xres * var->yres * xenfb_info->page->depth / 8;
	if (var->bits_per_pixel == xenfb_info->page->depth &&
	    var->xres <= info->fix.line_length / (XENFB_DEPTH / 8) &&
	    required_mem_len <= info->fix.smem_len) {
		var->xres_virtual = var->xres;
		var->yres_virtual = var->yres;
		return 0;
	}
	return -EINVAL;
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
            var[_i0].xres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].yres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].xres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].yres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info0 = 1;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].fix.line_length = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].fix.smem_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__par0 = 1;
          info[_i0].par = (struct xenfb_info *) malloc(_len_info__i0__par0*sizeof(struct xenfb_info));
          for(int _j0 = 0; _j0 < _len_info__i0__par0; _j0++) {
              int _len_info__i0__par_page0 = 1;
          info[_i0].par->page = (struct TYPE_3__ *) malloc(_len_info__i0__par_page0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_info__i0__par_page0; _j0++) {
            info[_i0].par->page->depth = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        info[_i0].par->feature_resize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = xenfb_check_var(var,info);
          printf("%d\n", benchRet); 
          free(var);
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].par);
          }
          free(info);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_var0 = 65025;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].xres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].yres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].xres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].yres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info0 = 65025;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].fix.line_length = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].fix.smem_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__par0 = 1;
          info[_i0].par = (struct xenfb_info *) malloc(_len_info__i0__par0*sizeof(struct xenfb_info));
          for(int _j0 = 0; _j0 < _len_info__i0__par0; _j0++) {
              int _len_info__i0__par_page0 = 1;
          info[_i0].par->page = (struct TYPE_3__ *) malloc(_len_info__i0__par_page0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_info__i0__par_page0; _j0++) {
            info[_i0].par->page->depth = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        info[_i0].par->feature_resize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = xenfb_check_var(var,info);
          printf("%d\n", benchRet); 
          free(var);
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].par);
          }
          free(info);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_var0 = 100;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].xres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].yres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].xres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].yres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info0 = 100;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].fix.line_length = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].fix.smem_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__par0 = 1;
          info[_i0].par = (struct xenfb_info *) malloc(_len_info__i0__par0*sizeof(struct xenfb_info));
          for(int _j0 = 0; _j0 < _len_info__i0__par0; _j0++) {
              int _len_info__i0__par_page0 = 1;
          info[_i0].par->page = (struct TYPE_3__ *) malloc(_len_info__i0__par_page0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_info__i0__par_page0; _j0++) {
            info[_i0].par->page->depth = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        info[_i0].par->feature_resize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = xenfb_check_var(var,info);
          printf("%d\n", benchRet); 
          free(var);
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].par);
          }
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

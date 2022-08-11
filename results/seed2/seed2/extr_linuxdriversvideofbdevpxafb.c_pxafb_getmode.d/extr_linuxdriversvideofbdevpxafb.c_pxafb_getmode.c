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
struct pxafb_mode_info {unsigned int xres; unsigned int yres; scalar_t__ bpp; } ;
struct pxafb_mach_info {unsigned int num_modes; struct pxafb_mode_info* modes; } ;
struct fb_var_screeninfo {unsigned int xres; unsigned int yres; scalar_t__ bits_per_pixel; } ;

/* Variables and functions */

__attribute__((used)) static struct pxafb_mode_info *pxafb_getmode(struct pxafb_mach_info *mach,
					     struct fb_var_screeninfo *var)
{
	struct pxafb_mode_info *mode = NULL;
	struct pxafb_mode_info *modelist = mach->modes;
	unsigned int best_x = 0xffffffff, best_y = 0xffffffff;
	unsigned int i;

	for (i = 0; i < mach->num_modes; i++) {
		if (modelist[i].xres >= var->xres &&
		    modelist[i].yres >= var->yres &&
		    modelist[i].xres < best_x &&
		    modelist[i].yres < best_y &&
		    modelist[i].bpp >= var->bits_per_pixel) {
			best_x = modelist[i].xres;
			best_y = modelist[i].yres;
			mode = &modelist[i];
		}
	}

	return mode;
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
          int _len_mach0 = 1;
          struct pxafb_mach_info * mach = (struct pxafb_mach_info *) malloc(_len_mach0*sizeof(struct pxafb_mach_info));
          for(int _i0 = 0; _i0 < _len_mach0; _i0++) {
            mach[_i0].num_modes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mach__i0__modes0 = 1;
          mach[_i0].modes = (struct pxafb_mode_info *) malloc(_len_mach__i0__modes0*sizeof(struct pxafb_mode_info));
          for(int _j0 = 0; _j0 < _len_mach__i0__modes0; _j0++) {
            mach[_i0].modes->xres = ((-2 * (next_i()%2)) + 1) * next_i();
        mach[_i0].modes->yres = ((-2 * (next_i()%2)) + 1) * next_i();
        mach[_i0].modes->bpp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_var0 = 1;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].xres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].yres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct pxafb_mode_info * benchRet = pxafb_getmode(mach,var);
          printf("%u\n", (*benchRet).xres);
          printf("%u\n", (*benchRet).yres);
          printf("%ld\n", (*benchRet).bpp);
          for(int _aux = 0; _aux < _len_mach0; _aux++) {
          free(mach[_aux].modes);
          }
          free(mach);
          free(var);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_mach0 = 65025;
          struct pxafb_mach_info * mach = (struct pxafb_mach_info *) malloc(_len_mach0*sizeof(struct pxafb_mach_info));
          for(int _i0 = 0; _i0 < _len_mach0; _i0++) {
            mach[_i0].num_modes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mach__i0__modes0 = 1;
          mach[_i0].modes = (struct pxafb_mode_info *) malloc(_len_mach__i0__modes0*sizeof(struct pxafb_mode_info));
          for(int _j0 = 0; _j0 < _len_mach__i0__modes0; _j0++) {
            mach[_i0].modes->xres = ((-2 * (next_i()%2)) + 1) * next_i();
        mach[_i0].modes->yres = ((-2 * (next_i()%2)) + 1) * next_i();
        mach[_i0].modes->bpp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_var0 = 65025;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].xres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].yres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct pxafb_mode_info * benchRet = pxafb_getmode(mach,var);
          printf("%u\n", (*benchRet).xres);
          printf("%u\n", (*benchRet).yres);
          printf("%ld\n", (*benchRet).bpp);
          for(int _aux = 0; _aux < _len_mach0; _aux++) {
          free(mach[_aux].modes);
          }
          free(mach);
          free(var);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_mach0 = 100;
          struct pxafb_mach_info * mach = (struct pxafb_mach_info *) malloc(_len_mach0*sizeof(struct pxafb_mach_info));
          for(int _i0 = 0; _i0 < _len_mach0; _i0++) {
            mach[_i0].num_modes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mach__i0__modes0 = 1;
          mach[_i0].modes = (struct pxafb_mode_info *) malloc(_len_mach__i0__modes0*sizeof(struct pxafb_mode_info));
          for(int _j0 = 0; _j0 < _len_mach__i0__modes0; _j0++) {
            mach[_i0].modes->xres = ((-2 * (next_i()%2)) + 1) * next_i();
        mach[_i0].modes->yres = ((-2 * (next_i()%2)) + 1) * next_i();
        mach[_i0].modes->bpp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_var0 = 100;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].xres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].yres = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct pxafb_mode_info * benchRet = pxafb_getmode(mach,var);
          printf("%u\n", (*benchRet).xres);
          printf("%u\n", (*benchRet).yres);
          printf("%ld\n", (*benchRet).bpp);
          for(int _aux = 0; _aux < _len_mach0; _aux++) {
          free(mach[_aux].modes);
          }
          free(mach);
          free(var);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

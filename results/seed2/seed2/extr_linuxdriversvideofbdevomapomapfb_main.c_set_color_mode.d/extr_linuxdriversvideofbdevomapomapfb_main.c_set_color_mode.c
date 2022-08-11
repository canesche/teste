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
struct omapfb_plane_struct {int color_mode; TYPE_2__* fbdev; } ;
struct fb_var_screeninfo {int nonstd; int bits_per_pixel; } ;
struct TYPE_4__ {TYPE_1__* panel; } ;
struct TYPE_3__ {int bpp; } ;

/* Variables and functions */
 int EINVAL ; 
 int OMAPFB_COLOR_CLUT_1BPP ; 
 int OMAPFB_COLOR_CLUT_2BPP ; 
 int OMAPFB_COLOR_CLUT_4BPP ; 
 int OMAPFB_COLOR_CLUT_8BPP ; 
 int OMAPFB_COLOR_RGB444 ; 
 int OMAPFB_COLOR_RGB565 ; 
#define  OMAPFB_COLOR_YUV420 130 
#define  OMAPFB_COLOR_YUV422 129 
#define  OMAPFB_COLOR_YUY422 128 

__attribute__((used)) static int set_color_mode(struct omapfb_plane_struct *plane,
			  struct fb_var_screeninfo *var)
{
	switch (var->nonstd) {
	case 0:
		break;
	case OMAPFB_COLOR_YUV422:
		var->bits_per_pixel = 16;
		plane->color_mode = var->nonstd;
		return 0;
	case OMAPFB_COLOR_YUV420:
		var->bits_per_pixel = 12;
		plane->color_mode = var->nonstd;
		return 0;
	case OMAPFB_COLOR_YUY422:
		var->bits_per_pixel = 16;
		plane->color_mode = var->nonstd;
		return 0;
	default:
		return -EINVAL;
	}

	switch (var->bits_per_pixel) {
	case 1:
		plane->color_mode = OMAPFB_COLOR_CLUT_1BPP;
		return 0;
	case 2:
		plane->color_mode = OMAPFB_COLOR_CLUT_2BPP;
		return 0;
	case 4:
		plane->color_mode = OMAPFB_COLOR_CLUT_4BPP;
		return 0;
	case 8:
		plane->color_mode = OMAPFB_COLOR_CLUT_8BPP;
		return 0;
	case 12:
		var->bits_per_pixel = 16;
	case 16:
		if (plane->fbdev->panel->bpp == 12)
			plane->color_mode = OMAPFB_COLOR_RGB444;
		else
			plane->color_mode = OMAPFB_COLOR_RGB565;
		return 0;
	default:
		return -EINVAL;
	}
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
          int _len_plane0 = 1;
          struct omapfb_plane_struct * plane = (struct omapfb_plane_struct *) malloc(_len_plane0*sizeof(struct omapfb_plane_struct));
          for(int _i0 = 0; _i0 < _len_plane0; _i0++) {
            plane[_i0].color_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_plane__i0__fbdev0 = 1;
          plane[_i0].fbdev = (struct TYPE_4__ *) malloc(_len_plane__i0__fbdev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_plane__i0__fbdev0; _j0++) {
              int _len_plane__i0__fbdev_panel0 = 1;
          plane[_i0].fbdev->panel = (struct TYPE_3__ *) malloc(_len_plane__i0__fbdev_panel0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_plane__i0__fbdev_panel0; _j0++) {
            plane[_i0].fbdev->panel->bpp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_var0 = 1;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].nonstd = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = set_color_mode(plane,var);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_plane0; _aux++) {
          free(plane[_aux].fbdev);
          }
          free(plane);
          free(var);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_plane0 = 65025;
          struct omapfb_plane_struct * plane = (struct omapfb_plane_struct *) malloc(_len_plane0*sizeof(struct omapfb_plane_struct));
          for(int _i0 = 0; _i0 < _len_plane0; _i0++) {
            plane[_i0].color_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_plane__i0__fbdev0 = 1;
          plane[_i0].fbdev = (struct TYPE_4__ *) malloc(_len_plane__i0__fbdev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_plane__i0__fbdev0; _j0++) {
              int _len_plane__i0__fbdev_panel0 = 1;
          plane[_i0].fbdev->panel = (struct TYPE_3__ *) malloc(_len_plane__i0__fbdev_panel0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_plane__i0__fbdev_panel0; _j0++) {
            plane[_i0].fbdev->panel->bpp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_var0 = 65025;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].nonstd = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = set_color_mode(plane,var);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_plane0; _aux++) {
          free(plane[_aux].fbdev);
          }
          free(plane);
          free(var);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_plane0 = 100;
          struct omapfb_plane_struct * plane = (struct omapfb_plane_struct *) malloc(_len_plane0*sizeof(struct omapfb_plane_struct));
          for(int _i0 = 0; _i0 < _len_plane0; _i0++) {
            plane[_i0].color_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_plane__i0__fbdev0 = 1;
          plane[_i0].fbdev = (struct TYPE_4__ *) malloc(_len_plane__i0__fbdev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_plane__i0__fbdev0; _j0++) {
              int _len_plane__i0__fbdev_panel0 = 1;
          plane[_i0].fbdev->panel = (struct TYPE_3__ *) malloc(_len_plane__i0__fbdev_panel0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_plane__i0__fbdev_panel0; _j0++) {
            plane[_i0].fbdev->panel->bpp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_var0 = 100;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].nonstd = ((-2 * (next_i()%2)) + 1) * next_i();
        var[_i0].bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = set_color_mode(plane,var);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_plane0; _aux++) {
          free(plane[_aux].fbdev);
          }
          free(plane);
          free(var);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

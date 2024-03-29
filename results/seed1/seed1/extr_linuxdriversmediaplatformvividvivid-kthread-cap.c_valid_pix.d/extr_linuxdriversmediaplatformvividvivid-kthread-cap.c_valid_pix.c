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
typedef  int u8 ;
struct TYPE_3__ {int width; } ;
struct vivid_dev {int* bitmap_cap; int clipcount_cap; TYPE_2__* clips_cap; TYPE_1__ compose_cap; } ;
struct v4l2_rect {int top; int height; int left; int width; } ;
struct TYPE_4__ {struct v4l2_rect c; } ;

/* Variables and functions */

__attribute__((used)) static bool valid_pix(struct vivid_dev *dev, int win_y, int win_x, int fb_y, int fb_x)
{
	int i;

	if (dev->bitmap_cap) {
		/*
		 * Only if the corresponding bit in the bitmap is set can
		 * the video pixel be shown. Coordinates are relative to
		 * the overlay window set by VIDIOC_S_FMT.
		 */
		const u8 *p = dev->bitmap_cap;
		unsigned stride = (dev->compose_cap.width + 7) / 8;

		if (!(p[stride * win_y + win_x / 8] & (1 << (win_x & 7))))
			return false;
	}

	for (i = 0; i < dev->clipcount_cap; i++) {
		/*
		 * Only if the framebuffer coordinate is not in any of the
		 * clip rectangles will be video pixel be shown.
		 */
		struct v4l2_rect *r = &dev->clips_cap[i].c;

		if (fb_y >= r->top && fb_y < r->top + r->height &&
		    fb_x >= r->left && fb_x < r->left + r->width)
			return false;
	}
	return true;
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
          int win_y = 100;
          int win_x = 100;
          int fb_y = 100;
          int fb_x = 100;
          int _len_dev0 = 1;
          struct vivid_dev * dev = (struct vivid_dev *) malloc(_len_dev0*sizeof(struct vivid_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__bitmap_cap0 = 1;
          dev[_i0].bitmap_cap = (int *) malloc(_len_dev__i0__bitmap_cap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__bitmap_cap0; _j0++) {
            dev[_i0].bitmap_cap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dev[_i0].clipcount_cap = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__clips_cap0 = 1;
          dev[_i0].clips_cap = (struct TYPE_4__ *) malloc(_len_dev__i0__clips_cap0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dev__i0__clips_cap0; _j0++) {
            dev[_i0].clips_cap->c.top = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].clips_cap->c.height = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].clips_cap->c.left = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].clips_cap->c.width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dev[_i0].compose_cap.width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = valid_pix(dev,win_y,win_x,fb_y,fb_x);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].bitmap_cap);
          }
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].clips_cap);
          }
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int win_y = 255;
          int win_x = 255;
          int fb_y = 255;
          int fb_x = 255;
          int _len_dev0 = 65025;
          struct vivid_dev * dev = (struct vivid_dev *) malloc(_len_dev0*sizeof(struct vivid_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__bitmap_cap0 = 1;
          dev[_i0].bitmap_cap = (int *) malloc(_len_dev__i0__bitmap_cap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__bitmap_cap0; _j0++) {
            dev[_i0].bitmap_cap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dev[_i0].clipcount_cap = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__clips_cap0 = 1;
          dev[_i0].clips_cap = (struct TYPE_4__ *) malloc(_len_dev__i0__clips_cap0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dev__i0__clips_cap0; _j0++) {
            dev[_i0].clips_cap->c.top = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].clips_cap->c.height = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].clips_cap->c.left = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].clips_cap->c.width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dev[_i0].compose_cap.width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = valid_pix(dev,win_y,win_x,fb_y,fb_x);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].bitmap_cap);
          }
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].clips_cap);
          }
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int win_y = 10;
          int win_x = 10;
          int fb_y = 10;
          int fb_x = 10;
          int _len_dev0 = 100;
          struct vivid_dev * dev = (struct vivid_dev *) malloc(_len_dev0*sizeof(struct vivid_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__bitmap_cap0 = 1;
          dev[_i0].bitmap_cap = (int *) malloc(_len_dev__i0__bitmap_cap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__bitmap_cap0; _j0++) {
            dev[_i0].bitmap_cap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dev[_i0].clipcount_cap = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__clips_cap0 = 1;
          dev[_i0].clips_cap = (struct TYPE_4__ *) malloc(_len_dev__i0__clips_cap0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dev__i0__clips_cap0; _j0++) {
            dev[_i0].clips_cap->c.top = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].clips_cap->c.height = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].clips_cap->c.left = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].clips_cap->c.width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dev[_i0].compose_cap.width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = valid_pix(dev,win_y,win_x,fb_y,fb_x);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].bitmap_cap);
          }
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].clips_cap);
          }
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

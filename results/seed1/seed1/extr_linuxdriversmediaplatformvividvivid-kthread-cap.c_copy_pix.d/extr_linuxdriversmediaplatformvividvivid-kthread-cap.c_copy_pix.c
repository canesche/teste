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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int u8 ;
typedef  scalar_t__ u16 ;
struct TYPE_4__ {int width; scalar_t__ top; scalar_t__ left; } ;
struct vivid_dev {int overlay_out_left; int overlay_out_top; int* bitmap_out; int clipcount_out; int fbuf_out_flags; scalar_t__ const chromakey_out; TYPE_3__* fmt_cap; scalar_t__ global_alpha_out; TYPE_2__* clips_out; TYPE_1__ compose_out; } ;
struct v4l2_rect {int top; int height; int left; int width; } ;
struct TYPE_6__ {int alpha_mask; } ;
struct TYPE_5__ {struct v4l2_rect c; } ;

/* Variables and functions */
 int V4L2_FBUF_FLAG_CHROMAKEY ; 
 int V4L2_FBUF_FLAG_GLOBAL_ALPHA ; 
 int V4L2_FBUF_FLAG_LOCAL_ALPHA ; 
 int V4L2_FBUF_FLAG_LOCAL_INV_ALPHA ; 
 int V4L2_FBUF_FLAG_SRC_CHROMAKEY ; 

__attribute__((used)) static void copy_pix(struct vivid_dev *dev, int win_y, int win_x,
			u16 *cap, const u16 *osd)
{
	u16 out;
	int left = dev->overlay_out_left;
	int top = dev->overlay_out_top;
	int fb_x = win_x + left;
	int fb_y = win_y + top;
	int i;

	out = *cap;
	*cap = *osd;
	if (dev->bitmap_out) {
		const u8 *p = dev->bitmap_out;
		unsigned stride = (dev->compose_out.width + 7) / 8;

		win_x -= dev->compose_out.left;
		win_y -= dev->compose_out.top;
		if (!(p[stride * win_y + win_x / 8] & (1 << (win_x & 7))))
			return;
	}

	for (i = 0; i < dev->clipcount_out; i++) {
		struct v4l2_rect *r = &dev->clips_out[i].c;

		if (fb_y >= r->top && fb_y < r->top + r->height &&
		    fb_x >= r->left && fb_x < r->left + r->width)
			return;
	}
	if ((dev->fbuf_out_flags & V4L2_FBUF_FLAG_CHROMAKEY) &&
	    *osd != dev->chromakey_out)
		return;
	if ((dev->fbuf_out_flags & V4L2_FBUF_FLAG_SRC_CHROMAKEY) &&
	    out == dev->chromakey_out)
		return;
	if (dev->fmt_cap->alpha_mask) {
		if ((dev->fbuf_out_flags & V4L2_FBUF_FLAG_GLOBAL_ALPHA) &&
		    dev->global_alpha_out)
			return;
		if ((dev->fbuf_out_flags & V4L2_FBUF_FLAG_LOCAL_ALPHA) &&
		    *cap & dev->fmt_cap->alpha_mask)
			return;
		if ((dev->fbuf_out_flags & V4L2_FBUF_FLAG_LOCAL_INV_ALPHA) &&
		    !(*cap & dev->fmt_cap->alpha_mask))
			return;
	}
	*cap = out;
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
          int _len_dev0 = 1;
          struct vivid_dev * dev = (struct vivid_dev *) malloc(_len_dev0*sizeof(struct vivid_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].overlay_out_left = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].overlay_out_top = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__bitmap_out0 = 1;
          dev[_i0].bitmap_out = (int *) malloc(_len_dev__i0__bitmap_out0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__bitmap_out0; _j0++) {
            dev[_i0].bitmap_out[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dev[_i0].clipcount_out = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].fbuf_out_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].chromakey_out = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__fmt_cap0 = 1;
          dev[_i0].fmt_cap = (struct TYPE_6__ *) malloc(_len_dev__i0__fmt_cap0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_dev__i0__fmt_cap0; _j0++) {
            dev[_i0].fmt_cap->alpha_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dev[_i0].global_alpha_out = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__clips_out0 = 1;
          dev[_i0].clips_out = (struct TYPE_5__ *) malloc(_len_dev__i0__clips_out0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_dev__i0__clips_out0; _j0++) {
            dev[_i0].clips_out->c.top = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].clips_out->c.height = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].clips_out->c.left = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].clips_out->c.width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dev[_i0].compose_out.width = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].compose_out.top = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].compose_out.left = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cap0 = 1;
          long * cap = (long *) malloc(_len_cap0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_cap0; _i0++) {
            cap[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_osd0 = 1;
          const long * osd = (const long *) malloc(_len_osd0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_osd0; _i0++) {
            osd[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          copy_pix(dev,win_y,win_x,cap,osd);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].bitmap_out);
          }
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].fmt_cap);
          }
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].clips_out);
          }
          free(dev);
          free(cap);
          free(osd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int win_y = 255;
          int win_x = 255;
          int _len_dev0 = 65025;
          struct vivid_dev * dev = (struct vivid_dev *) malloc(_len_dev0*sizeof(struct vivid_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].overlay_out_left = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].overlay_out_top = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__bitmap_out0 = 1;
          dev[_i0].bitmap_out = (int *) malloc(_len_dev__i0__bitmap_out0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__bitmap_out0; _j0++) {
            dev[_i0].bitmap_out[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dev[_i0].clipcount_out = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].fbuf_out_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].chromakey_out = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__fmt_cap0 = 1;
          dev[_i0].fmt_cap = (struct TYPE_6__ *) malloc(_len_dev__i0__fmt_cap0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_dev__i0__fmt_cap0; _j0++) {
            dev[_i0].fmt_cap->alpha_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dev[_i0].global_alpha_out = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__clips_out0 = 1;
          dev[_i0].clips_out = (struct TYPE_5__ *) malloc(_len_dev__i0__clips_out0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_dev__i0__clips_out0; _j0++) {
            dev[_i0].clips_out->c.top = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].clips_out->c.height = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].clips_out->c.left = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].clips_out->c.width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dev[_i0].compose_out.width = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].compose_out.top = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].compose_out.left = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cap0 = 65025;
          long * cap = (long *) malloc(_len_cap0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_cap0; _i0++) {
            cap[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_osd0 = 65025;
          const long * osd = (const long *) malloc(_len_osd0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_osd0; _i0++) {
            osd[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          copy_pix(dev,win_y,win_x,cap,osd);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].bitmap_out);
          }
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].fmt_cap);
          }
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].clips_out);
          }
          free(dev);
          free(cap);
          free(osd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int win_y = 10;
          int win_x = 10;
          int _len_dev0 = 100;
          struct vivid_dev * dev = (struct vivid_dev *) malloc(_len_dev0*sizeof(struct vivid_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].overlay_out_left = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].overlay_out_top = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__bitmap_out0 = 1;
          dev[_i0].bitmap_out = (int *) malloc(_len_dev__i0__bitmap_out0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__bitmap_out0; _j0++) {
            dev[_i0].bitmap_out[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dev[_i0].clipcount_out = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].fbuf_out_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].chromakey_out = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__fmt_cap0 = 1;
          dev[_i0].fmt_cap = (struct TYPE_6__ *) malloc(_len_dev__i0__fmt_cap0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_dev__i0__fmt_cap0; _j0++) {
            dev[_i0].fmt_cap->alpha_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dev[_i0].global_alpha_out = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__clips_out0 = 1;
          dev[_i0].clips_out = (struct TYPE_5__ *) malloc(_len_dev__i0__clips_out0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_dev__i0__clips_out0; _j0++) {
            dev[_i0].clips_out->c.top = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].clips_out->c.height = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].clips_out->c.left = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].clips_out->c.width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dev[_i0].compose_out.width = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].compose_out.top = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].compose_out.left = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cap0 = 100;
          long * cap = (long *) malloc(_len_cap0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_cap0; _i0++) {
            cap[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_osd0 = 100;
          const long * osd = (const long *) malloc(_len_osd0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_osd0; _i0++) {
            osd[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          copy_pix(dev,win_y,win_x,cap,osd);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].bitmap_out);
          }
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].fmt_cap);
          }
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].clips_out);
          }
          free(dev);
          free(cap);
          free(osd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

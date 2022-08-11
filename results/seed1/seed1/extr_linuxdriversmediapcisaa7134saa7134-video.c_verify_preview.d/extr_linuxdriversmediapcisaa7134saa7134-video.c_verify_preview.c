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
struct TYPE_6__ {int width; int height; } ;
struct v4l2_window {int clipcount; int field; TYPE_3__ w; scalar_t__ global_alpha; scalar_t__ chromakey; } ;
struct TYPE_5__ {int width; int height; } ;
struct TYPE_4__ {int /*<<< orphan*/ * base; } ;
struct saa7134_dev {TYPE_2__ crop_current; int /*<<< orphan*/ * ovfmt; TYPE_1__ ovbuf; } ;
typedef  enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;

/* Variables and functions */
 int EINVAL ; 
 int V4L2_FIELD_ANY ; 
#define  V4L2_FIELD_BOTTOM 129 
 int V4L2_FIELD_INTERLACED ; 
#define  V4L2_FIELD_TOP 128 

__attribute__((used)) static int verify_preview(struct saa7134_dev *dev, struct v4l2_window *win, bool try)
{
	enum v4l2_field field;
	int maxw, maxh;

	if (!try && (dev->ovbuf.base == NULL || dev->ovfmt == NULL))
		return -EINVAL;
	if (win->w.width < 48)
		win->w.width = 48;
	if (win->w.height < 32)
		win->w.height = 32;
	if (win->clipcount > 8)
		win->clipcount = 8;

	win->chromakey = 0;
	win->global_alpha = 0;
	field = win->field;
	maxw  = dev->crop_current.width;
	maxh  = dev->crop_current.height;

	if (V4L2_FIELD_ANY == field) {
		field = (win->w.height > maxh/2)
			? V4L2_FIELD_INTERLACED
			: V4L2_FIELD_TOP;
	}
	switch (field) {
	case V4L2_FIELD_TOP:
	case V4L2_FIELD_BOTTOM:
		maxh = maxh / 2;
		break;
	default:
		field = V4L2_FIELD_INTERLACED;
		break;
	}

	win->field = field;
	if (win->w.width > maxw)
		win->w.width = maxw;
	if (win->w.height > maxh)
		win->w.height = maxh;
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
          int try = 100;
          int _len_dev0 = 1;
          struct saa7134_dev * dev = (struct saa7134_dev *) malloc(_len_dev0*sizeof(struct saa7134_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].crop_current.width = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].crop_current.height = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__ovfmt0 = 1;
          dev[_i0].ovfmt = (int *) malloc(_len_dev__i0__ovfmt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__ovfmt0; _j0++) {
            dev[_i0].ovfmt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__ovbuf_base0 = 1;
          dev[_i0].ovbuf.base = (int *) malloc(_len_dev__i0__ovbuf_base0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__ovbuf_base0; _j0++) {
            dev[_i0].ovbuf.base[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_win0 = 1;
          struct v4l2_window * win = (struct v4l2_window *) malloc(_len_win0*sizeof(struct v4l2_window));
          for(int _i0 = 0; _i0 < _len_win0; _i0++) {
            win[_i0].clipcount = ((-2 * (next_i()%2)) + 1) * next_i();
        win[_i0].field = ((-2 * (next_i()%2)) + 1) * next_i();
        win[_i0].w.width = ((-2 * (next_i()%2)) + 1) * next_i();
        win[_i0].w.height = ((-2 * (next_i()%2)) + 1) * next_i();
        win[_i0].global_alpha = ((-2 * (next_i()%2)) + 1) * next_i();
        win[_i0].chromakey = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = verify_preview(dev,win,try);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].ovfmt);
          }
          free(dev);
          free(win);
        
        break;
    }
    // big-arr
    case 1:
    {
          int try = 255;
          int _len_dev0 = 65025;
          struct saa7134_dev * dev = (struct saa7134_dev *) malloc(_len_dev0*sizeof(struct saa7134_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].crop_current.width = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].crop_current.height = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__ovfmt0 = 1;
          dev[_i0].ovfmt = (int *) malloc(_len_dev__i0__ovfmt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__ovfmt0; _j0++) {
            dev[_i0].ovfmt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__ovbuf_base0 = 1;
          dev[_i0].ovbuf.base = (int *) malloc(_len_dev__i0__ovbuf_base0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__ovbuf_base0; _j0++) {
            dev[_i0].ovbuf.base[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_win0 = 65025;
          struct v4l2_window * win = (struct v4l2_window *) malloc(_len_win0*sizeof(struct v4l2_window));
          for(int _i0 = 0; _i0 < _len_win0; _i0++) {
            win[_i0].clipcount = ((-2 * (next_i()%2)) + 1) * next_i();
        win[_i0].field = ((-2 * (next_i()%2)) + 1) * next_i();
        win[_i0].w.width = ((-2 * (next_i()%2)) + 1) * next_i();
        win[_i0].w.height = ((-2 * (next_i()%2)) + 1) * next_i();
        win[_i0].global_alpha = ((-2 * (next_i()%2)) + 1) * next_i();
        win[_i0].chromakey = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = verify_preview(dev,win,try);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].ovfmt);
          }
          free(dev);
          free(win);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int try = 10;
          int _len_dev0 = 100;
          struct saa7134_dev * dev = (struct saa7134_dev *) malloc(_len_dev0*sizeof(struct saa7134_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].crop_current.width = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].crop_current.height = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__ovfmt0 = 1;
          dev[_i0].ovfmt = (int *) malloc(_len_dev__i0__ovfmt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__ovfmt0; _j0++) {
            dev[_i0].ovfmt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__ovbuf_base0 = 1;
          dev[_i0].ovbuf.base = (int *) malloc(_len_dev__i0__ovbuf_base0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__ovbuf_base0; _j0++) {
            dev[_i0].ovbuf.base[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_win0 = 100;
          struct v4l2_window * win = (struct v4l2_window *) malloc(_len_win0*sizeof(struct v4l2_window));
          for(int _i0 = 0; _i0 < _len_win0; _i0++) {
            win[_i0].clipcount = ((-2 * (next_i()%2)) + 1) * next_i();
        win[_i0].field = ((-2 * (next_i()%2)) + 1) * next_i();
        win[_i0].w.width = ((-2 * (next_i()%2)) + 1) * next_i();
        win[_i0].w.height = ((-2 * (next_i()%2)) + 1) * next_i();
        win[_i0].global_alpha = ((-2 * (next_i()%2)) + 1) * next_i();
        win[_i0].chromakey = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = verify_preview(dev,win,try);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].ovfmt);
          }
          free(dev);
          free(win);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

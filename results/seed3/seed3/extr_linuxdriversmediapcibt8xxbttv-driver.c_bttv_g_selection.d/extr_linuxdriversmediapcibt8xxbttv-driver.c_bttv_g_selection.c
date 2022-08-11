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
struct v4l2_selection {scalar_t__ type; int target; int /*<<< orphan*/  r; } ;
struct file {int dummy; } ;
struct bttv_fh {int /*<<< orphan*/  do_crop; struct bttv* btv; } ;
struct bttv {size_t tvnorm; TYPE_1__* crop; } ;
struct TYPE_5__ {int /*<<< orphan*/  bounds; int /*<<< orphan*/  defrect; } ;
struct TYPE_6__ {TYPE_2__ cropcap; } ;
struct TYPE_4__ {int /*<<< orphan*/  rect; } ;

/* Variables and functions */
 int EINVAL ; 
 scalar_t__ V4L2_BUF_TYPE_VIDEO_CAPTURE ; 
 scalar_t__ V4L2_BUF_TYPE_VIDEO_OVERLAY ; 
#define  V4L2_SEL_TGT_CROP 130 
#define  V4L2_SEL_TGT_CROP_BOUNDS 129 
#define  V4L2_SEL_TGT_CROP_DEFAULT 128 
 TYPE_3__* bttv_tvnorms ; 

__attribute__((used)) static int bttv_g_selection(struct file *file, void *f, struct v4l2_selection *sel)
{
	struct bttv_fh *fh = f;
	struct bttv *btv = fh->btv;

	if (sel->type != V4L2_BUF_TYPE_VIDEO_CAPTURE &&
	    sel->type != V4L2_BUF_TYPE_VIDEO_OVERLAY)
		return -EINVAL;

	switch (sel->target) {
	case V4L2_SEL_TGT_CROP:
		/*
		 * No fh->do_crop = 1; because btv->crop[1] may be
		 * inconsistent with fh->width or fh->height and apps
		 * do not expect a change here.
		 */
		sel->r = btv->crop[!!fh->do_crop].rect;
		break;
	case V4L2_SEL_TGT_CROP_DEFAULT:
		sel->r = bttv_tvnorms[btv->tvnorm].cropcap.defrect;
		break;
	case V4L2_SEL_TGT_CROP_BOUNDS:
		sel->r = bttv_tvnorms[btv->tvnorm].cropcap.bounds;
		break;
	default:
		return -EINVAL;
	}

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
          int _len_file0 = 1;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
            file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * f;
          int _len_sel0 = 1;
          struct v4l2_selection * sel = (struct v4l2_selection *) malloc(_len_sel0*sizeof(struct v4l2_selection));
          for(int _i0 = 0; _i0 < _len_sel0; _i0++) {
            sel[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        sel[_i0].target = ((-2 * (next_i()%2)) + 1) * next_i();
        sel[_i0].r = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bttv_g_selection(file,f,sel);
          printf("%d\n", benchRet); 
          free(file);
          free(sel);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_file0 = 65025;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
            file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * f;
          int _len_sel0 = 65025;
          struct v4l2_selection * sel = (struct v4l2_selection *) malloc(_len_sel0*sizeof(struct v4l2_selection));
          for(int _i0 = 0; _i0 < _len_sel0; _i0++) {
            sel[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        sel[_i0].target = ((-2 * (next_i()%2)) + 1) * next_i();
        sel[_i0].r = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bttv_g_selection(file,f,sel);
          printf("%d\n", benchRet); 
          free(file);
          free(sel);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_file0 = 100;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
            file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * f;
          int _len_sel0 = 100;
          struct v4l2_selection * sel = (struct v4l2_selection *) malloc(_len_sel0*sizeof(struct v4l2_selection));
          for(int _i0 = 0; _i0 < _len_sel0; _i0++) {
            sel[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        sel[_i0].target = ((-2 * (next_i()%2)) + 1) * next_i();
        sel[_i0].r = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bttv_g_selection(file,f,sel);
          printf("%d\n", benchRet); 
          free(file);
          free(sel);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

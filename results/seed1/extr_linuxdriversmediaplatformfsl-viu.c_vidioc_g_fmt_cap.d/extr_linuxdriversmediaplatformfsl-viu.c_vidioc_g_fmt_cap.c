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
struct TYPE_5__ {int /*<<< orphan*/  field; } ;
struct viu_fh {int width; int /*<<< orphan*/  sizeimage; TYPE_2__* fmt; TYPE_1__ vb_vidq; int /*<<< orphan*/  height; } ;
struct TYPE_7__ {int width; int bytesperline; int /*<<< orphan*/  colorspace; int /*<<< orphan*/  sizeimage; int /*<<< orphan*/  pixelformat; int /*<<< orphan*/  field; int /*<<< orphan*/  height; } ;
struct TYPE_8__ {TYPE_3__ pix; } ;
struct v4l2_format {TYPE_4__ fmt; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int depth; int /*<<< orphan*/  pixelformat; } ;

/* Variables and functions */
 int /*<<< orphan*/  V4L2_COLORSPACE_SMPTE170M ; 

__attribute__((used)) static int vidioc_g_fmt_cap(struct file *file, void *priv,
					struct v4l2_format *f)
{
	struct viu_fh *fh = priv;

	f->fmt.pix.width        = fh->width;
	f->fmt.pix.height       = fh->height;
	f->fmt.pix.field        = fh->vb_vidq.field;
	f->fmt.pix.pixelformat  = fh->fmt->pixelformat;
	f->fmt.pix.bytesperline =
			(f->fmt.pix.width * fh->fmt->depth) >> 3;
	f->fmt.pix.sizeimage	= fh->sizeimage;
	f->fmt.pix.colorspace	= V4L2_COLORSPACE_SMPTE170M;
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
          void * priv;
          int _len_f0 = 1;
          struct v4l2_format * f = (struct v4l2_format *) malloc(_len_f0*sizeof(struct v4l2_format));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
            f[_i0].fmt.pix.width = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix.bytesperline = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix.colorspace = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix.sizeimage = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix.pixelformat = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix.field = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix.height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vidioc_g_fmt_cap(file,priv,f);
          printf("%d\n", benchRet); 
          free(file);
          free(f);
        
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
          void * priv;
          int _len_f0 = 65025;
          struct v4l2_format * f = (struct v4l2_format *) malloc(_len_f0*sizeof(struct v4l2_format));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
            f[_i0].fmt.pix.width = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix.bytesperline = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix.colorspace = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix.sizeimage = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix.pixelformat = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix.field = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix.height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vidioc_g_fmt_cap(file,priv,f);
          printf("%d\n", benchRet); 
          free(file);
          free(f);
        
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
          void * priv;
          int _len_f0 = 100;
          struct v4l2_format * f = (struct v4l2_format *) malloc(_len_f0*sizeof(struct v4l2_format));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
            f[_i0].fmt.pix.width = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix.bytesperline = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix.colorspace = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix.sizeimage = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix.pixelformat = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix.field = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix.height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vidioc_g_fmt_cap(file,priv,f);
          printf("%d\n", benchRet); 
          free(file);
          free(f);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

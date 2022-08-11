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
struct v4l2_pix_format_mplane {int num_planes; TYPE_3__* plane_fmt; int /*<<< orphan*/  colorspace; int /*<<< orphan*/  pixelformat; int /*<<< orphan*/  field; int /*<<< orphan*/  height; int /*<<< orphan*/  width; } ;
struct TYPE_4__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct fimc_frame {int /*<<< orphan*/ * payload; int /*<<< orphan*/ * bytesperline; TYPE_2__* fmt; int /*<<< orphan*/  o_height; int /*<<< orphan*/  o_width; } ;
struct TYPE_6__ {int /*<<< orphan*/  sizeimage; int /*<<< orphan*/  bytesperline; } ;
struct TYPE_5__ {int memplanes; int /*<<< orphan*/  fourcc; } ;

/* Variables and functions */
 int /*<<< orphan*/  V4L2_COLORSPACE_JPEG ; 
 int /*<<< orphan*/  V4L2_FIELD_NONE ; 

void __fimc_get_format(struct fimc_frame *frame, struct v4l2_format *f)
{
	struct v4l2_pix_format_mplane *pixm = &f->fmt.pix_mp;
	int i;

	pixm->width = frame->o_width;
	pixm->height = frame->o_height;
	pixm->field = V4L2_FIELD_NONE;
	pixm->pixelformat = frame->fmt->fourcc;
	pixm->colorspace = V4L2_COLORSPACE_JPEG;
	pixm->num_planes = frame->fmt->memplanes;

	for (i = 0; i < pixm->num_planes; ++i) {
		pixm->plane_fmt[i].bytesperline = frame->bytesperline[i];
		pixm->plane_fmt[i].sizeimage = frame->payload[i];
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
          int _len_frame0 = 1;
          struct fimc_frame * frame = (struct fimc_frame *) malloc(_len_frame0*sizeof(struct fimc_frame));
          for(int _i0 = 0; _i0 < _len_frame0; _i0++) {
              int _len_frame__i0__payload0 = 1;
          frame[_i0].payload = (int *) malloc(_len_frame__i0__payload0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_frame__i0__payload0; _j0++) {
            frame[_i0].payload[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_frame__i0__bytesperline0 = 1;
          frame[_i0].bytesperline = (int *) malloc(_len_frame__i0__bytesperline0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_frame__i0__bytesperline0; _j0++) {
            frame[_i0].bytesperline[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_frame__i0__fmt0 = 1;
          frame[_i0].fmt = (struct TYPE_5__ *) malloc(_len_frame__i0__fmt0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_frame__i0__fmt0; _j0++) {
            frame[_i0].fmt->memplanes = ((-2 * (next_i()%2)) + 1) * next_i();
        frame[_i0].fmt->fourcc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        frame[_i0].o_height = ((-2 * (next_i()%2)) + 1) * next_i();
        frame[_i0].o_width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_f0 = 1;
          struct v4l2_format * f = (struct v4l2_format *) malloc(_len_f0*sizeof(struct v4l2_format));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
            f[_i0].fmt.pix_mp.num_planes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_f__i0__fmt_pix_mp_plane_fmt0 = 1;
          f[_i0].fmt.pix_mp.plane_fmt = (struct TYPE_6__ *) malloc(_len_f__i0__fmt_pix_mp_plane_fmt0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_f__i0__fmt_pix_mp_plane_fmt0; _j0++) {
            f[_i0].fmt.pix_mp.plane_fmt->sizeimage = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix_mp.plane_fmt->bytesperline = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        f[_i0].fmt.pix_mp.colorspace = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix_mp.pixelformat = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix_mp.field = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix_mp.height = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix_mp.width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __fimc_get_format(frame,f);
          for(int _aux = 0; _aux < _len_frame0; _aux++) {
          free(frame[_aux].payload);
          }
          for(int _aux = 0; _aux < _len_frame0; _aux++) {
          free(frame[_aux].bytesperline);
          }
          for(int _aux = 0; _aux < _len_frame0; _aux++) {
          free(frame[_aux].fmt);
          }
          free(frame);
          free(f);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_frame0 = 65025;
          struct fimc_frame * frame = (struct fimc_frame *) malloc(_len_frame0*sizeof(struct fimc_frame));
          for(int _i0 = 0; _i0 < _len_frame0; _i0++) {
              int _len_frame__i0__payload0 = 1;
          frame[_i0].payload = (int *) malloc(_len_frame__i0__payload0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_frame__i0__payload0; _j0++) {
            frame[_i0].payload[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_frame__i0__bytesperline0 = 1;
          frame[_i0].bytesperline = (int *) malloc(_len_frame__i0__bytesperline0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_frame__i0__bytesperline0; _j0++) {
            frame[_i0].bytesperline[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_frame__i0__fmt0 = 1;
          frame[_i0].fmt = (struct TYPE_5__ *) malloc(_len_frame__i0__fmt0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_frame__i0__fmt0; _j0++) {
            frame[_i0].fmt->memplanes = ((-2 * (next_i()%2)) + 1) * next_i();
        frame[_i0].fmt->fourcc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        frame[_i0].o_height = ((-2 * (next_i()%2)) + 1) * next_i();
        frame[_i0].o_width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_f0 = 65025;
          struct v4l2_format * f = (struct v4l2_format *) malloc(_len_f0*sizeof(struct v4l2_format));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
            f[_i0].fmt.pix_mp.num_planes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_f__i0__fmt_pix_mp_plane_fmt0 = 1;
          f[_i0].fmt.pix_mp.plane_fmt = (struct TYPE_6__ *) malloc(_len_f__i0__fmt_pix_mp_plane_fmt0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_f__i0__fmt_pix_mp_plane_fmt0; _j0++) {
            f[_i0].fmt.pix_mp.plane_fmt->sizeimage = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix_mp.plane_fmt->bytesperline = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        f[_i0].fmt.pix_mp.colorspace = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix_mp.pixelformat = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix_mp.field = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix_mp.height = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix_mp.width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __fimc_get_format(frame,f);
          for(int _aux = 0; _aux < _len_frame0; _aux++) {
          free(frame[_aux].payload);
          }
          for(int _aux = 0; _aux < _len_frame0; _aux++) {
          free(frame[_aux].bytesperline);
          }
          for(int _aux = 0; _aux < _len_frame0; _aux++) {
          free(frame[_aux].fmt);
          }
          free(frame);
          free(f);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_frame0 = 100;
          struct fimc_frame * frame = (struct fimc_frame *) malloc(_len_frame0*sizeof(struct fimc_frame));
          for(int _i0 = 0; _i0 < _len_frame0; _i0++) {
              int _len_frame__i0__payload0 = 1;
          frame[_i0].payload = (int *) malloc(_len_frame__i0__payload0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_frame__i0__payload0; _j0++) {
            frame[_i0].payload[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_frame__i0__bytesperline0 = 1;
          frame[_i0].bytesperline = (int *) malloc(_len_frame__i0__bytesperline0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_frame__i0__bytesperline0; _j0++) {
            frame[_i0].bytesperline[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_frame__i0__fmt0 = 1;
          frame[_i0].fmt = (struct TYPE_5__ *) malloc(_len_frame__i0__fmt0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_frame__i0__fmt0; _j0++) {
            frame[_i0].fmt->memplanes = ((-2 * (next_i()%2)) + 1) * next_i();
        frame[_i0].fmt->fourcc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        frame[_i0].o_height = ((-2 * (next_i()%2)) + 1) * next_i();
        frame[_i0].o_width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_f0 = 100;
          struct v4l2_format * f = (struct v4l2_format *) malloc(_len_f0*sizeof(struct v4l2_format));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
            f[_i0].fmt.pix_mp.num_planes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_f__i0__fmt_pix_mp_plane_fmt0 = 1;
          f[_i0].fmt.pix_mp.plane_fmt = (struct TYPE_6__ *) malloc(_len_f__i0__fmt_pix_mp_plane_fmt0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_f__i0__fmt_pix_mp_plane_fmt0; _j0++) {
            f[_i0].fmt.pix_mp.plane_fmt->sizeimage = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix_mp.plane_fmt->bytesperline = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        f[_i0].fmt.pix_mp.colorspace = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix_mp.pixelformat = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix_mp.field = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix_mp.height = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix_mp.width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __fimc_get_format(frame,f);
          for(int _aux = 0; _aux < _len_frame0; _aux++) {
          free(frame[_aux].payload);
          }
          for(int _aux = 0; _aux < _len_frame0; _aux++) {
          free(frame[_aux].bytesperline);
          }
          for(int _aux = 0; _aux < _len_frame0; _aux++) {
          free(frame[_aux].fmt);
          }
          free(frame);
          free(f);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

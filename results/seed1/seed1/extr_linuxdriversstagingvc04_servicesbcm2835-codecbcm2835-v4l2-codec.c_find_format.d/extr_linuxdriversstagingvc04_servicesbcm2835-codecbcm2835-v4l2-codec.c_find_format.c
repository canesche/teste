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
struct TYPE_3__ {scalar_t__ pixelformat; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct bcm2835_codec_fmt_list {unsigned int num_entries; struct bcm2835_codec_fmt* list; } ;
struct bcm2835_codec_fmt {scalar_t__ fourcc; } ;
struct bcm2835_codec_dev {struct bcm2835_codec_fmt_list* supported_fmts; } ;

/* Variables and functions */

__attribute__((used)) static struct bcm2835_codec_fmt *find_format(struct v4l2_format *f,
					     struct bcm2835_codec_dev *dev,
					     bool capture)
{
	struct bcm2835_codec_fmt *fmt;
	unsigned int k;
	struct bcm2835_codec_fmt_list *fmts =
					&dev->supported_fmts[capture ? 1 : 0];

	for (k = 0; k < fmts->num_entries; k++) {
		fmt = &fmts->list[k];
		if (fmt->fourcc == f->fmt.pix.pixelformat)
			break;
	}
	if (k == fmts->num_entries)
		return NULL;

	return &fmts->list[k];
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
          int capture = 100;
          int _len_f0 = 1;
          struct v4l2_format * f = (struct v4l2_format *) malloc(_len_f0*sizeof(struct v4l2_format));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
            f[_i0].fmt.pix.pixelformat = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev0 = 1;
          struct bcm2835_codec_dev * dev = (struct bcm2835_codec_dev *) malloc(_len_dev0*sizeof(struct bcm2835_codec_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__supported_fmts0 = 1;
          dev[_i0].supported_fmts = (struct bcm2835_codec_fmt_list *) malloc(_len_dev__i0__supported_fmts0*sizeof(struct bcm2835_codec_fmt_list));
          for(int _j0 = 0; _j0 < _len_dev__i0__supported_fmts0; _j0++) {
            dev[_i0].supported_fmts->num_entries = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__supported_fmts_list0 = 1;
          dev[_i0].supported_fmts->list = (struct bcm2835_codec_fmt *) malloc(_len_dev__i0__supported_fmts_list0*sizeof(struct bcm2835_codec_fmt));
          for(int _j0 = 0; _j0 < _len_dev__i0__supported_fmts_list0; _j0++) {
            dev[_i0].supported_fmts->list->fourcc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct bcm2835_codec_fmt * benchRet = find_format(f,dev,capture);
          printf("%ld\n", (*benchRet).fourcc);
          free(f);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].supported_fmts);
          }
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int capture = 255;
          int _len_f0 = 65025;
          struct v4l2_format * f = (struct v4l2_format *) malloc(_len_f0*sizeof(struct v4l2_format));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
            f[_i0].fmt.pix.pixelformat = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev0 = 65025;
          struct bcm2835_codec_dev * dev = (struct bcm2835_codec_dev *) malloc(_len_dev0*sizeof(struct bcm2835_codec_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__supported_fmts0 = 1;
          dev[_i0].supported_fmts = (struct bcm2835_codec_fmt_list *) malloc(_len_dev__i0__supported_fmts0*sizeof(struct bcm2835_codec_fmt_list));
          for(int _j0 = 0; _j0 < _len_dev__i0__supported_fmts0; _j0++) {
            dev[_i0].supported_fmts->num_entries = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__supported_fmts_list0 = 1;
          dev[_i0].supported_fmts->list = (struct bcm2835_codec_fmt *) malloc(_len_dev__i0__supported_fmts_list0*sizeof(struct bcm2835_codec_fmt));
          for(int _j0 = 0; _j0 < _len_dev__i0__supported_fmts_list0; _j0++) {
            dev[_i0].supported_fmts->list->fourcc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct bcm2835_codec_fmt * benchRet = find_format(f,dev,capture);
          printf("%ld\n", (*benchRet).fourcc);
          free(f);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].supported_fmts);
          }
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int capture = 10;
          int _len_f0 = 100;
          struct v4l2_format * f = (struct v4l2_format *) malloc(_len_f0*sizeof(struct v4l2_format));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
            f[_i0].fmt.pix.pixelformat = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev0 = 100;
          struct bcm2835_codec_dev * dev = (struct bcm2835_codec_dev *) malloc(_len_dev0*sizeof(struct bcm2835_codec_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__supported_fmts0 = 1;
          dev[_i0].supported_fmts = (struct bcm2835_codec_fmt_list *) malloc(_len_dev__i0__supported_fmts0*sizeof(struct bcm2835_codec_fmt_list));
          for(int _j0 = 0; _j0 < _len_dev__i0__supported_fmts0; _j0++) {
            dev[_i0].supported_fmts->num_entries = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__supported_fmts_list0 = 1;
          dev[_i0].supported_fmts->list = (struct bcm2835_codec_fmt *) malloc(_len_dev__i0__supported_fmts_list0*sizeof(struct bcm2835_codec_fmt));
          for(int _j0 = 0; _j0 < _len_dev__i0__supported_fmts_list0; _j0++) {
            dev[_i0].supported_fmts->list->fourcc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct bcm2835_codec_fmt * benchRet = find_format(f,dev,capture);
          printf("%ld\n", (*benchRet).fourcc);
          free(f);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].supported_fmts);
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

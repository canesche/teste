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
struct TYPE_4__ {TYPE_1__ pix_mp; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct mtk_video_fmt {scalar_t__ fourcc; } ;

/* Variables and functions */
 unsigned int NUM_FORMATS ; 
 struct mtk_video_fmt* mtk_video_formats ; 

__attribute__((used)) static struct mtk_video_fmt *mtk_vdec_find_format(struct v4l2_format *f)
{
	struct mtk_video_fmt *fmt;
	unsigned int k;

	for (k = 0; k < NUM_FORMATS; k++) {
		fmt = &mtk_video_formats[k];
		if (fmt->fourcc == f->fmt.pix_mp.pixelformat)
			return fmt;
	}

	return NULL;
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
          int _len_f0 = 1;
          struct v4l2_format * f = (struct v4l2_format *) malloc(_len_f0*sizeof(struct v4l2_format));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
            f[_i0].fmt.pix_mp.pixelformat = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct mtk_video_fmt * benchRet = mtk_vdec_find_format(f);
          printf("%ld\n", (*benchRet).fourcc);
          free(f);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_f0 = 65025;
          struct v4l2_format * f = (struct v4l2_format *) malloc(_len_f0*sizeof(struct v4l2_format));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
            f[_i0].fmt.pix_mp.pixelformat = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct mtk_video_fmt * benchRet = mtk_vdec_find_format(f);
          printf("%ld\n", (*benchRet).fourcc);
          free(f);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_f0 = 100;
          struct v4l2_format * f = (struct v4l2_format *) malloc(_len_f0*sizeof(struct v4l2_format));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
            f[_i0].fmt.pix_mp.pixelformat = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct mtk_video_fmt * benchRet = mtk_vdec_find_format(f);
          printf("%ld\n", (*benchRet).fourcc);
          free(f);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

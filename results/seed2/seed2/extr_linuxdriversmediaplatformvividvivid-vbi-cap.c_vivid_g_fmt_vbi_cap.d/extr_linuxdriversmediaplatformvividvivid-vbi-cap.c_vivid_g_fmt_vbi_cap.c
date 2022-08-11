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
struct vivid_dev {int std_cap; scalar_t__ vbi_cap_interlaced; } ;
struct v4l2_vbi_format {int sampling_rate; int offset; int samples_per_line; int* count; scalar_t__* reserved; int /*<<< orphan*/  flags; scalar_t__* start; int /*<<< orphan*/  sample_format; } ;

/* Variables and functions */
 int /*<<< orphan*/  V4L2_PIX_FMT_GREY ; 
 int V4L2_STD_525_60 ; 
 int /*<<< orphan*/  V4L2_VBI_INTERLACED ; 
 scalar_t__ V4L2_VBI_ITU_525_F1_START ; 
 scalar_t__ V4L2_VBI_ITU_525_F2_START ; 
 scalar_t__ V4L2_VBI_ITU_625_F1_START ; 
 scalar_t__ V4L2_VBI_ITU_625_F2_START ; 

__attribute__((used)) static void vivid_g_fmt_vbi_cap(struct vivid_dev *dev, struct v4l2_vbi_format *vbi)
{
	bool is_60hz = dev->std_cap & V4L2_STD_525_60;

	vbi->sampling_rate = 27000000;
	vbi->offset = 24;
	vbi->samples_per_line = 1440;
	vbi->sample_format = V4L2_PIX_FMT_GREY;
	vbi->start[0] = is_60hz ? V4L2_VBI_ITU_525_F1_START + 9 : V4L2_VBI_ITU_625_F1_START + 5;
	vbi->start[1] = is_60hz ? V4L2_VBI_ITU_525_F2_START + 9 : V4L2_VBI_ITU_625_F2_START + 5;
	vbi->count[0] = vbi->count[1] = is_60hz ? 12 : 18;
	vbi->flags = dev->vbi_cap_interlaced ? V4L2_VBI_INTERLACED : 0;
	vbi->reserved[0] = 0;
	vbi->reserved[1] = 0;
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
          int _len_dev0 = 1;
          struct vivid_dev * dev = (struct vivid_dev *) malloc(_len_dev0*sizeof(struct vivid_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].std_cap = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].vbi_cap_interlaced = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vbi0 = 1;
          struct v4l2_vbi_format * vbi = (struct v4l2_vbi_format *) malloc(_len_vbi0*sizeof(struct v4l2_vbi_format));
          for(int _i0 = 0; _i0 < _len_vbi0; _i0++) {
            vbi[_i0].sampling_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        vbi[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
        vbi[_i0].samples_per_line = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vbi__i0__count0 = 1;
          vbi[_i0].count = (int *) malloc(_len_vbi__i0__count0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vbi__i0__count0; _j0++) {
            vbi[_i0].count[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vbi__i0__reserved0 = 1;
          vbi[_i0].reserved = (long *) malloc(_len_vbi__i0__reserved0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_vbi__i0__reserved0; _j0++) {
            vbi[_i0].reserved[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        vbi[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vbi__i0__start0 = 1;
          vbi[_i0].start = (long *) malloc(_len_vbi__i0__start0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_vbi__i0__start0; _j0++) {
            vbi[_i0].start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        vbi[_i0].sample_format = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vivid_g_fmt_vbi_cap(dev,vbi);
          free(dev);
          for(int _aux = 0; _aux < _len_vbi0; _aux++) {
          free(vbi[_aux].count);
          }
          for(int _aux = 0; _aux < _len_vbi0; _aux++) {
          free(vbi[_aux].reserved);
          }
          for(int _aux = 0; _aux < _len_vbi0; _aux++) {
          free(vbi[_aux].start);
          }
          free(vbi);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dev0 = 65025;
          struct vivid_dev * dev = (struct vivid_dev *) malloc(_len_dev0*sizeof(struct vivid_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].std_cap = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].vbi_cap_interlaced = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vbi0 = 65025;
          struct v4l2_vbi_format * vbi = (struct v4l2_vbi_format *) malloc(_len_vbi0*sizeof(struct v4l2_vbi_format));
          for(int _i0 = 0; _i0 < _len_vbi0; _i0++) {
            vbi[_i0].sampling_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        vbi[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
        vbi[_i0].samples_per_line = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vbi__i0__count0 = 1;
          vbi[_i0].count = (int *) malloc(_len_vbi__i0__count0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vbi__i0__count0; _j0++) {
            vbi[_i0].count[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vbi__i0__reserved0 = 1;
          vbi[_i0].reserved = (long *) malloc(_len_vbi__i0__reserved0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_vbi__i0__reserved0; _j0++) {
            vbi[_i0].reserved[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        vbi[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vbi__i0__start0 = 1;
          vbi[_i0].start = (long *) malloc(_len_vbi__i0__start0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_vbi__i0__start0; _j0++) {
            vbi[_i0].start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        vbi[_i0].sample_format = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vivid_g_fmt_vbi_cap(dev,vbi);
          free(dev);
          for(int _aux = 0; _aux < _len_vbi0; _aux++) {
          free(vbi[_aux].count);
          }
          for(int _aux = 0; _aux < _len_vbi0; _aux++) {
          free(vbi[_aux].reserved);
          }
          for(int _aux = 0; _aux < _len_vbi0; _aux++) {
          free(vbi[_aux].start);
          }
          free(vbi);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dev0 = 100;
          struct vivid_dev * dev = (struct vivid_dev *) malloc(_len_dev0*sizeof(struct vivid_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].std_cap = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].vbi_cap_interlaced = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vbi0 = 100;
          struct v4l2_vbi_format * vbi = (struct v4l2_vbi_format *) malloc(_len_vbi0*sizeof(struct v4l2_vbi_format));
          for(int _i0 = 0; _i0 < _len_vbi0; _i0++) {
            vbi[_i0].sampling_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        vbi[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
        vbi[_i0].samples_per_line = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vbi__i0__count0 = 1;
          vbi[_i0].count = (int *) malloc(_len_vbi__i0__count0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vbi__i0__count0; _j0++) {
            vbi[_i0].count[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vbi__i0__reserved0 = 1;
          vbi[_i0].reserved = (long *) malloc(_len_vbi__i0__reserved0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_vbi__i0__reserved0; _j0++) {
            vbi[_i0].reserved[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        vbi[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vbi__i0__start0 = 1;
          vbi[_i0].start = (long *) malloc(_len_vbi__i0__start0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_vbi__i0__start0; _j0++) {
            vbi[_i0].start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        vbi[_i0].sample_format = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vivid_g_fmt_vbi_cap(dev,vbi);
          free(dev);
          for(int _aux = 0; _aux < _len_vbi0; _aux++) {
          free(vbi[_aux].count);
          }
          for(int _aux = 0; _aux < _len_vbi0; _aux++) {
          free(vbi[_aux].reserved);
          }
          for(int _aux = 0; _aux < _len_vbi0; _aux++) {
          free(vbi[_aux].start);
          }
          free(vbi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

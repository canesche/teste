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
struct TYPE_4__ {int nmodes; TYPE_1__* cam_mode; } ;
struct gspca_dev {TYPE_2__ cam; } ;
struct TYPE_3__ {int pixelformat; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int gspca_get_mode(struct gspca_dev *gspca_dev,
			int mode,
			int pixfmt)
{
	int modeU, modeD;

	modeU = modeD = mode;
	while ((modeU < gspca_dev->cam.nmodes) || modeD >= 0) {
		if (--modeD >= 0) {
			if (gspca_dev->cam.cam_mode[modeD].pixelformat
								== pixfmt)
				return modeD;
		}
		if (++modeU < gspca_dev->cam.nmodes) {
			if (gspca_dev->cam.cam_mode[modeU].pixelformat
								== pixfmt)
				return modeU;
		}
	}
	return -EINVAL;
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
          int mode = 100;
          int pixfmt = 100;
          int _len_gspca_dev0 = 1;
          struct gspca_dev * gspca_dev = (struct gspca_dev *) malloc(_len_gspca_dev0*sizeof(struct gspca_dev));
          for(int _i0 = 0; _i0 < _len_gspca_dev0; _i0++) {
            gspca_dev[_i0].cam.nmodes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_gspca_dev__i0__cam_cam_mode0 = 1;
          gspca_dev[_i0].cam.cam_mode = (struct TYPE_3__ *) malloc(_len_gspca_dev__i0__cam_cam_mode0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_gspca_dev__i0__cam_cam_mode0; _j0++) {
            gspca_dev[_i0].cam.cam_mode->pixelformat = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = gspca_get_mode(gspca_dev,mode,pixfmt);
          printf("%d\n", benchRet); 
          free(gspca_dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int mode = 255;
          int pixfmt = 255;
          int _len_gspca_dev0 = 65025;
          struct gspca_dev * gspca_dev = (struct gspca_dev *) malloc(_len_gspca_dev0*sizeof(struct gspca_dev));
          for(int _i0 = 0; _i0 < _len_gspca_dev0; _i0++) {
            gspca_dev[_i0].cam.nmodes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_gspca_dev__i0__cam_cam_mode0 = 1;
          gspca_dev[_i0].cam.cam_mode = (struct TYPE_3__ *) malloc(_len_gspca_dev__i0__cam_cam_mode0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_gspca_dev__i0__cam_cam_mode0; _j0++) {
            gspca_dev[_i0].cam.cam_mode->pixelformat = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = gspca_get_mode(gspca_dev,mode,pixfmt);
          printf("%d\n", benchRet); 
          free(gspca_dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mode = 10;
          int pixfmt = 10;
          int _len_gspca_dev0 = 100;
          struct gspca_dev * gspca_dev = (struct gspca_dev *) malloc(_len_gspca_dev0*sizeof(struct gspca_dev));
          for(int _i0 = 0; _i0 < _len_gspca_dev0; _i0++) {
            gspca_dev[_i0].cam.nmodes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_gspca_dev__i0__cam_cam_mode0 = 1;
          gspca_dev[_i0].cam.cam_mode = (struct TYPE_3__ *) malloc(_len_gspca_dev__i0__cam_cam_mode0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_gspca_dev__i0__cam_cam_mode0; _j0++) {
            gspca_dev[_i0].cam.cam_mode->pixelformat = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = gspca_get_mode(gspca_dev,mode,pixfmt);
          printf("%d\n", benchRet); 
          free(gspca_dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

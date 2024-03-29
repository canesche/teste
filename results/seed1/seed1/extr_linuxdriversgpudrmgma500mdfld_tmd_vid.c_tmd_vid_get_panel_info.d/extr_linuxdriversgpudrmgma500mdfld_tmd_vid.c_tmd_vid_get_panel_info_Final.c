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
struct panel_info {int /*<<< orphan*/  height_mm; int /*<<< orphan*/  width_mm; } ;
struct drm_device {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 
 int /*<<< orphan*/  TMD_PANEL_HEIGHT ; 
 int /*<<< orphan*/  TMD_PANEL_WIDTH ; 

__attribute__((used)) static int tmd_vid_get_panel_info(struct drm_device *dev,
				int pipe,
				struct panel_info *pi)
{
	if (!dev || !pi)
		return -EINVAL;

	pi->width_mm = TMD_PANEL_WIDTH;
	pi->height_mm = TMD_PANEL_HEIGHT;

	return 0;
}


// ------------------------------------------------------------------------- //




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
          int pipe = 100;
          int _len_dev0 = 1;
          struct drm_device * dev = (struct drm_device *) malloc(_len_dev0*sizeof(struct drm_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pi0 = 1;
          struct panel_info * pi = (struct panel_info *) malloc(_len_pi0*sizeof(struct panel_info));
          for(int _i0 = 0; _i0 < _len_pi0; _i0++) {
            pi[_i0].height_mm = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].width_mm = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tmd_vid_get_panel_info(dev,pipe,pi);
          printf("%d\n", benchRet); 
          free(dev);
          free(pi);
        
        break;
    }
    // big-arr
    case 1:
    {
          int pipe = 255;
          int _len_dev0 = 65025;
          struct drm_device * dev = (struct drm_device *) malloc(_len_dev0*sizeof(struct drm_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pi0 = 65025;
          struct panel_info * pi = (struct panel_info *) malloc(_len_pi0*sizeof(struct panel_info));
          for(int _i0 = 0; _i0 < _len_pi0; _i0++) {
            pi[_i0].height_mm = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].width_mm = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tmd_vid_get_panel_info(dev,pipe,pi);
          printf("%d\n", benchRet); 
          free(dev);
          free(pi);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int pipe = 10;
          int _len_dev0 = 100;
          struct drm_device * dev = (struct drm_device *) malloc(_len_dev0*sizeof(struct drm_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pi0 = 100;
          struct panel_info * pi = (struct panel_info *) malloc(_len_pi0*sizeof(struct panel_info));
          for(int _i0 = 0; _i0 < _len_pi0; _i0++) {
            pi[_i0].height_mm = ((-2 * (next_i()%2)) + 1) * next_i();
        pi[_i0].width_mm = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tmd_vid_get_panel_info(dev,pipe,pi);
          printf("%d\n", benchRet); 
          free(dev);
          free(pi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

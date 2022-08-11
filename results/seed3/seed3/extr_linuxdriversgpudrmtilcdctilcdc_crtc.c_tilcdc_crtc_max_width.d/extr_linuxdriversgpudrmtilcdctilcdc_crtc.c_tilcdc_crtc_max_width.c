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
struct tilcdc_drm_private {int rev; } ;
struct drm_device {struct tilcdc_drm_private* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;

/* Variables and functions */

int tilcdc_crtc_max_width(struct drm_crtc *crtc)
{
	struct drm_device *dev = crtc->dev;
	struct tilcdc_drm_private *priv = dev->dev_private;
	int max_width = 0;

	if (priv->rev == 1)
		max_width = 1024;
	else if (priv->rev == 2)
		max_width = 2048;

	return max_width;
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
          int _len_crtc0 = 1;
          struct drm_crtc * crtc = (struct drm_crtc *) malloc(_len_crtc0*sizeof(struct drm_crtc));
          for(int _i0 = 0; _i0 < _len_crtc0; _i0++) {
              int _len_crtc__i0__dev0 = 1;
          crtc[_i0].dev = (struct drm_device *) malloc(_len_crtc__i0__dev0*sizeof(struct drm_device));
          for(int _j0 = 0; _j0 < _len_crtc__i0__dev0; _j0++) {
              int _len_crtc__i0__dev_dev_private0 = 1;
          crtc[_i0].dev->dev_private = (struct tilcdc_drm_private *) malloc(_len_crtc__i0__dev_dev_private0*sizeof(struct tilcdc_drm_private));
          for(int _j0 = 0; _j0 < _len_crtc__i0__dev_dev_private0; _j0++) {
            crtc[_i0].dev->dev_private->rev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = tilcdc_crtc_max_width(crtc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_crtc0; _aux++) {
          free(crtc[_aux].dev);
          }
          free(crtc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_crtc0 = 65025;
          struct drm_crtc * crtc = (struct drm_crtc *) malloc(_len_crtc0*sizeof(struct drm_crtc));
          for(int _i0 = 0; _i0 < _len_crtc0; _i0++) {
              int _len_crtc__i0__dev0 = 1;
          crtc[_i0].dev = (struct drm_device *) malloc(_len_crtc__i0__dev0*sizeof(struct drm_device));
          for(int _j0 = 0; _j0 < _len_crtc__i0__dev0; _j0++) {
              int _len_crtc__i0__dev_dev_private0 = 1;
          crtc[_i0].dev->dev_private = (struct tilcdc_drm_private *) malloc(_len_crtc__i0__dev_dev_private0*sizeof(struct tilcdc_drm_private));
          for(int _j0 = 0; _j0 < _len_crtc__i0__dev_dev_private0; _j0++) {
            crtc[_i0].dev->dev_private->rev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = tilcdc_crtc_max_width(crtc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_crtc0; _aux++) {
          free(crtc[_aux].dev);
          }
          free(crtc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_crtc0 = 100;
          struct drm_crtc * crtc = (struct drm_crtc *) malloc(_len_crtc0*sizeof(struct drm_crtc));
          for(int _i0 = 0; _i0 < _len_crtc0; _i0++) {
              int _len_crtc__i0__dev0 = 1;
          crtc[_i0].dev = (struct drm_device *) malloc(_len_crtc__i0__dev0*sizeof(struct drm_device));
          for(int _j0 = 0; _j0 < _len_crtc__i0__dev0; _j0++) {
              int _len_crtc__i0__dev_dev_private0 = 1;
          crtc[_i0].dev->dev_private = (struct tilcdc_drm_private *) malloc(_len_crtc__i0__dev_dev_private0*sizeof(struct tilcdc_drm_private));
          for(int _j0 = 0; _j0 < _len_crtc__i0__dev_dev_private0; _j0++) {
            crtc[_i0].dev->dev_private->rev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = tilcdc_crtc_max_width(crtc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_crtc0; _aux++) {
          free(crtc[_aux].dev);
          }
          free(crtc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

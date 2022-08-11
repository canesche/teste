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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int max_width; int max_height; int allow_fb_modifiers; int normalize_zpos; int /*<<< orphan*/ * helper_private; int /*<<< orphan*/ * funcs; scalar_t__ min_height; scalar_t__ min_width; } ;
struct drm_device {TYPE_1__ mode_config; } ;

/* Variables and functions */
 int /*<<< orphan*/  exynos_drm_mode_config_funcs ; 
 int /*<<< orphan*/  exynos_drm_mode_config_helpers ; 

void exynos_drm_mode_config_init(struct drm_device *dev)
{
	dev->mode_config.min_width = 0;
	dev->mode_config.min_height = 0;

	/*
	 * set max width and height as default value(4096x4096).
	 * this value would be used to check framebuffer size limitation
	 * at drm_mode_addfb().
	 */
	dev->mode_config.max_width = 4096;
	dev->mode_config.max_height = 4096;

	dev->mode_config.funcs = &exynos_drm_mode_config_funcs;
	dev->mode_config.helper_private = &exynos_drm_mode_config_helpers;

	dev->mode_config.allow_fb_modifiers = true;

	dev->mode_config.normalize_zpos = true;
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
          struct drm_device * dev = (struct drm_device *) malloc(_len_dev0*sizeof(struct drm_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].mode_config.max_width = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].mode_config.max_height = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].mode_config.allow_fb_modifiers = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].mode_config.normalize_zpos = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__mode_config_helper_private0 = 1;
          dev[_i0].mode_config.helper_private = (int *) malloc(_len_dev__i0__mode_config_helper_private0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__mode_config_helper_private0; _j0++) {
            dev[_i0].mode_config.helper_private[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__mode_config_funcs0 = 1;
          dev[_i0].mode_config.funcs = (int *) malloc(_len_dev__i0__mode_config_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__mode_config_funcs0; _j0++) {
            dev[_i0].mode_config.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dev[_i0].mode_config.min_height = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].mode_config.min_width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          exynos_drm_mode_config_init(dev);
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dev0 = 65025;
          struct drm_device * dev = (struct drm_device *) malloc(_len_dev0*sizeof(struct drm_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].mode_config.max_width = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].mode_config.max_height = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].mode_config.allow_fb_modifiers = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].mode_config.normalize_zpos = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__mode_config_helper_private0 = 1;
          dev[_i0].mode_config.helper_private = (int *) malloc(_len_dev__i0__mode_config_helper_private0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__mode_config_helper_private0; _j0++) {
            dev[_i0].mode_config.helper_private[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__mode_config_funcs0 = 1;
          dev[_i0].mode_config.funcs = (int *) malloc(_len_dev__i0__mode_config_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__mode_config_funcs0; _j0++) {
            dev[_i0].mode_config.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dev[_i0].mode_config.min_height = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].mode_config.min_width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          exynos_drm_mode_config_init(dev);
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dev0 = 100;
          struct drm_device * dev = (struct drm_device *) malloc(_len_dev0*sizeof(struct drm_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].mode_config.max_width = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].mode_config.max_height = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].mode_config.allow_fb_modifiers = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].mode_config.normalize_zpos = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__mode_config_helper_private0 = 1;
          dev[_i0].mode_config.helper_private = (int *) malloc(_len_dev__i0__mode_config_helper_private0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__mode_config_helper_private0; _j0++) {
            dev[_i0].mode_config.helper_private[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__mode_config_funcs0 = 1;
          dev[_i0].mode_config.funcs = (int *) malloc(_len_dev__i0__mode_config_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__mode_config_funcs0; _j0++) {
            dev[_i0].mode_config.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dev[_i0].mode_config.min_height = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].mode_config.min_width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          exynos_drm_mode_config_init(dev);
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

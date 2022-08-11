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
       3            linked\n\
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
struct TYPE_2__ {struct drm_crtc* crtc; } ;
struct drm_fb_helper_crtc {TYPE_1__ mode_set; } ;
struct drm_fb_helper {int crtc_count; struct drm_fb_helper_crtc* crtc_info; } ;
struct drm_crtc {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static struct drm_fb_helper_crtc *
intel_fb_helper_crtc(struct drm_fb_helper *fb_helper, struct drm_crtc *crtc)
{
	int i;

	for (i = 0; i < fb_helper->crtc_count; i++)
		if (fb_helper->crtc_info[i].mode_set.crtc == crtc)
			return &fb_helper->crtc_info[i];

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
          int _len_fb_helper0 = 1;
          struct drm_fb_helper * fb_helper = (struct drm_fb_helper *) malloc(_len_fb_helper0*sizeof(struct drm_fb_helper));
          for(int _i0 = 0; _i0 < _len_fb_helper0; _i0++) {
            fb_helper[_i0].crtc_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fb_helper__i0__crtc_info0 = 1;
          fb_helper[_i0].crtc_info = (struct drm_fb_helper_crtc *) malloc(_len_fb_helper__i0__crtc_info0*sizeof(struct drm_fb_helper_crtc));
          for(int _j0 = 0; _j0 < _len_fb_helper__i0__crtc_info0; _j0++) {
              int _len_fb_helper__i0__crtc_info_mode_set_crtc0 = 1;
          fb_helper[_i0].crtc_info->mode_set.crtc = (struct drm_crtc *) malloc(_len_fb_helper__i0__crtc_info_mode_set_crtc0*sizeof(struct drm_crtc));
          for(int _j0 = 0; _j0 < _len_fb_helper__i0__crtc_info_mode_set_crtc0; _j0++) {
            fb_helper[_i0].crtc_info->mode_set.crtc->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_crtc0 = 1;
          struct drm_crtc * crtc = (struct drm_crtc *) malloc(_len_crtc0*sizeof(struct drm_crtc));
          for(int _i0 = 0; _i0 < _len_crtc0; _i0++) {
            crtc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct drm_fb_helper_crtc * benchRet = intel_fb_helper_crtc(fb_helper,crtc);
          for(int _aux = 0; _aux < _len_fb_helper0; _aux++) {
          free(fb_helper[_aux].crtc_info);
          }
          free(fb_helper);
          free(crtc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_fb_helper0 = 65025;
          struct drm_fb_helper * fb_helper = (struct drm_fb_helper *) malloc(_len_fb_helper0*sizeof(struct drm_fb_helper));
          for(int _i0 = 0; _i0 < _len_fb_helper0; _i0++) {
            fb_helper[_i0].crtc_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fb_helper__i0__crtc_info0 = 1;
          fb_helper[_i0].crtc_info = (struct drm_fb_helper_crtc *) malloc(_len_fb_helper__i0__crtc_info0*sizeof(struct drm_fb_helper_crtc));
          for(int _j0 = 0; _j0 < _len_fb_helper__i0__crtc_info0; _j0++) {
              int _len_fb_helper__i0__crtc_info_mode_set_crtc0 = 1;
          fb_helper[_i0].crtc_info->mode_set.crtc = (struct drm_crtc *) malloc(_len_fb_helper__i0__crtc_info_mode_set_crtc0*sizeof(struct drm_crtc));
          for(int _j0 = 0; _j0 < _len_fb_helper__i0__crtc_info_mode_set_crtc0; _j0++) {
            fb_helper[_i0].crtc_info->mode_set.crtc->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_crtc0 = 65025;
          struct drm_crtc * crtc = (struct drm_crtc *) malloc(_len_crtc0*sizeof(struct drm_crtc));
          for(int _i0 = 0; _i0 < _len_crtc0; _i0++) {
            crtc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct drm_fb_helper_crtc * benchRet = intel_fb_helper_crtc(fb_helper,crtc);
          for(int _aux = 0; _aux < _len_fb_helper0; _aux++) {
          free(fb_helper[_aux].crtc_info);
          }
          free(fb_helper);
          free(crtc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_fb_helper0 = 100;
          struct drm_fb_helper * fb_helper = (struct drm_fb_helper *) malloc(_len_fb_helper0*sizeof(struct drm_fb_helper));
          for(int _i0 = 0; _i0 < _len_fb_helper0; _i0++) {
            fb_helper[_i0].crtc_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fb_helper__i0__crtc_info0 = 1;
          fb_helper[_i0].crtc_info = (struct drm_fb_helper_crtc *) malloc(_len_fb_helper__i0__crtc_info0*sizeof(struct drm_fb_helper_crtc));
          for(int _j0 = 0; _j0 < _len_fb_helper__i0__crtc_info0; _j0++) {
              int _len_fb_helper__i0__crtc_info_mode_set_crtc0 = 1;
          fb_helper[_i0].crtc_info->mode_set.crtc = (struct drm_crtc *) malloc(_len_fb_helper__i0__crtc_info_mode_set_crtc0*sizeof(struct drm_crtc));
          for(int _j0 = 0; _j0 < _len_fb_helper__i0__crtc_info_mode_set_crtc0; _j0++) {
            fb_helper[_i0].crtc_info->mode_set.crtc->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_crtc0 = 100;
          struct drm_crtc * crtc = (struct drm_crtc *) malloc(_len_crtc0*sizeof(struct drm_crtc));
          for(int _i0 = 0; _i0 < _len_crtc0; _i0++) {
            crtc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct drm_fb_helper_crtc * benchRet = intel_fb_helper_crtc(fb_helper,crtc);
          for(int _aux = 0; _aux < _len_fb_helper0; _aux++) {
          free(fb_helper[_aux].crtc_info);
          }
          free(fb_helper);
          free(crtc);
        
        break;
    }
    // linked
    case 3:
    {
          int _len_fb_helper0 = 1;
          struct drm_fb_helper * fb_helper = (struct drm_fb_helper *) malloc(_len_fb_helper0*sizeof(struct drm_fb_helper));
          for(int _i0 = 0; _i0 < _len_fb_helper0; _i0++) {
            fb_helper[_i0].crtc_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fb_helper__i0__crtc_info0 = 1;
          fb_helper[_i0].crtc_info = (struct drm_fb_helper_crtc *) malloc(_len_fb_helper__i0__crtc_info0*sizeof(struct drm_fb_helper_crtc));
          for(int _j0 = 0; _j0 < _len_fb_helper__i0__crtc_info0; _j0++) {
              int _len_fb_helper__i0__crtc_info_mode_set_crtc0 = 1;
          fb_helper[_i0].crtc_info->mode_set.crtc = (struct drm_crtc *) malloc(_len_fb_helper__i0__crtc_info_mode_set_crtc0*sizeof(struct drm_crtc));
          for(int _j0 = 0; _j0 < _len_fb_helper__i0__crtc_info_mode_set_crtc0; _j0++) {
            fb_helper[_i0].crtc_info->mode_set.crtc->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_crtc0 = 1;
          struct drm_crtc * crtc = (struct drm_crtc *) malloc(_len_crtc0*sizeof(struct drm_crtc));
          for(int _i0 = 0; _i0 < _len_crtc0; _i0++) {
            crtc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct drm_fb_helper_crtc * benchRet = intel_fb_helper_crtc(fb_helper,crtc);
          for(int _aux = 0; _aux < _len_fb_helper0; _aux++) {
          free(fb_helper[_aux].crtc_info);
          }
          free(fb_helper);
          free(crtc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

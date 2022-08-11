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
struct intel_overlay {TYPE_1__* crtc; } ;
struct intel_crtc_state {scalar_t__ pipe_src_w; scalar_t__ pipe_src_h; } ;
struct drm_intel_overlay_put_image {scalar_t__ dst_x; scalar_t__ dst_width; scalar_t__ dst_y; scalar_t__ dst_height; } ;
struct TYPE_2__ {struct intel_crtc_state* config; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int check_overlay_dst(struct intel_overlay *overlay,
			     struct drm_intel_overlay_put_image *rec)
{
	const struct intel_crtc_state *pipe_config =
		overlay->crtc->config;

	if (rec->dst_x < pipe_config->pipe_src_w &&
	    rec->dst_x + rec->dst_width <= pipe_config->pipe_src_w &&
	    rec->dst_y < pipe_config->pipe_src_h &&
	    rec->dst_y + rec->dst_height <= pipe_config->pipe_src_h)
		return 0;
	else
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
          int _len_overlay0 = 1;
          struct intel_overlay * overlay = (struct intel_overlay *) malloc(_len_overlay0*sizeof(struct intel_overlay));
          for(int _i0 = 0; _i0 < _len_overlay0; _i0++) {
              int _len_overlay__i0__crtc0 = 1;
          overlay[_i0].crtc = (struct TYPE_2__ *) malloc(_len_overlay__i0__crtc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_overlay__i0__crtc0; _j0++) {
              int _len_overlay__i0__crtc_config0 = 1;
          overlay[_i0].crtc->config = (struct intel_crtc_state *) malloc(_len_overlay__i0__crtc_config0*sizeof(struct intel_crtc_state));
          for(int _j0 = 0; _j0 < _len_overlay__i0__crtc_config0; _j0++) {
            overlay[_i0].crtc->config->pipe_src_w = ((-2 * (next_i()%2)) + 1) * next_i();
        overlay[_i0].crtc->config->pipe_src_h = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_rec0 = 1;
          struct drm_intel_overlay_put_image * rec = (struct drm_intel_overlay_put_image *) malloc(_len_rec0*sizeof(struct drm_intel_overlay_put_image));
          for(int _i0 = 0; _i0 < _len_rec0; _i0++) {
            rec[_i0].dst_x = ((-2 * (next_i()%2)) + 1) * next_i();
        rec[_i0].dst_width = ((-2 * (next_i()%2)) + 1) * next_i();
        rec[_i0].dst_y = ((-2 * (next_i()%2)) + 1) * next_i();
        rec[_i0].dst_height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_overlay_dst(overlay,rec);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_overlay0; _aux++) {
          free(overlay[_aux].crtc);
          }
          free(overlay);
          free(rec);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_overlay0 = 65025;
          struct intel_overlay * overlay = (struct intel_overlay *) malloc(_len_overlay0*sizeof(struct intel_overlay));
          for(int _i0 = 0; _i0 < _len_overlay0; _i0++) {
              int _len_overlay__i0__crtc0 = 1;
          overlay[_i0].crtc = (struct TYPE_2__ *) malloc(_len_overlay__i0__crtc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_overlay__i0__crtc0; _j0++) {
              int _len_overlay__i0__crtc_config0 = 1;
          overlay[_i0].crtc->config = (struct intel_crtc_state *) malloc(_len_overlay__i0__crtc_config0*sizeof(struct intel_crtc_state));
          for(int _j0 = 0; _j0 < _len_overlay__i0__crtc_config0; _j0++) {
            overlay[_i0].crtc->config->pipe_src_w = ((-2 * (next_i()%2)) + 1) * next_i();
        overlay[_i0].crtc->config->pipe_src_h = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_rec0 = 65025;
          struct drm_intel_overlay_put_image * rec = (struct drm_intel_overlay_put_image *) malloc(_len_rec0*sizeof(struct drm_intel_overlay_put_image));
          for(int _i0 = 0; _i0 < _len_rec0; _i0++) {
            rec[_i0].dst_x = ((-2 * (next_i()%2)) + 1) * next_i();
        rec[_i0].dst_width = ((-2 * (next_i()%2)) + 1) * next_i();
        rec[_i0].dst_y = ((-2 * (next_i()%2)) + 1) * next_i();
        rec[_i0].dst_height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_overlay_dst(overlay,rec);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_overlay0; _aux++) {
          free(overlay[_aux].crtc);
          }
          free(overlay);
          free(rec);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_overlay0 = 100;
          struct intel_overlay * overlay = (struct intel_overlay *) malloc(_len_overlay0*sizeof(struct intel_overlay));
          for(int _i0 = 0; _i0 < _len_overlay0; _i0++) {
              int _len_overlay__i0__crtc0 = 1;
          overlay[_i0].crtc = (struct TYPE_2__ *) malloc(_len_overlay__i0__crtc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_overlay__i0__crtc0; _j0++) {
              int _len_overlay__i0__crtc_config0 = 1;
          overlay[_i0].crtc->config = (struct intel_crtc_state *) malloc(_len_overlay__i0__crtc_config0*sizeof(struct intel_crtc_state));
          for(int _j0 = 0; _j0 < _len_overlay__i0__crtc_config0; _j0++) {
            overlay[_i0].crtc->config->pipe_src_w = ((-2 * (next_i()%2)) + 1) * next_i();
        overlay[_i0].crtc->config->pipe_src_h = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_rec0 = 100;
          struct drm_intel_overlay_put_image * rec = (struct drm_intel_overlay_put_image *) malloc(_len_rec0*sizeof(struct drm_intel_overlay_put_image));
          for(int _i0 = 0; _i0 < _len_rec0; _i0++) {
            rec[_i0].dst_x = ((-2 * (next_i()%2)) + 1) * next_i();
        rec[_i0].dst_width = ((-2 * (next_i()%2)) + 1) * next_i();
        rec[_i0].dst_y = ((-2 * (next_i()%2)) + 1) * next_i();
        rec[_i0].dst_height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_overlay_dst(overlay,rec);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_overlay0; _aux++) {
          free(overlay[_aux].crtc);
          }
          free(overlay);
          free(rec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

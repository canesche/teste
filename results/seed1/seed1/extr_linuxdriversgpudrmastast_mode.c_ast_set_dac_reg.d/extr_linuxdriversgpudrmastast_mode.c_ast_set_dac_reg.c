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
struct drm_framebuffer {TYPE_2__* format; } ;
struct drm_display_mode {int dummy; } ;
struct drm_crtc {TYPE_1__* primary; } ;
struct ast_vbios_mode_info {int dummy; } ;
struct TYPE_4__ {int* cpp; } ;
struct TYPE_3__ {struct drm_framebuffer* fb; } ;

/* Variables and functions */

__attribute__((used)) static bool ast_set_dac_reg(struct drm_crtc *crtc, struct drm_display_mode *mode,
		     struct ast_vbios_mode_info *vbios_mode)
{
	const struct drm_framebuffer *fb = crtc->primary->fb;

	switch (fb->format->cpp[0] * 8) {
	case 8:
		break;
	default:
		return false;
	}
	return true;
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
              int _len_crtc__i0__primary0 = 1;
          crtc[_i0].primary = (struct TYPE_3__ *) malloc(_len_crtc__i0__primary0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_crtc__i0__primary0; _j0++) {
              int _len_crtc__i0__primary_fb0 = 1;
          crtc[_i0].primary->fb = (struct drm_framebuffer *) malloc(_len_crtc__i0__primary_fb0*sizeof(struct drm_framebuffer));
          for(int _j0 = 0; _j0 < _len_crtc__i0__primary_fb0; _j0++) {
              int _len_crtc__i0__primary_fb_format0 = 1;
          crtc[_i0].primary->fb->format = (struct TYPE_4__ *) malloc(_len_crtc__i0__primary_fb_format0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_crtc__i0__primary_fb_format0; _j0++) {
              int _len_crtc__i0__primary_fb_format_cpp0 = 1;
          crtc[_i0].primary->fb->format->cpp = (int *) malloc(_len_crtc__i0__primary_fb_format_cpp0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_crtc__i0__primary_fb_format_cpp0; _j0++) {
            crtc[_i0].primary->fb->format->cpp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          }
          int _len_mode0 = 1;
          struct drm_display_mode * mode = (struct drm_display_mode *) malloc(_len_mode0*sizeof(struct drm_display_mode));
          for(int _i0 = 0; _i0 < _len_mode0; _i0++) {
            mode[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vbios_mode0 = 1;
          struct ast_vbios_mode_info * vbios_mode = (struct ast_vbios_mode_info *) malloc(_len_vbios_mode0*sizeof(struct ast_vbios_mode_info));
          for(int _i0 = 0; _i0 < _len_vbios_mode0; _i0++) {
            vbios_mode[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ast_set_dac_reg(crtc,mode,vbios_mode);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_crtc0; _aux++) {
          free(crtc[_aux].primary);
          }
          free(crtc);
          free(mode);
          free(vbios_mode);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_crtc0 = 65025;
          struct drm_crtc * crtc = (struct drm_crtc *) malloc(_len_crtc0*sizeof(struct drm_crtc));
          for(int _i0 = 0; _i0 < _len_crtc0; _i0++) {
              int _len_crtc__i0__primary0 = 1;
          crtc[_i0].primary = (struct TYPE_3__ *) malloc(_len_crtc__i0__primary0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_crtc__i0__primary0; _j0++) {
              int _len_crtc__i0__primary_fb0 = 1;
          crtc[_i0].primary->fb = (struct drm_framebuffer *) malloc(_len_crtc__i0__primary_fb0*sizeof(struct drm_framebuffer));
          for(int _j0 = 0; _j0 < _len_crtc__i0__primary_fb0; _j0++) {
              int _len_crtc__i0__primary_fb_format0 = 1;
          crtc[_i0].primary->fb->format = (struct TYPE_4__ *) malloc(_len_crtc__i0__primary_fb_format0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_crtc__i0__primary_fb_format0; _j0++) {
              int _len_crtc__i0__primary_fb_format_cpp0 = 1;
          crtc[_i0].primary->fb->format->cpp = (int *) malloc(_len_crtc__i0__primary_fb_format_cpp0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_crtc__i0__primary_fb_format_cpp0; _j0++) {
            crtc[_i0].primary->fb->format->cpp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          }
          int _len_mode0 = 65025;
          struct drm_display_mode * mode = (struct drm_display_mode *) malloc(_len_mode0*sizeof(struct drm_display_mode));
          for(int _i0 = 0; _i0 < _len_mode0; _i0++) {
            mode[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vbios_mode0 = 65025;
          struct ast_vbios_mode_info * vbios_mode = (struct ast_vbios_mode_info *) malloc(_len_vbios_mode0*sizeof(struct ast_vbios_mode_info));
          for(int _i0 = 0; _i0 < _len_vbios_mode0; _i0++) {
            vbios_mode[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ast_set_dac_reg(crtc,mode,vbios_mode);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_crtc0; _aux++) {
          free(crtc[_aux].primary);
          }
          free(crtc);
          free(mode);
          free(vbios_mode);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_crtc0 = 100;
          struct drm_crtc * crtc = (struct drm_crtc *) malloc(_len_crtc0*sizeof(struct drm_crtc));
          for(int _i0 = 0; _i0 < _len_crtc0; _i0++) {
              int _len_crtc__i0__primary0 = 1;
          crtc[_i0].primary = (struct TYPE_3__ *) malloc(_len_crtc__i0__primary0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_crtc__i0__primary0; _j0++) {
              int _len_crtc__i0__primary_fb0 = 1;
          crtc[_i0].primary->fb = (struct drm_framebuffer *) malloc(_len_crtc__i0__primary_fb0*sizeof(struct drm_framebuffer));
          for(int _j0 = 0; _j0 < _len_crtc__i0__primary_fb0; _j0++) {
              int _len_crtc__i0__primary_fb_format0 = 1;
          crtc[_i0].primary->fb->format = (struct TYPE_4__ *) malloc(_len_crtc__i0__primary_fb_format0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_crtc__i0__primary_fb_format0; _j0++) {
              int _len_crtc__i0__primary_fb_format_cpp0 = 1;
          crtc[_i0].primary->fb->format->cpp = (int *) malloc(_len_crtc__i0__primary_fb_format_cpp0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_crtc__i0__primary_fb_format_cpp0; _j0++) {
            crtc[_i0].primary->fb->format->cpp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          }
          int _len_mode0 = 100;
          struct drm_display_mode * mode = (struct drm_display_mode *) malloc(_len_mode0*sizeof(struct drm_display_mode));
          for(int _i0 = 0; _i0 < _len_mode0; _i0++) {
            mode[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vbios_mode0 = 100;
          struct ast_vbios_mode_info * vbios_mode = (struct ast_vbios_mode_info *) malloc(_len_vbios_mode0*sizeof(struct ast_vbios_mode_info));
          for(int _i0 = 0; _i0 < _len_vbios_mode0; _i0++) {
            vbios_mode[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ast_set_dac_reg(crtc,mode,vbios_mode);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_crtc0; _aux++) {
          free(crtc[_aux].primary);
          }
          free(crtc);
          free(mode);
          free(vbios_mode);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

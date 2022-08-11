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
struct drm_plane_state {int /*<<< orphan*/  crtc; struct drm_framebuffer* fb; } ;
struct drm_plane {int dummy; } ;
struct drm_framebuffer {TYPE_1__* format; } ;
struct TYPE_2__ {int format; } ;

/* Variables and functions */
#define  DRM_FORMAT_ARGB1555 136 
#define  DRM_FORMAT_ARGB4444 135 
#define  DRM_FORMAT_ARGB8888 134 
#define  DRM_FORMAT_RGB565 133 
#define  DRM_FORMAT_RGB888 132 
#define  DRM_FORMAT_XRGB1555 131 
#define  DRM_FORMAT_XRGB4444 130 
#define  DRM_FORMAT_XRGB8888 129 
#define  DRM_FORMAT_YUV422 128 
 int EINVAL ; 

__attribute__((used)) static int fsl_dcu_drm_plane_atomic_check(struct drm_plane *plane,
					  struct drm_plane_state *state)
{
	struct drm_framebuffer *fb = state->fb;

	if (!state->fb || !state->crtc)
		return 0;

	switch (fb->format->format) {
	case DRM_FORMAT_RGB565:
	case DRM_FORMAT_RGB888:
	case DRM_FORMAT_XRGB8888:
	case DRM_FORMAT_ARGB8888:
	case DRM_FORMAT_XRGB4444:
	case DRM_FORMAT_ARGB4444:
	case DRM_FORMAT_XRGB1555:
	case DRM_FORMAT_ARGB1555:
	case DRM_FORMAT_YUV422:
		return 0;
	default:
		return -EINVAL;
	}
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
          int _len_plane0 = 1;
          struct drm_plane * plane = (struct drm_plane *) malloc(_len_plane0*sizeof(struct drm_plane));
          for(int _i0 = 0; _i0 < _len_plane0; _i0++) {
            plane[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state0 = 1;
          struct drm_plane_state * state = (struct drm_plane_state *) malloc(_len_state0*sizeof(struct drm_plane_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].crtc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__fb0 = 1;
          state[_i0].fb = (struct drm_framebuffer *) malloc(_len_state__i0__fb0*sizeof(struct drm_framebuffer));
          for(int _j0 = 0; _j0 < _len_state__i0__fb0; _j0++) {
              int _len_state__i0__fb_format0 = 1;
          state[_i0].fb->format = (struct TYPE_2__ *) malloc(_len_state__i0__fb_format0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_state__i0__fb_format0; _j0++) {
            state[_i0].fb->format->format = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = fsl_dcu_drm_plane_atomic_check(plane,state);
          printf("%d\n", benchRet); 
          free(plane);
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].fb);
          }
          free(state);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_plane0 = 65025;
          struct drm_plane * plane = (struct drm_plane *) malloc(_len_plane0*sizeof(struct drm_plane));
          for(int _i0 = 0; _i0 < _len_plane0; _i0++) {
            plane[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state0 = 65025;
          struct drm_plane_state * state = (struct drm_plane_state *) malloc(_len_state0*sizeof(struct drm_plane_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].crtc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__fb0 = 1;
          state[_i0].fb = (struct drm_framebuffer *) malloc(_len_state__i0__fb0*sizeof(struct drm_framebuffer));
          for(int _j0 = 0; _j0 < _len_state__i0__fb0; _j0++) {
              int _len_state__i0__fb_format0 = 1;
          state[_i0].fb->format = (struct TYPE_2__ *) malloc(_len_state__i0__fb_format0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_state__i0__fb_format0; _j0++) {
            state[_i0].fb->format->format = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = fsl_dcu_drm_plane_atomic_check(plane,state);
          printf("%d\n", benchRet); 
          free(plane);
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].fb);
          }
          free(state);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_plane0 = 100;
          struct drm_plane * plane = (struct drm_plane *) malloc(_len_plane0*sizeof(struct drm_plane));
          for(int _i0 = 0; _i0 < _len_plane0; _i0++) {
            plane[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state0 = 100;
          struct drm_plane_state * state = (struct drm_plane_state *) malloc(_len_state0*sizeof(struct drm_plane_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].crtc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__fb0 = 1;
          state[_i0].fb = (struct drm_framebuffer *) malloc(_len_state__i0__fb0*sizeof(struct drm_framebuffer));
          for(int _j0 = 0; _j0 < _len_state__i0__fb0; _j0++) {
              int _len_state__i0__fb_format0 = 1;
          state[_i0].fb->format = (struct TYPE_2__ *) malloc(_len_state__i0__fb_format0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_state__i0__fb_format0; _j0++) {
            state[_i0].fb->format->format = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = fsl_dcu_drm_plane_atomic_check(plane,state);
          printf("%d\n", benchRet); 
          free(plane);
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].fb);
          }
          free(state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

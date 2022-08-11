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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {TYPE_3__* state; } ;
struct ipu_plane {TYPE_4__ base; } ;
struct TYPE_7__ {TYPE_2__* fb; } ;
struct TYPE_6__ {TYPE_1__* format; } ;
struct TYPE_5__ {int format; } ;

/* Variables and functions */
#define  DRM_FORMAT_BGR565_A8 133 
#define  DRM_FORMAT_BGR888_A8 132 
#define  DRM_FORMAT_BGRX8888_A8 131 
#define  DRM_FORMAT_RGB565_A8 130 
#define  DRM_FORMAT_RGB888_A8 129 
#define  DRM_FORMAT_RGBX8888_A8 128 

__attribute__((used)) static bool ipu_plane_separate_alpha(struct ipu_plane *ipu_plane)
{
	switch (ipu_plane->base.state->fb->format->format) {
	case DRM_FORMAT_RGB565_A8:
	case DRM_FORMAT_BGR565_A8:
	case DRM_FORMAT_RGB888_A8:
	case DRM_FORMAT_BGR888_A8:
	case DRM_FORMAT_RGBX8888_A8:
	case DRM_FORMAT_BGRX8888_A8:
		return true;
	default:
		return false;
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
          int _len_ipu_plane0 = 1;
          struct ipu_plane * ipu_plane = (struct ipu_plane *) malloc(_len_ipu_plane0*sizeof(struct ipu_plane));
          for(int _i0 = 0; _i0 < _len_ipu_plane0; _i0++) {
              int _len_ipu_plane__i0__base_state0 = 1;
          ipu_plane[_i0].base.state = (struct TYPE_7__ *) malloc(_len_ipu_plane__i0__base_state0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_ipu_plane__i0__base_state0; _j0++) {
              int _len_ipu_plane__i0__base_state_fb0 = 1;
          ipu_plane[_i0].base.state->fb = (struct TYPE_6__ *) malloc(_len_ipu_plane__i0__base_state_fb0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_ipu_plane__i0__base_state_fb0; _j0++) {
              int _len_ipu_plane__i0__base_state_fb_format0 = 1;
          ipu_plane[_i0].base.state->fb->format = (struct TYPE_5__ *) malloc(_len_ipu_plane__i0__base_state_fb_format0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_ipu_plane__i0__base_state_fb_format0; _j0++) {
            ipu_plane[_i0].base.state->fb->format->format = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = ipu_plane_separate_alpha(ipu_plane);
          printf("%d\n", benchRet); 
          free(ipu_plane);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ipu_plane0 = 65025;
          struct ipu_plane * ipu_plane = (struct ipu_plane *) malloc(_len_ipu_plane0*sizeof(struct ipu_plane));
          for(int _i0 = 0; _i0 < _len_ipu_plane0; _i0++) {
              int _len_ipu_plane__i0__base_state0 = 1;
          ipu_plane[_i0].base.state = (struct TYPE_7__ *) malloc(_len_ipu_plane__i0__base_state0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_ipu_plane__i0__base_state0; _j0++) {
              int _len_ipu_plane__i0__base_state_fb0 = 1;
          ipu_plane[_i0].base.state->fb = (struct TYPE_6__ *) malloc(_len_ipu_plane__i0__base_state_fb0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_ipu_plane__i0__base_state_fb0; _j0++) {
              int _len_ipu_plane__i0__base_state_fb_format0 = 1;
          ipu_plane[_i0].base.state->fb->format = (struct TYPE_5__ *) malloc(_len_ipu_plane__i0__base_state_fb_format0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_ipu_plane__i0__base_state_fb_format0; _j0++) {
            ipu_plane[_i0].base.state->fb->format->format = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = ipu_plane_separate_alpha(ipu_plane);
          printf("%d\n", benchRet); 
          free(ipu_plane);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ipu_plane0 = 100;
          struct ipu_plane * ipu_plane = (struct ipu_plane *) malloc(_len_ipu_plane0*sizeof(struct ipu_plane));
          for(int _i0 = 0; _i0 < _len_ipu_plane0; _i0++) {
              int _len_ipu_plane__i0__base_state0 = 1;
          ipu_plane[_i0].base.state = (struct TYPE_7__ *) malloc(_len_ipu_plane__i0__base_state0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_ipu_plane__i0__base_state0; _j0++) {
              int _len_ipu_plane__i0__base_state_fb0 = 1;
          ipu_plane[_i0].base.state->fb = (struct TYPE_6__ *) malloc(_len_ipu_plane__i0__base_state_fb0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_ipu_plane__i0__base_state_fb0; _j0++) {
              int _len_ipu_plane__i0__base_state_fb_format0 = 1;
          ipu_plane[_i0].base.state->fb->format = (struct TYPE_5__ *) malloc(_len_ipu_plane__i0__base_state_fb_format0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_ipu_plane__i0__base_state_fb_format0; _j0++) {
            ipu_plane[_i0].base.state->fb->format->format = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = ipu_plane_separate_alpha(ipu_plane);
          printf("%d\n", benchRet); 
          free(ipu_plane);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

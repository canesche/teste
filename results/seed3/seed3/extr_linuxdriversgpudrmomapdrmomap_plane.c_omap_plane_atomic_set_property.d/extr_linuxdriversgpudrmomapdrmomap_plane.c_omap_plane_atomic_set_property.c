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
typedef  int /*<<< orphan*/  u64 ;
struct omap_drm_private {struct drm_property* zorder_prop; } ;
struct drm_property {int dummy; } ;
struct drm_plane_state {int /*<<< orphan*/  zpos; } ;
struct drm_plane {TYPE_1__* dev; } ;
struct TYPE_2__ {struct omap_drm_private* dev_private; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int omap_plane_atomic_set_property(struct drm_plane *plane,
					  struct drm_plane_state *state,
					  struct drm_property *property,
					  u64 val)
{
	struct omap_drm_private *priv = plane->dev->dev_private;

	if (property == priv->zorder_prop)
		state->zpos = val;
	else
		return -EINVAL;

	return 0;
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
          int val = 100;
          int _len_plane0 = 1;
          struct drm_plane * plane = (struct drm_plane *) malloc(_len_plane0*sizeof(struct drm_plane));
          for(int _i0 = 0; _i0 < _len_plane0; _i0++) {
              int _len_plane__i0__dev0 = 1;
          plane[_i0].dev = (struct TYPE_2__ *) malloc(_len_plane__i0__dev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_plane__i0__dev0; _j0++) {
              int _len_plane__i0__dev_dev_private0 = 1;
          plane[_i0].dev->dev_private = (struct omap_drm_private *) malloc(_len_plane__i0__dev_dev_private0*sizeof(struct omap_drm_private));
          for(int _j0 = 0; _j0 < _len_plane__i0__dev_dev_private0; _j0++) {
              int _len_plane__i0__dev_dev_private_zorder_prop0 = 1;
          plane[_i0].dev->dev_private->zorder_prop = (struct drm_property *) malloc(_len_plane__i0__dev_dev_private_zorder_prop0*sizeof(struct drm_property));
          for(int _j0 = 0; _j0 < _len_plane__i0__dev_dev_private_zorder_prop0; _j0++) {
            plane[_i0].dev->dev_private->zorder_prop->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_state0 = 1;
          struct drm_plane_state * state = (struct drm_plane_state *) malloc(_len_state0*sizeof(struct drm_plane_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].zpos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_property0 = 1;
          struct drm_property * property = (struct drm_property *) malloc(_len_property0*sizeof(struct drm_property));
          for(int _i0 = 0; _i0 < _len_property0; _i0++) {
            property[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = omap_plane_atomic_set_property(plane,state,property,val);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_plane0; _aux++) {
          free(plane[_aux].dev);
          }
          free(plane);
          free(state);
          free(property);
        
        break;
    }
    // big-arr
    case 1:
    {
          int val = 255;
          int _len_plane0 = 65025;
          struct drm_plane * plane = (struct drm_plane *) malloc(_len_plane0*sizeof(struct drm_plane));
          for(int _i0 = 0; _i0 < _len_plane0; _i0++) {
              int _len_plane__i0__dev0 = 1;
          plane[_i0].dev = (struct TYPE_2__ *) malloc(_len_plane__i0__dev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_plane__i0__dev0; _j0++) {
              int _len_plane__i0__dev_dev_private0 = 1;
          plane[_i0].dev->dev_private = (struct omap_drm_private *) malloc(_len_plane__i0__dev_dev_private0*sizeof(struct omap_drm_private));
          for(int _j0 = 0; _j0 < _len_plane__i0__dev_dev_private0; _j0++) {
              int _len_plane__i0__dev_dev_private_zorder_prop0 = 1;
          plane[_i0].dev->dev_private->zorder_prop = (struct drm_property *) malloc(_len_plane__i0__dev_dev_private_zorder_prop0*sizeof(struct drm_property));
          for(int _j0 = 0; _j0 < _len_plane__i0__dev_dev_private_zorder_prop0; _j0++) {
            plane[_i0].dev->dev_private->zorder_prop->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_state0 = 65025;
          struct drm_plane_state * state = (struct drm_plane_state *) malloc(_len_state0*sizeof(struct drm_plane_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].zpos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_property0 = 65025;
          struct drm_property * property = (struct drm_property *) malloc(_len_property0*sizeof(struct drm_property));
          for(int _i0 = 0; _i0 < _len_property0; _i0++) {
            property[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = omap_plane_atomic_set_property(plane,state,property,val);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_plane0; _aux++) {
          free(plane[_aux].dev);
          }
          free(plane);
          free(state);
          free(property);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int val = 10;
          int _len_plane0 = 100;
          struct drm_plane * plane = (struct drm_plane *) malloc(_len_plane0*sizeof(struct drm_plane));
          for(int _i0 = 0; _i0 < _len_plane0; _i0++) {
              int _len_plane__i0__dev0 = 1;
          plane[_i0].dev = (struct TYPE_2__ *) malloc(_len_plane__i0__dev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_plane__i0__dev0; _j0++) {
              int _len_plane__i0__dev_dev_private0 = 1;
          plane[_i0].dev->dev_private = (struct omap_drm_private *) malloc(_len_plane__i0__dev_dev_private0*sizeof(struct omap_drm_private));
          for(int _j0 = 0; _j0 < _len_plane__i0__dev_dev_private0; _j0++) {
              int _len_plane__i0__dev_dev_private_zorder_prop0 = 1;
          plane[_i0].dev->dev_private->zorder_prop = (struct drm_property *) malloc(_len_plane__i0__dev_dev_private_zorder_prop0*sizeof(struct drm_property));
          for(int _j0 = 0; _j0 < _len_plane__i0__dev_dev_private_zorder_prop0; _j0++) {
            plane[_i0].dev->dev_private->zorder_prop->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_state0 = 100;
          struct drm_plane_state * state = (struct drm_plane_state *) malloc(_len_state0*sizeof(struct drm_plane_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].zpos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_property0 = 100;
          struct drm_property * property = (struct drm_property *) malloc(_len_property0*sizeof(struct drm_property));
          for(int _i0 = 0; _i0 < _len_property0; _i0++) {
            property[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = omap_plane_atomic_set_property(plane,state,property,val);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_plane0; _aux++) {
          free(plane[_aux].dev);
          }
          free(plane);
          free(state);
          free(property);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

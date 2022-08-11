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
struct rcar_du_plane_state {scalar_t__ source; TYPE_2__* format; } ;
struct rcar_du_plane {TYPE_1__* group; } ;
struct TYPE_4__ {unsigned int planes; } ;
struct TYPE_3__ {scalar_t__ index; } ;

/* Variables and functions */
 int EBUSY ; 
 int EINVAL ; 
 int RCAR_DU_NUM_HW_PLANES ; 
 scalar_t__ RCAR_DU_PLANE_VSPD0 ; 
 scalar_t__ RCAR_DU_PLANE_VSPD1 ; 

__attribute__((used)) static int rcar_du_plane_hwalloc(struct rcar_du_plane *plane,
				 struct rcar_du_plane_state *state,
				 unsigned int free)
{
	unsigned int num_planes = state->format->planes;
	int fixed = -1;
	int i;

	if (state->source == RCAR_DU_PLANE_VSPD0) {
		/* VSPD0 feeds plane 0 on DU0/1. */
		if (plane->group->index != 0)
			return -EINVAL;

		fixed = 0;
	} else if (state->source == RCAR_DU_PLANE_VSPD1) {
		/* VSPD1 feeds plane 1 on DU0/1 or plane 0 on DU2. */
		fixed = plane->group->index == 0 ? 1 : 0;
	}

	if (fixed >= 0)
		return free & (1 << fixed) ? fixed : -EBUSY;

	for (i = RCAR_DU_NUM_HW_PLANES - 1; i >= 0; --i) {
		if (!(free & (1 << i)))
			continue;

		if (num_planes == 1 || free & (1 << ((i + 1) % 8)))
			break;
	}

	return i < 0 ? -EBUSY : i;
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
          unsigned int free = 100;
          int _len_plane0 = 1;
          struct rcar_du_plane * plane = (struct rcar_du_plane *) malloc(_len_plane0*sizeof(struct rcar_du_plane));
          for(int _i0 = 0; _i0 < _len_plane0; _i0++) {
              int _len_plane__i0__group0 = 1;
          plane[_i0].group = (struct TYPE_3__ *) malloc(_len_plane__i0__group0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_plane__i0__group0; _j0++) {
            plane[_i0].group->index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_state0 = 1;
          struct rcar_du_plane_state * state = (struct rcar_du_plane_state *) malloc(_len_state0*sizeof(struct rcar_du_plane_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].source = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__format0 = 1;
          state[_i0].format = (struct TYPE_4__ *) malloc(_len_state__i0__format0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_state__i0__format0; _j0++) {
            state[_i0].format->planes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = rcar_du_plane_hwalloc(plane,state,free);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_plane0; _aux++) {
          free(plane[_aux].group);
          }
          free(plane);
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].format);
          }
          free(state);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int free = 255;
          int _len_plane0 = 65025;
          struct rcar_du_plane * plane = (struct rcar_du_plane *) malloc(_len_plane0*sizeof(struct rcar_du_plane));
          for(int _i0 = 0; _i0 < _len_plane0; _i0++) {
              int _len_plane__i0__group0 = 1;
          plane[_i0].group = (struct TYPE_3__ *) malloc(_len_plane__i0__group0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_plane__i0__group0; _j0++) {
            plane[_i0].group->index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_state0 = 65025;
          struct rcar_du_plane_state * state = (struct rcar_du_plane_state *) malloc(_len_state0*sizeof(struct rcar_du_plane_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].source = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__format0 = 1;
          state[_i0].format = (struct TYPE_4__ *) malloc(_len_state__i0__format0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_state__i0__format0; _j0++) {
            state[_i0].format->planes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = rcar_du_plane_hwalloc(plane,state,free);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_plane0; _aux++) {
          free(plane[_aux].group);
          }
          free(plane);
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].format);
          }
          free(state);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int free = 10;
          int _len_plane0 = 100;
          struct rcar_du_plane * plane = (struct rcar_du_plane *) malloc(_len_plane0*sizeof(struct rcar_du_plane));
          for(int _i0 = 0; _i0 < _len_plane0; _i0++) {
              int _len_plane__i0__group0 = 1;
          plane[_i0].group = (struct TYPE_3__ *) malloc(_len_plane__i0__group0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_plane__i0__group0; _j0++) {
            plane[_i0].group->index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_state0 = 100;
          struct rcar_du_plane_state * state = (struct rcar_du_plane_state *) malloc(_len_state0*sizeof(struct rcar_du_plane_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].source = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__format0 = 1;
          state[_i0].format = (struct TYPE_4__ *) malloc(_len_state__i0__format0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_state__i0__format0; _j0++) {
            state[_i0].format->planes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = rcar_du_plane_hwalloc(plane,state,free);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_plane0; _aux++) {
          free(plane[_aux].group);
          }
          free(plane);
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].format);
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

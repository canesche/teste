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
struct wlr_xdg_toplevel_state {double min_width; double max_width; double min_height; double max_height; } ;
struct sway_view {TYPE_2__* wlr_xdg_surface; } ;
struct TYPE_4__ {TYPE_1__* toplevel; } ;
struct TYPE_3__ {struct wlr_xdg_toplevel_state current; } ;

/* Variables and functions */
 double DBL_MAX ; 
 double DBL_MIN ; 

__attribute__((used)) static void get_constraints(struct sway_view *view, double *min_width,
		double *max_width, double *min_height, double *max_height) {
	struct wlr_xdg_toplevel_state *state =
		&view->wlr_xdg_surface->toplevel->current;
	*min_width = state->min_width > 0 ? state->min_width : DBL_MIN;
	*max_width = state->max_width > 0 ? state->max_width : DBL_MAX;
	*min_height = state->min_height > 0 ? state->min_height : DBL_MIN;
	*max_height = state->max_height > 0 ? state->max_height : DBL_MAX;
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
          int _len_view0 = 1;
          struct sway_view * view = (struct sway_view *) malloc(_len_view0*sizeof(struct sway_view));
          for(int _i0 = 0; _i0 < _len_view0; _i0++) {
              int _len_view__i0__wlr_xdg_surface0 = 1;
          view[_i0].wlr_xdg_surface = (struct TYPE_4__ *) malloc(_len_view__i0__wlr_xdg_surface0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_view__i0__wlr_xdg_surface0; _j0++) {
              int _len_view__i0__wlr_xdg_surface_toplevel0 = 1;
          view[_i0].wlr_xdg_surface->toplevel = (struct TYPE_3__ *) malloc(_len_view__i0__wlr_xdg_surface_toplevel0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_view__i0__wlr_xdg_surface_toplevel0; _j0++) {
            view[_i0].wlr_xdg_surface->toplevel->current.min_width = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        view[_i0].wlr_xdg_surface->toplevel->current.max_width = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        view[_i0].wlr_xdg_surface->toplevel->current.min_height = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        view[_i0].wlr_xdg_surface->toplevel->current.max_height = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          }
          int _len_min_width0 = 1;
          double * min_width = (double *) malloc(_len_min_width0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_min_width0; _i0++) {
            min_width[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_max_width0 = 1;
          double * max_width = (double *) malloc(_len_max_width0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_max_width0; _i0++) {
            max_width[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_min_height0 = 1;
          double * min_height = (double *) malloc(_len_min_height0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_min_height0; _i0++) {
            min_height[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_max_height0 = 1;
          double * max_height = (double *) malloc(_len_max_height0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_max_height0; _i0++) {
            max_height[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          get_constraints(view,min_width,max_width,min_height,max_height);
          for(int _aux = 0; _aux < _len_view0; _aux++) {
          free(view[_aux].wlr_xdg_surface);
          }
          free(view);
          free(min_width);
          free(max_width);
          free(min_height);
          free(max_height);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_view0 = 65025;
          struct sway_view * view = (struct sway_view *) malloc(_len_view0*sizeof(struct sway_view));
          for(int _i0 = 0; _i0 < _len_view0; _i0++) {
              int _len_view__i0__wlr_xdg_surface0 = 1;
          view[_i0].wlr_xdg_surface = (struct TYPE_4__ *) malloc(_len_view__i0__wlr_xdg_surface0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_view__i0__wlr_xdg_surface0; _j0++) {
              int _len_view__i0__wlr_xdg_surface_toplevel0 = 1;
          view[_i0].wlr_xdg_surface->toplevel = (struct TYPE_3__ *) malloc(_len_view__i0__wlr_xdg_surface_toplevel0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_view__i0__wlr_xdg_surface_toplevel0; _j0++) {
            view[_i0].wlr_xdg_surface->toplevel->current.min_width = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        view[_i0].wlr_xdg_surface->toplevel->current.max_width = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        view[_i0].wlr_xdg_surface->toplevel->current.min_height = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        view[_i0].wlr_xdg_surface->toplevel->current.max_height = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          }
          int _len_min_width0 = 65025;
          double * min_width = (double *) malloc(_len_min_width0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_min_width0; _i0++) {
            min_width[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_max_width0 = 65025;
          double * max_width = (double *) malloc(_len_max_width0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_max_width0; _i0++) {
            max_width[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_min_height0 = 65025;
          double * min_height = (double *) malloc(_len_min_height0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_min_height0; _i0++) {
            min_height[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_max_height0 = 65025;
          double * max_height = (double *) malloc(_len_max_height0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_max_height0; _i0++) {
            max_height[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          get_constraints(view,min_width,max_width,min_height,max_height);
          for(int _aux = 0; _aux < _len_view0; _aux++) {
          free(view[_aux].wlr_xdg_surface);
          }
          free(view);
          free(min_width);
          free(max_width);
          free(min_height);
          free(max_height);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_view0 = 100;
          struct sway_view * view = (struct sway_view *) malloc(_len_view0*sizeof(struct sway_view));
          for(int _i0 = 0; _i0 < _len_view0; _i0++) {
              int _len_view__i0__wlr_xdg_surface0 = 1;
          view[_i0].wlr_xdg_surface = (struct TYPE_4__ *) malloc(_len_view__i0__wlr_xdg_surface0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_view__i0__wlr_xdg_surface0; _j0++) {
              int _len_view__i0__wlr_xdg_surface_toplevel0 = 1;
          view[_i0].wlr_xdg_surface->toplevel = (struct TYPE_3__ *) malloc(_len_view__i0__wlr_xdg_surface_toplevel0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_view__i0__wlr_xdg_surface_toplevel0; _j0++) {
            view[_i0].wlr_xdg_surface->toplevel->current.min_width = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        view[_i0].wlr_xdg_surface->toplevel->current.max_width = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        view[_i0].wlr_xdg_surface->toplevel->current.min_height = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        view[_i0].wlr_xdg_surface->toplevel->current.max_height = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          }
          int _len_min_width0 = 100;
          double * min_width = (double *) malloc(_len_min_width0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_min_width0; _i0++) {
            min_width[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_max_width0 = 100;
          double * max_width = (double *) malloc(_len_max_width0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_max_width0; _i0++) {
            max_width[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_min_height0 = 100;
          double * min_height = (double *) malloc(_len_min_height0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_min_height0; _i0++) {
            min_height[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_max_height0 = 100;
          double * max_height = (double *) malloc(_len_max_height0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_max_height0; _i0++) {
            max_height[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          get_constraints(view,min_width,max_width,min_height,max_height);
          for(int _aux = 0; _aux < _len_view0; _aux++) {
          free(view[_aux].wlr_xdg_surface);
          }
          free(view);
          free(min_width);
          free(max_width);
          free(min_height);
          free(max_height);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

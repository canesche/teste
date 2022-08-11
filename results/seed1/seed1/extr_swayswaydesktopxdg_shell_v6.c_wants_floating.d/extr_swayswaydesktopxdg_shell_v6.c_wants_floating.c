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
struct wlr_xdg_toplevel_v6_state {scalar_t__ min_width; scalar_t__ min_height; scalar_t__ max_width; scalar_t__ max_height; } ;
struct wlr_xdg_toplevel_v6 {scalar_t__ parent; struct wlr_xdg_toplevel_v6_state current; } ;
struct sway_view {TYPE_1__* wlr_xdg_surface_v6; } ;
struct TYPE_2__ {struct wlr_xdg_toplevel_v6* toplevel; } ;

/* Variables and functions */

__attribute__((used)) static bool wants_floating(struct sway_view *view) {
	struct wlr_xdg_toplevel_v6 *toplevel =
		view->wlr_xdg_surface_v6->toplevel;
	struct wlr_xdg_toplevel_v6_state *state = &toplevel->current;
	return (state->min_width != 0 && state->min_height != 0
		&& (state->min_width == state->max_width
		|| state->min_height == state->max_height))
		|| toplevel->parent;
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
              int _len_view__i0__wlr_xdg_surface_v60 = 1;
          view[_i0].wlr_xdg_surface_v6 = (struct TYPE_2__ *) malloc(_len_view__i0__wlr_xdg_surface_v60*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_view__i0__wlr_xdg_surface_v60; _j0++) {
              int _len_view__i0__wlr_xdg_surface_v6_toplevel0 = 1;
          view[_i0].wlr_xdg_surface_v6->toplevel = (struct wlr_xdg_toplevel_v6 *) malloc(_len_view__i0__wlr_xdg_surface_v6_toplevel0*sizeof(struct wlr_xdg_toplevel_v6));
          for(int _j0 = 0; _j0 < _len_view__i0__wlr_xdg_surface_v6_toplevel0; _j0++) {
            view[_i0].wlr_xdg_surface_v6->toplevel->parent = ((-2 * (next_i()%2)) + 1) * next_i();
        view[_i0].wlr_xdg_surface_v6->toplevel->current.min_width = ((-2 * (next_i()%2)) + 1) * next_i();
        view[_i0].wlr_xdg_surface_v6->toplevel->current.min_height = ((-2 * (next_i()%2)) + 1) * next_i();
        view[_i0].wlr_xdg_surface_v6->toplevel->current.max_width = ((-2 * (next_i()%2)) + 1) * next_i();
        view[_i0].wlr_xdg_surface_v6->toplevel->current.max_height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = wants_floating(view);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_view0; _aux++) {
          free(view[_aux].wlr_xdg_surface_v6);
          }
          free(view);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_view0 = 65025;
          struct sway_view * view = (struct sway_view *) malloc(_len_view0*sizeof(struct sway_view));
          for(int _i0 = 0; _i0 < _len_view0; _i0++) {
              int _len_view__i0__wlr_xdg_surface_v60 = 1;
          view[_i0].wlr_xdg_surface_v6 = (struct TYPE_2__ *) malloc(_len_view__i0__wlr_xdg_surface_v60*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_view__i0__wlr_xdg_surface_v60; _j0++) {
              int _len_view__i0__wlr_xdg_surface_v6_toplevel0 = 1;
          view[_i0].wlr_xdg_surface_v6->toplevel = (struct wlr_xdg_toplevel_v6 *) malloc(_len_view__i0__wlr_xdg_surface_v6_toplevel0*sizeof(struct wlr_xdg_toplevel_v6));
          for(int _j0 = 0; _j0 < _len_view__i0__wlr_xdg_surface_v6_toplevel0; _j0++) {
            view[_i0].wlr_xdg_surface_v6->toplevel->parent = ((-2 * (next_i()%2)) + 1) * next_i();
        view[_i0].wlr_xdg_surface_v6->toplevel->current.min_width = ((-2 * (next_i()%2)) + 1) * next_i();
        view[_i0].wlr_xdg_surface_v6->toplevel->current.min_height = ((-2 * (next_i()%2)) + 1) * next_i();
        view[_i0].wlr_xdg_surface_v6->toplevel->current.max_width = ((-2 * (next_i()%2)) + 1) * next_i();
        view[_i0].wlr_xdg_surface_v6->toplevel->current.max_height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = wants_floating(view);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_view0; _aux++) {
          free(view[_aux].wlr_xdg_surface_v6);
          }
          free(view);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_view0 = 100;
          struct sway_view * view = (struct sway_view *) malloc(_len_view0*sizeof(struct sway_view));
          for(int _i0 = 0; _i0 < _len_view0; _i0++) {
              int _len_view__i0__wlr_xdg_surface_v60 = 1;
          view[_i0].wlr_xdg_surface_v6 = (struct TYPE_2__ *) malloc(_len_view__i0__wlr_xdg_surface_v60*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_view__i0__wlr_xdg_surface_v60; _j0++) {
              int _len_view__i0__wlr_xdg_surface_v6_toplevel0 = 1;
          view[_i0].wlr_xdg_surface_v6->toplevel = (struct wlr_xdg_toplevel_v6 *) malloc(_len_view__i0__wlr_xdg_surface_v6_toplevel0*sizeof(struct wlr_xdg_toplevel_v6));
          for(int _j0 = 0; _j0 < _len_view__i0__wlr_xdg_surface_v6_toplevel0; _j0++) {
            view[_i0].wlr_xdg_surface_v6->toplevel->parent = ((-2 * (next_i()%2)) + 1) * next_i();
        view[_i0].wlr_xdg_surface_v6->toplevel->current.min_width = ((-2 * (next_i()%2)) + 1) * next_i();
        view[_i0].wlr_xdg_surface_v6->toplevel->current.min_height = ((-2 * (next_i()%2)) + 1) * next_i();
        view[_i0].wlr_xdg_surface_v6->toplevel->current.max_width = ((-2 * (next_i()%2)) + 1) * next_i();
        view[_i0].wlr_xdg_surface_v6->toplevel->current.max_height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = wants_floating(view);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_view0; _aux++) {
          free(view[_aux].wlr_xdg_surface_v6);
          }
          free(view);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

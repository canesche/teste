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

/* Type definitions */
typedef  int u_int ;
struct window_pane {int /*<<< orphan*/  flags; scalar_t__* palette; } ;

/* Variables and functions */
 int /*<<< orphan*/  PANE_REDRAW ; 

void
window_pane_unset_palette(struct window_pane *wp, u_int n)
{
	if (n > 0xff || wp->palette == NULL)
		return;

	wp->palette[n] = 0;
	wp->flags |= PANE_REDRAW;
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
          int n = 100;
          int _len_wp0 = 1;
          struct window_pane * wp = (struct window_pane *) malloc(_len_wp0*sizeof(struct window_pane));
          for(int _i0 = 0; _i0 < _len_wp0; _i0++) {
            wp[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_wp__i0__palette0 = 1;
          wp[_i0].palette = (long *) malloc(_len_wp__i0__palette0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_wp__i0__palette0; _j0++) {
            wp[_i0].palette[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          window_pane_unset_palette(wp,n);
          for(int _aux = 0; _aux < _len_wp0; _aux++) {
          free(wp[_aux].palette);
          }
          free(wp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int n = 255;
          int _len_wp0 = 65025;
          struct window_pane * wp = (struct window_pane *) malloc(_len_wp0*sizeof(struct window_pane));
          for(int _i0 = 0; _i0 < _len_wp0; _i0++) {
            wp[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_wp__i0__palette0 = 1;
          wp[_i0].palette = (long *) malloc(_len_wp__i0__palette0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_wp__i0__palette0; _j0++) {
            wp[_i0].palette[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          window_pane_unset_palette(wp,n);
          for(int _aux = 0; _aux < _len_wp0; _aux++) {
          free(wp[_aux].palette);
          }
          free(wp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int n = 10;
          int _len_wp0 = 100;
          struct window_pane * wp = (struct window_pane *) malloc(_len_wp0*sizeof(struct window_pane));
          for(int _i0 = 0; _i0 < _len_wp0; _i0++) {
            wp[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_wp__i0__palette0 = 1;
          wp[_i0].palette = (long *) malloc(_len_wp__i0__palette0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_wp__i0__palette0; _j0++) {
            wp[_i0].palette[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          window_pane_unset_palette(wp,n);
          for(int _aux = 0; _aux < _len_wp0; _aux++) {
          free(wp[_aux].palette);
          }
          free(wp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

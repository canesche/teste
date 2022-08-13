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
struct window_pane {TYPE_1__* ictx; } ;
struct evbuffer {int dummy; } ;
struct TYPE_2__ {struct evbuffer* since_ground; } ;

/* Variables and functions */

struct evbuffer *
input_pending(struct window_pane *wp)
{
	return (wp->ictx->since_ground);
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
          int _len_wp0 = 1;
          struct window_pane * wp = (struct window_pane *) malloc(_len_wp0*sizeof(struct window_pane));
          for(int _i0 = 0; _i0 < _len_wp0; _i0++) {
              int _len_wp__i0__ictx0 = 1;
          wp[_i0].ictx = (struct TYPE_2__ *) malloc(_len_wp__i0__ictx0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_wp__i0__ictx0; _j0++) {
              int _len_wp__i0__ictx_since_ground0 = 1;
          wp[_i0].ictx->since_ground = (struct evbuffer *) malloc(_len_wp__i0__ictx_since_ground0*sizeof(struct evbuffer));
          for(int _j0 = 0; _j0 < _len_wp__i0__ictx_since_ground0; _j0++) {
            wp[_i0].ictx->since_ground->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct evbuffer * benchRet = input_pending(wp);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_wp0; _aux++) {
          free(wp[_aux].ictx);
          }
          free(wp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_wp0 = 65025;
          struct window_pane * wp = (struct window_pane *) malloc(_len_wp0*sizeof(struct window_pane));
          for(int _i0 = 0; _i0 < _len_wp0; _i0++) {
              int _len_wp__i0__ictx0 = 1;
          wp[_i0].ictx = (struct TYPE_2__ *) malloc(_len_wp__i0__ictx0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_wp__i0__ictx0; _j0++) {
              int _len_wp__i0__ictx_since_ground0 = 1;
          wp[_i0].ictx->since_ground = (struct evbuffer *) malloc(_len_wp__i0__ictx_since_ground0*sizeof(struct evbuffer));
          for(int _j0 = 0; _j0 < _len_wp__i0__ictx_since_ground0; _j0++) {
            wp[_i0].ictx->since_ground->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct evbuffer * benchRet = input_pending(wp);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_wp0; _aux++) {
          free(wp[_aux].ictx);
          }
          free(wp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_wp0 = 100;
          struct window_pane * wp = (struct window_pane *) malloc(_len_wp0*sizeof(struct window_pane));
          for(int _i0 = 0; _i0 < _len_wp0; _i0++) {
              int _len_wp__i0__ictx0 = 1;
          wp[_i0].ictx = (struct TYPE_2__ *) malloc(_len_wp__i0__ictx0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_wp__i0__ictx0; _j0++) {
              int _len_wp__i0__ictx_since_ground0 = 1;
          wp[_i0].ictx->since_ground = (struct evbuffer *) malloc(_len_wp__i0__ictx_since_ground0*sizeof(struct evbuffer));
          for(int _j0 = 0; _j0 < _len_wp__i0__ictx_since_ground0; _j0++) {
            wp[_i0].ictx->since_ground->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct evbuffer * benchRet = input_pending(wp);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_wp0; _aux++) {
          free(wp[_aux].ictx);
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

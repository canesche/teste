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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct window_pane {scalar_t__ window; int /*<<< orphan*/ * layout_cell; } ;
struct TYPE_4__ {int flags; int /*<<< orphan*/ * term; } ;
struct client {int flags; TYPE_2__* session; TYPE_1__ tty; } ;
struct TYPE_6__ {scalar_t__ window; } ;
struct TYPE_5__ {TYPE_3__* curw; } ;

/* Variables and functions */
 int CLIENT_REDRAWWINDOW ; 
 int CLIENT_SUSPENDED ; 
 int TTY_FREEZE ; 

__attribute__((used)) static int
tty_client_ready(struct client *c, struct window_pane *wp)
{
	if (c->session == NULL || c->tty.term == NULL)
		return (0);
	if (c->flags & (CLIENT_REDRAWWINDOW|CLIENT_SUSPENDED))
		return (0);
	if (c->tty.flags & TTY_FREEZE)
		return (0);
	if (c->session->curw->window != wp->window)
		return (0);
	if (wp->layout_cell == NULL)
		return (0);
	return (1);
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
          int _len_c0 = 1;
          struct client * c = (struct client *) malloc(_len_c0*sizeof(struct client));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__session0 = 1;
          c[_i0].session = (struct TYPE_5__ *) malloc(_len_c__i0__session0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_c__i0__session0; _j0++) {
              int _len_c__i0__session_curw0 = 1;
          c[_i0].session->curw = (struct TYPE_6__ *) malloc(_len_c__i0__session_curw0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_c__i0__session_curw0; _j0++) {
            c[_i0].session->curw->window = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        c[_i0].tty.flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__tty_term0 = 1;
          c[_i0].tty.term = (int *) malloc(_len_c__i0__tty_term0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_c__i0__tty_term0; _j0++) {
            c[_i0].tty.term[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_wp0 = 1;
          struct window_pane * wp = (struct window_pane *) malloc(_len_wp0*sizeof(struct window_pane));
          for(int _i0 = 0; _i0 < _len_wp0; _i0++) {
            wp[_i0].window = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_wp__i0__layout_cell0 = 1;
          wp[_i0].layout_cell = (int *) malloc(_len_wp__i0__layout_cell0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_wp__i0__layout_cell0; _j0++) {
            wp[_i0].layout_cell[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = tty_client_ready(c,wp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].session);
          }
          free(c);
          for(int _aux = 0; _aux < _len_wp0; _aux++) {
          free(wp[_aux].layout_cell);
          }
          free(wp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_c0 = 65025;
          struct client * c = (struct client *) malloc(_len_c0*sizeof(struct client));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__session0 = 1;
          c[_i0].session = (struct TYPE_5__ *) malloc(_len_c__i0__session0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_c__i0__session0; _j0++) {
              int _len_c__i0__session_curw0 = 1;
          c[_i0].session->curw = (struct TYPE_6__ *) malloc(_len_c__i0__session_curw0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_c__i0__session_curw0; _j0++) {
            c[_i0].session->curw->window = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        c[_i0].tty.flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__tty_term0 = 1;
          c[_i0].tty.term = (int *) malloc(_len_c__i0__tty_term0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_c__i0__tty_term0; _j0++) {
            c[_i0].tty.term[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_wp0 = 65025;
          struct window_pane * wp = (struct window_pane *) malloc(_len_wp0*sizeof(struct window_pane));
          for(int _i0 = 0; _i0 < _len_wp0; _i0++) {
            wp[_i0].window = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_wp__i0__layout_cell0 = 1;
          wp[_i0].layout_cell = (int *) malloc(_len_wp__i0__layout_cell0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_wp__i0__layout_cell0; _j0++) {
            wp[_i0].layout_cell[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = tty_client_ready(c,wp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].session);
          }
          free(c);
          for(int _aux = 0; _aux < _len_wp0; _aux++) {
          free(wp[_aux].layout_cell);
          }
          free(wp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_c0 = 100;
          struct client * c = (struct client *) malloc(_len_c0*sizeof(struct client));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__session0 = 1;
          c[_i0].session = (struct TYPE_5__ *) malloc(_len_c__i0__session0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_c__i0__session0; _j0++) {
              int _len_c__i0__session_curw0 = 1;
          c[_i0].session->curw = (struct TYPE_6__ *) malloc(_len_c__i0__session_curw0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_c__i0__session_curw0; _j0++) {
            c[_i0].session->curw->window = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        c[_i0].tty.flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__tty_term0 = 1;
          c[_i0].tty.term = (int *) malloc(_len_c__i0__tty_term0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_c__i0__tty_term0; _j0++) {
            c[_i0].tty.term[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_wp0 = 100;
          struct window_pane * wp = (struct window_pane *) malloc(_len_wp0*sizeof(struct window_pane));
          for(int _i0 = 0; _i0 < _len_wp0; _i0++) {
            wp[_i0].window = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_wp__i0__layout_cell0 = 1;
          wp[_i0].layout_cell = (int *) malloc(_len_wp__i0__layout_cell0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_wp__i0__layout_cell0; _j0++) {
            wp[_i0].layout_cell[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = tty_client_ready(c,wp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].session);
          }
          free(c);
          for(int _aux = 0; _aux < _len_wp0; _aux++) {
          free(wp[_aux].layout_cell);
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

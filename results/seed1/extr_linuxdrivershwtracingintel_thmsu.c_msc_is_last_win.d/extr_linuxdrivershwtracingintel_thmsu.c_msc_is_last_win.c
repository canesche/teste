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
struct TYPE_3__ {int /*<<< orphan*/ * next; } ;
struct msc_window {TYPE_2__* msc; TYPE_1__ entry; } ;
struct TYPE_4__ {int /*<<< orphan*/  win_list; } ;

/* Variables and functions */

__attribute__((used)) static inline bool msc_is_last_win(struct msc_window *win)
{
	return win->entry.next == &win->msc->win_list;
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
          int _len_win0 = 1;
          struct msc_window * win = (struct msc_window *) malloc(_len_win0*sizeof(struct msc_window));
          for(int _i0 = 0; _i0 < _len_win0; _i0++) {
              int _len_win__i0__msc0 = 1;
          win[_i0].msc = (struct TYPE_4__ *) malloc(_len_win__i0__msc0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_win__i0__msc0; _j0++) {
            win[_i0].msc->win_list = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_win__i0__entry_next0 = 1;
          win[_i0].entry.next = (int *) malloc(_len_win__i0__entry_next0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_win__i0__entry_next0; _j0++) {
            win[_i0].entry.next[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = msc_is_last_win(win);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_win0; _aux++) {
          free(win[_aux].msc);
          }
          free(win);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_win0 = 65025;
          struct msc_window * win = (struct msc_window *) malloc(_len_win0*sizeof(struct msc_window));
          for(int _i0 = 0; _i0 < _len_win0; _i0++) {
              int _len_win__i0__msc0 = 1;
          win[_i0].msc = (struct TYPE_4__ *) malloc(_len_win__i0__msc0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_win__i0__msc0; _j0++) {
            win[_i0].msc->win_list = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_win__i0__entry_next0 = 1;
          win[_i0].entry.next = (int *) malloc(_len_win__i0__entry_next0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_win__i0__entry_next0; _j0++) {
            win[_i0].entry.next[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = msc_is_last_win(win);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_win0; _aux++) {
          free(win[_aux].msc);
          }
          free(win);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_win0 = 100;
          struct msc_window * win = (struct msc_window *) malloc(_len_win0*sizeof(struct msc_window));
          for(int _i0 = 0; _i0 < _len_win0; _i0++) {
              int _len_win__i0__msc0 = 1;
          win[_i0].msc = (struct TYPE_4__ *) malloc(_len_win__i0__msc0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_win__i0__msc0; _j0++) {
            win[_i0].msc->win_list = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_win__i0__entry_next0 = 1;
          win[_i0].entry.next = (int *) malloc(_len_win__i0__entry_next0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_win__i0__entry_next0; _j0++) {
            win[_i0].entry.next[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = msc_is_last_win(win);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_win0; _aux++) {
          free(win[_aux].msc);
          }
          free(win);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

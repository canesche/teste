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
struct TYPE_2__ {int item_index; } ;
typedef  int /*<<< orphan*/  GLFWwindow ;

/* Variables and functions */
 double SCROLL_THRESHOLD ; 
 TYPE_1__* g ; 
 int item_count ; 

void on_scroll(GLFWwindow *window, double xdelta, double ydelta) {
    static double ypos = 0;
    ypos += ydelta;
    if (ypos < -SCROLL_THRESHOLD) {
        g->item_index = (g->item_index + 1) % item_count;
        ypos = 0;
    }
    if (ypos > SCROLL_THRESHOLD) {
        g->item_index--;
        if (g->item_index < 0) {
            g->item_index = item_count - 1;
        }
        ypos = 0;
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
          double xdelta = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          double ydelta = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_window0 = 1;
          int * window = (int *) malloc(_len_window0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_window0; _i0++) {
            window[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          on_scroll(window,xdelta,ydelta);
          free(window);
        
        break;
    }
    // big-arr
    case 1:
    {
          double xdelta = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          double ydelta = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_window0 = 65025;
          int * window = (int *) malloc(_len_window0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_window0; _i0++) {
            window[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          on_scroll(window,xdelta,ydelta);
          free(window);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          double xdelta = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          double ydelta = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_window0 = 100;
          int * window = (int *) malloc(_len_window0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_window0; _i0++) {
            window[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          on_scroll(window,xdelta,ydelta);
          free(window);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

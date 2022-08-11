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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int /*<<< orphan*/ * monitor; } ;
typedef  TYPE_1__ _GLFWwindow ;
typedef  int /*<<< orphan*/  _GLFWmonitor ;

/* Variables and functions */

void _glfwInputWindowMonitor(_GLFWwindow* window, _GLFWmonitor* monitor)
{
    window->monitor = monitor;
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
          int _len_window0 = 1;
          struct TYPE_3__ * window = (struct TYPE_3__ *) malloc(_len_window0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_window0; _i0++) {
              int _len_window__i0__monitor0 = 1;
          window[_i0].monitor = (int *) malloc(_len_window__i0__monitor0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_window__i0__monitor0; _j0++) {
            window[_i0].monitor[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_monitor0 = 1;
          int * monitor = (int *) malloc(_len_monitor0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_monitor0; _i0++) {
            monitor[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _glfwInputWindowMonitor(window,monitor);
          for(int _aux = 0; _aux < _len_window0; _aux++) {
          free(window[_aux].monitor);
          }
          free(window);
          free(monitor);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_window0 = 65025;
          struct TYPE_3__ * window = (struct TYPE_3__ *) malloc(_len_window0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_window0; _i0++) {
              int _len_window__i0__monitor0 = 1;
          window[_i0].monitor = (int *) malloc(_len_window__i0__monitor0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_window__i0__monitor0; _j0++) {
            window[_i0].monitor[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_monitor0 = 65025;
          int * monitor = (int *) malloc(_len_monitor0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_monitor0; _i0++) {
            monitor[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _glfwInputWindowMonitor(window,monitor);
          for(int _aux = 0; _aux < _len_window0; _aux++) {
          free(window[_aux].monitor);
          }
          free(window);
          free(monitor);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_window0 = 100;
          struct TYPE_3__ * window = (struct TYPE_3__ *) malloc(_len_window0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_window0; _i0++) {
              int _len_window__i0__monitor0 = 1;
          window[_i0].monitor = (int *) malloc(_len_window__i0__monitor0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_window__i0__monitor0; _j0++) {
            window[_i0].monitor[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_monitor0 = 100;
          int * monitor = (int *) malloc(_len_monitor0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_monitor0; _i0++) {
            monitor[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _glfwInputWindowMonitor(window,monitor);
          for(int _aux = 0; _aux < _len_window0; _aux++) {
          free(window[_aux].monitor);
          }
          free(window);
          free(monitor);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

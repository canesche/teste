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
struct TYPE_3__ {unsigned int xnum; unsigned int ynum; unsigned int z; } ;
struct TYPE_4__ {TYPE_1__ sprite_tracker; } ;
typedef  TYPE_2__ FontGroup ;
typedef  scalar_t__ FONTS_DATA_HANDLE ;

/* Variables and functions */

void
sprite_tracker_current_layout(FONTS_DATA_HANDLE data, unsigned int *x, unsigned int *y, unsigned int *z) {
    FontGroup *fg = (FontGroup*)data;
    *x = fg->sprite_tracker.xnum; *y = fg->sprite_tracker.ynum; *z = fg->sprite_tracker.z;
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
          long data = 100;
          int _len_x0 = 1;
          unsigned int * x = (unsigned int *) malloc(_len_x0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_y0 = 1;
          unsigned int * y = (unsigned int *) malloc(_len_y0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_z0 = 1;
          unsigned int * z = (unsigned int *) malloc(_len_z0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_z0; _i0++) {
            z[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sprite_tracker_current_layout(data,x,y,z);
          free(x);
          free(y);
          free(z);
        
        break;
    }
    // big-arr
    case 1:
    {
          long data = 255;
          int _len_x0 = 65025;
          unsigned int * x = (unsigned int *) malloc(_len_x0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_y0 = 65025;
          unsigned int * y = (unsigned int *) malloc(_len_y0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_z0 = 65025;
          unsigned int * z = (unsigned int *) malloc(_len_z0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_z0; _i0++) {
            z[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sprite_tracker_current_layout(data,x,y,z);
          free(x);
          free(y);
          free(z);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long data = 10;
          int _len_x0 = 100;
          unsigned int * x = (unsigned int *) malloc(_len_x0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_y0 = 100;
          unsigned int * y = (unsigned int *) malloc(_len_y0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_z0 = 100;
          unsigned int * z = (unsigned int *) malloc(_len_z0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_z0; _i0++) {
            z[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sprite_tracker_current_layout(data,x,y,z);
          free(x);
          free(y);
          free(z);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  int /*<<< orphan*/  wl_fixed_t ;
struct wl_touch {int dummy; } ;
typedef  int /*<<< orphan*/  int32_t ;

/* Variables and functions */

__attribute__((used)) static void wl_touch_orientation(void *data, struct wl_touch *wl_touch,
		int32_t id, wl_fixed_t orientation) {
	// Who cares
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
          int id = 100;
          int orientation = 100;
          void * data;
          int _len_wl_touch0 = 1;
          struct wl_touch * wl_touch = (struct wl_touch *) malloc(_len_wl_touch0*sizeof(struct wl_touch));
          for(int _i0 = 0; _i0 < _len_wl_touch0; _i0++) {
            wl_touch[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          wl_touch_orientation(data,wl_touch,id,orientation);
          free(wl_touch);
        
        break;
    }
    // big-arr
    case 1:
    {
          int id = 255;
          int orientation = 255;
          void * data;
          int _len_wl_touch0 = 65025;
          struct wl_touch * wl_touch = (struct wl_touch *) malloc(_len_wl_touch0*sizeof(struct wl_touch));
          for(int _i0 = 0; _i0 < _len_wl_touch0; _i0++) {
            wl_touch[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          wl_touch_orientation(data,wl_touch,id,orientation);
          free(wl_touch);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int id = 10;
          int orientation = 10;
          void * data;
          int _len_wl_touch0 = 100;
          struct wl_touch * wl_touch = (struct wl_touch *) malloc(_len_wl_touch0*sizeof(struct wl_touch));
          for(int _i0 = 0; _i0 < _len_wl_touch0; _i0++) {
            wl_touch[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          wl_touch_orientation(data,wl_touch,id,orientation);
          free(wl_touch);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

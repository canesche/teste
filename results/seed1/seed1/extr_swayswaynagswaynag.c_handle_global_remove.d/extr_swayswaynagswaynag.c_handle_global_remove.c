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
typedef  scalar_t__ uint32_t ;
struct wl_registry {int dummy; } ;
struct swaynag {int run_display; TYPE_1__* output; } ;
struct TYPE_2__ {scalar_t__ wl_name; } ;

/* Variables and functions */

__attribute__((used)) static void handle_global_remove(void *data, struct wl_registry *registry,
		uint32_t name) {
	struct swaynag *swaynag = data;
	if (swaynag->output->wl_name == name) {
		swaynag->run_display = false;
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
          long name = 100;
          void * data;
          int _len_registry0 = 1;
          struct wl_registry * registry = (struct wl_registry *) malloc(_len_registry0*sizeof(struct wl_registry));
          for(int _i0 = 0; _i0 < _len_registry0; _i0++) {
            registry[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          handle_global_remove(data,registry,name);
          free(registry);
        
        break;
    }
    // big-arr
    case 1:
    {
          long name = 255;
          void * data;
          int _len_registry0 = 65025;
          struct wl_registry * registry = (struct wl_registry *) malloc(_len_registry0*sizeof(struct wl_registry));
          for(int _i0 = 0; _i0 < _len_registry0; _i0++) {
            registry[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          handle_global_remove(data,registry,name);
          free(registry);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long name = 10;
          void * data;
          int _len_registry0 = 100;
          struct wl_registry * registry = (struct wl_registry *) malloc(_len_registry0*sizeof(struct wl_registry));
          for(int _i0 = 0; _i0 < _len_registry0; _i0++) {
            registry[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          handle_global_remove(data,registry,name);
          free(registry);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

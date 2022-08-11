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
typedef  struct TYPE_9__   TYPE_5__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ id_type ;
struct TYPE_7__ {scalar_t__ id; } ;
typedef  TYPE_2__ Window ;
struct TYPE_8__ {unsigned int num_windows; TYPE_2__* windows; } ;
typedef  TYPE_3__ Tab ;
struct TYPE_9__ {TYPE_1__* callback_os_window; } ;
struct TYPE_6__ {int active_tab; TYPE_3__* tabs; } ;

/* Variables and functions */
 TYPE_5__ global_state ; 

__attribute__((used)) static inline Window*
window_for_id(id_type window_id) {
    Tab *t = global_state.callback_os_window->tabs + global_state.callback_os_window->active_tab;
    for (unsigned int i = 0; i < t->num_windows; i++) {
        Window *w = t->windows + i;
        if (w->id == window_id) return w;
    }
    return NULL;
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
          long window_id = 100;
          struct TYPE_7__ * benchRet = window_for_id(window_id);
          printf("%ld\n", (*benchRet).id);
        
        break;
    }
    // big-arr
    case 1:
    {
          long window_id = 255;
          struct TYPE_7__ * benchRet = window_for_id(window_id);
          printf("%ld\n", (*benchRet).id);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long window_id = 10;
          struct TYPE_7__ * benchRet = window_for_id(window_id);
          printf("%ld\n", (*benchRet).id);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

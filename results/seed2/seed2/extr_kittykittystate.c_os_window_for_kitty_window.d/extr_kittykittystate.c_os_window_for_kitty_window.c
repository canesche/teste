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
struct TYPE_7__ {size_t num_windows; TYPE_1__* windows; } ;
typedef  TYPE_2__ Tab ;
struct TYPE_9__ {size_t num_os_windows; TYPE_3__* os_windows; } ;
struct TYPE_8__ {size_t num_tabs; TYPE_2__* tabs; } ;
struct TYPE_6__ {scalar_t__ id; } ;
typedef  TYPE_3__ OSWindow ;

/* Variables and functions */
 TYPE_5__ global_state ; 

OSWindow*
os_window_for_kitty_window(id_type kitty_window_id) {
    for (size_t i = 0; i < global_state.num_os_windows; i++) {
        OSWindow *w = global_state.os_windows + i;
        for (size_t t = 0; t < w->num_tabs; t++) {
            Tab *tab = w->tabs + t;
            for (size_t c = 0; c < tab->num_windows; c++) {
                if (tab->windows[c].id == kitty_window_id) return w;
            }
        }
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
          long kitty_window_id = 100;
          struct TYPE_8__ * benchRet = os_window_for_kitty_window(kitty_window_id);
          printf("%lu\n", (*benchRet).num_tabs);
        
        break;
    }
    // big-arr
    case 1:
    {
          long kitty_window_id = 255;
          struct TYPE_8__ * benchRet = os_window_for_kitty_window(kitty_window_id);
          printf("%lu\n", (*benchRet).num_tabs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long kitty_window_id = 10;
          struct TYPE_8__ * benchRet = os_window_for_kitty_window(kitty_window_id);
          printf("%lu\n", (*benchRet).num_tabs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

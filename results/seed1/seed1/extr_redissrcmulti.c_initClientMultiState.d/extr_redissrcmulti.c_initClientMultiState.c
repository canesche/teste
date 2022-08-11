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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__ cmd_flags; scalar_t__ count; int /*<<< orphan*/ * commands; } ;
struct TYPE_5__ {TYPE_1__ mstate; } ;
typedef  TYPE_2__ client ;

/* Variables and functions */

void initClientMultiState(client *c) {
    c->mstate.commands = NULL;
    c->mstate.count = 0;
    c->mstate.cmd_flags = 0;
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
          struct TYPE_5__ * c = (struct TYPE_5__ *) malloc(_len_c0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].mstate.cmd_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].mstate.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__mstate_commands0 = 1;
          c[_i0].mstate.commands = (int *) malloc(_len_c__i0__mstate_commands0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_c__i0__mstate_commands0; _j0++) {
            c[_i0].mstate.commands[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          initClientMultiState(c);
          free(c);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_c0 = 65025;
          struct TYPE_5__ * c = (struct TYPE_5__ *) malloc(_len_c0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].mstate.cmd_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].mstate.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__mstate_commands0 = 1;
          c[_i0].mstate.commands = (int *) malloc(_len_c__i0__mstate_commands0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_c__i0__mstate_commands0; _j0++) {
            c[_i0].mstate.commands[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          initClientMultiState(c);
          free(c);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_c0 = 100;
          struct TYPE_5__ * c = (struct TYPE_5__ *) malloc(_len_c0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].mstate.cmd_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].mstate.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__mstate_commands0 = 1;
          c[_i0].mstate.commands = (int *) malloc(_len_c__i0__mstate_commands0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_c__i0__mstate_commands0; _j0++) {
            c[_i0].mstate.commands[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          initClientMultiState(c);
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

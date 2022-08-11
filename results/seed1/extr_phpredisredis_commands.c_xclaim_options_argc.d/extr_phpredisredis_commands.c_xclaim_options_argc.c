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
struct TYPE_4__ {int time; int /*<<< orphan*/ * type; } ;
struct TYPE_5__ {int retrycount; scalar_t__ justid; scalar_t__ force; TYPE_1__ idle; } ;
typedef  TYPE_2__ xclaimOptions ;

/* Variables and functions */

__attribute__((used)) static int xclaim_options_argc(xclaimOptions *opt) {
    int argc = 0;

    if (opt->idle.type != NULL && opt->idle.time != -1)
        argc += 2;
    if (opt->retrycount != -1)
        argc += 2;
    if (opt->force)
        argc++;
    if (opt->justid)
        argc++;

    return argc;
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
          int _len_opt0 = 1;
          struct TYPE_5__ * opt = (struct TYPE_5__ *) malloc(_len_opt0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_opt0; _i0++) {
            opt[_i0].retrycount = ((-2 * (next_i()%2)) + 1) * next_i();
        opt[_i0].justid = ((-2 * (next_i()%2)) + 1) * next_i();
        opt[_i0].force = ((-2 * (next_i()%2)) + 1) * next_i();
        opt[_i0].idle.time = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_opt__i0__idle_type0 = 1;
          opt[_i0].idle.type = (int *) malloc(_len_opt__i0__idle_type0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_opt__i0__idle_type0; _j0++) {
            opt[_i0].idle.type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = xclaim_options_argc(opt);
          printf("%d\n", benchRet); 
          free(opt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_opt0 = 65025;
          struct TYPE_5__ * opt = (struct TYPE_5__ *) malloc(_len_opt0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_opt0; _i0++) {
            opt[_i0].retrycount = ((-2 * (next_i()%2)) + 1) * next_i();
        opt[_i0].justid = ((-2 * (next_i()%2)) + 1) * next_i();
        opt[_i0].force = ((-2 * (next_i()%2)) + 1) * next_i();
        opt[_i0].idle.time = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_opt__i0__idle_type0 = 1;
          opt[_i0].idle.type = (int *) malloc(_len_opt__i0__idle_type0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_opt__i0__idle_type0; _j0++) {
            opt[_i0].idle.type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = xclaim_options_argc(opt);
          printf("%d\n", benchRet); 
          free(opt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_opt0 = 100;
          struct TYPE_5__ * opt = (struct TYPE_5__ *) malloc(_len_opt0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_opt0; _i0++) {
            opt[_i0].retrycount = ((-2 * (next_i()%2)) + 1) * next_i();
        opt[_i0].justid = ((-2 * (next_i()%2)) + 1) * next_i();
        opt[_i0].force = ((-2 * (next_i()%2)) + 1) * next_i();
        opt[_i0].idle.time = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_opt__i0__idle_type0 = 1;
          opt[_i0].idle.type = (int *) malloc(_len_opt__i0__idle_type0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_opt__i0__idle_type0; _j0++) {
            opt[_i0].idle.type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = xclaim_options_argc(opt);
          printf("%d\n", benchRet); 
          free(opt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

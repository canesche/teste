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
struct backtrace_location {int /*<<< orphan*/ * filename; } ;
typedef  int /*<<< orphan*/  mrb_state ;

/* Variables and functions */

__attribute__((used)) static void
count_backtrace_i(mrb_state *mrb,
                 struct backtrace_location *loc,
                 void *data)
{
  int *lenp = (int*)data;

  if (loc->filename == NULL) return;
  (*lenp)++;
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
          int _len_mrb0 = 1;
          int * mrb = (int *) malloc(_len_mrb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mrb0; _i0++) {
            mrb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_loc0 = 1;
          struct backtrace_location * loc = (struct backtrace_location *) malloc(_len_loc0*sizeof(struct backtrace_location));
          for(int _i0 = 0; _i0 < _len_loc0; _i0++) {
              int _len_loc__i0__filename0 = 1;
          loc[_i0].filename = (int *) malloc(_len_loc__i0__filename0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_loc__i0__filename0; _j0++) {
            loc[_i0].filename[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * data;
          count_backtrace_i(mrb,loc,data);
          free(mrb);
          for(int _aux = 0; _aux < _len_loc0; _aux++) {
          free(loc[_aux].filename);
          }
          free(loc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_mrb0 = 65025;
          int * mrb = (int *) malloc(_len_mrb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mrb0; _i0++) {
            mrb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_loc0 = 65025;
          struct backtrace_location * loc = (struct backtrace_location *) malloc(_len_loc0*sizeof(struct backtrace_location));
          for(int _i0 = 0; _i0 < _len_loc0; _i0++) {
              int _len_loc__i0__filename0 = 1;
          loc[_i0].filename = (int *) malloc(_len_loc__i0__filename0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_loc__i0__filename0; _j0++) {
            loc[_i0].filename[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * data;
          count_backtrace_i(mrb,loc,data);
          free(mrb);
          for(int _aux = 0; _aux < _len_loc0; _aux++) {
          free(loc[_aux].filename);
          }
          free(loc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_mrb0 = 100;
          int * mrb = (int *) malloc(_len_mrb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mrb0; _i0++) {
            mrb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_loc0 = 100;
          struct backtrace_location * loc = (struct backtrace_location *) malloc(_len_loc0*sizeof(struct backtrace_location));
          for(int _i0 = 0; _i0 < _len_loc0; _i0++) {
              int _len_loc__i0__filename0 = 1;
          loc[_i0].filename = (int *) malloc(_len_loc__i0__filename0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_loc__i0__filename0; _j0++) {
            loc[_i0].filename[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * data;
          count_backtrace_i(mrb,loc,data);
          free(mrb);
          for(int _aux = 0; _aux < _len_loc0; _aux++) {
          free(loc[_aux].filename);
          }
          free(loc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

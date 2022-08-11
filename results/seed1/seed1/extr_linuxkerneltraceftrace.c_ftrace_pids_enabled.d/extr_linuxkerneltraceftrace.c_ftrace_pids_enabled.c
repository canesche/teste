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
struct trace_array {int /*<<< orphan*/ * function_pids; } ;
struct ftrace_ops {int flags; struct trace_array* private; } ;

/* Variables and functions */
 int FTRACE_OPS_FL_PID ; 

__attribute__((used)) static bool ftrace_pids_enabled(struct ftrace_ops *ops)
{
	struct trace_array *tr;

	if (!(ops->flags & FTRACE_OPS_FL_PID) || !ops->private)
		return false;

	tr = ops->private;

	return tr->function_pids != NULL;
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
          int _len_ops0 = 1;
          struct ftrace_ops * ops = (struct ftrace_ops *) malloc(_len_ops0*sizeof(struct ftrace_ops));
          for(int _i0 = 0; _i0 < _len_ops0; _i0++) {
            ops[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ops__i0__private0 = 1;
          ops[_i0].private = (struct trace_array *) malloc(_len_ops__i0__private0*sizeof(struct trace_array));
          for(int _j0 = 0; _j0 < _len_ops__i0__private0; _j0++) {
              int _len_ops__i0__private_function_pids0 = 1;
          ops[_i0].private->function_pids = (int *) malloc(_len_ops__i0__private_function_pids0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ops__i0__private_function_pids0; _j0++) {
            ops[_i0].private->function_pids[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = ftrace_pids_enabled(ops);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ops0; _aux++) {
          free(ops[_aux].private);
          }
          free(ops);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

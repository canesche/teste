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
typedef  scalar_t__ u64 ;
struct thread_stack {size_t cnt; TYPE_1__* stack; } ;
struct TYPE_2__ {scalar_t__ ret_addr; } ;

/* Variables and functions */

__attribute__((used)) static void thread_stack__pop(struct thread_stack *ts, u64 ret_addr)
{
	size_t i;

	/*
	 * In some cases there may be functions which are not seen to return.
	 * For example when setjmp / longjmp has been used.  Or the perf context
	 * switch in the kernel which doesn't stop and start tracing in exactly
	 * the same code path.  When that happens the return address will be
	 * further down the stack.  If the return address is not found at all,
	 * we assume the opposite (i.e. this is a return for a call that wasn't
	 * seen for some reason) and leave the stack alone.
	 */
	for (i = ts->cnt; i; ) {
		if (ts->stack[--i].ret_addr == ret_addr) {
			ts->cnt = i;
			return;
		}
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
          long ret_addr = 100;
          int _len_ts0 = 1;
          struct thread_stack * ts = (struct thread_stack *) malloc(_len_ts0*sizeof(struct thread_stack));
          for(int _i0 = 0; _i0 < _len_ts0; _i0++) {
            ts[_i0].cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ts__i0__stack0 = 1;
          ts[_i0].stack = (struct TYPE_2__ *) malloc(_len_ts__i0__stack0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ts__i0__stack0; _j0++) {
            ts[_i0].stack->ret_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          thread_stack__pop(ts,ret_addr);
          for(int _aux = 0; _aux < _len_ts0; _aux++) {
          free(ts[_aux].stack);
          }
          free(ts);
        
        break;
    }
    // big-arr
    case 1:
    {
          long ret_addr = 255;
          int _len_ts0 = 65025;
          struct thread_stack * ts = (struct thread_stack *) malloc(_len_ts0*sizeof(struct thread_stack));
          for(int _i0 = 0; _i0 < _len_ts0; _i0++) {
            ts[_i0].cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ts__i0__stack0 = 1;
          ts[_i0].stack = (struct TYPE_2__ *) malloc(_len_ts__i0__stack0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ts__i0__stack0; _j0++) {
            ts[_i0].stack->ret_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          thread_stack__pop(ts,ret_addr);
          for(int _aux = 0; _aux < _len_ts0; _aux++) {
          free(ts[_aux].stack);
          }
          free(ts);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long ret_addr = 10;
          int _len_ts0 = 100;
          struct thread_stack * ts = (struct thread_stack *) malloc(_len_ts0*sizeof(struct thread_stack));
          for(int _i0 = 0; _i0 < _len_ts0; _i0++) {
            ts[_i0].cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ts__i0__stack0 = 1;
          ts[_i0].stack = (struct TYPE_2__ *) malloc(_len_ts__i0__stack0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ts__i0__stack0; _j0++) {
            ts[_i0].stack->ret_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          thread_stack__pop(ts,ret_addr);
          for(int _aux = 0; _aux < _len_ts0; _aux++) {
          free(ts[_aux].stack);
          }
          free(ts);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

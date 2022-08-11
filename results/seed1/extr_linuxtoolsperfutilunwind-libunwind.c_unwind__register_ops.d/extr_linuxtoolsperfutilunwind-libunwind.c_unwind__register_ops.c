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
struct unwind_libunwind_ops {int dummy; } ;
struct thread {struct unwind_libunwind_ops* unwind_libunwind_ops; } ;

/* Variables and functions */

__attribute__((used)) static void unwind__register_ops(struct thread *thread,
			  struct unwind_libunwind_ops *ops)
{
	thread->unwind_libunwind_ops = ops;
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
          int _len_thread0 = 1;
          struct thread * thread = (struct thread *) malloc(_len_thread0*sizeof(struct thread));
          for(int _i0 = 0; _i0 < _len_thread0; _i0++) {
              int _len_thread__i0__unwind_libunwind_ops0 = 1;
          thread[_i0].unwind_libunwind_ops = (struct unwind_libunwind_ops *) malloc(_len_thread__i0__unwind_libunwind_ops0*sizeof(struct unwind_libunwind_ops));
          for(int _j0 = 0; _j0 < _len_thread__i0__unwind_libunwind_ops0; _j0++) {
            thread[_i0].unwind_libunwind_ops->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ops0 = 1;
          struct unwind_libunwind_ops * ops = (struct unwind_libunwind_ops *) malloc(_len_ops0*sizeof(struct unwind_libunwind_ops));
          for(int _i0 = 0; _i0 < _len_ops0; _i0++) {
            ops[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unwind__register_ops(thread,ops);
          for(int _aux = 0; _aux < _len_thread0; _aux++) {
          free(thread[_aux].unwind_libunwind_ops);
          }
          free(thread);
          free(ops);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_thread0 = 65025;
          struct thread * thread = (struct thread *) malloc(_len_thread0*sizeof(struct thread));
          for(int _i0 = 0; _i0 < _len_thread0; _i0++) {
              int _len_thread__i0__unwind_libunwind_ops0 = 1;
          thread[_i0].unwind_libunwind_ops = (struct unwind_libunwind_ops *) malloc(_len_thread__i0__unwind_libunwind_ops0*sizeof(struct unwind_libunwind_ops));
          for(int _j0 = 0; _j0 < _len_thread__i0__unwind_libunwind_ops0; _j0++) {
            thread[_i0].unwind_libunwind_ops->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ops0 = 65025;
          struct unwind_libunwind_ops * ops = (struct unwind_libunwind_ops *) malloc(_len_ops0*sizeof(struct unwind_libunwind_ops));
          for(int _i0 = 0; _i0 < _len_ops0; _i0++) {
            ops[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unwind__register_ops(thread,ops);
          for(int _aux = 0; _aux < _len_thread0; _aux++) {
          free(thread[_aux].unwind_libunwind_ops);
          }
          free(thread);
          free(ops);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_thread0 = 100;
          struct thread * thread = (struct thread *) malloc(_len_thread0*sizeof(struct thread));
          for(int _i0 = 0; _i0 < _len_thread0; _i0++) {
              int _len_thread__i0__unwind_libunwind_ops0 = 1;
          thread[_i0].unwind_libunwind_ops = (struct unwind_libunwind_ops *) malloc(_len_thread__i0__unwind_libunwind_ops0*sizeof(struct unwind_libunwind_ops));
          for(int _j0 = 0; _j0 < _len_thread__i0__unwind_libunwind_ops0; _j0++) {
            thread[_i0].unwind_libunwind_ops->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ops0 = 100;
          struct unwind_libunwind_ops * ops = (struct unwind_libunwind_ops *) malloc(_len_ops0*sizeof(struct unwind_libunwind_ops));
          for(int _i0 = 0; _i0 < _len_ops0; _i0++) {
            ops[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unwind__register_ops(thread,ops);
          for(int _aux = 0; _aux < _len_thread0; _aux++) {
          free(thread[_aux].unwind_libunwind_ops);
          }
          free(thread);
          free(ops);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

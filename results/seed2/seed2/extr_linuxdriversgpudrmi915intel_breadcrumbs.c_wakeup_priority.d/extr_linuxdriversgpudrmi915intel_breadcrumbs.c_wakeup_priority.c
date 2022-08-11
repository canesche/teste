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
struct task_struct {int prio; } ;
struct intel_breadcrumbs {struct task_struct* signaler; } ;

/* Variables and functions */
 int INT_MIN ; 

__attribute__((used)) static inline int wakeup_priority(struct intel_breadcrumbs *b,
				  struct task_struct *tsk)
{
	if (tsk == b->signaler)
		return INT_MIN;
	else
		return tsk->prio;
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
          int _len_b0 = 1;
          struct intel_breadcrumbs * b = (struct intel_breadcrumbs *) malloc(_len_b0*sizeof(struct intel_breadcrumbs));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              int _len_b__i0__signaler0 = 1;
          b[_i0].signaler = (struct task_struct *) malloc(_len_b__i0__signaler0*sizeof(struct task_struct));
          for(int _j0 = 0; _j0 < _len_b__i0__signaler0; _j0++) {
            b[_i0].signaler->prio = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_tsk0 = 1;
          struct task_struct * tsk = (struct task_struct *) malloc(_len_tsk0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_tsk0; _i0++) {
            tsk[_i0].prio = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = wakeup_priority(b,tsk);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].signaler);
          }
          free(b);
          free(tsk);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_b0 = 65025;
          struct intel_breadcrumbs * b = (struct intel_breadcrumbs *) malloc(_len_b0*sizeof(struct intel_breadcrumbs));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              int _len_b__i0__signaler0 = 1;
          b[_i0].signaler = (struct task_struct *) malloc(_len_b__i0__signaler0*sizeof(struct task_struct));
          for(int _j0 = 0; _j0 < _len_b__i0__signaler0; _j0++) {
            b[_i0].signaler->prio = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_tsk0 = 65025;
          struct task_struct * tsk = (struct task_struct *) malloc(_len_tsk0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_tsk0; _i0++) {
            tsk[_i0].prio = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = wakeup_priority(b,tsk);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].signaler);
          }
          free(b);
          free(tsk);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_b0 = 100;
          struct intel_breadcrumbs * b = (struct intel_breadcrumbs *) malloc(_len_b0*sizeof(struct intel_breadcrumbs));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              int _len_b__i0__signaler0 = 1;
          b[_i0].signaler = (struct task_struct *) malloc(_len_b__i0__signaler0*sizeof(struct task_struct));
          for(int _j0 = 0; _j0 < _len_b__i0__signaler0; _j0++) {
            b[_i0].signaler->prio = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_tsk0 = 100;
          struct task_struct * tsk = (struct task_struct *) malloc(_len_tsk0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_tsk0; _i0++) {
            tsk[_i0].prio = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = wakeup_priority(b,tsk);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].signaler);
          }
          free(b);
          free(tsk);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

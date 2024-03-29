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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {TYPE_1__* regs; } ;
struct task_struct {TYPE_2__ thread; } ;
struct TYPE_3__ {unsigned long msr; } ;

/* Variables and functions */
 unsigned long MSR_DEBUGCHANGE ; 

__attribute__((used)) static int set_user_msr(struct task_struct *task, unsigned long msr)
{
	task->thread.regs->msr &= ~MSR_DEBUGCHANGE;
	task->thread.regs->msr |= msr & MSR_DEBUGCHANGE;
	return 0;
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
          unsigned long msr = 100;
          int _len_task0 = 1;
          struct task_struct * task = (struct task_struct *) malloc(_len_task0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_task0; _i0++) {
              int _len_task__i0__thread_regs0 = 1;
          task[_i0].thread.regs = (struct TYPE_3__ *) malloc(_len_task__i0__thread_regs0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_task__i0__thread_regs0; _j0++) {
            task[_i0].thread.regs->msr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = set_user_msr(task,msr);
          printf("%d\n", benchRet); 
          free(task);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long msr = 255;
          int _len_task0 = 65025;
          struct task_struct * task = (struct task_struct *) malloc(_len_task0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_task0; _i0++) {
              int _len_task__i0__thread_regs0 = 1;
          task[_i0].thread.regs = (struct TYPE_3__ *) malloc(_len_task__i0__thread_regs0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_task__i0__thread_regs0; _j0++) {
            task[_i0].thread.regs->msr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = set_user_msr(task,msr);
          printf("%d\n", benchRet); 
          free(task);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long msr = 10;
          int _len_task0 = 100;
          struct task_struct * task = (struct task_struct *) malloc(_len_task0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_task0; _i0++) {
              int _len_task__i0__thread_regs0 = 1;
          task[_i0].thread.regs = (struct TYPE_3__ *) malloc(_len_task__i0__thread_regs0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_task__i0__thread_regs0; _j0++) {
            task[_i0].thread.regs->msr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = set_user_msr(task,msr);
          printf("%d\n", benchRet); 
          free(task);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

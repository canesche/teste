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
struct task_struct {TYPE_1__* signal; struct pid* thread_pid; } ;
struct pid {int dummy; } ;
typedef  enum pid_type { ____Placeholder_pid_type } pid_type ;
struct TYPE_2__ {struct pid** pids; } ;

/* Variables and functions */
 int PIDTYPE_PID ; 

__attribute__((used)) static inline void
init_task_pid(struct task_struct *task, enum pid_type type, struct pid *pid)
{
	if (type == PIDTYPE_PID)
		task->thread_pid = pid;
	else
		task->signal->pids[type] = pid;
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
          enum pid_type type = 0;
          int _len_task0 = 1;
          struct task_struct * task = (struct task_struct *) malloc(_len_task0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_task0; _i0++) {
              int _len_task__i0__signal0 = 1;
          task[_i0].signal = (struct TYPE_2__ *) malloc(_len_task__i0__signal0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_task__i0__signal0; _j0++) {
              int _len_task__i0__signal_pids0 = 1;
          task[_i0].signal->pids = (struct pid **) malloc(_len_task__i0__signal_pids0*sizeof(struct pid *));
          for(int _j0 = 0; _j0 < _len_task__i0__signal_pids0; _j0++) {
            int _len_task__i0__signal_pids1 = 1;
            task[_i0].signal->pids[_j0] = (struct pid *) malloc(_len_task__i0__signal_pids1*sizeof(struct pid));
            for(int _j1 = 0; _j1 < _len_task__i0__signal_pids1; _j1++) {
              task[_i0].signal->pids[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_task__i0__thread_pid0 = 1;
          task[_i0].thread_pid = (struct pid *) malloc(_len_task__i0__thread_pid0*sizeof(struct pid));
          for(int _j0 = 0; _j0 < _len_task__i0__thread_pid0; _j0++) {
            task[_i0].thread_pid->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pid0 = 1;
          struct pid * pid = (struct pid *) malloc(_len_pid0*sizeof(struct pid));
          for(int _i0 = 0; _i0 < _len_pid0; _i0++) {
            pid[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_task_pid(task,type,pid);
          for(int _aux = 0; _aux < _len_task0; _aux++) {
          free(task[_aux].signal);
          }
          for(int _aux = 0; _aux < _len_task0; _aux++) {
          free(task[_aux].thread_pid);
          }
          free(task);
          free(pid);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum pid_type type = 0;
          int _len_task0 = 65025;
          struct task_struct * task = (struct task_struct *) malloc(_len_task0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_task0; _i0++) {
              int _len_task__i0__signal0 = 1;
          task[_i0].signal = (struct TYPE_2__ *) malloc(_len_task__i0__signal0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_task__i0__signal0; _j0++) {
              int _len_task__i0__signal_pids0 = 1;
          task[_i0].signal->pids = (struct pid **) malloc(_len_task__i0__signal_pids0*sizeof(struct pid *));
          for(int _j0 = 0; _j0 < _len_task__i0__signal_pids0; _j0++) {
            int _len_task__i0__signal_pids1 = 1;
            task[_i0].signal->pids[_j0] = (struct pid *) malloc(_len_task__i0__signal_pids1*sizeof(struct pid));
            for(int _j1 = 0; _j1 < _len_task__i0__signal_pids1; _j1++) {
              task[_i0].signal->pids[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_task__i0__thread_pid0 = 1;
          task[_i0].thread_pid = (struct pid *) malloc(_len_task__i0__thread_pid0*sizeof(struct pid));
          for(int _j0 = 0; _j0 < _len_task__i0__thread_pid0; _j0++) {
            task[_i0].thread_pid->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pid0 = 65025;
          struct pid * pid = (struct pid *) malloc(_len_pid0*sizeof(struct pid));
          for(int _i0 = 0; _i0 < _len_pid0; _i0++) {
            pid[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_task_pid(task,type,pid);
          for(int _aux = 0; _aux < _len_task0; _aux++) {
          free(task[_aux].signal);
          }
          for(int _aux = 0; _aux < _len_task0; _aux++) {
          free(task[_aux].thread_pid);
          }
          free(task);
          free(pid);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum pid_type type = 0;
          int _len_task0 = 100;
          struct task_struct * task = (struct task_struct *) malloc(_len_task0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_task0; _i0++) {
              int _len_task__i0__signal0 = 1;
          task[_i0].signal = (struct TYPE_2__ *) malloc(_len_task__i0__signal0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_task__i0__signal0; _j0++) {
              int _len_task__i0__signal_pids0 = 1;
          task[_i0].signal->pids = (struct pid **) malloc(_len_task__i0__signal_pids0*sizeof(struct pid *));
          for(int _j0 = 0; _j0 < _len_task__i0__signal_pids0; _j0++) {
            int _len_task__i0__signal_pids1 = 1;
            task[_i0].signal->pids[_j0] = (struct pid *) malloc(_len_task__i0__signal_pids1*sizeof(struct pid));
            for(int _j1 = 0; _j1 < _len_task__i0__signal_pids1; _j1++) {
              task[_i0].signal->pids[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_task__i0__thread_pid0 = 1;
          task[_i0].thread_pid = (struct pid *) malloc(_len_task__i0__thread_pid0*sizeof(struct pid));
          for(int _j0 = 0; _j0 < _len_task__i0__thread_pid0; _j0++) {
            task[_i0].thread_pid->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pid0 = 100;
          struct pid * pid = (struct pid *) malloc(_len_pid0*sizeof(struct pid));
          for(int _i0 = 0; _i0 < _len_pid0; _i0++) {
            pid[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_task_pid(task,type,pid);
          for(int _aux = 0; _aux < _len_task0; _aux++) {
          free(task[_aux].signal);
          }
          for(int _aux = 0; _aux < _len_task0; _aux++) {
          free(task[_aux].thread_pid);
          }
          free(task);
          free(pid);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

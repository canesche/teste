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
typedef  scalar_t__ uint64_t ;
typedef  TYPE_2__* task_t ;
struct TYPE_5__ {TYPE_1__** coalition; } ;
struct TYPE_4__ {scalar_t__ id; } ;

/* Variables and functions */
 int COALITION_NUM_TYPES ; 

void
task_coalition_ids(task_t task, uint64_t ids[COALITION_NUM_TYPES])
{
	int i;
	for (i = 0; i < COALITION_NUM_TYPES; i++) {
		if (task->coalition[i])
			ids[i] = task->coalition[i]->id;
		else
			ids[i] = 0;
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
          int _len_task0 = 1;
          struct TYPE_5__ * task = (struct TYPE_5__ *) malloc(_len_task0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_task0; _i0++) {
              int _len_task__i0__coalition0 = 1;
          task[_i0].coalition = (struct TYPE_4__ **) malloc(_len_task__i0__coalition0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_task__i0__coalition0; _j0++) {
            int _len_task__i0__coalition1 = 1;
            task[_i0].coalition[_j0] = (struct TYPE_4__ *) malloc(_len_task__i0__coalition1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_task__i0__coalition1; _j1++) {
              task[_i0].coalition[_j0]->id = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_ids0 = COALITION_NUM_TYPES;
          long * ids = (long *) malloc(_len_ids0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_ids0; _i0++) {
            ids[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          task_coalition_ids(task,ids);
          for(int _aux = 0; _aux < _len_task0; _aux++) {
          free(*(task[_aux].coalition));
        free(task[_aux].coalition);
          }
          free(task);
          free(ids);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_task0 = 65025;
          struct TYPE_5__ * task = (struct TYPE_5__ *) malloc(_len_task0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_task0; _i0++) {
              int _len_task__i0__coalition0 = 1;
          task[_i0].coalition = (struct TYPE_4__ **) malloc(_len_task__i0__coalition0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_task__i0__coalition0; _j0++) {
            int _len_task__i0__coalition1 = 1;
            task[_i0].coalition[_j0] = (struct TYPE_4__ *) malloc(_len_task__i0__coalition1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_task__i0__coalition1; _j1++) {
              task[_i0].coalition[_j0]->id = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_ids0 = 65025;
          long * ids = (long *) malloc(_len_ids0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_ids0; _i0++) {
            ids[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          task_coalition_ids(task,ids);
          for(int _aux = 0; _aux < _len_task0; _aux++) {
          free(*(task[_aux].coalition));
        free(task[_aux].coalition);
          }
          free(task);
          free(ids);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_task0 = 100;
          struct TYPE_5__ * task = (struct TYPE_5__ *) malloc(_len_task0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_task0; _i0++) {
              int _len_task__i0__coalition0 = 1;
          task[_i0].coalition = (struct TYPE_4__ **) malloc(_len_task__i0__coalition0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_task__i0__coalition0; _j0++) {
            int _len_task__i0__coalition1 = 1;
            task[_i0].coalition[_j0] = (struct TYPE_4__ *) malloc(_len_task__i0__coalition1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_task__i0__coalition1; _j1++) {
              task[_i0].coalition[_j0]->id = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_ids0 = 100;
          long * ids = (long *) malloc(_len_ids0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_ids0; _i0++) {
            ids[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          task_coalition_ids(task,ids);
          for(int _aux = 0; _aux < _len_task0; _aux++) {
          free(*(task[_aux].coalition));
        free(task[_aux].coalition);
          }
          free(task);
          free(ids);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

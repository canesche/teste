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
struct TYPE_3__ {int debugreg6; } ;
struct task_struct {TYPE_1__ thread; } ;
struct pt_regs {int dummy; } ;
struct perf_sample_data {int dummy; } ;
struct perf_event {int dummy; } ;
struct TYPE_4__ {scalar_t__ enabled; } ;

/* Variables and functions */
 int DR_TRAP0 ; 
 TYPE_2__* breakinfo ; 
 struct task_struct* current ; 

__attribute__((used)) static void kgdb_hw_overflow_handler(struct perf_event *event,
		struct perf_sample_data *data, struct pt_regs *regs)
{
	struct task_struct *tsk = current;
	int i;

	for (i = 0; i < 4; i++)
		if (breakinfo[i].enabled)
			tsk->thread.debugreg6 |= (DR_TRAP0 << i);
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
          int _len_event0 = 1;
          struct perf_event * event = (struct perf_event *) malloc(_len_event0*sizeof(struct perf_event));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
            event[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 1;
          struct perf_sample_data * data = (struct perf_sample_data *) malloc(_len_data0*sizeof(struct perf_sample_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 1;
          struct pt_regs * regs = (struct pt_regs *) malloc(_len_regs0*sizeof(struct pt_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
            regs[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          kgdb_hw_overflow_handler(event,data,regs);
          free(event);
          free(data);
          free(regs);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_event0 = 65025;
          struct perf_event * event = (struct perf_event *) malloc(_len_event0*sizeof(struct perf_event));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
            event[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 65025;
          struct perf_sample_data * data = (struct perf_sample_data *) malloc(_len_data0*sizeof(struct perf_sample_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 65025;
          struct pt_regs * regs = (struct pt_regs *) malloc(_len_regs0*sizeof(struct pt_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
            regs[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          kgdb_hw_overflow_handler(event,data,regs);
          free(event);
          free(data);
          free(regs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_event0 = 100;
          struct perf_event * event = (struct perf_event *) malloc(_len_event0*sizeof(struct perf_event));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
            event[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 100;
          struct perf_sample_data * data = (struct perf_sample_data *) malloc(_len_data0*sizeof(struct perf_sample_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 100;
          struct pt_regs * regs = (struct pt_regs *) malloc(_len_regs0*sizeof(struct pt_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
            regs[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          kgdb_hw_overflow_handler(event,data,regs);
          free(event);
          free(data);
          free(regs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

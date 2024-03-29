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
struct task_struct {int dummy; } ;
struct mmc_host {struct mmc_ctx* claimer; } ;
struct mmc_ctx {struct task_struct* task; } ;

/* Variables and functions */

__attribute__((used)) static inline bool mmc_ctx_matches(struct mmc_host *host, struct mmc_ctx *ctx,
				   struct task_struct *task)
{
	return host->claimer == ctx ||
	       (!ctx && task && host->claimer->task == task);
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
          int _len_host0 = 1;
          struct mmc_host * host = (struct mmc_host *) malloc(_len_host0*sizeof(struct mmc_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
              int _len_host__i0__claimer0 = 1;
          host[_i0].claimer = (struct mmc_ctx *) malloc(_len_host__i0__claimer0*sizeof(struct mmc_ctx));
          for(int _j0 = 0; _j0 < _len_host__i0__claimer0; _j0++) {
              int _len_host__i0__claimer_task0 = 1;
          host[_i0].claimer->task = (struct task_struct *) malloc(_len_host__i0__claimer_task0*sizeof(struct task_struct));
          for(int _j0 = 0; _j0 < _len_host__i0__claimer_task0; _j0++) {
            host[_i0].claimer->task->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_ctx0 = 1;
          struct mmc_ctx * ctx = (struct mmc_ctx *) malloc(_len_ctx0*sizeof(struct mmc_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__task0 = 1;
          ctx[_i0].task = (struct task_struct *) malloc(_len_ctx__i0__task0*sizeof(struct task_struct));
          for(int _j0 = 0; _j0 < _len_ctx__i0__task0; _j0++) {
            ctx[_i0].task->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_task0 = 1;
          struct task_struct * task = (struct task_struct *) malloc(_len_task0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_task0; _i0++) {
            task[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mmc_ctx_matches(host,ctx,task);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].claimer);
          }
          free(host);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].task);
          }
          free(ctx);
          free(task);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_host0 = 65025;
          struct mmc_host * host = (struct mmc_host *) malloc(_len_host0*sizeof(struct mmc_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
              int _len_host__i0__claimer0 = 1;
          host[_i0].claimer = (struct mmc_ctx *) malloc(_len_host__i0__claimer0*sizeof(struct mmc_ctx));
          for(int _j0 = 0; _j0 < _len_host__i0__claimer0; _j0++) {
              int _len_host__i0__claimer_task0 = 1;
          host[_i0].claimer->task = (struct task_struct *) malloc(_len_host__i0__claimer_task0*sizeof(struct task_struct));
          for(int _j0 = 0; _j0 < _len_host__i0__claimer_task0; _j0++) {
            host[_i0].claimer->task->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_ctx0 = 65025;
          struct mmc_ctx * ctx = (struct mmc_ctx *) malloc(_len_ctx0*sizeof(struct mmc_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__task0 = 1;
          ctx[_i0].task = (struct task_struct *) malloc(_len_ctx__i0__task0*sizeof(struct task_struct));
          for(int _j0 = 0; _j0 < _len_ctx__i0__task0; _j0++) {
            ctx[_i0].task->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_task0 = 65025;
          struct task_struct * task = (struct task_struct *) malloc(_len_task0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_task0; _i0++) {
            task[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mmc_ctx_matches(host,ctx,task);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].claimer);
          }
          free(host);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].task);
          }
          free(ctx);
          free(task);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_host0 = 100;
          struct mmc_host * host = (struct mmc_host *) malloc(_len_host0*sizeof(struct mmc_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
              int _len_host__i0__claimer0 = 1;
          host[_i0].claimer = (struct mmc_ctx *) malloc(_len_host__i0__claimer0*sizeof(struct mmc_ctx));
          for(int _j0 = 0; _j0 < _len_host__i0__claimer0; _j0++) {
              int _len_host__i0__claimer_task0 = 1;
          host[_i0].claimer->task = (struct task_struct *) malloc(_len_host__i0__claimer_task0*sizeof(struct task_struct));
          for(int _j0 = 0; _j0 < _len_host__i0__claimer_task0; _j0++) {
            host[_i0].claimer->task->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_ctx0 = 100;
          struct mmc_ctx * ctx = (struct mmc_ctx *) malloc(_len_ctx0*sizeof(struct mmc_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__task0 = 1;
          ctx[_i0].task = (struct task_struct *) malloc(_len_ctx__i0__task0*sizeof(struct task_struct));
          for(int _j0 = 0; _j0 < _len_ctx__i0__task0; _j0++) {
            ctx[_i0].task->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_task0 = 100;
          struct task_struct * task = (struct task_struct *) malloc(_len_task0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_task0; _i0++) {
            task[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mmc_ctx_matches(host,ctx,task);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].claimer);
          }
          free(host);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].task);
          }
          free(ctx);
          free(task);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

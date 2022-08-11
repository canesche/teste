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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int /*<<< orphan*/  saved_trap_nr; } ;
struct uprobe_task {TYPE_2__ autask; } ;
struct pt_regs {int /*<<< orphan*/  cp0_epc; } ;
struct arch_uprobe {int /*<<< orphan*/  resume_epc; } ;
struct TYPE_4__ {int /*<<< orphan*/  trap_nr; } ;
struct TYPE_6__ {TYPE_1__ thread; struct uprobe_task* utask; } ;

/* Variables and functions */
 TYPE_3__* current ; 

int arch_uprobe_post_xol(struct arch_uprobe *aup, struct pt_regs *regs)
{
	struct uprobe_task *utask = current->utask;

	current->thread.trap_nr = utask->autask.saved_trap_nr;
	regs->cp0_epc = aup->resume_epc;

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
          int _len_aup0 = 1;
          struct arch_uprobe * aup = (struct arch_uprobe *) malloc(_len_aup0*sizeof(struct arch_uprobe));
          for(int _i0 = 0; _i0 < _len_aup0; _i0++) {
            aup[_i0].resume_epc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 1;
          struct pt_regs * regs = (struct pt_regs *) malloc(_len_regs0*sizeof(struct pt_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
            regs[_i0].cp0_epc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = arch_uprobe_post_xol(aup,regs);
          printf("%d\n", benchRet); 
          free(aup);
          free(regs);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_aup0 = 65025;
          struct arch_uprobe * aup = (struct arch_uprobe *) malloc(_len_aup0*sizeof(struct arch_uprobe));
          for(int _i0 = 0; _i0 < _len_aup0; _i0++) {
            aup[_i0].resume_epc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 65025;
          struct pt_regs * regs = (struct pt_regs *) malloc(_len_regs0*sizeof(struct pt_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
            regs[_i0].cp0_epc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = arch_uprobe_post_xol(aup,regs);
          printf("%d\n", benchRet); 
          free(aup);
          free(regs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_aup0 = 100;
          struct arch_uprobe * aup = (struct arch_uprobe *) malloc(_len_aup0*sizeof(struct arch_uprobe));
          for(int _i0 = 0; _i0 < _len_aup0; _i0++) {
            aup[_i0].resume_epc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 100;
          struct pt_regs * regs = (struct pt_regs *) malloc(_len_regs0*sizeof(struct pt_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
            regs[_i0].cp0_epc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = arch_uprobe_post_xol(aup,regs);
          printf("%d\n", benchRet); 
          free(aup);
          free(regs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

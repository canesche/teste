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
struct pt_regs {unsigned int pc; unsigned long sp; int tsr; } ;
struct TYPE_3__ {unsigned long usp; } ;
struct TYPE_4__ {TYPE_1__ thread; } ;

/* Variables and functions */
 TYPE_2__* current ; 

void start_thread(struct pt_regs *regs, unsigned int pc, unsigned long usp)
{
	/*
	 * The binfmt loader will setup a "full" stack, but the C6X
	 * operates an "empty" stack. So we adjust the usp so that
	 * argc doesn't get destroyed if an interrupt is taken before
	 * it is read from the stack.
	 *
	 * NB: Library startup code needs to match this.
	 */
	usp -= 8;

	regs->pc  = pc;
	regs->sp  = usp;
	regs->tsr |= 0x40; /* set user mode */
	current->thread.usp = usp;
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
          unsigned int pc = 100;
          unsigned long usp = 100;
          int _len_regs0 = 1;
          struct pt_regs * regs = (struct pt_regs *) malloc(_len_regs0*sizeof(struct pt_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
            regs[_i0].pc = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].sp = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].tsr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          start_thread(regs,pc,usp);
          free(regs);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int pc = 255;
          unsigned long usp = 255;
          int _len_regs0 = 65025;
          struct pt_regs * regs = (struct pt_regs *) malloc(_len_regs0*sizeof(struct pt_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
            regs[_i0].pc = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].sp = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].tsr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          start_thread(regs,pc,usp);
          free(regs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int pc = 10;
          unsigned long usp = 10;
          int _len_regs0 = 100;
          struct pt_regs * regs = (struct pt_regs *) malloc(_len_regs0*sizeof(struct pt_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
            regs[_i0].pc = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].sp = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].tsr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          start_thread(regs,pc,usp);
          free(regs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

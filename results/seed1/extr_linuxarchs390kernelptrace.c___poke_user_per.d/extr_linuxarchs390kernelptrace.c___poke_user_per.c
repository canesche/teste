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
struct TYPE_3__ {scalar_t__ end; scalar_t__ start; scalar_t__ control; } ;
struct TYPE_4__ {TYPE_1__ per_user; } ;
struct task_struct {TYPE_2__ thread; } ;
struct per_struct_kernel {int /*<<< orphan*/  ending_addr; int /*<<< orphan*/  starting_addr; int /*<<< orphan*/  cr9; } ;
typedef  scalar_t__ addr_t ;

/* Variables and functions */
 scalar_t__ PER_CONTROL_MASK ; 
 scalar_t__ PER_EVENT_MASK ; 

__attribute__((used)) static inline void __poke_user_per(struct task_struct *child,
				   addr_t addr, addr_t data)
{
	struct per_struct_kernel *dummy = NULL;

	/*
	 * There are only three fields in the per_info struct that the
	 * debugger user can write to.
	 * 1) cr9: the debugger wants to set a new PER event mask
	 * 2) starting_addr: the debugger wants to set a new starting
	 *    address to use with the PER event mask.
	 * 3) ending_addr: the debugger wants to set a new ending
	 *    address to use with the PER event mask.
	 * The user specified PER event mask and the start and end
	 * addresses are used only if single stepping is not in effect.
	 * Writes to any other field in per_info are ignored.
	 */
	if (addr == (addr_t) &dummy->cr9)
		/* PER event mask of the user specified per set. */
		child->thread.per_user.control =
			data & (PER_EVENT_MASK | PER_CONTROL_MASK);
	else if (addr == (addr_t) &dummy->starting_addr)
		/* Starting address of the user specified per set. */
		child->thread.per_user.start = data;
	else if (addr == (addr_t) &dummy->ending_addr)
		/* Ending address of the user specified per set. */
		child->thread.per_user.end = data;
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
          long addr = 100;
          long data = 100;
          int _len_child0 = 1;
          struct task_struct * child = (struct task_struct *) malloc(_len_child0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_child0; _i0++) {
            child[_i0].thread.per_user.end = ((-2 * (next_i()%2)) + 1) * next_i();
        child[_i0].thread.per_user.start = ((-2 * (next_i()%2)) + 1) * next_i();
        child[_i0].thread.per_user.control = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __poke_user_per(child,addr,data);
          free(child);
        
        break;
    }
    // big-arr
    case 1:
    {
          long addr = 255;
          long data = 255;
          int _len_child0 = 65025;
          struct task_struct * child = (struct task_struct *) malloc(_len_child0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_child0; _i0++) {
            child[_i0].thread.per_user.end = ((-2 * (next_i()%2)) + 1) * next_i();
        child[_i0].thread.per_user.start = ((-2 * (next_i()%2)) + 1) * next_i();
        child[_i0].thread.per_user.control = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __poke_user_per(child,addr,data);
          free(child);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long addr = 10;
          long data = 10;
          int _len_child0 = 100;
          struct task_struct * child = (struct task_struct *) malloc(_len_child0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_child0; _i0++) {
            child[_i0].thread.per_user.end = ((-2 * (next_i()%2)) + 1) * next_i();
        child[_i0].thread.per_user.start = ((-2 * (next_i()%2)) + 1) * next_i();
        child[_i0].thread.per_user.control = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __poke_user_per(child,addr,data);
          free(child);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

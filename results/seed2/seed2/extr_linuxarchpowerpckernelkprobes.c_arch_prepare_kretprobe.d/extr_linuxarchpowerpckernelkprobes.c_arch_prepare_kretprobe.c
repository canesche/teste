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
struct pt_regs {unsigned long link; } ;
struct kretprobe_instance {int /*<<< orphan*/ * ret_addr; } ;
typedef  int /*<<< orphan*/  kprobe_opcode_t ;

/* Variables and functions */
 scalar_t__ kretprobe_trampoline ; 

void arch_prepare_kretprobe(struct kretprobe_instance *ri, struct pt_regs *regs)
{
	ri->ret_addr = (kprobe_opcode_t *)regs->link;

	/* Replace the return addr with trampoline addr */
	regs->link = (unsigned long)kretprobe_trampoline;
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
          int _len_ri0 = 1;
          struct kretprobe_instance * ri = (struct kretprobe_instance *) malloc(_len_ri0*sizeof(struct kretprobe_instance));
          for(int _i0 = 0; _i0 < _len_ri0; _i0++) {
              int _len_ri__i0__ret_addr0 = 1;
          ri[_i0].ret_addr = (int *) malloc(_len_ri__i0__ret_addr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ri__i0__ret_addr0; _j0++) {
            ri[_i0].ret_addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_regs0 = 1;
          struct pt_regs * regs = (struct pt_regs *) malloc(_len_regs0*sizeof(struct pt_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
            regs[_i0].link = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          arch_prepare_kretprobe(ri,regs);
          for(int _aux = 0; _aux < _len_ri0; _aux++) {
          free(ri[_aux].ret_addr);
          }
          free(ri);
          free(regs);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ri0 = 65025;
          struct kretprobe_instance * ri = (struct kretprobe_instance *) malloc(_len_ri0*sizeof(struct kretprobe_instance));
          for(int _i0 = 0; _i0 < _len_ri0; _i0++) {
              int _len_ri__i0__ret_addr0 = 1;
          ri[_i0].ret_addr = (int *) malloc(_len_ri__i0__ret_addr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ri__i0__ret_addr0; _j0++) {
            ri[_i0].ret_addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_regs0 = 65025;
          struct pt_regs * regs = (struct pt_regs *) malloc(_len_regs0*sizeof(struct pt_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
            regs[_i0].link = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          arch_prepare_kretprobe(ri,regs);
          for(int _aux = 0; _aux < _len_ri0; _aux++) {
          free(ri[_aux].ret_addr);
          }
          free(ri);
          free(regs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ri0 = 100;
          struct kretprobe_instance * ri = (struct kretprobe_instance *) malloc(_len_ri0*sizeof(struct kretprobe_instance));
          for(int _i0 = 0; _i0 < _len_ri0; _i0++) {
              int _len_ri__i0__ret_addr0 = 1;
          ri[_i0].ret_addr = (int *) malloc(_len_ri__i0__ret_addr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ri__i0__ret_addr0; _j0++) {
            ri[_i0].ret_addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_regs0 = 100;
          struct pt_regs * regs = (struct pt_regs *) malloc(_len_regs0*sizeof(struct pt_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
            regs[_i0].link = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          arch_prepare_kretprobe(ri,regs);
          for(int _aux = 0; _aux < _len_ri0; _aux++) {
          free(ri[_aux].ret_addr);
          }
          free(ri);
          free(regs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

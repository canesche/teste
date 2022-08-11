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
struct pt_regs {unsigned long* uregs; unsigned long fp; unsigned long sp; } ;

/* Variables and functions */

__attribute__((used)) static inline unsigned long *idx_to_addr(struct pt_regs *regs, int idx)
{
	/* this should be consistent with ptrace.h */
	if (idx >= 0 && idx <= 25)	/* R0-R25 */
		return &regs->uregs[0] + idx;
	else if (idx >= 28 && idx <= 30)	/* FP, GP, LP */
		return &regs->fp + (idx - 28);
	else if (idx == 31)	/* SP */
		return &regs->sp;
	else
		return NULL;	/* cause a segfault */
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
          int idx = 100;
          int _len_regs0 = 1;
          struct pt_regs * regs = (struct pt_regs *) malloc(_len_regs0*sizeof(struct pt_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              int _len_regs__i0__uregs0 = 1;
          regs[_i0].uregs = (unsigned long *) malloc(_len_regs__i0__uregs0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_regs__i0__uregs0; _j0++) {
            regs[_i0].uregs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        regs[_i0].fp = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].sp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long * benchRet = idx_to_addr(regs,idx);
          printf("%lu\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_regs0; _aux++) {
          free(regs[_aux].uregs);
          }
          free(regs);
        
        break;
    }
    // big-arr
    case 1:
    {
          int idx = 255;
          int _len_regs0 = 65025;
          struct pt_regs * regs = (struct pt_regs *) malloc(_len_regs0*sizeof(struct pt_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              int _len_regs__i0__uregs0 = 1;
          regs[_i0].uregs = (unsigned long *) malloc(_len_regs__i0__uregs0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_regs__i0__uregs0; _j0++) {
            regs[_i0].uregs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        regs[_i0].fp = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].sp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long * benchRet = idx_to_addr(regs,idx);
          printf("%lu\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_regs0; _aux++) {
          free(regs[_aux].uregs);
          }
          free(regs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int idx = 10;
          int _len_regs0 = 100;
          struct pt_regs * regs = (struct pt_regs *) malloc(_len_regs0*sizeof(struct pt_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              int _len_regs__i0__uregs0 = 1;
          regs[_i0].uregs = (unsigned long *) malloc(_len_regs__i0__uregs0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_regs__i0__uregs0; _j0++) {
            regs[_i0].uregs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        regs[_i0].fp = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].sp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long * benchRet = idx_to_addr(regs,idx);
          printf("%lu\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_regs0; _aux++) {
          free(regs[_aux].uregs);
          }
          free(regs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct pt_regs {int /*<<< orphan*/ * uregs; } ;
struct arch_uprobe_task {int /*<<< orphan*/  backup; } ;
struct arch_uprobe {size_t pcreg; } ;

/* Variables and functions */

__attribute__((used)) static void uprobe_unset_pc(struct arch_uprobe *auprobe,
			    struct arch_uprobe_task *autask,
			    struct pt_regs *regs)
{
	/* PC will be taken care of by common code */
	regs->uregs[auprobe->pcreg] = autask->backup;
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
          int _len_auprobe0 = 1;
          struct arch_uprobe * auprobe = (struct arch_uprobe *) malloc(_len_auprobe0*sizeof(struct arch_uprobe));
          for(int _i0 = 0; _i0 < _len_auprobe0; _i0++) {
            auprobe[_i0].pcreg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_autask0 = 1;
          struct arch_uprobe_task * autask = (struct arch_uprobe_task *) malloc(_len_autask0*sizeof(struct arch_uprobe_task));
          for(int _i0 = 0; _i0 < _len_autask0; _i0++) {
            autask[_i0].backup = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 1;
          struct pt_regs * regs = (struct pt_regs *) malloc(_len_regs0*sizeof(struct pt_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              int _len_regs__i0__uregs0 = 1;
          regs[_i0].uregs = (int *) malloc(_len_regs__i0__uregs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_regs__i0__uregs0; _j0++) {
            regs[_i0].uregs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          uprobe_unset_pc(auprobe,autask,regs);
          free(auprobe);
          free(autask);
          for(int _aux = 0; _aux < _len_regs0; _aux++) {
          free(regs[_aux].uregs);
          }
          free(regs);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_auprobe0 = 65025;
          struct arch_uprobe * auprobe = (struct arch_uprobe *) malloc(_len_auprobe0*sizeof(struct arch_uprobe));
          for(int _i0 = 0; _i0 < _len_auprobe0; _i0++) {
            auprobe[_i0].pcreg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_autask0 = 65025;
          struct arch_uprobe_task * autask = (struct arch_uprobe_task *) malloc(_len_autask0*sizeof(struct arch_uprobe_task));
          for(int _i0 = 0; _i0 < _len_autask0; _i0++) {
            autask[_i0].backup = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 65025;
          struct pt_regs * regs = (struct pt_regs *) malloc(_len_regs0*sizeof(struct pt_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              int _len_regs__i0__uregs0 = 1;
          regs[_i0].uregs = (int *) malloc(_len_regs__i0__uregs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_regs__i0__uregs0; _j0++) {
            regs[_i0].uregs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          uprobe_unset_pc(auprobe,autask,regs);
          free(auprobe);
          free(autask);
          for(int _aux = 0; _aux < _len_regs0; _aux++) {
          free(regs[_aux].uregs);
          }
          free(regs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_auprobe0 = 100;
          struct arch_uprobe * auprobe = (struct arch_uprobe *) malloc(_len_auprobe0*sizeof(struct arch_uprobe));
          for(int _i0 = 0; _i0 < _len_auprobe0; _i0++) {
            auprobe[_i0].pcreg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_autask0 = 100;
          struct arch_uprobe_task * autask = (struct arch_uprobe_task *) malloc(_len_autask0*sizeof(struct arch_uprobe_task));
          for(int _i0 = 0; _i0 < _len_autask0; _i0++) {
            autask[_i0].backup = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 100;
          struct pt_regs * regs = (struct pt_regs *) malloc(_len_regs0*sizeof(struct pt_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              int _len_regs__i0__uregs0 = 1;
          regs[_i0].uregs = (int *) malloc(_len_regs__i0__uregs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_regs__i0__uregs0; _j0++) {
            regs[_i0].uregs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          uprobe_unset_pc(auprobe,autask,regs);
          free(auprobe);
          free(autask);
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

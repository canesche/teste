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
struct sh_fpu_soft_struct {scalar_t__* xfp_regs; scalar_t__* fp_regs; scalar_t__ fpul; int /*<<< orphan*/  fpscr; } ;

/* Variables and functions */
 int /*<<< orphan*/  FPSCR_INIT ; 

__attribute__((used)) static void fpu_init(struct sh_fpu_soft_struct *fpu)
{
	int i;

	fpu->fpscr = FPSCR_INIT;
	fpu->fpul = 0;

	for (i = 0; i < 16; i++) {
		fpu->fp_regs[i] = 0;
		fpu->xfp_regs[i]= 0;
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
          int _len_fpu0 = 1;
          struct sh_fpu_soft_struct * fpu = (struct sh_fpu_soft_struct *) malloc(_len_fpu0*sizeof(struct sh_fpu_soft_struct));
          for(int _i0 = 0; _i0 < _len_fpu0; _i0++) {
              int _len_fpu__i0__xfp_regs0 = 1;
          fpu[_i0].xfp_regs = (long *) malloc(_len_fpu__i0__xfp_regs0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_fpu__i0__xfp_regs0; _j0++) {
            fpu[_i0].xfp_regs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fpu__i0__fp_regs0 = 1;
          fpu[_i0].fp_regs = (long *) malloc(_len_fpu__i0__fp_regs0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_fpu__i0__fp_regs0; _j0++) {
            fpu[_i0].fp_regs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        fpu[_i0].fpul = ((-2 * (next_i()%2)) + 1) * next_i();
        fpu[_i0].fpscr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fpu_init(fpu);
          for(int _aux = 0; _aux < _len_fpu0; _aux++) {
          free(fpu[_aux].xfp_regs);
          }
          for(int _aux = 0; _aux < _len_fpu0; _aux++) {
          free(fpu[_aux].fp_regs);
          }
          free(fpu);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_fpu0 = 65025;
          struct sh_fpu_soft_struct * fpu = (struct sh_fpu_soft_struct *) malloc(_len_fpu0*sizeof(struct sh_fpu_soft_struct));
          for(int _i0 = 0; _i0 < _len_fpu0; _i0++) {
              int _len_fpu__i0__xfp_regs0 = 1;
          fpu[_i0].xfp_regs = (long *) malloc(_len_fpu__i0__xfp_regs0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_fpu__i0__xfp_regs0; _j0++) {
            fpu[_i0].xfp_regs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fpu__i0__fp_regs0 = 1;
          fpu[_i0].fp_regs = (long *) malloc(_len_fpu__i0__fp_regs0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_fpu__i0__fp_regs0; _j0++) {
            fpu[_i0].fp_regs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        fpu[_i0].fpul = ((-2 * (next_i()%2)) + 1) * next_i();
        fpu[_i0].fpscr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fpu_init(fpu);
          for(int _aux = 0; _aux < _len_fpu0; _aux++) {
          free(fpu[_aux].xfp_regs);
          }
          for(int _aux = 0; _aux < _len_fpu0; _aux++) {
          free(fpu[_aux].fp_regs);
          }
          free(fpu);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_fpu0 = 100;
          struct sh_fpu_soft_struct * fpu = (struct sh_fpu_soft_struct *) malloc(_len_fpu0*sizeof(struct sh_fpu_soft_struct));
          for(int _i0 = 0; _i0 < _len_fpu0; _i0++) {
              int _len_fpu__i0__xfp_regs0 = 1;
          fpu[_i0].xfp_regs = (long *) malloc(_len_fpu__i0__xfp_regs0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_fpu__i0__xfp_regs0; _j0++) {
            fpu[_i0].xfp_regs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fpu__i0__fp_regs0 = 1;
          fpu[_i0].fp_regs = (long *) malloc(_len_fpu__i0__fp_regs0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_fpu__i0__fp_regs0; _j0++) {
            fpu[_i0].fp_regs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        fpu[_i0].fpul = ((-2 * (next_i()%2)) + 1) * next_i();
        fpu[_i0].fpscr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fpu_init(fpu);
          for(int _aux = 0; _aux < _len_fpu0; _aux++) {
          free(fpu[_aux].xfp_regs);
          }
          for(int _aux = 0; _aux < _len_fpu0; _aux++) {
          free(fpu[_aux].fp_regs);
          }
          free(fpu);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

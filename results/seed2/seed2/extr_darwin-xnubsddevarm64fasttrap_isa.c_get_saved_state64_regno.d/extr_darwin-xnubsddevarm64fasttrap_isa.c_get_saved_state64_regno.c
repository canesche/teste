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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  uint64_t ;
typedef  int uint32_t ;
struct TYPE_3__ {int /*<<< orphan*/ * x; int /*<<< orphan*/  sp; int /*<<< orphan*/  lr; int /*<<< orphan*/  fp; } ;
typedef  TYPE_1__ arm_saved_state64_t ;

/* Variables and functions */

__attribute__((used)) static uint64_t 
get_saved_state64_regno(arm_saved_state64_t *regs64, uint32_t regno, int use_xzr)
{
	/* Set PC to register value */
	switch (regno) {
		case 29:
			return regs64->fp;
		case 30:
			return regs64->lr;
		case 31:
			/* xzr */
			if (use_xzr) {
				return 0;
			} else {
				return regs64->sp;
			}
		default:
			return regs64->x[regno];
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
          int regno = 100;
          int use_xzr = 100;
          int _len_regs640 = 1;
          struct TYPE_3__ * regs64 = (struct TYPE_3__ *) malloc(_len_regs640*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_regs640; _i0++) {
              int _len_regs64__i0__x0 = 1;
          regs64[_i0].x = (int *) malloc(_len_regs64__i0__x0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_regs64__i0__x0; _j0++) {
            regs64[_i0].x[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        regs64[_i0].sp = ((-2 * (next_i()%2)) + 1) * next_i();
        regs64[_i0].lr = ((-2 * (next_i()%2)) + 1) * next_i();
        regs64[_i0].fp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_saved_state64_regno(regs64,regno,use_xzr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_regs640; _aux++) {
          free(regs64[_aux].x);
          }
          free(regs64);
        
        break;
    }
    // big-arr
    case 1:
    {
          int regno = 255;
          int use_xzr = 255;
          int _len_regs640 = 65025;
          struct TYPE_3__ * regs64 = (struct TYPE_3__ *) malloc(_len_regs640*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_regs640; _i0++) {
              int _len_regs64__i0__x0 = 1;
          regs64[_i0].x = (int *) malloc(_len_regs64__i0__x0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_regs64__i0__x0; _j0++) {
            regs64[_i0].x[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        regs64[_i0].sp = ((-2 * (next_i()%2)) + 1) * next_i();
        regs64[_i0].lr = ((-2 * (next_i()%2)) + 1) * next_i();
        regs64[_i0].fp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_saved_state64_regno(regs64,regno,use_xzr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_regs640; _aux++) {
          free(regs64[_aux].x);
          }
          free(regs64);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int regno = 10;
          int use_xzr = 10;
          int _len_regs640 = 100;
          struct TYPE_3__ * regs64 = (struct TYPE_3__ *) malloc(_len_regs640*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_regs640; _i0++) {
              int _len_regs64__i0__x0 = 1;
          regs64[_i0].x = (int *) malloc(_len_regs64__i0__x0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_regs64__i0__x0; _j0++) {
            regs64[_i0].x[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        regs64[_i0].sp = ((-2 * (next_i()%2)) + 1) * next_i();
        regs64[_i0].lr = ((-2 * (next_i()%2)) + 1) * next_i();
        regs64[_i0].fp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_saved_state64_regno(regs64,regno,use_xzr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_regs640; _aux++) {
          free(regs64[_aux].x);
          }
          free(regs64);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct re_registers {unsigned int num_regs; int /*<<< orphan*/ * end; int /*<<< orphan*/ * start; } ;
struct re_pattern_buffer {int /*<<< orphan*/  regs_allocated; } ;
typedef  int /*<<< orphan*/  regoff_t ;

/* Variables and functions */
 int /*<<< orphan*/  REGS_REALLOCATE ; 
 int /*<<< orphan*/  REGS_UNALLOCATED ; 

void
re_set_registers (struct re_pattern_buffer *bufp,
		  struct re_registers *regs,
		  unsigned num_regs,
		  regoff_t *starts,
		  regoff_t *ends)
{
  if (num_regs)
    {
      bufp->regs_allocated = REGS_REALLOCATE;
      regs->num_regs = num_regs;
      regs->start = starts;
      regs->end = ends;
    }
  else
    {
      bufp->regs_allocated = REGS_UNALLOCATED;
      regs->num_regs = 0;
      regs->start = regs->end = (regoff_t *) 0;
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
          unsigned int num_regs = 100;
          int _len_bufp0 = 1;
          struct re_pattern_buffer * bufp = (struct re_pattern_buffer *) malloc(_len_bufp0*sizeof(struct re_pattern_buffer));
          for(int _i0 = 0; _i0 < _len_bufp0; _i0++) {
            bufp[_i0].regs_allocated = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 1;
          struct re_registers * regs = (struct re_registers *) malloc(_len_regs0*sizeof(struct re_registers));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
            regs[_i0].num_regs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_regs__i0__end0 = 1;
          regs[_i0].end = (int *) malloc(_len_regs__i0__end0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_regs__i0__end0; _j0++) {
            regs[_i0].end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs__i0__start0 = 1;
          regs[_i0].start = (int *) malloc(_len_regs__i0__start0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_regs__i0__start0; _j0++) {
            regs[_i0].start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_starts0 = 1;
          int * starts = (int *) malloc(_len_starts0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_starts0; _i0++) {
            starts[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ends0 = 1;
          int * ends = (int *) malloc(_len_ends0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ends0; _i0++) {
            ends[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          re_set_registers(bufp,regs,num_regs,starts,ends);
          free(bufp);
          for(int _aux = 0; _aux < _len_regs0; _aux++) {
          free(regs[_aux].end);
          }
          for(int _aux = 0; _aux < _len_regs0; _aux++) {
          free(regs[_aux].start);
          }
          free(regs);
          free(starts);
          free(ends);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int num_regs = 255;
          int _len_bufp0 = 65025;
          struct re_pattern_buffer * bufp = (struct re_pattern_buffer *) malloc(_len_bufp0*sizeof(struct re_pattern_buffer));
          for(int _i0 = 0; _i0 < _len_bufp0; _i0++) {
            bufp[_i0].regs_allocated = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 65025;
          struct re_registers * regs = (struct re_registers *) malloc(_len_regs0*sizeof(struct re_registers));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
            regs[_i0].num_regs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_regs__i0__end0 = 1;
          regs[_i0].end = (int *) malloc(_len_regs__i0__end0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_regs__i0__end0; _j0++) {
            regs[_i0].end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs__i0__start0 = 1;
          regs[_i0].start = (int *) malloc(_len_regs__i0__start0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_regs__i0__start0; _j0++) {
            regs[_i0].start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_starts0 = 65025;
          int * starts = (int *) malloc(_len_starts0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_starts0; _i0++) {
            starts[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ends0 = 65025;
          int * ends = (int *) malloc(_len_ends0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ends0; _i0++) {
            ends[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          re_set_registers(bufp,regs,num_regs,starts,ends);
          free(bufp);
          for(int _aux = 0; _aux < _len_regs0; _aux++) {
          free(regs[_aux].end);
          }
          for(int _aux = 0; _aux < _len_regs0; _aux++) {
          free(regs[_aux].start);
          }
          free(regs);
          free(starts);
          free(ends);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int num_regs = 10;
          int _len_bufp0 = 100;
          struct re_pattern_buffer * bufp = (struct re_pattern_buffer *) malloc(_len_bufp0*sizeof(struct re_pattern_buffer));
          for(int _i0 = 0; _i0 < _len_bufp0; _i0++) {
            bufp[_i0].regs_allocated = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 100;
          struct re_registers * regs = (struct re_registers *) malloc(_len_regs0*sizeof(struct re_registers));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
            regs[_i0].num_regs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_regs__i0__end0 = 1;
          regs[_i0].end = (int *) malloc(_len_regs__i0__end0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_regs__i0__end0; _j0++) {
            regs[_i0].end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs__i0__start0 = 1;
          regs[_i0].start = (int *) malloc(_len_regs__i0__start0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_regs__i0__start0; _j0++) {
            regs[_i0].start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_starts0 = 100;
          int * starts = (int *) malloc(_len_starts0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_starts0; _i0++) {
            starts[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ends0 = 100;
          int * ends = (int *) malloc(_len_ends0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ends0; _i0++) {
            ends[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          re_set_registers(bufp,regs,num_regs,starts,ends);
          free(bufp);
          for(int _aux = 0; _aux < _len_regs0; _aux++) {
          free(regs[_aux].end);
          }
          for(int _aux = 0; _aux < _len_regs0; _aux++) {
          free(regs[_aux].start);
          }
          free(regs);
          free(starts);
          free(ends);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

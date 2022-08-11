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
struct reg_window {unsigned long* locals; unsigned long* ins; } ;
struct pt_regs {unsigned long* u_regs; unsigned long tstate; unsigned long tpc; unsigned long tnpc; unsigned long y; } ;

/* Variables and functions */
 int GDB_G1 ; 
 int GDB_I0 ; 
 int GDB_L0 ; 
 size_t GDB_NPC ; 
 size_t GDB_PC ; 
 size_t GDB_STATE ; 
 size_t GDB_Y ; 
 scalar_t__ STACK_BIAS ; 
 unsigned long TSTATE_CWP ; 
 size_t UREG_FP ; 
 int UREG_G1 ; 

void gdb_regs_to_pt_regs(unsigned long *gdb_regs, struct pt_regs *regs)
{
	struct reg_window *win;
	int i;

	for (i = 0; i < 15; i++)
		regs->u_regs[UREG_G1 + i] = gdb_regs[GDB_G1 + i];

	/* If the TSTATE register is changing, we have to preserve
	 * the CWP field, otherwise window save/restore explodes.
	 */
	if (regs->tstate != gdb_regs[GDB_STATE]) {
		unsigned long cwp = regs->tstate & TSTATE_CWP;

		regs->tstate = (gdb_regs[GDB_STATE] & ~TSTATE_CWP) | cwp;
	}

	regs->tpc = gdb_regs[GDB_PC];
	regs->tnpc = gdb_regs[GDB_NPC];
	regs->y = gdb_regs[GDB_Y];

	win = (struct reg_window *) (regs->u_regs[UREG_FP] + STACK_BIAS);
	for (i = 0; i < 8; i++)
		win->locals[i] = gdb_regs[GDB_L0 + i];
	for (i = 0; i < 8; i++)
		win->ins[i] = gdb_regs[GDB_I0 + i];
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
          int _len_gdb_regs0 = 1;
          unsigned long * gdb_regs = (unsigned long *) malloc(_len_gdb_regs0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_gdb_regs0; _i0++) {
            gdb_regs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 1;
          struct pt_regs * regs = (struct pt_regs *) malloc(_len_regs0*sizeof(struct pt_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              int _len_regs__i0__u_regs0 = 1;
          regs[_i0].u_regs = (unsigned long *) malloc(_len_regs__i0__u_regs0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_regs__i0__u_regs0; _j0++) {
            regs[_i0].u_regs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        regs[_i0].tstate = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].tpc = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].tnpc = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gdb_regs_to_pt_regs(gdb_regs,regs);
          free(gdb_regs);
          for(int _aux = 0; _aux < _len_regs0; _aux++) {
          free(regs[_aux].u_regs);
          }
          free(regs);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_gdb_regs0 = 65025;
          unsigned long * gdb_regs = (unsigned long *) malloc(_len_gdb_regs0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_gdb_regs0; _i0++) {
            gdb_regs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 65025;
          struct pt_regs * regs = (struct pt_regs *) malloc(_len_regs0*sizeof(struct pt_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              int _len_regs__i0__u_regs0 = 1;
          regs[_i0].u_regs = (unsigned long *) malloc(_len_regs__i0__u_regs0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_regs__i0__u_regs0; _j0++) {
            regs[_i0].u_regs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        regs[_i0].tstate = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].tpc = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].tnpc = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gdb_regs_to_pt_regs(gdb_regs,regs);
          free(gdb_regs);
          for(int _aux = 0; _aux < _len_regs0; _aux++) {
          free(regs[_aux].u_regs);
          }
          free(regs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_gdb_regs0 = 100;
          unsigned long * gdb_regs = (unsigned long *) malloc(_len_gdb_regs0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_gdb_regs0; _i0++) {
            gdb_regs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 100;
          struct pt_regs * regs = (struct pt_regs *) malloc(_len_regs0*sizeof(struct pt_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              int _len_regs__i0__u_regs0 = 1;
          regs[_i0].u_regs = (unsigned long *) malloc(_len_regs__i0__u_regs0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_regs__i0__u_regs0; _j0++) {
            regs[_i0].u_regs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        regs[_i0].tstate = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].tpc = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].tnpc = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gdb_regs_to_pt_regs(gdb_regs,regs);
          free(gdb_regs);
          for(int _aux = 0; _aux < _len_regs0; _aux++) {
          free(regs[_aux].u_regs);
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

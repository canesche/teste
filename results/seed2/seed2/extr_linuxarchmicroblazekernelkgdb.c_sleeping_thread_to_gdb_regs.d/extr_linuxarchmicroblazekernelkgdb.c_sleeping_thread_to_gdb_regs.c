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
struct TYPE_3__ {scalar_t__ regs; } ;
struct task_struct {TYPE_1__ thread; } ;
struct pvr_s {int dummy; } ;
struct pt_regs {int dummy; } ;
struct TYPE_4__ {unsigned long* pvr; } ;

/* Variables and functions */
 unsigned int GDB_PVR ; 
 TYPE_2__ pvr ; 

void sleeping_thread_to_gdb_regs(unsigned long *gdb_regs, struct task_struct *p)
{
	unsigned int i;
	unsigned long *pt_regb = (unsigned long *)(p->thread.regs);

	/* registers r0 - r31, pc, msr, ear, esr, fsr + do not save pt_mode */
	for (i = 0; i < (sizeof(struct pt_regs) / 4) - 1; i++)
		gdb_regs[i] = pt_regb[i];

	/* pvr part  - we have 11 pvr regs */
	for (i = 0; i < sizeof(struct pvr_s)/4; i++)
		gdb_regs[GDB_PVR + i] = pvr.pvr[i];
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
          int _len_p0 = 1;
          struct task_struct * p = (struct task_struct *) malloc(_len_p0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].thread.regs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sleeping_thread_to_gdb_regs(gdb_regs,p);
          free(gdb_regs);
          free(p);
        
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
          int _len_p0 = 65025;
          struct task_struct * p = (struct task_struct *) malloc(_len_p0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].thread.regs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sleeping_thread_to_gdb_regs(gdb_regs,p);
          free(gdb_regs);
          free(p);
        
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
          int _len_p0 = 100;
          struct task_struct * p = (struct task_struct *) malloc(_len_p0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].thread.regs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sleeping_thread_to_gdb_regs(gdb_regs,p);
          free(gdb_regs);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

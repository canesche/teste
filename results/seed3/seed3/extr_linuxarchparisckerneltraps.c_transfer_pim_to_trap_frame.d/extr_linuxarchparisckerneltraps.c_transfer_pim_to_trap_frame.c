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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct pt_regs {scalar_t__ orig_r28; scalar_t__ kpc; scalar_t__ ksp; int /*<<< orphan*/  ior; int /*<<< orphan*/  isr; int /*<<< orphan*/  iir; int /*<<< orphan*/  sar; int /*<<< orphan*/ * iaoq; int /*<<< orphan*/ * iasq; int /*<<< orphan*/ * sr; int /*<<< orphan*/ * fr; int /*<<< orphan*/ * gr; } ;
struct pdc_hpmc_pim_20 {int /*<<< orphan*/ * cr; int /*<<< orphan*/  iaoq_back; int /*<<< orphan*/  iasq_back; int /*<<< orphan*/ * sr; int /*<<< orphan*/ * fr; int /*<<< orphan*/ * gr; } ;
struct pdc_hpmc_pim_11 {int /*<<< orphan*/ * cr; int /*<<< orphan*/  iaoq_back; int /*<<< orphan*/  iasq_back; int /*<<< orphan*/ * sr; int /*<<< orphan*/ * fr; int /*<<< orphan*/ * gr; } ;
struct TYPE_2__ {scalar_t__ cpu_type; } ;

/* Variables and functions */
 TYPE_1__ boot_cpu_data ; 
 scalar_t__ pcxu ; 

void transfer_pim_to_trap_frame(struct pt_regs *regs)
{
    register int i;
    extern unsigned int hpmc_pim_data[];
    struct pdc_hpmc_pim_11 *pim_narrow;
    struct pdc_hpmc_pim_20 *pim_wide;

    if (boot_cpu_data.cpu_type >= pcxu) {

	pim_wide = (struct pdc_hpmc_pim_20 *)hpmc_pim_data;

	/*
	 * Note: The following code will probably generate a
	 * bunch of truncation error warnings from the compiler.
	 * Could be handled with an ifdef, but perhaps there
	 * is a better way.
	 */

	regs->gr[0] = pim_wide->cr[22];

	for (i = 1; i < 32; i++)
	    regs->gr[i] = pim_wide->gr[i];

	for (i = 0; i < 32; i++)
	    regs->fr[i] = pim_wide->fr[i];

	for (i = 0; i < 8; i++)
	    regs->sr[i] = pim_wide->sr[i];

	regs->iasq[0] = pim_wide->cr[17];
	regs->iasq[1] = pim_wide->iasq_back;
	regs->iaoq[0] = pim_wide->cr[18];
	regs->iaoq[1] = pim_wide->iaoq_back;

	regs->sar  = pim_wide->cr[11];
	regs->iir  = pim_wide->cr[19];
	regs->isr  = pim_wide->cr[20];
	regs->ior  = pim_wide->cr[21];
    }
    else {
	pim_narrow = (struct pdc_hpmc_pim_11 *)hpmc_pim_data;

	regs->gr[0] = pim_narrow->cr[22];

	for (i = 1; i < 32; i++)
	    regs->gr[i] = pim_narrow->gr[i];

	for (i = 0; i < 32; i++)
	    regs->fr[i] = pim_narrow->fr[i];

	for (i = 0; i < 8; i++)
	    regs->sr[i] = pim_narrow->sr[i];

	regs->iasq[0] = pim_narrow->cr[17];
	regs->iasq[1] = pim_narrow->iasq_back;
	regs->iaoq[0] = pim_narrow->cr[18];
	regs->iaoq[1] = pim_narrow->iaoq_back;

	regs->sar  = pim_narrow->cr[11];
	regs->iir  = pim_narrow->cr[19];
	regs->isr  = pim_narrow->cr[20];
	regs->ior  = pim_narrow->cr[21];
    }

    /*
     * The following fields only have meaning if we came through
     * another path. So just zero them here.
     */

    regs->ksp = 0;
    regs->kpc = 0;
    regs->orig_r28 = 0;
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
          int _len_regs0 = 1;
          struct pt_regs * regs = (struct pt_regs *) malloc(_len_regs0*sizeof(struct pt_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
            regs[_i0].orig_r28 = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].kpc = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].ksp = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].ior = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].isr = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].iir = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].sar = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_regs__i0__iaoq0 = 1;
          regs[_i0].iaoq = (int *) malloc(_len_regs__i0__iaoq0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_regs__i0__iaoq0; _j0++) {
            regs[_i0].iaoq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs__i0__iasq0 = 1;
          regs[_i0].iasq = (int *) malloc(_len_regs__i0__iasq0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_regs__i0__iasq0; _j0++) {
            regs[_i0].iasq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs__i0__sr0 = 1;
          regs[_i0].sr = (int *) malloc(_len_regs__i0__sr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_regs__i0__sr0; _j0++) {
            regs[_i0].sr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs__i0__fr0 = 1;
          regs[_i0].fr = (int *) malloc(_len_regs__i0__fr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_regs__i0__fr0; _j0++) {
            regs[_i0].fr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs__i0__gr0 = 1;
          regs[_i0].gr = (int *) malloc(_len_regs__i0__gr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_regs__i0__gr0; _j0++) {
            regs[_i0].gr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          transfer_pim_to_trap_frame(regs);
          for(int _aux = 0; _aux < _len_regs0; _aux++) {
          free(regs[_aux].iaoq);
          }
          for(int _aux = 0; _aux < _len_regs0; _aux++) {
          free(regs[_aux].iasq);
          }
          for(int _aux = 0; _aux < _len_regs0; _aux++) {
          free(regs[_aux].sr);
          }
          for(int _aux = 0; _aux < _len_regs0; _aux++) {
          free(regs[_aux].fr);
          }
          for(int _aux = 0; _aux < _len_regs0; _aux++) {
          free(regs[_aux].gr);
          }
          free(regs);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_regs0 = 65025;
          struct pt_regs * regs = (struct pt_regs *) malloc(_len_regs0*sizeof(struct pt_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
            regs[_i0].orig_r28 = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].kpc = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].ksp = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].ior = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].isr = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].iir = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].sar = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_regs__i0__iaoq0 = 1;
          regs[_i0].iaoq = (int *) malloc(_len_regs__i0__iaoq0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_regs__i0__iaoq0; _j0++) {
            regs[_i0].iaoq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs__i0__iasq0 = 1;
          regs[_i0].iasq = (int *) malloc(_len_regs__i0__iasq0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_regs__i0__iasq0; _j0++) {
            regs[_i0].iasq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs__i0__sr0 = 1;
          regs[_i0].sr = (int *) malloc(_len_regs__i0__sr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_regs__i0__sr0; _j0++) {
            regs[_i0].sr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs__i0__fr0 = 1;
          regs[_i0].fr = (int *) malloc(_len_regs__i0__fr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_regs__i0__fr0; _j0++) {
            regs[_i0].fr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs__i0__gr0 = 1;
          regs[_i0].gr = (int *) malloc(_len_regs__i0__gr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_regs__i0__gr0; _j0++) {
            regs[_i0].gr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          transfer_pim_to_trap_frame(regs);
          for(int _aux = 0; _aux < _len_regs0; _aux++) {
          free(regs[_aux].iaoq);
          }
          for(int _aux = 0; _aux < _len_regs0; _aux++) {
          free(regs[_aux].iasq);
          }
          for(int _aux = 0; _aux < _len_regs0; _aux++) {
          free(regs[_aux].sr);
          }
          for(int _aux = 0; _aux < _len_regs0; _aux++) {
          free(regs[_aux].fr);
          }
          for(int _aux = 0; _aux < _len_regs0; _aux++) {
          free(regs[_aux].gr);
          }
          free(regs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_regs0 = 100;
          struct pt_regs * regs = (struct pt_regs *) malloc(_len_regs0*sizeof(struct pt_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
            regs[_i0].orig_r28 = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].kpc = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].ksp = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].ior = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].isr = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].iir = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].sar = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_regs__i0__iaoq0 = 1;
          regs[_i0].iaoq = (int *) malloc(_len_regs__i0__iaoq0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_regs__i0__iaoq0; _j0++) {
            regs[_i0].iaoq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs__i0__iasq0 = 1;
          regs[_i0].iasq = (int *) malloc(_len_regs__i0__iasq0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_regs__i0__iasq0; _j0++) {
            regs[_i0].iasq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs__i0__sr0 = 1;
          regs[_i0].sr = (int *) malloc(_len_regs__i0__sr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_regs__i0__sr0; _j0++) {
            regs[_i0].sr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs__i0__fr0 = 1;
          regs[_i0].fr = (int *) malloc(_len_regs__i0__fr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_regs__i0__fr0; _j0++) {
            regs[_i0].fr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs__i0__gr0 = 1;
          regs[_i0].gr = (int *) malloc(_len_regs__i0__gr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_regs__i0__gr0; _j0++) {
            regs[_i0].gr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          transfer_pim_to_trap_frame(regs);
          for(int _aux = 0; _aux < _len_regs0; _aux++) {
          free(regs[_aux].iaoq);
          }
          for(int _aux = 0; _aux < _len_regs0; _aux++) {
          free(regs[_aux].iasq);
          }
          for(int _aux = 0; _aux < _len_regs0; _aux++) {
          free(regs[_aux].sr);
          }
          for(int _aux = 0; _aux < _len_regs0; _aux++) {
          free(regs[_aux].fr);
          }
          for(int _aux = 0; _aux < _len_regs0; _aux++) {
          free(regs[_aux].gr);
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

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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int /*<<< orphan*/  cr11; int /*<<< orphan*/  cr10; int /*<<< orphan*/  cr9; int /*<<< orphan*/  cr0; } ;
struct TYPE_5__ {TYPE_1__ guestdbg; TYPE_3__* sie_block; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_6__ {int /*<<< orphan*/ * gcr; } ;

/* Variables and functions */

void kvm_s390_restore_guest_per_regs(struct kvm_vcpu *vcpu)
{
	vcpu->arch.sie_block->gcr[0] = vcpu->arch.guestdbg.cr0;
	vcpu->arch.sie_block->gcr[9] = vcpu->arch.guestdbg.cr9;
	vcpu->arch.sie_block->gcr[10] = vcpu->arch.guestdbg.cr10;
	vcpu->arch.sie_block->gcr[11] = vcpu->arch.guestdbg.cr11;
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
          int _len_vcpu0 = 1;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
            vcpu[_i0].arch.guestdbg.cr11 = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.guestdbg.cr10 = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.guestdbg.cr9 = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.guestdbg.cr0 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vcpu__i0__arch_sie_block0 = 1;
          vcpu[_i0].arch.sie_block = (struct TYPE_6__ *) malloc(_len_vcpu__i0__arch_sie_block0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__arch_sie_block0; _j0++) {
              int _len_vcpu__i0__arch_sie_block_gcr0 = 1;
          vcpu[_i0].arch.sie_block->gcr = (int *) malloc(_len_vcpu__i0__arch_sie_block_gcr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__arch_sie_block_gcr0; _j0++) {
            vcpu[_i0].arch.sie_block->gcr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          kvm_s390_restore_guest_per_regs(vcpu);
          free(vcpu);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_vcpu0 = 65025;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
            vcpu[_i0].arch.guestdbg.cr11 = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.guestdbg.cr10 = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.guestdbg.cr9 = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.guestdbg.cr0 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vcpu__i0__arch_sie_block0 = 1;
          vcpu[_i0].arch.sie_block = (struct TYPE_6__ *) malloc(_len_vcpu__i0__arch_sie_block0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__arch_sie_block0; _j0++) {
              int _len_vcpu__i0__arch_sie_block_gcr0 = 1;
          vcpu[_i0].arch.sie_block->gcr = (int *) malloc(_len_vcpu__i0__arch_sie_block_gcr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__arch_sie_block_gcr0; _j0++) {
            vcpu[_i0].arch.sie_block->gcr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          kvm_s390_restore_guest_per_regs(vcpu);
          free(vcpu);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_vcpu0 = 100;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
            vcpu[_i0].arch.guestdbg.cr11 = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.guestdbg.cr10 = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.guestdbg.cr9 = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.guestdbg.cr0 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vcpu__i0__arch_sie_block0 = 1;
          vcpu[_i0].arch.sie_block = (struct TYPE_6__ *) malloc(_len_vcpu__i0__arch_sie_block0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__arch_sie_block0; _j0++) {
              int _len_vcpu__i0__arch_sie_block_gcr0 = 1;
          vcpu[_i0].arch.sie_block->gcr = (int *) malloc(_len_vcpu__i0__arch_sie_block_gcr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__arch_sie_block_gcr0; _j0++) {
            vcpu[_i0].arch.sie_block->gcr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          kvm_s390_restore_guest_per_regs(vcpu);
          free(vcpu);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  struct TYPE_10__   TYPE_5__ ;
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
typedef  int u8 ;
typedef  int u64 ;
typedef  int u32 ;
struct TYPE_7__ {TYPE_1__* sie_block; } ;
struct kvm_vcpu {TYPE_5__* run; TYPE_2__ arch; } ;
struct TYPE_8__ {int /*<<< orphan*/ * gprs; } ;
struct TYPE_9__ {TYPE_3__ regs; } ;
struct TYPE_10__ {TYPE_4__ s; } ;
struct TYPE_6__ {int ipb; } ;

/* Variables and functions */

__attribute__((used)) static inline void kvm_s390_get_base_disp_sse(struct kvm_vcpu *vcpu,
					      u64 *address1, u64 *address2,
					      u8 *ar_b1, u8 *ar_b2)
{
	u32 base1 = (vcpu->arch.sie_block->ipb & 0xf0000000) >> 28;
	u32 disp1 = (vcpu->arch.sie_block->ipb & 0x0fff0000) >> 16;
	u32 base2 = (vcpu->arch.sie_block->ipb & 0xf000) >> 12;
	u32 disp2 = vcpu->arch.sie_block->ipb & 0x0fff;

	*address1 = (base1 ? vcpu->run->s.regs.gprs[base1] : 0) + disp1;
	*address2 = (base2 ? vcpu->run->s.regs.gprs[base2] : 0) + disp2;

	if (ar_b1)
		*ar_b1 = base1;
	if (ar_b2)
		*ar_b2 = base2;
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
              int _len_vcpu__i0__run0 = 1;
          vcpu[_i0].run = (struct TYPE_10__ *) malloc(_len_vcpu__i0__run0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__run0; _j0++) {
              int _len_vcpu__i0__run_s_regs_gprs0 = 1;
          vcpu[_i0].run->s.regs.gprs = (int *) malloc(_len_vcpu__i0__run_s_regs_gprs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__run_s_regs_gprs0; _j0++) {
            vcpu[_i0].run->s.regs.gprs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_vcpu__i0__arch_sie_block0 = 1;
          vcpu[_i0].arch.sie_block = (struct TYPE_6__ *) malloc(_len_vcpu__i0__arch_sie_block0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__arch_sie_block0; _j0++) {
            vcpu[_i0].arch.sie_block->ipb = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_address10 = 1;
          int * address1 = (int *) malloc(_len_address10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_address10; _i0++) {
            address1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_address20 = 1;
          int * address2 = (int *) malloc(_len_address20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_address20; _i0++) {
            address2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ar_b10 = 1;
          int * ar_b1 = (int *) malloc(_len_ar_b10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ar_b10; _i0++) {
            ar_b1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ar_b20 = 1;
          int * ar_b2 = (int *) malloc(_len_ar_b20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ar_b20; _i0++) {
            ar_b2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          kvm_s390_get_base_disp_sse(vcpu,address1,address2,ar_b1,ar_b2);
          for(int _aux = 0; _aux < _len_vcpu0; _aux++) {
          free(vcpu[_aux].run);
          }
          free(vcpu);
          free(address1);
          free(address2);
          free(ar_b1);
          free(ar_b2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_vcpu0 = 65025;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
              int _len_vcpu__i0__run0 = 1;
          vcpu[_i0].run = (struct TYPE_10__ *) malloc(_len_vcpu__i0__run0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__run0; _j0++) {
              int _len_vcpu__i0__run_s_regs_gprs0 = 1;
          vcpu[_i0].run->s.regs.gprs = (int *) malloc(_len_vcpu__i0__run_s_regs_gprs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__run_s_regs_gprs0; _j0++) {
            vcpu[_i0].run->s.regs.gprs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_vcpu__i0__arch_sie_block0 = 1;
          vcpu[_i0].arch.sie_block = (struct TYPE_6__ *) malloc(_len_vcpu__i0__arch_sie_block0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__arch_sie_block0; _j0++) {
            vcpu[_i0].arch.sie_block->ipb = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_address10 = 65025;
          int * address1 = (int *) malloc(_len_address10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_address10; _i0++) {
            address1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_address20 = 65025;
          int * address2 = (int *) malloc(_len_address20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_address20; _i0++) {
            address2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ar_b10 = 65025;
          int * ar_b1 = (int *) malloc(_len_ar_b10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ar_b10; _i0++) {
            ar_b1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ar_b20 = 65025;
          int * ar_b2 = (int *) malloc(_len_ar_b20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ar_b20; _i0++) {
            ar_b2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          kvm_s390_get_base_disp_sse(vcpu,address1,address2,ar_b1,ar_b2);
          for(int _aux = 0; _aux < _len_vcpu0; _aux++) {
          free(vcpu[_aux].run);
          }
          free(vcpu);
          free(address1);
          free(address2);
          free(ar_b1);
          free(ar_b2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_vcpu0 = 100;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
              int _len_vcpu__i0__run0 = 1;
          vcpu[_i0].run = (struct TYPE_10__ *) malloc(_len_vcpu__i0__run0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__run0; _j0++) {
              int _len_vcpu__i0__run_s_regs_gprs0 = 1;
          vcpu[_i0].run->s.regs.gprs = (int *) malloc(_len_vcpu__i0__run_s_regs_gprs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__run_s_regs_gprs0; _j0++) {
            vcpu[_i0].run->s.regs.gprs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_vcpu__i0__arch_sie_block0 = 1;
          vcpu[_i0].arch.sie_block = (struct TYPE_6__ *) malloc(_len_vcpu__i0__arch_sie_block0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__arch_sie_block0; _j0++) {
            vcpu[_i0].arch.sie_block->ipb = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_address10 = 100;
          int * address1 = (int *) malloc(_len_address10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_address10; _i0++) {
            address1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_address20 = 100;
          int * address2 = (int *) malloc(_len_address20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_address20; _i0++) {
            address2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ar_b10 = 100;
          int * ar_b1 = (int *) malloc(_len_ar_b10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ar_b10; _i0++) {
            ar_b1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ar_b20 = 100;
          int * ar_b2 = (int *) malloc(_len_ar_b20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ar_b20; _i0++) {
            ar_b2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          kvm_s390_get_base_disp_sse(vcpu,address1,address2,ar_b1,ar_b2);
          for(int _aux = 0; _aux < _len_vcpu0; _aux++) {
          free(vcpu[_aux].run);
          }
          free(vcpu);
          free(address1);
          free(address2);
          free(ar_b1);
          free(ar_b2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

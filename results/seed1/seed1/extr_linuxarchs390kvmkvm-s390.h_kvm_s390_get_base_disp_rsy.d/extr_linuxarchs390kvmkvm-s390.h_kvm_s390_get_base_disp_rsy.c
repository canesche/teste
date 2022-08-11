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
typedef  long u64 ;
typedef  int u32 ;
struct TYPE_10__ {TYPE_4__* sie_block; } ;
struct kvm_vcpu {TYPE_3__* run; TYPE_5__ arch; } ;
struct TYPE_9__ {int ipb; } ;
struct TYPE_6__ {long* gprs; } ;
struct TYPE_7__ {TYPE_1__ regs; } ;
struct TYPE_8__ {TYPE_2__ s; } ;

/* Variables and functions */

__attribute__((used)) static inline u64 kvm_s390_get_base_disp_rsy(struct kvm_vcpu *vcpu, u8 *ar)
{
	u32 base2 = vcpu->arch.sie_block->ipb >> 28;
	u32 disp2 = ((vcpu->arch.sie_block->ipb & 0x0fff0000) >> 16) +
			((vcpu->arch.sie_block->ipb & 0xff00) << 4);
	/* The displacement is a 20bit _SIGNED_ value */
	if (disp2 & 0x80000)
		disp2+=0xfff00000;

	if (ar)
		*ar = base2;

	return (base2 ? vcpu->run->s.regs.gprs[base2] : 0) + (long)(int)disp2;
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
          vcpu[_i0].run = (struct TYPE_8__ *) malloc(_len_vcpu__i0__run0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__run0; _j0++) {
              int _len_vcpu__i0__run_s_regs_gprs0 = 1;
          vcpu[_i0].run->s.regs.gprs = (long *) malloc(_len_vcpu__i0__run_s_regs_gprs0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__run_s_regs_gprs0; _j0++) {
            vcpu[_i0].run->s.regs.gprs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_vcpu__i0__arch_sie_block0 = 1;
          vcpu[_i0].arch.sie_block = (struct TYPE_9__ *) malloc(_len_vcpu__i0__arch_sie_block0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__arch_sie_block0; _j0++) {
            vcpu[_i0].arch.sie_block->ipb = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ar0 = 1;
          int * ar = (int *) malloc(_len_ar0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ar0; _i0++) {
            ar[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = kvm_s390_get_base_disp_rsy(vcpu,ar);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_vcpu0; _aux++) {
          free(vcpu[_aux].run);
          }
          free(vcpu);
          free(ar);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_vcpu0 = 65025;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
              int _len_vcpu__i0__run0 = 1;
          vcpu[_i0].run = (struct TYPE_8__ *) malloc(_len_vcpu__i0__run0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__run0; _j0++) {
              int _len_vcpu__i0__run_s_regs_gprs0 = 1;
          vcpu[_i0].run->s.regs.gprs = (long *) malloc(_len_vcpu__i0__run_s_regs_gprs0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__run_s_regs_gprs0; _j0++) {
            vcpu[_i0].run->s.regs.gprs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_vcpu__i0__arch_sie_block0 = 1;
          vcpu[_i0].arch.sie_block = (struct TYPE_9__ *) malloc(_len_vcpu__i0__arch_sie_block0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__arch_sie_block0; _j0++) {
            vcpu[_i0].arch.sie_block->ipb = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ar0 = 65025;
          int * ar = (int *) malloc(_len_ar0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ar0; _i0++) {
            ar[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = kvm_s390_get_base_disp_rsy(vcpu,ar);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_vcpu0; _aux++) {
          free(vcpu[_aux].run);
          }
          free(vcpu);
          free(ar);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_vcpu0 = 100;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
              int _len_vcpu__i0__run0 = 1;
          vcpu[_i0].run = (struct TYPE_8__ *) malloc(_len_vcpu__i0__run0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__run0; _j0++) {
              int _len_vcpu__i0__run_s_regs_gprs0 = 1;
          vcpu[_i0].run->s.regs.gprs = (long *) malloc(_len_vcpu__i0__run_s_regs_gprs0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__run_s_regs_gprs0; _j0++) {
            vcpu[_i0].run->s.regs.gprs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_vcpu__i0__arch_sie_block0 = 1;
          vcpu[_i0].arch.sie_block = (struct TYPE_9__ *) malloc(_len_vcpu__i0__arch_sie_block0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__arch_sie_block0; _j0++) {
            vcpu[_i0].arch.sie_block->ipb = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ar0 = 100;
          int * ar = (int *) malloc(_len_ar0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ar0; _i0++) {
            ar[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = kvm_s390_get_base_disp_rsy(vcpu,ar);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_vcpu0; _aux++) {
          free(vcpu[_aux].run);
          }
          free(vcpu);
          free(ar);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct TYPE_4__ {int /*<<< orphan*/ * ivor; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_5__ {int features; int /*<<< orphan*/ * ivor_low; } ;
struct TYPE_6__ {TYPE_2__ e; } ;
struct kvm_sregs {TYPE_3__ u; } ;

/* Variables and functions */
 size_t BOOKE_IRQPRIO_ALIGNMENT ; 
 size_t BOOKE_IRQPRIO_AP_UNAVAIL ; 
 size_t BOOKE_IRQPRIO_CRITICAL ; 
 size_t BOOKE_IRQPRIO_DATA_STORAGE ; 
 size_t BOOKE_IRQPRIO_DEBUG ; 
 size_t BOOKE_IRQPRIO_DECREMENTER ; 
 size_t BOOKE_IRQPRIO_DTLB_MISS ; 
 size_t BOOKE_IRQPRIO_EXTERNAL ; 
 size_t BOOKE_IRQPRIO_FIT ; 
 size_t BOOKE_IRQPRIO_FP_UNAVAIL ; 
 size_t BOOKE_IRQPRIO_INST_STORAGE ; 
 size_t BOOKE_IRQPRIO_ITLB_MISS ; 
 size_t BOOKE_IRQPRIO_MACHINE_CHECK ; 
 size_t BOOKE_IRQPRIO_PROGRAM ; 
 size_t BOOKE_IRQPRIO_SYSCALL ; 
 size_t BOOKE_IRQPRIO_WATCHDOG ; 
 int KVM_SREGS_E_IVOR ; 

int kvmppc_set_sregs_ivor(struct kvm_vcpu *vcpu, struct kvm_sregs *sregs)
{
	if (!(sregs->u.e.features & KVM_SREGS_E_IVOR))
		return 0;

	vcpu->arch.ivor[BOOKE_IRQPRIO_CRITICAL] = sregs->u.e.ivor_low[0];
	vcpu->arch.ivor[BOOKE_IRQPRIO_MACHINE_CHECK] = sregs->u.e.ivor_low[1];
	vcpu->arch.ivor[BOOKE_IRQPRIO_DATA_STORAGE] = sregs->u.e.ivor_low[2];
	vcpu->arch.ivor[BOOKE_IRQPRIO_INST_STORAGE] = sregs->u.e.ivor_low[3];
	vcpu->arch.ivor[BOOKE_IRQPRIO_EXTERNAL] = sregs->u.e.ivor_low[4];
	vcpu->arch.ivor[BOOKE_IRQPRIO_ALIGNMENT] = sregs->u.e.ivor_low[5];
	vcpu->arch.ivor[BOOKE_IRQPRIO_PROGRAM] = sregs->u.e.ivor_low[6];
	vcpu->arch.ivor[BOOKE_IRQPRIO_FP_UNAVAIL] = sregs->u.e.ivor_low[7];
	vcpu->arch.ivor[BOOKE_IRQPRIO_SYSCALL] = sregs->u.e.ivor_low[8];
	vcpu->arch.ivor[BOOKE_IRQPRIO_AP_UNAVAIL] = sregs->u.e.ivor_low[9];
	vcpu->arch.ivor[BOOKE_IRQPRIO_DECREMENTER] = sregs->u.e.ivor_low[10];
	vcpu->arch.ivor[BOOKE_IRQPRIO_FIT] = sregs->u.e.ivor_low[11];
	vcpu->arch.ivor[BOOKE_IRQPRIO_WATCHDOG] = sregs->u.e.ivor_low[12];
	vcpu->arch.ivor[BOOKE_IRQPRIO_DTLB_MISS] = sregs->u.e.ivor_low[13];
	vcpu->arch.ivor[BOOKE_IRQPRIO_ITLB_MISS] = sregs->u.e.ivor_low[14];
	vcpu->arch.ivor[BOOKE_IRQPRIO_DEBUG] = sregs->u.e.ivor_low[15];

	return 0;
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
              int _len_vcpu__i0__arch_ivor0 = 1;
          vcpu[_i0].arch.ivor = (int *) malloc(_len_vcpu__i0__arch_ivor0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__arch_ivor0; _j0++) {
            vcpu[_i0].arch.ivor[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_sregs0 = 1;
          struct kvm_sregs * sregs = (struct kvm_sregs *) malloc(_len_sregs0*sizeof(struct kvm_sregs));
          for(int _i0 = 0; _i0 < _len_sregs0; _i0++) {
            sregs[_i0].u.e.features = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sregs__i0__u_e_ivor_low0 = 1;
          sregs[_i0].u.e.ivor_low = (int *) malloc(_len_sregs__i0__u_e_ivor_low0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sregs__i0__u_e_ivor_low0; _j0++) {
            sregs[_i0].u.e.ivor_low[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = kvmppc_set_sregs_ivor(vcpu,sregs);
          printf("%d\n", benchRet); 
          free(vcpu);
          free(sregs);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_vcpu0 = 65025;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
              int _len_vcpu__i0__arch_ivor0 = 1;
          vcpu[_i0].arch.ivor = (int *) malloc(_len_vcpu__i0__arch_ivor0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__arch_ivor0; _j0++) {
            vcpu[_i0].arch.ivor[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_sregs0 = 65025;
          struct kvm_sregs * sregs = (struct kvm_sregs *) malloc(_len_sregs0*sizeof(struct kvm_sregs));
          for(int _i0 = 0; _i0 < _len_sregs0; _i0++) {
            sregs[_i0].u.e.features = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sregs__i0__u_e_ivor_low0 = 1;
          sregs[_i0].u.e.ivor_low = (int *) malloc(_len_sregs__i0__u_e_ivor_low0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sregs__i0__u_e_ivor_low0; _j0++) {
            sregs[_i0].u.e.ivor_low[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = kvmppc_set_sregs_ivor(vcpu,sregs);
          printf("%d\n", benchRet); 
          free(vcpu);
          free(sregs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_vcpu0 = 100;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
              int _len_vcpu__i0__arch_ivor0 = 1;
          vcpu[_i0].arch.ivor = (int *) malloc(_len_vcpu__i0__arch_ivor0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__arch_ivor0; _j0++) {
            vcpu[_i0].arch.ivor[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_sregs0 = 100;
          struct kvm_sregs * sregs = (struct kvm_sregs *) malloc(_len_sregs0*sizeof(struct kvm_sregs));
          for(int _i0 = 0; _i0 < _len_sregs0; _i0++) {
            sregs[_i0].u.e.features = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sregs__i0__u_e_ivor_low0 = 1;
          sregs[_i0].u.e.ivor_low = (int *) malloc(_len_sregs__i0__u_e_ivor_low0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sregs__i0__u_e_ivor_low0; _j0++) {
            sregs[_i0].u.e.ivor_low[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = kvmppc_set_sregs_ivor(vcpu,sregs);
          printf("%d\n", benchRet); 
          free(vcpu);
          free(sregs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

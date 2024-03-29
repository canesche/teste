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
typedef  size_t u64 ;
struct kvmppc_slb {size_t orige; } ;
struct TYPE_2__ {size_t slb_nr; struct kvmppc_slb* slb; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;

/* Variables and functions */

__attribute__((used)) static u64 kvmppc_mmu_book3s_64_slbmfee(struct kvm_vcpu *vcpu, u64 slb_nr)
{
	struct kvmppc_slb *slbe;

	if (slb_nr > vcpu->arch.slb_nr)
		return 0;

	slbe = &vcpu->arch.slb[slb_nr];

	return slbe->orige;
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
          unsigned long slb_nr = 100;
          int _len_vcpu0 = 1;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
            vcpu[_i0].arch.slb_nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vcpu__i0__arch_slb0 = 1;
          vcpu[_i0].arch.slb = (struct kvmppc_slb *) malloc(_len_vcpu__i0__arch_slb0*sizeof(struct kvmppc_slb));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__arch_slb0; _j0++) {
            vcpu[_i0].arch.slb->orige = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = kvmppc_mmu_book3s_64_slbmfee(vcpu,slb_nr);
          printf("%lu\n", benchRet); 
          free(vcpu);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long slb_nr = 255;
          int _len_vcpu0 = 65025;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
            vcpu[_i0].arch.slb_nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vcpu__i0__arch_slb0 = 1;
          vcpu[_i0].arch.slb = (struct kvmppc_slb *) malloc(_len_vcpu__i0__arch_slb0*sizeof(struct kvmppc_slb));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__arch_slb0; _j0++) {
            vcpu[_i0].arch.slb->orige = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = kvmppc_mmu_book3s_64_slbmfee(vcpu,slb_nr);
          printf("%lu\n", benchRet); 
          free(vcpu);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long slb_nr = 10;
          int _len_vcpu0 = 100;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
            vcpu[_i0].arch.slb_nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vcpu__i0__arch_slb0 = 1;
          vcpu[_i0].arch.slb = (struct kvmppc_slb *) malloc(_len_vcpu__i0__arch_slb0*sizeof(struct kvmppc_slb));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__arch_slb0; _j0++) {
            vcpu[_i0].arch.slb->orige = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = kvmppc_mmu_book3s_64_slbmfee(vcpu,slb_nr);
          printf("%lu\n", benchRet); 
          free(vcpu);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

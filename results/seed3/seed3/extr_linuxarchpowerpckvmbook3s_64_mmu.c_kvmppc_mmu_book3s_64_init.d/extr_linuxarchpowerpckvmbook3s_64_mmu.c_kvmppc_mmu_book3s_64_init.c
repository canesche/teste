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
struct kvmppc_mmu {int /*<<< orphan*/  is_dcbz32; int /*<<< orphan*/  ea_to_vp; int /*<<< orphan*/  esid_to_vsid; int /*<<< orphan*/  tlbie; int /*<<< orphan*/  reset_msr; int /*<<< orphan*/  xlate; int /*<<< orphan*/  slbia; int /*<<< orphan*/  slbie; int /*<<< orphan*/  slbmfev; int /*<<< orphan*/  slbmfee; int /*<<< orphan*/  slbmte; int /*<<< orphan*/  mtsrin; int /*<<< orphan*/ * mfsrin; } ;
struct TYPE_2__ {int /*<<< orphan*/  hflags; struct kvmppc_mmu mmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;

/* Variables and functions */
 int /*<<< orphan*/  BOOK3S_HFLAG_SLB ; 
 int /*<<< orphan*/  kvmppc_mmu_book3s_64_ea_to_vp ; 
 int /*<<< orphan*/  kvmppc_mmu_book3s_64_esid_to_vsid ; 
 int /*<<< orphan*/  kvmppc_mmu_book3s_64_is_dcbz32 ; 
 int /*<<< orphan*/  kvmppc_mmu_book3s_64_mtsrin ; 
 int /*<<< orphan*/  kvmppc_mmu_book3s_64_reset_msr ; 
 int /*<<< orphan*/  kvmppc_mmu_book3s_64_slbia ; 
 int /*<<< orphan*/  kvmppc_mmu_book3s_64_slbie ; 
 int /*<<< orphan*/  kvmppc_mmu_book3s_64_slbmfee ; 
 int /*<<< orphan*/  kvmppc_mmu_book3s_64_slbmfev ; 
 int /*<<< orphan*/  kvmppc_mmu_book3s_64_slbmte ; 
 int /*<<< orphan*/  kvmppc_mmu_book3s_64_tlbie ; 
 int /*<<< orphan*/  kvmppc_mmu_book3s_64_xlate ; 

void kvmppc_mmu_book3s_64_init(struct kvm_vcpu *vcpu)
{
	struct kvmppc_mmu *mmu = &vcpu->arch.mmu;

	mmu->mfsrin = NULL;
	mmu->mtsrin = kvmppc_mmu_book3s_64_mtsrin;
	mmu->slbmte = kvmppc_mmu_book3s_64_slbmte;
	mmu->slbmfee = kvmppc_mmu_book3s_64_slbmfee;
	mmu->slbmfev = kvmppc_mmu_book3s_64_slbmfev;
	mmu->slbie = kvmppc_mmu_book3s_64_slbie;
	mmu->slbia = kvmppc_mmu_book3s_64_slbia;
	mmu->xlate = kvmppc_mmu_book3s_64_xlate;
	mmu->reset_msr = kvmppc_mmu_book3s_64_reset_msr;
	mmu->tlbie = kvmppc_mmu_book3s_64_tlbie;
	mmu->esid_to_vsid = kvmppc_mmu_book3s_64_esid_to_vsid;
	mmu->ea_to_vp = kvmppc_mmu_book3s_64_ea_to_vp;
	mmu->is_dcbz32 = kvmppc_mmu_book3s_64_is_dcbz32;

	vcpu->arch.hflags |= BOOK3S_HFLAG_SLB;
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
            vcpu[_i0].arch.hflags = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmu.is_dcbz32 = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmu.ea_to_vp = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmu.esid_to_vsid = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmu.tlbie = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmu.reset_msr = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmu.xlate = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmu.slbia = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmu.slbie = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmu.slbmfev = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmu.slbmfee = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmu.slbmte = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmu.mtsrin = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vcpu__i0__arch_mmu_mfsrin0 = 1;
          vcpu[_i0].arch.mmu.mfsrin = (int *) malloc(_len_vcpu__i0__arch_mmu_mfsrin0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__arch_mmu_mfsrin0; _j0++) {
            vcpu[_i0].arch.mmu.mfsrin[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          kvmppc_mmu_book3s_64_init(vcpu);
          free(vcpu);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_vcpu0 = 65025;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
            vcpu[_i0].arch.hflags = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmu.is_dcbz32 = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmu.ea_to_vp = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmu.esid_to_vsid = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmu.tlbie = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmu.reset_msr = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmu.xlate = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmu.slbia = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmu.slbie = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmu.slbmfev = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmu.slbmfee = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmu.slbmte = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmu.mtsrin = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vcpu__i0__arch_mmu_mfsrin0 = 1;
          vcpu[_i0].arch.mmu.mfsrin = (int *) malloc(_len_vcpu__i0__arch_mmu_mfsrin0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__arch_mmu_mfsrin0; _j0++) {
            vcpu[_i0].arch.mmu.mfsrin[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          kvmppc_mmu_book3s_64_init(vcpu);
          free(vcpu);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_vcpu0 = 100;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
            vcpu[_i0].arch.hflags = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmu.is_dcbz32 = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmu.ea_to_vp = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmu.esid_to_vsid = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmu.tlbie = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmu.reset_msr = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmu.xlate = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmu.slbia = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmu.slbie = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmu.slbmfev = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmu.slbmfee = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmu.slbmte = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mmu.mtsrin = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vcpu__i0__arch_mmu_mfsrin0 = 1;
          vcpu[_i0].arch.mmu.mfsrin = (int *) malloc(_len_vcpu__i0__arch_mmu_mfsrin0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__arch_mmu_mfsrin0; _j0++) {
            vcpu[_i0].arch.mmu.mfsrin[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          kvmppc_mmu_book3s_64_init(vcpu);
          free(vcpu);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

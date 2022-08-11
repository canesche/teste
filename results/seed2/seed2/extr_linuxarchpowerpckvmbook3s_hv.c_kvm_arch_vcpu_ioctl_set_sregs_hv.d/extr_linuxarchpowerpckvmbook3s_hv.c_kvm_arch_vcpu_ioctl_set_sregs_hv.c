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
typedef  struct TYPE_12__   TYPE_6__ ;
typedef  struct TYPE_11__   TYPE_5__ ;
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct TYPE_12__ {scalar_t__ pvr; int slb_nr; int slb_max; TYPE_1__* slb; } ;
struct kvm_vcpu {TYPE_6__ arch; } ;
struct TYPE_9__ {TYPE_2__* slb; } ;
struct TYPE_10__ {TYPE_3__ ppc64; } ;
struct TYPE_11__ {TYPE_4__ s; } ;
struct kvm_sregs {scalar_t__ pvr; TYPE_5__ u; } ;
struct TYPE_8__ {int slbe; int /*<<< orphan*/  slbv; } ;
struct TYPE_7__ {int orige; int /*<<< orphan*/  origv; } ;

/* Variables and functions */
 int EINVAL ; 
 int SLB_ESID_V ; 

__attribute__((used)) static int kvm_arch_vcpu_ioctl_set_sregs_hv(struct kvm_vcpu *vcpu,
					    struct kvm_sregs *sregs)
{
	int i, j;

	/* Only accept the same PVR as the host's, since we can't spoof it */
	if (sregs->pvr != vcpu->arch.pvr)
		return -EINVAL;

	j = 0;
	for (i = 0; i < vcpu->arch.slb_nr; i++) {
		if (sregs->u.s.ppc64.slb[i].slbe & SLB_ESID_V) {
			vcpu->arch.slb[j].orige = sregs->u.s.ppc64.slb[i].slbe;
			vcpu->arch.slb[j].origv = sregs->u.s.ppc64.slb[i].slbv;
			++j;
		}
	}
	vcpu->arch.slb_max = j;

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
            vcpu[_i0].arch.pvr = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.slb_nr = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.slb_max = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vcpu__i0__arch_slb0 = 1;
          vcpu[_i0].arch.slb = (struct TYPE_7__ *) malloc(_len_vcpu__i0__arch_slb0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__arch_slb0; _j0++) {
            vcpu[_i0].arch.slb->orige = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.slb->origv = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_sregs0 = 1;
          struct kvm_sregs * sregs = (struct kvm_sregs *) malloc(_len_sregs0*sizeof(struct kvm_sregs));
          for(int _i0 = 0; _i0 < _len_sregs0; _i0++) {
            sregs[_i0].pvr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sregs__i0__u_s_ppc64_slb0 = 1;
          sregs[_i0].u.s.ppc64.slb = (struct TYPE_8__ *) malloc(_len_sregs__i0__u_s_ppc64_slb0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_sregs__i0__u_s_ppc64_slb0; _j0++) {
            sregs[_i0].u.s.ppc64.slb->slbe = ((-2 * (next_i()%2)) + 1) * next_i();
        sregs[_i0].u.s.ppc64.slb->slbv = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = kvm_arch_vcpu_ioctl_set_sregs_hv(vcpu,sregs);
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
            vcpu[_i0].arch.pvr = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.slb_nr = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.slb_max = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vcpu__i0__arch_slb0 = 1;
          vcpu[_i0].arch.slb = (struct TYPE_7__ *) malloc(_len_vcpu__i0__arch_slb0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__arch_slb0; _j0++) {
            vcpu[_i0].arch.slb->orige = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.slb->origv = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_sregs0 = 65025;
          struct kvm_sregs * sregs = (struct kvm_sregs *) malloc(_len_sregs0*sizeof(struct kvm_sregs));
          for(int _i0 = 0; _i0 < _len_sregs0; _i0++) {
            sregs[_i0].pvr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sregs__i0__u_s_ppc64_slb0 = 1;
          sregs[_i0].u.s.ppc64.slb = (struct TYPE_8__ *) malloc(_len_sregs__i0__u_s_ppc64_slb0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_sregs__i0__u_s_ppc64_slb0; _j0++) {
            sregs[_i0].u.s.ppc64.slb->slbe = ((-2 * (next_i()%2)) + 1) * next_i();
        sregs[_i0].u.s.ppc64.slb->slbv = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = kvm_arch_vcpu_ioctl_set_sregs_hv(vcpu,sregs);
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
            vcpu[_i0].arch.pvr = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.slb_nr = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.slb_max = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vcpu__i0__arch_slb0 = 1;
          vcpu[_i0].arch.slb = (struct TYPE_7__ *) malloc(_len_vcpu__i0__arch_slb0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__arch_slb0; _j0++) {
            vcpu[_i0].arch.slb->orige = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.slb->origv = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_sregs0 = 100;
          struct kvm_sregs * sregs = (struct kvm_sregs *) malloc(_len_sregs0*sizeof(struct kvm_sregs));
          for(int _i0 = 0; _i0 < _len_sregs0; _i0++) {
            sregs[_i0].pvr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sregs__i0__u_s_ppc64_slb0 = 1;
          sregs[_i0].u.s.ppc64.slb = (struct TYPE_8__ *) malloc(_len_sregs__i0__u_s_ppc64_slb0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_sregs__i0__u_s_ppc64_slb0; _j0++) {
            sregs[_i0].u.s.ppc64.slb->slbe = ((-2 * (next_i()%2)) + 1) * next_i();
        sregs[_i0].u.s.ppc64.slb->slbv = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = kvm_arch_vcpu_ioctl_set_sregs_hv(vcpu,sregs);
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

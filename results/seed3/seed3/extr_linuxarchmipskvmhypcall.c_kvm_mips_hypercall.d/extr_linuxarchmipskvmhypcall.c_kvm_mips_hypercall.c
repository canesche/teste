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
struct kvm_vcpu {int dummy; } ;

/* Variables and functions */
 unsigned long KVM_ENOSYS ; 
 int RESUME_GUEST ; 

__attribute__((used)) static int kvm_mips_hypercall(struct kvm_vcpu *vcpu, unsigned long num,
			      const unsigned long *args, unsigned long *hret)
{
	/* Report unimplemented hypercall to guest */
	*hret = -KVM_ENOSYS;
	return RESUME_GUEST;
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
          unsigned long num = 100;
          int _len_vcpu0 = 1;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
            vcpu[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_args0 = 1;
          const unsigned long * args = (const unsigned long *) malloc(_len_args0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_args0; _i0++) {
            args[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hret0 = 1;
          unsigned long * hret = (unsigned long *) malloc(_len_hret0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_hret0; _i0++) {
            hret[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = kvm_mips_hypercall(vcpu,num,args,hret);
          printf("%d\n", benchRet); 
          free(vcpu);
          free(args);
          free(hret);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long num = 255;
          int _len_vcpu0 = 65025;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
            vcpu[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_args0 = 65025;
          const unsigned long * args = (const unsigned long *) malloc(_len_args0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_args0; _i0++) {
            args[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hret0 = 65025;
          unsigned long * hret = (unsigned long *) malloc(_len_hret0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_hret0; _i0++) {
            hret[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = kvm_mips_hypercall(vcpu,num,args,hret);
          printf("%d\n", benchRet); 
          free(vcpu);
          free(args);
          free(hret);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long num = 10;
          int _len_vcpu0 = 100;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
            vcpu[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_args0 = 100;
          const unsigned long * args = (const unsigned long *) malloc(_len_args0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_args0; _i0++) {
            args[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hret0 = 100;
          unsigned long * hret = (unsigned long *) malloc(_len_hret0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_hret0; _i0++) {
            hret[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = kvm_mips_hypercall(vcpu,num,args,hret);
          printf("%d\n", benchRet); 
          free(vcpu);
          free(args);
          free(hret);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

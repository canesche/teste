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
typedef  union ipte_control {int dummy; } ipte_control ;
struct TYPE_2__ {struct bsca_block* sca; } ;
struct kvm {TYPE_1__ arch; } ;
struct bsca_block {union ipte_control ipte_control; } ;

/* Variables and functions */

__attribute__((used)) static inline union ipte_control *kvm_s390_get_ipte_control(struct kvm *kvm)
{
	struct bsca_block *sca = kvm->arch.sca; /* SCA version doesn't matter */

	return &sca->ipte_control;
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
          int _len_kvm0 = 1;
          struct kvm * kvm = (struct kvm *) malloc(_len_kvm0*sizeof(struct kvm));
          for(int _i0 = 0; _i0 < _len_kvm0; _i0++) {
              int _len_kvm__i0__arch_sca0 = 1;
          kvm[_i0].arch.sca = (struct bsca_block *) malloc(_len_kvm__i0__arch_sca0*sizeof(struct bsca_block));
          for(int _j0 = 0; _j0 < _len_kvm__i0__arch_sca0; _j0++) {
            kvm[_i0].arch.sca->ipte_control = 0;
          }
          }
          union ipte_control * benchRet = kvm_s390_get_ipte_control(kvm);
          free(kvm);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_kvm0 = 65025;
          struct kvm * kvm = (struct kvm *) malloc(_len_kvm0*sizeof(struct kvm));
          for(int _i0 = 0; _i0 < _len_kvm0; _i0++) {
              int _len_kvm__i0__arch_sca0 = 1;
          kvm[_i0].arch.sca = (struct bsca_block *) malloc(_len_kvm__i0__arch_sca0*sizeof(struct bsca_block));
          for(int _j0 = 0; _j0 < _len_kvm__i0__arch_sca0; _j0++) {
            kvm[_i0].arch.sca->ipte_control = 0;
          }
          }
          union ipte_control * benchRet = kvm_s390_get_ipte_control(kvm);
          free(kvm);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_kvm0 = 100;
          struct kvm * kvm = (struct kvm *) malloc(_len_kvm0*sizeof(struct kvm));
          for(int _i0 = 0; _i0 < _len_kvm0; _i0++) {
              int _len_kvm__i0__arch_sca0 = 1;
          kvm[_i0].arch.sca = (struct bsca_block *) malloc(_len_kvm__i0__arch_sca0*sizeof(struct bsca_block));
          for(int _j0 = 0; _j0 < _len_kvm__i0__arch_sca0; _j0++) {
            kvm[_i0].arch.sca->ipte_control = 0;
          }
          }
          union ipte_control * benchRet = kvm_s390_get_ipte_control(kvm);
          free(kvm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  int u32 ;
struct kvm_pmu {int nr_arch_fixed_counters; struct kvm_pmc* fixed_counters; } ;
struct kvm_pmc {int dummy; } ;

/* Variables and functions */
 int MSR_CORE_PERF_FIXED_CTR0 ; 

__attribute__((used)) static inline struct kvm_pmc *get_fixed_pmc(struct kvm_pmu *pmu, u32 msr)
{
	int base = MSR_CORE_PERF_FIXED_CTR0;

	if (msr >= base && msr < base + pmu->nr_arch_fixed_counters)
		return &pmu->fixed_counters[msr - base];

	return NULL;
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
          int msr = 100;
          int _len_pmu0 = 1;
          struct kvm_pmu * pmu = (struct kvm_pmu *) malloc(_len_pmu0*sizeof(struct kvm_pmu));
          for(int _i0 = 0; _i0 < _len_pmu0; _i0++) {
            pmu[_i0].nr_arch_fixed_counters = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pmu__i0__fixed_counters0 = 1;
          pmu[_i0].fixed_counters = (struct kvm_pmc *) malloc(_len_pmu__i0__fixed_counters0*sizeof(struct kvm_pmc));
          for(int _j0 = 0; _j0 < _len_pmu__i0__fixed_counters0; _j0++) {
            pmu[_i0].fixed_counters->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct kvm_pmc * benchRet = get_fixed_pmc(pmu,msr);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_pmu0; _aux++) {
          free(pmu[_aux].fixed_counters);
          }
          free(pmu);
        
        break;
    }
    // big-arr
    case 1:
    {
          int msr = 255;
          int _len_pmu0 = 65025;
          struct kvm_pmu * pmu = (struct kvm_pmu *) malloc(_len_pmu0*sizeof(struct kvm_pmu));
          for(int _i0 = 0; _i0 < _len_pmu0; _i0++) {
            pmu[_i0].nr_arch_fixed_counters = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pmu__i0__fixed_counters0 = 1;
          pmu[_i0].fixed_counters = (struct kvm_pmc *) malloc(_len_pmu__i0__fixed_counters0*sizeof(struct kvm_pmc));
          for(int _j0 = 0; _j0 < _len_pmu__i0__fixed_counters0; _j0++) {
            pmu[_i0].fixed_counters->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct kvm_pmc * benchRet = get_fixed_pmc(pmu,msr);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_pmu0; _aux++) {
          free(pmu[_aux].fixed_counters);
          }
          free(pmu);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int msr = 10;
          int _len_pmu0 = 100;
          struct kvm_pmu * pmu = (struct kvm_pmu *) malloc(_len_pmu0*sizeof(struct kvm_pmu));
          for(int _i0 = 0; _i0 < _len_pmu0; _i0++) {
            pmu[_i0].nr_arch_fixed_counters = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pmu__i0__fixed_counters0 = 1;
          pmu[_i0].fixed_counters = (struct kvm_pmc *) malloc(_len_pmu__i0__fixed_counters0*sizeof(struct kvm_pmc));
          for(int _j0 = 0; _j0 < _len_pmu__i0__fixed_counters0; _j0++) {
            pmu[_i0].fixed_counters->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct kvm_pmc * benchRet = get_fixed_pmc(pmu,msr);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_pmu0; _aux++) {
          free(pmu[_aux].fixed_counters);
          }
          free(pmu);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

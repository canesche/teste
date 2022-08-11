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
typedef  int u16 ;
struct intel_iommu {struct dmar_domain*** domains; } ;
struct dmar_domain {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static struct dmar_domain* get_iommu_domain(struct intel_iommu *iommu, u16 did)
{
	struct dmar_domain **domains;
	int idx = did >> 8;

	domains = iommu->domains[idx];
	if (!domains)
		return NULL;

	return domains[did & 0xff];
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
          int did = 100;
          int _len_iommu0 = 1;
          struct intel_iommu * iommu = (struct intel_iommu *) malloc(_len_iommu0*sizeof(struct intel_iommu));
          for(int _i0 = 0; _i0 < _len_iommu0; _i0++) {
              int _len_iommu__i0__domains0 = 1;
          iommu[_i0].domains = (struct dmar_domain ***) malloc(_len_iommu__i0__domains0*sizeof(struct dmar_domain **));
          for(int _j0 = 0; _j0 < _len_iommu__i0__domains0; _j0++) {
            int _len_iommu__i0__domains1 = 1;
            iommu[_i0].domains[_j0] = (struct dmar_domain **) malloc(_len_iommu__i0__domains1*sizeof(struct dmar_domain *));
            for(int _j1 = 0; _j1 < _len_iommu__i0__domains1; _j1++) {
              int _len_iommu__i0__domains2 = 1;
              iommu[_i0].domains[_j0][_j1] = (struct dmar_domain *) malloc(_len_iommu__i0__domains2*sizeof(struct dmar_domain));
              for(int _j2 = 0; _j2 < _len_iommu__i0__domains2; _j2++) {
                iommu[_i0].domains[_j0][_j1]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          }
          struct dmar_domain * benchRet = get_iommu_domain(iommu,did);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_iommu0; _aux++) {
          }
          free(iommu);
        
        break;
    }
    // big-arr
    case 1:
    {
          int did = 255;
          int _len_iommu0 = 65025;
          struct intel_iommu * iommu = (struct intel_iommu *) malloc(_len_iommu0*sizeof(struct intel_iommu));
          for(int _i0 = 0; _i0 < _len_iommu0; _i0++) {
              int _len_iommu__i0__domains0 = 1;
          iommu[_i0].domains = (struct dmar_domain ***) malloc(_len_iommu__i0__domains0*sizeof(struct dmar_domain **));
          for(int _j0 = 0; _j0 < _len_iommu__i0__domains0; _j0++) {
            int _len_iommu__i0__domains1 = 1;
            iommu[_i0].domains[_j0] = (struct dmar_domain **) malloc(_len_iommu__i0__domains1*sizeof(struct dmar_domain *));
            for(int _j1 = 0; _j1 < _len_iommu__i0__domains1; _j1++) {
              int _len_iommu__i0__domains2 = 1;
              iommu[_i0].domains[_j0][_j1] = (struct dmar_domain *) malloc(_len_iommu__i0__domains2*sizeof(struct dmar_domain));
              for(int _j2 = 0; _j2 < _len_iommu__i0__domains2; _j2++) {
                iommu[_i0].domains[_j0][_j1]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          }
          struct dmar_domain * benchRet = get_iommu_domain(iommu,did);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_iommu0; _aux++) {
          }
          free(iommu);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int did = 10;
          int _len_iommu0 = 100;
          struct intel_iommu * iommu = (struct intel_iommu *) malloc(_len_iommu0*sizeof(struct intel_iommu));
          for(int _i0 = 0; _i0 < _len_iommu0; _i0++) {
              int _len_iommu__i0__domains0 = 1;
          iommu[_i0].domains = (struct dmar_domain ***) malloc(_len_iommu__i0__domains0*sizeof(struct dmar_domain **));
          for(int _j0 = 0; _j0 < _len_iommu__i0__domains0; _j0++) {
            int _len_iommu__i0__domains1 = 1;
            iommu[_i0].domains[_j0] = (struct dmar_domain **) malloc(_len_iommu__i0__domains1*sizeof(struct dmar_domain *));
            for(int _j1 = 0; _j1 < _len_iommu__i0__domains1; _j1++) {
              int _len_iommu__i0__domains2 = 1;
              iommu[_i0].domains[_j0][_j1] = (struct dmar_domain *) malloc(_len_iommu__i0__domains2*sizeof(struct dmar_domain));
              for(int _j2 = 0; _j2 < _len_iommu__i0__domains2; _j2++) {
                iommu[_i0].domains[_j0][_j1]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          }
          struct dmar_domain * benchRet = get_iommu_domain(iommu,did);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_iommu0; _aux++) {
          }
          free(iommu);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

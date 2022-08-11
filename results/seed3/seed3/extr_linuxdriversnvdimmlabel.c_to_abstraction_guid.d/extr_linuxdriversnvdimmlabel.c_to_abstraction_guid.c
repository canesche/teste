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
typedef  int /*<<< orphan*/  const guid_t ;
typedef  enum nvdimm_claim_class { ____Placeholder_nvdimm_claim_class } nvdimm_claim_class ;

/* Variables and functions */
 int NVDIMM_CCLASS_BTT ; 
 int NVDIMM_CCLASS_BTT2 ; 
 int NVDIMM_CCLASS_DAX ; 
 int NVDIMM_CCLASS_PFN ; 
 int NVDIMM_CCLASS_UNKNOWN ; 
 int /*<<< orphan*/  const guid_null ; 
 int /*<<< orphan*/  const nvdimm_btt2_guid ; 
 int /*<<< orphan*/  const nvdimm_btt_guid ; 
 int /*<<< orphan*/  const nvdimm_dax_guid ; 
 int /*<<< orphan*/  const nvdimm_pfn_guid ; 

__attribute__((used)) static const guid_t *to_abstraction_guid(enum nvdimm_claim_class claim_class,
	guid_t *target)
{
	if (claim_class == NVDIMM_CCLASS_BTT)
		return &nvdimm_btt_guid;
	else if (claim_class == NVDIMM_CCLASS_BTT2)
		return &nvdimm_btt2_guid;
	else if (claim_class == NVDIMM_CCLASS_PFN)
		return &nvdimm_pfn_guid;
	else if (claim_class == NVDIMM_CCLASS_DAX)
		return &nvdimm_dax_guid;
	else if (claim_class == NVDIMM_CCLASS_UNKNOWN) {
		/*
		 * If we're modifying a namespace for which we don't
		 * know the claim_class, don't touch the existing guid.
		 */
		return target;
	} else
		return &guid_null;
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
          enum nvdimm_claim_class claim_class = 0;
          int _len_target0 = 1;
          const int * target = (const int *) malloc(_len_target0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_target0; _i0++) {
            target[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = to_abstraction_guid(claim_class,target);
          printf("%d\n", (*benchRet)); 
          free(target);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum nvdimm_claim_class claim_class = 0;
          int _len_target0 = 65025;
          const int * target = (const int *) malloc(_len_target0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_target0; _i0++) {
            target[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = to_abstraction_guid(claim_class,target);
          printf("%d\n", (*benchRet)); 
          free(target);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum nvdimm_claim_class claim_class = 0;
          int _len_target0 = 100;
          const int * target = (const int *) malloc(_len_target0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_target0; _i0++) {
            target[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = to_abstraction_guid(claim_class,target);
          printf("%d\n", (*benchRet)); 
          free(target);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  int u64 ;
struct pebs_record_skl {int tsx_tuning; int ax; } ;

/* Variables and functions */
 int PEBS_HSW_TSX_FLAGS ; 
 int PERF_TXN_ABORT_SHIFT ; 
 int PERF_TXN_TRANSACTION ; 

__attribute__((used)) static inline u64 intel_hsw_transaction(struct pebs_record_skl *pebs)
{
	u64 txn = (pebs->tsx_tuning & PEBS_HSW_TSX_FLAGS) >> 32;

	/* For RTM XABORTs also log the abort code from AX */
	if ((txn & PERF_TXN_TRANSACTION) && (pebs->ax & 1))
		txn |= ((pebs->ax >> 24) & 0xff) << PERF_TXN_ABORT_SHIFT;
	return txn;
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
          int _len_pebs0 = 1;
          struct pebs_record_skl * pebs = (struct pebs_record_skl *) malloc(_len_pebs0*sizeof(struct pebs_record_skl));
          for(int _i0 = 0; _i0 < _len_pebs0; _i0++) {
            pebs[_i0].tsx_tuning = ((-2 * (next_i()%2)) + 1) * next_i();
        pebs[_i0].ax = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = intel_hsw_transaction(pebs);
          printf("%d\n", benchRet); 
          free(pebs);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pebs0 = 65025;
          struct pebs_record_skl * pebs = (struct pebs_record_skl *) malloc(_len_pebs0*sizeof(struct pebs_record_skl));
          for(int _i0 = 0; _i0 < _len_pebs0; _i0++) {
            pebs[_i0].tsx_tuning = ((-2 * (next_i()%2)) + 1) * next_i();
        pebs[_i0].ax = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = intel_hsw_transaction(pebs);
          printf("%d\n", benchRet); 
          free(pebs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pebs0 = 100;
          struct pebs_record_skl * pebs = (struct pebs_record_skl *) malloc(_len_pebs0*sizeof(struct pebs_record_skl));
          for(int _i0 = 0; _i0 < _len_pebs0; _i0++) {
            pebs[_i0].tsx_tuning = ((-2 * (next_i()%2)) + 1) * next_i();
        pebs[_i0].ax = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = intel_hsw_transaction(pebs);
          printf("%d\n", benchRet); 
          free(pebs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

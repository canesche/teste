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
typedef  size_t u16 ;
struct tid_group {int dummy; } ;
struct hfi1_ctxtdata {struct tid_group* groups; } ;

/* Variables and functions */

__attribute__((used)) static inline struct tid_group *
hfi1_idx_to_tid_group(struct hfi1_ctxtdata *rcd, u16 idx)
{
	return &rcd->groups[idx];
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
          unsigned long idx = 100;
          int _len_rcd0 = 1;
          struct hfi1_ctxtdata * rcd = (struct hfi1_ctxtdata *) malloc(_len_rcd0*sizeof(struct hfi1_ctxtdata));
          for(int _i0 = 0; _i0 < _len_rcd0; _i0++) {
              int _len_rcd__i0__groups0 = 1;
          rcd[_i0].groups = (struct tid_group *) malloc(_len_rcd__i0__groups0*sizeof(struct tid_group));
          for(int _j0 = 0; _j0 < _len_rcd__i0__groups0; _j0++) {
            rcd[_i0].groups->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct tid_group * benchRet = hfi1_idx_to_tid_group(rcd,idx);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_rcd0; _aux++) {
          free(rcd[_aux].groups);
          }
          free(rcd);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long idx = 255;
          int _len_rcd0 = 65025;
          struct hfi1_ctxtdata * rcd = (struct hfi1_ctxtdata *) malloc(_len_rcd0*sizeof(struct hfi1_ctxtdata));
          for(int _i0 = 0; _i0 < _len_rcd0; _i0++) {
              int _len_rcd__i0__groups0 = 1;
          rcd[_i0].groups = (struct tid_group *) malloc(_len_rcd__i0__groups0*sizeof(struct tid_group));
          for(int _j0 = 0; _j0 < _len_rcd__i0__groups0; _j0++) {
            rcd[_i0].groups->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct tid_group * benchRet = hfi1_idx_to_tid_group(rcd,idx);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_rcd0; _aux++) {
          free(rcd[_aux].groups);
          }
          free(rcd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long idx = 10;
          int _len_rcd0 = 100;
          struct hfi1_ctxtdata * rcd = (struct hfi1_ctxtdata *) malloc(_len_rcd0*sizeof(struct hfi1_ctxtdata));
          for(int _i0 = 0; _i0 < _len_rcd0; _i0++) {
              int _len_rcd__i0__groups0 = 1;
          rcd[_i0].groups = (struct tid_group *) malloc(_len_rcd__i0__groups0*sizeof(struct tid_group));
          for(int _j0 = 0; _j0 < _len_rcd__i0__groups0; _j0++) {
            rcd[_i0].groups->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct tid_group * benchRet = hfi1_idx_to_tid_group(rcd,idx);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_rcd0; _aux++) {
          free(rcd[_aux].groups);
          }
          free(rcd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

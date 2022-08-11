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
struct scif_mmu_notif {int dummy; } ;
struct scif_endpt_rma_info {int dummy; } ;
struct mm_struct {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static struct scif_mmu_notif *
scif_find_mmu_notifier(struct mm_struct *mm,
		       struct scif_endpt_rma_info *rma)
{
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
          int _len_mm0 = 1;
          struct mm_struct * mm = (struct mm_struct *) malloc(_len_mm0*sizeof(struct mm_struct));
          for(int _i0 = 0; _i0 < _len_mm0; _i0++) {
            mm[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rma0 = 1;
          struct scif_endpt_rma_info * rma = (struct scif_endpt_rma_info *) malloc(_len_rma0*sizeof(struct scif_endpt_rma_info));
          for(int _i0 = 0; _i0 < _len_rma0; _i0++) {
            rma[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct scif_mmu_notif * benchRet = scif_find_mmu_notifier(mm,rma);
          printf("%d\n", (*benchRet).dummy);
          free(mm);
          free(rma);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_mm0 = 65025;
          struct mm_struct * mm = (struct mm_struct *) malloc(_len_mm0*sizeof(struct mm_struct));
          for(int _i0 = 0; _i0 < _len_mm0; _i0++) {
            mm[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rma0 = 65025;
          struct scif_endpt_rma_info * rma = (struct scif_endpt_rma_info *) malloc(_len_rma0*sizeof(struct scif_endpt_rma_info));
          for(int _i0 = 0; _i0 < _len_rma0; _i0++) {
            rma[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct scif_mmu_notif * benchRet = scif_find_mmu_notifier(mm,rma);
          printf("%d\n", (*benchRet).dummy);
          free(mm);
          free(rma);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_mm0 = 100;
          struct mm_struct * mm = (struct mm_struct *) malloc(_len_mm0*sizeof(struct mm_struct));
          for(int _i0 = 0; _i0 < _len_mm0; _i0++) {
            mm[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rma0 = 100;
          struct scif_endpt_rma_info * rma = (struct scif_endpt_rma_info *) malloc(_len_rma0*sizeof(struct scif_endpt_rma_info));
          for(int _i0 = 0; _i0 < _len_rma0; _i0++) {
            rma[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct scif_mmu_notif * benchRet = scif_find_mmu_notifier(mm,rma);
          printf("%d\n", (*benchRet).dummy);
          free(mm);
          free(rma);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

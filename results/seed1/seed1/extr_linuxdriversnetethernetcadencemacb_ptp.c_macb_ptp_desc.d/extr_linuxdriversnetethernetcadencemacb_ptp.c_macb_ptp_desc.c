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
typedef  int /*<<< orphan*/  u8 ;
struct macb_dma_desc_ptp {int dummy; } ;
struct macb_dma_desc_64 {int dummy; } ;
struct macb_dma_desc {int dummy; } ;
struct macb {scalar_t__ hw_dma_cap; } ;

/* Variables and functions */
 scalar_t__ HW_DMA_CAP_64B_PTP ; 
 scalar_t__ HW_DMA_CAP_PTP ; 

__attribute__((used)) static struct macb_dma_desc_ptp *macb_ptp_desc(struct macb *bp,
					       struct macb_dma_desc *desc)
{
	if (bp->hw_dma_cap == HW_DMA_CAP_PTP)
		return (struct macb_dma_desc_ptp *)
				((u8 *)desc + sizeof(struct macb_dma_desc));
	if (bp->hw_dma_cap == HW_DMA_CAP_64B_PTP)
		return (struct macb_dma_desc_ptp *)
				((u8 *)desc + sizeof(struct macb_dma_desc)
				+ sizeof(struct macb_dma_desc_64));
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
          int _len_bp0 = 1;
          struct macb * bp = (struct macb *) malloc(_len_bp0*sizeof(struct macb));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].hw_dma_cap = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_desc0 = 1;
          struct macb_dma_desc * desc = (struct macb_dma_desc *) malloc(_len_desc0*sizeof(struct macb_dma_desc));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
            desc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct macb_dma_desc_ptp * benchRet = macb_ptp_desc(bp,desc);
          printf("%d\n", (*benchRet).dummy);
          free(bp);
          free(desc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_bp0 = 65025;
          struct macb * bp = (struct macb *) malloc(_len_bp0*sizeof(struct macb));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].hw_dma_cap = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_desc0 = 65025;
          struct macb_dma_desc * desc = (struct macb_dma_desc *) malloc(_len_desc0*sizeof(struct macb_dma_desc));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
            desc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct macb_dma_desc_ptp * benchRet = macb_ptp_desc(bp,desc);
          printf("%d\n", (*benchRet).dummy);
          free(bp);
          free(desc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_bp0 = 100;
          struct macb * bp = (struct macb *) malloc(_len_bp0*sizeof(struct macb));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].hw_dma_cap = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_desc0 = 100;
          struct macb_dma_desc * desc = (struct macb_dma_desc *) malloc(_len_desc0*sizeof(struct macb_dma_desc));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
            desc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct macb_dma_desc_ptp * benchRet = macb_ptp_desc(bp,desc);
          printf("%d\n", (*benchRet).dummy);
          free(bp);
          free(desc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  int u32 ;
struct k3_dma_desc_sw {int desc_num; TYPE_1__* desc_hw; scalar_t__ desc_hw_lli; } ;
struct k3_desc_hw {int dummy; } ;
typedef  void* dma_addr_t ;
struct TYPE_2__ {size_t count; int config; void* daddr; void* saddr; scalar_t__ lli; } ;

/* Variables and functions */
 scalar_t__ CX_LLI_CHAIN_EN ; 

__attribute__((used)) static void k3_dma_fill_desc(struct k3_dma_desc_sw *ds, dma_addr_t dst,
			dma_addr_t src, size_t len, u32 num, u32 ccfg)
{
	if (num != ds->desc_num - 1)
		ds->desc_hw[num].lli = ds->desc_hw_lli + (num + 1) *
			sizeof(struct k3_desc_hw);

	ds->desc_hw[num].lli |= CX_LLI_CHAIN_EN;
	ds->desc_hw[num].count = len;
	ds->desc_hw[num].saddr = src;
	ds->desc_hw[num].daddr = dst;
	ds->desc_hw[num].config = ccfg;
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
          unsigned long len = 100;
          int num = 100;
          int ccfg = 100;
          int _len_ds0 = 1;
          struct k3_dma_desc_sw * ds = (struct k3_dma_desc_sw *) malloc(_len_ds0*sizeof(struct k3_dma_desc_sw));
          for(int _i0 = 0; _i0 < _len_ds0; _i0++) {
            ds[_i0].desc_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ds__i0__desc_hw0 = 1;
          ds[_i0].desc_hw = (struct TYPE_2__ *) malloc(_len_ds__i0__desc_hw0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ds__i0__desc_hw0; _j0++) {
            ds[_i0].desc_hw->count = ((-2 * (next_i()%2)) + 1) * next_i();
        ds[_i0].desc_hw->config = ((-2 * (next_i()%2)) + 1) * next_i();
        ds[_i0].desc_hw->lli = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ds[_i0].desc_hw_lli = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * dst;
          void * src;
          k3_dma_fill_desc(ds,dst,src,len,num,ccfg);
          for(int _aux = 0; _aux < _len_ds0; _aux++) {
          free(ds[_aux].desc_hw);
          }
          free(ds);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long len = 255;
          int num = 255;
          int ccfg = 255;
          int _len_ds0 = 65025;
          struct k3_dma_desc_sw * ds = (struct k3_dma_desc_sw *) malloc(_len_ds0*sizeof(struct k3_dma_desc_sw));
          for(int _i0 = 0; _i0 < _len_ds0; _i0++) {
            ds[_i0].desc_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ds__i0__desc_hw0 = 1;
          ds[_i0].desc_hw = (struct TYPE_2__ *) malloc(_len_ds__i0__desc_hw0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ds__i0__desc_hw0; _j0++) {
            ds[_i0].desc_hw->count = ((-2 * (next_i()%2)) + 1) * next_i();
        ds[_i0].desc_hw->config = ((-2 * (next_i()%2)) + 1) * next_i();
        ds[_i0].desc_hw->lli = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ds[_i0].desc_hw_lli = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * dst;
          void * src;
          k3_dma_fill_desc(ds,dst,src,len,num,ccfg);
          for(int _aux = 0; _aux < _len_ds0; _aux++) {
          free(ds[_aux].desc_hw);
          }
          free(ds);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long len = 10;
          int num = 10;
          int ccfg = 10;
          int _len_ds0 = 100;
          struct k3_dma_desc_sw * ds = (struct k3_dma_desc_sw *) malloc(_len_ds0*sizeof(struct k3_dma_desc_sw));
          for(int _i0 = 0; _i0 < _len_ds0; _i0++) {
            ds[_i0].desc_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ds__i0__desc_hw0 = 1;
          ds[_i0].desc_hw = (struct TYPE_2__ *) malloc(_len_ds__i0__desc_hw0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ds__i0__desc_hw0; _j0++) {
            ds[_i0].desc_hw->count = ((-2 * (next_i()%2)) + 1) * next_i();
        ds[_i0].desc_hw->config = ((-2 * (next_i()%2)) + 1) * next_i();
        ds[_i0].desc_hw->lli = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ds[_i0].desc_hw_lli = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * dst;
          void * src;
          k3_dma_fill_desc(ds,dst,src,len,num,ccfg);
          for(int _aux = 0; _aux < _len_ds0; _aux++) {
          free(ds[_aux].desc_hw);
          }
          free(ds);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

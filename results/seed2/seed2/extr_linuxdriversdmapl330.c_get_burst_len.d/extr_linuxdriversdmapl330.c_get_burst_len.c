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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int data_bus_width; int data_buf_dep; int num_chan; } ;
struct pl330_dmac {TYPE_2__ pcfg; } ;
struct TYPE_3__ {int brst_size; } ;
struct dma_pl330_desc {TYPE_1__ rqcfg; struct dma_pl330_chan* pchan; } ;
struct dma_pl330_chan {struct pl330_dmac* dmac; } ;

/* Variables and functions */
 int PL330_MAX_BURST ; 

__attribute__((used)) static inline int get_burst_len(struct dma_pl330_desc *desc, size_t len)
{
	struct dma_pl330_chan *pch = desc->pchan;
	struct pl330_dmac *pl330 = pch->dmac;
	int burst_len;

	burst_len = pl330->pcfg.data_bus_width / 8;
	burst_len *= pl330->pcfg.data_buf_dep / pl330->pcfg.num_chan;
	burst_len >>= desc->rqcfg.brst_size;

	/* src/dst_burst_len can't be more than 16 */
	if (burst_len > PL330_MAX_BURST)
		burst_len = PL330_MAX_BURST;

	return burst_len;
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
          int _len_desc0 = 1;
          struct dma_pl330_desc * desc = (struct dma_pl330_desc *) malloc(_len_desc0*sizeof(struct dma_pl330_desc));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
            desc[_i0].rqcfg.brst_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_desc__i0__pchan0 = 1;
          desc[_i0].pchan = (struct dma_pl330_chan *) malloc(_len_desc__i0__pchan0*sizeof(struct dma_pl330_chan));
          for(int _j0 = 0; _j0 < _len_desc__i0__pchan0; _j0++) {
              int _len_desc__i0__pchan_dmac0 = 1;
          desc[_i0].pchan->dmac = (struct pl330_dmac *) malloc(_len_desc__i0__pchan_dmac0*sizeof(struct pl330_dmac));
          for(int _j0 = 0; _j0 < _len_desc__i0__pchan_dmac0; _j0++) {
            desc[_i0].pchan->dmac->pcfg.data_bus_width = ((-2 * (next_i()%2)) + 1) * next_i();
        desc[_i0].pchan->dmac->pcfg.data_buf_dep = ((-2 * (next_i()%2)) + 1) * next_i();
        desc[_i0].pchan->dmac->pcfg.num_chan = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = get_burst_len(desc,len);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_desc0; _aux++) {
          free(desc[_aux].pchan);
          }
          free(desc);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long len = 255;
          int _len_desc0 = 65025;
          struct dma_pl330_desc * desc = (struct dma_pl330_desc *) malloc(_len_desc0*sizeof(struct dma_pl330_desc));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
            desc[_i0].rqcfg.brst_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_desc__i0__pchan0 = 1;
          desc[_i0].pchan = (struct dma_pl330_chan *) malloc(_len_desc__i0__pchan0*sizeof(struct dma_pl330_chan));
          for(int _j0 = 0; _j0 < _len_desc__i0__pchan0; _j0++) {
              int _len_desc__i0__pchan_dmac0 = 1;
          desc[_i0].pchan->dmac = (struct pl330_dmac *) malloc(_len_desc__i0__pchan_dmac0*sizeof(struct pl330_dmac));
          for(int _j0 = 0; _j0 < _len_desc__i0__pchan_dmac0; _j0++) {
            desc[_i0].pchan->dmac->pcfg.data_bus_width = ((-2 * (next_i()%2)) + 1) * next_i();
        desc[_i0].pchan->dmac->pcfg.data_buf_dep = ((-2 * (next_i()%2)) + 1) * next_i();
        desc[_i0].pchan->dmac->pcfg.num_chan = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = get_burst_len(desc,len);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_desc0; _aux++) {
          free(desc[_aux].pchan);
          }
          free(desc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long len = 10;
          int _len_desc0 = 100;
          struct dma_pl330_desc * desc = (struct dma_pl330_desc *) malloc(_len_desc0*sizeof(struct dma_pl330_desc));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
            desc[_i0].rqcfg.brst_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_desc__i0__pchan0 = 1;
          desc[_i0].pchan = (struct dma_pl330_chan *) malloc(_len_desc__i0__pchan0*sizeof(struct dma_pl330_chan));
          for(int _j0 = 0; _j0 < _len_desc__i0__pchan0; _j0++) {
              int _len_desc__i0__pchan_dmac0 = 1;
          desc[_i0].pchan->dmac = (struct pl330_dmac *) malloc(_len_desc__i0__pchan_dmac0*sizeof(struct pl330_dmac));
          for(int _j0 = 0; _j0 < _len_desc__i0__pchan_dmac0; _j0++) {
            desc[_i0].pchan->dmac->pcfg.data_bus_width = ((-2 * (next_i()%2)) + 1) * next_i();
        desc[_i0].pchan->dmac->pcfg.data_buf_dep = ((-2 * (next_i()%2)) + 1) * next_i();
        desc[_i0].pchan->dmac->pcfg.num_chan = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = get_burst_len(desc,len);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_desc0; _aux++) {
          free(desc[_aux].pchan);
          }
          free(desc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

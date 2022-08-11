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
typedef  scalar_t__ u32 ;
struct ip22_hostdata {scalar_t__ dma; scalar_t__ cpu; } ;
struct TYPE_2__ {scalar_t__ pnext; int /*<<< orphan*/  cntinfo; } ;
struct hpc_chunk {TYPE_1__ desc; } ;
typedef  scalar_t__ dma_addr_t ;

/* Variables and functions */
 int /*<<< orphan*/  HPCDMA_EOX ; 
 unsigned long HPC_DMA_SIZE ; 

__attribute__((used)) static inline void init_hpc_chain(struct ip22_hostdata *hdata)
{
	struct hpc_chunk *hcp = (struct hpc_chunk *)hdata->cpu;
	dma_addr_t dma = hdata->dma;
	unsigned long start, end;

	start = (unsigned long) hcp;
	end = start + HPC_DMA_SIZE;
	while (start < end) {
		hcp->desc.pnext = (u32) (dma + sizeof(struct hpc_chunk));
		hcp->desc.cntinfo = HPCDMA_EOX;
		hcp++;
		dma += sizeof(struct hpc_chunk);
		start += sizeof(struct hpc_chunk);
	};
	hcp--;
	hcp->desc.pnext = hdata->dma;
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
          int _len_hdata0 = 1;
          struct ip22_hostdata * hdata = (struct ip22_hostdata *) malloc(_len_hdata0*sizeof(struct ip22_hostdata));
          for(int _i0 = 0; _i0 < _len_hdata0; _i0++) {
            hdata[_i0].dma = ((-2 * (next_i()%2)) + 1) * next_i();
        hdata[_i0].cpu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_hpc_chain(hdata);
          free(hdata);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hdata0 = 65025;
          struct ip22_hostdata * hdata = (struct ip22_hostdata *) malloc(_len_hdata0*sizeof(struct ip22_hostdata));
          for(int _i0 = 0; _i0 < _len_hdata0; _i0++) {
            hdata[_i0].dma = ((-2 * (next_i()%2)) + 1) * next_i();
        hdata[_i0].cpu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_hpc_chain(hdata);
          free(hdata);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hdata0 = 100;
          struct ip22_hostdata * hdata = (struct ip22_hostdata *) malloc(_len_hdata0*sizeof(struct ip22_hostdata));
          for(int _i0 = 0; _i0 < _len_hdata0; _i0++) {
            hdata[_i0].dma = ((-2 * (next_i()%2)) + 1) * next_i();
        hdata[_i0].cpu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_hpc_chain(hdata);
          free(hdata);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  scalar_t__ u32 ;
struct qmu_gpd {int dummy; } ;
struct mtu3_gpd_ring {int dma; struct qmu_gpd* start; } ;
typedef  int dma_addr_t ;

/* Variables and functions */
 scalar_t__ MAX_GPD_NUM ; 

__attribute__((used)) static struct qmu_gpd *gpd_dma_to_virt(struct mtu3_gpd_ring *ring,
		dma_addr_t dma_addr)
{
	dma_addr_t dma_base = ring->dma;
	struct qmu_gpd *gpd_head = ring->start;
	u32 offset = (dma_addr - dma_base) / sizeof(*gpd_head);

	if (offset >= MAX_GPD_NUM)
		return NULL;

	return gpd_head + offset;
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
          int dma_addr = 100;
          int _len_ring0 = 1;
          struct mtu3_gpd_ring * ring = (struct mtu3_gpd_ring *) malloc(_len_ring0*sizeof(struct mtu3_gpd_ring));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
            ring[_i0].dma = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ring__i0__start0 = 1;
          ring[_i0].start = (struct qmu_gpd *) malloc(_len_ring__i0__start0*sizeof(struct qmu_gpd));
          for(int _j0 = 0; _j0 < _len_ring__i0__start0; _j0++) {
            ring[_i0].start->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct qmu_gpd * benchRet = gpd_dma_to_virt(ring,dma_addr);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_ring0; _aux++) {
          free(ring[_aux].start);
          }
          free(ring);
        
        break;
    }
    // big-arr
    case 1:
    {
          int dma_addr = 255;
          int _len_ring0 = 65025;
          struct mtu3_gpd_ring * ring = (struct mtu3_gpd_ring *) malloc(_len_ring0*sizeof(struct mtu3_gpd_ring));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
            ring[_i0].dma = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ring__i0__start0 = 1;
          ring[_i0].start = (struct qmu_gpd *) malloc(_len_ring__i0__start0*sizeof(struct qmu_gpd));
          for(int _j0 = 0; _j0 < _len_ring__i0__start0; _j0++) {
            ring[_i0].start->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct qmu_gpd * benchRet = gpd_dma_to_virt(ring,dma_addr);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_ring0; _aux++) {
          free(ring[_aux].start);
          }
          free(ring);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int dma_addr = 10;
          int _len_ring0 = 100;
          struct mtu3_gpd_ring * ring = (struct mtu3_gpd_ring *) malloc(_len_ring0*sizeof(struct mtu3_gpd_ring));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
            ring[_i0].dma = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ring__i0__start0 = 1;
          ring[_i0].start = (struct qmu_gpd *) malloc(_len_ring__i0__start0*sizeof(struct qmu_gpd));
          for(int _j0 = 0; _j0 < _len_ring__i0__start0; _j0++) {
            ring[_i0].start->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct qmu_gpd * benchRet = gpd_dma_to_virt(ring,dma_addr);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_ring0; _aux++) {
          free(ring[_aux].start);
          }
          free(ring);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  int uint32_t ;
struct scb {int sg_list_phys; struct ahc_dma_seg* sg_list; } ;
struct ahc_dma_seg {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static struct ahc_dma_seg *
ahc_sg_bus_to_virt(struct scb *scb, uint32_t sg_busaddr)
{
	int sg_index;

	sg_index = (sg_busaddr - scb->sg_list_phys)/sizeof(struct ahc_dma_seg);
	/* sg_list_phys points to entry 1, not 0 */
	sg_index++;

	return (&scb->sg_list[sg_index]);
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
          int sg_busaddr = 100;
          int _len_scb0 = 1;
          struct scb * scb = (struct scb *) malloc(_len_scb0*sizeof(struct scb));
          for(int _i0 = 0; _i0 < _len_scb0; _i0++) {
            scb[_i0].sg_list_phys = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_scb__i0__sg_list0 = 1;
          scb[_i0].sg_list = (struct ahc_dma_seg *) malloc(_len_scb__i0__sg_list0*sizeof(struct ahc_dma_seg));
          for(int _j0 = 0; _j0 < _len_scb__i0__sg_list0; _j0++) {
            scb[_i0].sg_list->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct ahc_dma_seg * benchRet = ahc_sg_bus_to_virt(scb,sg_busaddr);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_scb0; _aux++) {
          free(scb[_aux].sg_list);
          }
          free(scb);
        
        break;
    }
    // big-arr
    case 1:
    {
          int sg_busaddr = 255;
          int _len_scb0 = 65025;
          struct scb * scb = (struct scb *) malloc(_len_scb0*sizeof(struct scb));
          for(int _i0 = 0; _i0 < _len_scb0; _i0++) {
            scb[_i0].sg_list_phys = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_scb__i0__sg_list0 = 1;
          scb[_i0].sg_list = (struct ahc_dma_seg *) malloc(_len_scb__i0__sg_list0*sizeof(struct ahc_dma_seg));
          for(int _j0 = 0; _j0 < _len_scb__i0__sg_list0; _j0++) {
            scb[_i0].sg_list->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct ahc_dma_seg * benchRet = ahc_sg_bus_to_virt(scb,sg_busaddr);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_scb0; _aux++) {
          free(scb[_aux].sg_list);
          }
          free(scb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int sg_busaddr = 10;
          int _len_scb0 = 100;
          struct scb * scb = (struct scb *) malloc(_len_scb0*sizeof(struct scb));
          for(int _i0 = 0; _i0 < _len_scb0; _i0++) {
            scb[_i0].sg_list_phys = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_scb__i0__sg_list0 = 1;
          scb[_i0].sg_list = (struct ahc_dma_seg *) malloc(_len_scb__i0__sg_list0*sizeof(struct ahc_dma_seg));
          for(int _j0 = 0; _j0 < _len_scb__i0__sg_list0; _j0++) {
            scb[_i0].sg_list->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct ahc_dma_seg * benchRet = ahc_sg_bus_to_virt(scb,sg_busaddr);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_scb0; _aux++) {
          free(scb[_aux].sg_list);
          }
          free(scb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

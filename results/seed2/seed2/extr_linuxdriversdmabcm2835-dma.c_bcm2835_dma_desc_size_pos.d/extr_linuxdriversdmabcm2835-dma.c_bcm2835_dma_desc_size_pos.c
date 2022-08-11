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
struct bcm2835_dma_cb {size_t length; scalar_t__ dst; scalar_t__ src; } ;
struct bcm2835_desc {unsigned int frames; scalar_t__ dir; TYPE_1__* cb_list; } ;
typedef  scalar_t__ dma_addr_t ;
struct TYPE_2__ {struct bcm2835_dma_cb* cb; } ;

/* Variables and functions */
 scalar_t__ DMA_DEV_TO_MEM ; 

__attribute__((used)) static size_t bcm2835_dma_desc_size_pos(struct bcm2835_desc *d, dma_addr_t addr)
{
	unsigned int i;
	size_t size;

	for (size = i = 0; i < d->frames; i++) {
		struct bcm2835_dma_cb *control_block = d->cb_list[i].cb;
		size_t this_size = control_block->length;
		dma_addr_t dma;

		if (d->dir == DMA_DEV_TO_MEM)
			dma = control_block->dst;
		else
			dma = control_block->src;

		if (size)
			size += this_size;
		else if (addr >= dma && addr < dma + this_size)
			size += dma + this_size - addr;
	}

	return size;
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
          long addr = 100;
          int _len_d0 = 1;
          struct bcm2835_desc * d = (struct bcm2835_desc *) malloc(_len_d0*sizeof(struct bcm2835_desc));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
            d[_i0].frames = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].dir = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_d__i0__cb_list0 = 1;
          d[_i0].cb_list = (struct TYPE_2__ *) malloc(_len_d__i0__cb_list0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_d__i0__cb_list0; _j0++) {
              int _len_d__i0__cb_list_cb0 = 1;
          d[_i0].cb_list->cb = (struct bcm2835_dma_cb *) malloc(_len_d__i0__cb_list_cb0*sizeof(struct bcm2835_dma_cb));
          for(int _j0 = 0; _j0 < _len_d__i0__cb_list_cb0; _j0++) {
            d[_i0].cb_list->cb->length = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].cb_list->cb->dst = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].cb_list->cb->src = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          unsigned long benchRet = bcm2835_dma_desc_size_pos(d,addr);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_d0; _aux++) {
          free(d[_aux].cb_list);
          }
          free(d);
        
        break;
    }
    // big-arr
    case 1:
    {
          long addr = 255;
          int _len_d0 = 65025;
          struct bcm2835_desc * d = (struct bcm2835_desc *) malloc(_len_d0*sizeof(struct bcm2835_desc));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
            d[_i0].frames = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].dir = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_d__i0__cb_list0 = 1;
          d[_i0].cb_list = (struct TYPE_2__ *) malloc(_len_d__i0__cb_list0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_d__i0__cb_list0; _j0++) {
              int _len_d__i0__cb_list_cb0 = 1;
          d[_i0].cb_list->cb = (struct bcm2835_dma_cb *) malloc(_len_d__i0__cb_list_cb0*sizeof(struct bcm2835_dma_cb));
          for(int _j0 = 0; _j0 < _len_d__i0__cb_list_cb0; _j0++) {
            d[_i0].cb_list->cb->length = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].cb_list->cb->dst = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].cb_list->cb->src = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          unsigned long benchRet = bcm2835_dma_desc_size_pos(d,addr);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_d0; _aux++) {
          free(d[_aux].cb_list);
          }
          free(d);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long addr = 10;
          int _len_d0 = 100;
          struct bcm2835_desc * d = (struct bcm2835_desc *) malloc(_len_d0*sizeof(struct bcm2835_desc));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
            d[_i0].frames = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].dir = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_d__i0__cb_list0 = 1;
          d[_i0].cb_list = (struct TYPE_2__ *) malloc(_len_d__i0__cb_list0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_d__i0__cb_list0; _j0++) {
              int _len_d__i0__cb_list_cb0 = 1;
          d[_i0].cb_list->cb = (struct bcm2835_dma_cb *) malloc(_len_d__i0__cb_list_cb0*sizeof(struct bcm2835_dma_cb));
          for(int _j0 = 0; _j0 < _len_d__i0__cb_list_cb0; _j0++) {
            d[_i0].cb_list->cb->length = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].cb_list->cb->dst = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].cb_list->cb->src = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          unsigned long benchRet = bcm2835_dma_desc_size_pos(d,addr);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_d0; _aux++) {
          free(d[_aux].cb_list);
          }
          free(d);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

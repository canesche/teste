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
struct rx_sw_desc {int /*<<< orphan*/  dma_addr; struct page* page; } ;
struct page {int dummy; } ;
typedef  int /*<<< orphan*/  dma_addr_t ;

/* Variables and functions */

__attribute__((used)) static inline void set_rx_sw_desc(struct rx_sw_desc *sdesc, struct page *page,
				  dma_addr_t dma_addr)
{
	sdesc->page = page;
	sdesc->dma_addr = dma_addr;
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
          int _len_sdesc0 = 1;
          struct rx_sw_desc * sdesc = (struct rx_sw_desc *) malloc(_len_sdesc0*sizeof(struct rx_sw_desc));
          for(int _i0 = 0; _i0 < _len_sdesc0; _i0++) {
            sdesc[_i0].dma_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sdesc__i0__page0 = 1;
          sdesc[_i0].page = (struct page *) malloc(_len_sdesc__i0__page0*sizeof(struct page));
          for(int _j0 = 0; _j0 < _len_sdesc__i0__page0; _j0++) {
            sdesc[_i0].page->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_page0 = 1;
          struct page * page = (struct page *) malloc(_len_page0*sizeof(struct page));
          for(int _i0 = 0; _i0 < _len_page0; _i0++) {
            page[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_rx_sw_desc(sdesc,page,dma_addr);
          for(int _aux = 0; _aux < _len_sdesc0; _aux++) {
          free(sdesc[_aux].page);
          }
          free(sdesc);
          free(page);
        
        break;
    }
    // big-arr
    case 1:
    {
          int dma_addr = 255;
          int _len_sdesc0 = 65025;
          struct rx_sw_desc * sdesc = (struct rx_sw_desc *) malloc(_len_sdesc0*sizeof(struct rx_sw_desc));
          for(int _i0 = 0; _i0 < _len_sdesc0; _i0++) {
            sdesc[_i0].dma_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sdesc__i0__page0 = 1;
          sdesc[_i0].page = (struct page *) malloc(_len_sdesc__i0__page0*sizeof(struct page));
          for(int _j0 = 0; _j0 < _len_sdesc__i0__page0; _j0++) {
            sdesc[_i0].page->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_page0 = 65025;
          struct page * page = (struct page *) malloc(_len_page0*sizeof(struct page));
          for(int _i0 = 0; _i0 < _len_page0; _i0++) {
            page[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_rx_sw_desc(sdesc,page,dma_addr);
          for(int _aux = 0; _aux < _len_sdesc0; _aux++) {
          free(sdesc[_aux].page);
          }
          free(sdesc);
          free(page);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int dma_addr = 10;
          int _len_sdesc0 = 100;
          struct rx_sw_desc * sdesc = (struct rx_sw_desc *) malloc(_len_sdesc0*sizeof(struct rx_sw_desc));
          for(int _i0 = 0; _i0 < _len_sdesc0; _i0++) {
            sdesc[_i0].dma_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sdesc__i0__page0 = 1;
          sdesc[_i0].page = (struct page *) malloc(_len_sdesc__i0__page0*sizeof(struct page));
          for(int _j0 = 0; _j0 < _len_sdesc__i0__page0; _j0++) {
            sdesc[_i0].page->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_page0 = 100;
          struct page * page = (struct page *) malloc(_len_page0*sizeof(struct page));
          for(int _i0 = 0; _i0 < _len_page0; _i0++) {
            page[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_rx_sw_desc(sdesc,page,dma_addr);
          for(int _aux = 0; _aux < _len_sdesc0; _aux++) {
          free(sdesc[_aux].page);
          }
          free(sdesc);
          free(page);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

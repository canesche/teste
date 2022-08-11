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
typedef  void* u16 ;
struct qib_user_sdma_pkt {TYPE_1__* addr; } ;
struct page {int dummy; } ;
typedef  int /*<<< orphan*/  dma_addr_t ;
struct TYPE_2__ {void* dma_length; int /*<<< orphan*/  addr; void* kvaddr; struct page* page; void* dma_mapped; void* put_page; void* last_desc; void* first_desc; void* length; void* offset; } ;

/* Variables and functions */

__attribute__((used)) static void qib_user_sdma_init_frag(struct qib_user_sdma_pkt *pkt,
				    int i, u16 offset, u16 len,
				    u16 first_desc, u16 last_desc,
				    u16 put_page, u16 dma_mapped,
				    struct page *page, void *kvaddr,
				    dma_addr_t dma_addr, u16 dma_length)
{
	pkt->addr[i].offset = offset;
	pkt->addr[i].length = len;
	pkt->addr[i].first_desc = first_desc;
	pkt->addr[i].last_desc = last_desc;
	pkt->addr[i].put_page = put_page;
	pkt->addr[i].dma_mapped = dma_mapped;
	pkt->addr[i].page = page;
	pkt->addr[i].kvaddr = kvaddr;
	pkt->addr[i].addr = dma_addr;
	pkt->addr[i].dma_length = dma_length;
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
          int i = 100;
          int dma_addr = 100;
          int _len_pkt0 = 1;
          struct qib_user_sdma_pkt * pkt = (struct qib_user_sdma_pkt *) malloc(_len_pkt0*sizeof(struct qib_user_sdma_pkt));
          for(int _i0 = 0; _i0 < _len_pkt0; _i0++) {
              int _len_pkt__i0__addr0 = 1;
          pkt[_i0].addr = (struct TYPE_2__ *) malloc(_len_pkt__i0__addr0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pkt__i0__addr0; _j0++) {
            pkt[_i0].addr->addr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pkt__i0__addr_page0 = 1;
          pkt[_i0].addr->page = (struct page *) malloc(_len_pkt__i0__addr_page0*sizeof(struct page));
          for(int _j0 = 0; _j0 < _len_pkt__i0__addr_page0; _j0++) {
            pkt[_i0].addr->page->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          void * offset;
          void * len;
          void * first_desc;
          void * last_desc;
          void * put_page;
          void * dma_mapped;
          int _len_page0 = 1;
          struct page * page = (struct page *) malloc(_len_page0*sizeof(struct page));
          for(int _i0 = 0; _i0 < _len_page0; _i0++) {
            page[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * kvaddr;
          void * dma_length;
          qib_user_sdma_init_frag(pkt,i,offset,len,first_desc,last_desc,put_page,dma_mapped,page,kvaddr,dma_addr,dma_length);
          for(int _aux = 0; _aux < _len_pkt0; _aux++) {
          free(pkt[_aux].addr);
          }
          free(pkt);
          free(page);
        
        break;
    }
    // big-arr
    case 1:
    {
          int i = 255;
          int dma_addr = 255;
          int _len_pkt0 = 65025;
          struct qib_user_sdma_pkt * pkt = (struct qib_user_sdma_pkt *) malloc(_len_pkt0*sizeof(struct qib_user_sdma_pkt));
          for(int _i0 = 0; _i0 < _len_pkt0; _i0++) {
              int _len_pkt__i0__addr0 = 1;
          pkt[_i0].addr = (struct TYPE_2__ *) malloc(_len_pkt__i0__addr0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pkt__i0__addr0; _j0++) {
            pkt[_i0].addr->addr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pkt__i0__addr_page0 = 1;
          pkt[_i0].addr->page = (struct page *) malloc(_len_pkt__i0__addr_page0*sizeof(struct page));
          for(int _j0 = 0; _j0 < _len_pkt__i0__addr_page0; _j0++) {
            pkt[_i0].addr->page->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          void * offset;
          void * len;
          void * first_desc;
          void * last_desc;
          void * put_page;
          void * dma_mapped;
          int _len_page0 = 65025;
          struct page * page = (struct page *) malloc(_len_page0*sizeof(struct page));
          for(int _i0 = 0; _i0 < _len_page0; _i0++) {
            page[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * kvaddr;
          void * dma_length;
          qib_user_sdma_init_frag(pkt,i,offset,len,first_desc,last_desc,put_page,dma_mapped,page,kvaddr,dma_addr,dma_length);
          for(int _aux = 0; _aux < _len_pkt0; _aux++) {
          free(pkt[_aux].addr);
          }
          free(pkt);
          free(page);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int i = 10;
          int dma_addr = 10;
          int _len_pkt0 = 100;
          struct qib_user_sdma_pkt * pkt = (struct qib_user_sdma_pkt *) malloc(_len_pkt0*sizeof(struct qib_user_sdma_pkt));
          for(int _i0 = 0; _i0 < _len_pkt0; _i0++) {
              int _len_pkt__i0__addr0 = 1;
          pkt[_i0].addr = (struct TYPE_2__ *) malloc(_len_pkt__i0__addr0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pkt__i0__addr0; _j0++) {
            pkt[_i0].addr->addr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pkt__i0__addr_page0 = 1;
          pkt[_i0].addr->page = (struct page *) malloc(_len_pkt__i0__addr_page0*sizeof(struct page));
          for(int _j0 = 0; _j0 < _len_pkt__i0__addr_page0; _j0++) {
            pkt[_i0].addr->page->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          void * offset;
          void * len;
          void * first_desc;
          void * last_desc;
          void * put_page;
          void * dma_mapped;
          int _len_page0 = 100;
          struct page * page = (struct page *) malloc(_len_page0*sizeof(struct page));
          for(int _i0 = 0; _i0 < _len_page0; _i0++) {
            page[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * kvaddr;
          void * dma_length;
          qib_user_sdma_init_frag(pkt,i,offset,len,first_desc,last_desc,put_page,dma_mapped,page,kvaddr,dma_addr,dma_length);
          for(int _aux = 0; _aux < _len_pkt0; _aux++) {
          free(pkt[_aux].addr);
          }
          free(pkt);
          free(page);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

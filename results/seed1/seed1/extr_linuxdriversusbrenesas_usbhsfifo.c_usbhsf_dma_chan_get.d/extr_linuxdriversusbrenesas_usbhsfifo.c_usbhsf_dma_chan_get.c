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
struct usbhs_pkt {int /*<<< orphan*/ * handler; } ;
struct usbhs_fifo {struct dma_chan* rx_chan; struct dma_chan* tx_chan; } ;
struct dma_chan {int dummy; } ;

/* Variables and functions */
 int /*<<< orphan*/  usbhs_fifo_dma_pop_handler ; 
 int /*<<< orphan*/  usbhs_fifo_dma_push_handler ; 

__attribute__((used)) static struct dma_chan *usbhsf_dma_chan_get(struct usbhs_fifo *fifo,
					    struct usbhs_pkt *pkt)
{
	if (&usbhs_fifo_dma_push_handler == pkt->handler)
		return fifo->tx_chan;

	if (&usbhs_fifo_dma_pop_handler == pkt->handler)
		return fifo->rx_chan;

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
          int _len_fifo0 = 1;
          struct usbhs_fifo * fifo = (struct usbhs_fifo *) malloc(_len_fifo0*sizeof(struct usbhs_fifo));
          for(int _i0 = 0; _i0 < _len_fifo0; _i0++) {
              int _len_fifo__i0__rx_chan0 = 1;
          fifo[_i0].rx_chan = (struct dma_chan *) malloc(_len_fifo__i0__rx_chan0*sizeof(struct dma_chan));
          for(int _j0 = 0; _j0 < _len_fifo__i0__rx_chan0; _j0++) {
            fifo[_i0].rx_chan->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fifo__i0__tx_chan0 = 1;
          fifo[_i0].tx_chan = (struct dma_chan *) malloc(_len_fifo__i0__tx_chan0*sizeof(struct dma_chan));
          for(int _j0 = 0; _j0 < _len_fifo__i0__tx_chan0; _j0++) {
            fifo[_i0].tx_chan->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pkt0 = 1;
          struct usbhs_pkt * pkt = (struct usbhs_pkt *) malloc(_len_pkt0*sizeof(struct usbhs_pkt));
          for(int _i0 = 0; _i0 < _len_pkt0; _i0++) {
              int _len_pkt__i0__handler0 = 1;
          pkt[_i0].handler = (int *) malloc(_len_pkt__i0__handler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pkt__i0__handler0; _j0++) {
            pkt[_i0].handler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct dma_chan * benchRet = usbhsf_dma_chan_get(fifo,pkt);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_fifo0; _aux++) {
          free(fifo[_aux].rx_chan);
          }
          for(int _aux = 0; _aux < _len_fifo0; _aux++) {
          free(fifo[_aux].tx_chan);
          }
          free(fifo);
          for(int _aux = 0; _aux < _len_pkt0; _aux++) {
          free(pkt[_aux].handler);
          }
          free(pkt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_fifo0 = 65025;
          struct usbhs_fifo * fifo = (struct usbhs_fifo *) malloc(_len_fifo0*sizeof(struct usbhs_fifo));
          for(int _i0 = 0; _i0 < _len_fifo0; _i0++) {
              int _len_fifo__i0__rx_chan0 = 1;
          fifo[_i0].rx_chan = (struct dma_chan *) malloc(_len_fifo__i0__rx_chan0*sizeof(struct dma_chan));
          for(int _j0 = 0; _j0 < _len_fifo__i0__rx_chan0; _j0++) {
            fifo[_i0].rx_chan->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fifo__i0__tx_chan0 = 1;
          fifo[_i0].tx_chan = (struct dma_chan *) malloc(_len_fifo__i0__tx_chan0*sizeof(struct dma_chan));
          for(int _j0 = 0; _j0 < _len_fifo__i0__tx_chan0; _j0++) {
            fifo[_i0].tx_chan->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pkt0 = 65025;
          struct usbhs_pkt * pkt = (struct usbhs_pkt *) malloc(_len_pkt0*sizeof(struct usbhs_pkt));
          for(int _i0 = 0; _i0 < _len_pkt0; _i0++) {
              int _len_pkt__i0__handler0 = 1;
          pkt[_i0].handler = (int *) malloc(_len_pkt__i0__handler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pkt__i0__handler0; _j0++) {
            pkt[_i0].handler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct dma_chan * benchRet = usbhsf_dma_chan_get(fifo,pkt);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_fifo0; _aux++) {
          free(fifo[_aux].rx_chan);
          }
          for(int _aux = 0; _aux < _len_fifo0; _aux++) {
          free(fifo[_aux].tx_chan);
          }
          free(fifo);
          for(int _aux = 0; _aux < _len_pkt0; _aux++) {
          free(pkt[_aux].handler);
          }
          free(pkt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_fifo0 = 100;
          struct usbhs_fifo * fifo = (struct usbhs_fifo *) malloc(_len_fifo0*sizeof(struct usbhs_fifo));
          for(int _i0 = 0; _i0 < _len_fifo0; _i0++) {
              int _len_fifo__i0__rx_chan0 = 1;
          fifo[_i0].rx_chan = (struct dma_chan *) malloc(_len_fifo__i0__rx_chan0*sizeof(struct dma_chan));
          for(int _j0 = 0; _j0 < _len_fifo__i0__rx_chan0; _j0++) {
            fifo[_i0].rx_chan->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fifo__i0__tx_chan0 = 1;
          fifo[_i0].tx_chan = (struct dma_chan *) malloc(_len_fifo__i0__tx_chan0*sizeof(struct dma_chan));
          for(int _j0 = 0; _j0 < _len_fifo__i0__tx_chan0; _j0++) {
            fifo[_i0].tx_chan->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pkt0 = 100;
          struct usbhs_pkt * pkt = (struct usbhs_pkt *) malloc(_len_pkt0*sizeof(struct usbhs_pkt));
          for(int _i0 = 0; _i0 < _len_pkt0; _i0++) {
              int _len_pkt__i0__handler0 = 1;
          pkt[_i0].handler = (int *) malloc(_len_pkt__i0__handler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pkt__i0__handler0; _j0++) {
            pkt[_i0].handler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct dma_chan * benchRet = usbhsf_dma_chan_get(fifo,pkt);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_fifo0; _aux++) {
          free(fifo[_aux].rx_chan);
          }
          for(int _aux = 0; _aux < _len_fifo0; _aux++) {
          free(fifo[_aux].tx_chan);
          }
          free(fifo);
          for(int _aux = 0; _aux < _len_pkt0; _aux++) {
          free(pkt[_aux].handler);
          }
          free(pkt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

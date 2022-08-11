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
typedef  struct TYPE_14__   TYPE_7__ ;
typedef  struct TYPE_13__   TYPE_6__ ;
typedef  struct TYPE_12__   TYPE_5__ ;
typedef  struct TYPE_11__   TYPE_4__ ;
typedef  struct TYPE_10__   TYPE_3__ ;
typedef  struct TYPE_9__   TYPE_2__ ;
typedef  struct TYPE_8__   TYPE_1__ ;

/* Type definitions */
struct TYPE_13__ {unsigned int count; TYPE_5__* rfbuff; scalar_t__ consume_idx; scalar_t__ produce_idx; } ;
struct TYPE_11__ {scalar_t__ consume_idx; scalar_t__ produce_idx; } ;
struct TYPE_14__ {TYPE_6__ rfd; TYPE_4__ rrd; } ;
struct TYPE_9__ {unsigned int count; TYPE_1__* tpbuff; scalar_t__ consume_idx; scalar_t__ produce_idx; } ;
struct TYPE_10__ {TYPE_2__ tpd; } ;
struct emac_adapter {TYPE_7__ rx_q; TYPE_3__ tx_q; } ;
struct TYPE_12__ {scalar_t__ dma_addr; } ;
struct TYPE_8__ {scalar_t__ dma_addr; } ;

/* Variables and functions */

__attribute__((used)) static void emac_mac_rx_tx_ring_reset_all(struct emac_adapter *adpt)
{
	unsigned int i;

	adpt->tx_q.tpd.produce_idx = 0;
	adpt->tx_q.tpd.consume_idx = 0;
	for (i = 0; i < adpt->tx_q.tpd.count; i++)
		adpt->tx_q.tpd.tpbuff[i].dma_addr = 0;

	adpt->rx_q.rrd.produce_idx = 0;
	adpt->rx_q.rrd.consume_idx = 0;
	adpt->rx_q.rfd.produce_idx = 0;
	adpt->rx_q.rfd.consume_idx = 0;
	for (i = 0; i < adpt->rx_q.rfd.count; i++)
		adpt->rx_q.rfd.rfbuff[i].dma_addr = 0;
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
          int _len_adpt0 = 1;
          struct emac_adapter * adpt = (struct emac_adapter *) malloc(_len_adpt0*sizeof(struct emac_adapter));
          for(int _i0 = 0; _i0 < _len_adpt0; _i0++) {
            adpt[_i0].rx_q.rfd.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adpt__i0__rx_q_rfd_rfbuff0 = 1;
          adpt[_i0].rx_q.rfd.rfbuff = (struct TYPE_12__ *) malloc(_len_adpt__i0__rx_q_rfd_rfbuff0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_adpt__i0__rx_q_rfd_rfbuff0; _j0++) {
            adpt[_i0].rx_q.rfd.rfbuff->dma_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        adpt[_i0].rx_q.rfd.consume_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].rx_q.rfd.produce_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].rx_q.rrd.consume_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].rx_q.rrd.produce_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].tx_q.tpd.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adpt__i0__tx_q_tpd_tpbuff0 = 1;
          adpt[_i0].tx_q.tpd.tpbuff = (struct TYPE_8__ *) malloc(_len_adpt__i0__tx_q_tpd_tpbuff0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_adpt__i0__tx_q_tpd_tpbuff0; _j0++) {
            adpt[_i0].tx_q.tpd.tpbuff->dma_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        adpt[_i0].tx_q.tpd.consume_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].tx_q.tpd.produce_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          emac_mac_rx_tx_ring_reset_all(adpt);
          free(adpt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_adpt0 = 65025;
          struct emac_adapter * adpt = (struct emac_adapter *) malloc(_len_adpt0*sizeof(struct emac_adapter));
          for(int _i0 = 0; _i0 < _len_adpt0; _i0++) {
            adpt[_i0].rx_q.rfd.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adpt__i0__rx_q_rfd_rfbuff0 = 1;
          adpt[_i0].rx_q.rfd.rfbuff = (struct TYPE_12__ *) malloc(_len_adpt__i0__rx_q_rfd_rfbuff0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_adpt__i0__rx_q_rfd_rfbuff0; _j0++) {
            adpt[_i0].rx_q.rfd.rfbuff->dma_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        adpt[_i0].rx_q.rfd.consume_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].rx_q.rfd.produce_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].rx_q.rrd.consume_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].rx_q.rrd.produce_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].tx_q.tpd.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adpt__i0__tx_q_tpd_tpbuff0 = 1;
          adpt[_i0].tx_q.tpd.tpbuff = (struct TYPE_8__ *) malloc(_len_adpt__i0__tx_q_tpd_tpbuff0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_adpt__i0__tx_q_tpd_tpbuff0; _j0++) {
            adpt[_i0].tx_q.tpd.tpbuff->dma_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        adpt[_i0].tx_q.tpd.consume_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].tx_q.tpd.produce_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          emac_mac_rx_tx_ring_reset_all(adpt);
          free(adpt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_adpt0 = 100;
          struct emac_adapter * adpt = (struct emac_adapter *) malloc(_len_adpt0*sizeof(struct emac_adapter));
          for(int _i0 = 0; _i0 < _len_adpt0; _i0++) {
            adpt[_i0].rx_q.rfd.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adpt__i0__rx_q_rfd_rfbuff0 = 1;
          adpt[_i0].rx_q.rfd.rfbuff = (struct TYPE_12__ *) malloc(_len_adpt__i0__rx_q_rfd_rfbuff0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_adpt__i0__rx_q_rfd_rfbuff0; _j0++) {
            adpt[_i0].rx_q.rfd.rfbuff->dma_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        adpt[_i0].rx_q.rfd.consume_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].rx_q.rfd.produce_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].rx_q.rrd.consume_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].rx_q.rrd.produce_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].tx_q.tpd.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adpt__i0__tx_q_tpd_tpbuff0 = 1;
          adpt[_i0].tx_q.tpd.tpbuff = (struct TYPE_8__ *) malloc(_len_adpt__i0__tx_q_tpd_tpbuff0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_adpt__i0__tx_q_tpd_tpbuff0; _j0++) {
            adpt[_i0].tx_q.tpd.tpbuff->dma_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        adpt[_i0].tx_q.tpd.consume_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].tx_q.tpd.produce_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          emac_mac_rx_tx_ring_reset_all(adpt);
          free(adpt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

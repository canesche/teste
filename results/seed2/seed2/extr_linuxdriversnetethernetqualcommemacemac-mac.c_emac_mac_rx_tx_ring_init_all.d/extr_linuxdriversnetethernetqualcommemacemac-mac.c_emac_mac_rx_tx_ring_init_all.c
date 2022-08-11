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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct platform_device {int dummy; } ;
struct TYPE_6__ {int /*<<< orphan*/  consume_shift; int /*<<< orphan*/  consume_mask; int /*<<< orphan*/  consume_reg; int /*<<< orphan*/  produce_shift; int /*<<< orphan*/  produce_mask; int /*<<< orphan*/  produce_reg; } ;
struct TYPE_5__ {int mask; } ;
struct TYPE_4__ {int intr; TYPE_2__* irq; int /*<<< orphan*/  consume_shift; int /*<<< orphan*/  consume_mask; int /*<<< orphan*/  consume_reg; int /*<<< orphan*/  process_shft; int /*<<< orphan*/  process_mask; void* process_reg; int /*<<< orphan*/  produce_shift; int /*<<< orphan*/  produce_mask; void* produce_reg; int /*<<< orphan*/  netdev; } ;
struct emac_adapter {TYPE_3__ tx_q; TYPE_2__ irq; TYPE_1__ rx_q; int /*<<< orphan*/  netdev; } ;

/* Variables and functions */
 void* EMAC_MAILBOX_0 ; 
 int /*<<< orphan*/  EMAC_MAILBOX_15 ; 
 int /*<<< orphan*/  EMAC_MAILBOX_2 ; 
 int /*<<< orphan*/  EMAC_MAILBOX_3 ; 
 int ISR_RX_PKT ; 
 int /*<<< orphan*/  NTPD_CONS_IDX_BMSK ; 
 int /*<<< orphan*/  NTPD_CONS_IDX_SHFT ; 
 int /*<<< orphan*/  NTPD_PROD_IDX_BMSK ; 
 int /*<<< orphan*/  NTPD_PROD_IDX_SHFT ; 
 int /*<<< orphan*/  RFD0_CONS_IDX_BMSK ; 
 int /*<<< orphan*/  RFD0_CONS_IDX_SHFT ; 
 int /*<<< orphan*/  RFD0_PROC_IDX_BMSK ; 
 int /*<<< orphan*/  RFD0_PROC_IDX_SHFT ; 
 int /*<<< orphan*/  RFD0_PROD_IDX_BMSK ; 
 int /*<<< orphan*/  RFD0_PROD_IDX_SHFT ; 

void emac_mac_rx_tx_ring_init_all(struct platform_device *pdev,
				  struct emac_adapter *adpt)
{
	adpt->rx_q.netdev = adpt->netdev;

	adpt->rx_q.produce_reg  = EMAC_MAILBOX_0;
	adpt->rx_q.produce_mask = RFD0_PROD_IDX_BMSK;
	adpt->rx_q.produce_shift = RFD0_PROD_IDX_SHFT;

	adpt->rx_q.process_reg  = EMAC_MAILBOX_0;
	adpt->rx_q.process_mask = RFD0_PROC_IDX_BMSK;
	adpt->rx_q.process_shft = RFD0_PROC_IDX_SHFT;

	adpt->rx_q.consume_reg  = EMAC_MAILBOX_3;
	adpt->rx_q.consume_mask = RFD0_CONS_IDX_BMSK;
	adpt->rx_q.consume_shift = RFD0_CONS_IDX_SHFT;

	adpt->rx_q.irq          = &adpt->irq;
	adpt->rx_q.intr         = adpt->irq.mask & ISR_RX_PKT;

	adpt->tx_q.produce_reg  = EMAC_MAILBOX_15;
	adpt->tx_q.produce_mask = NTPD_PROD_IDX_BMSK;
	adpt->tx_q.produce_shift = NTPD_PROD_IDX_SHFT;

	adpt->tx_q.consume_reg  = EMAC_MAILBOX_2;
	adpt->tx_q.consume_mask = NTPD_CONS_IDX_BMSK;
	adpt->tx_q.consume_shift = NTPD_CONS_IDX_SHFT;
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
          int _len_pdev0 = 1;
          struct platform_device * pdev = (struct platform_device *) malloc(_len_pdev0*sizeof(struct platform_device));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
            pdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_adpt0 = 1;
          struct emac_adapter * adpt = (struct emac_adapter *) malloc(_len_adpt0*sizeof(struct emac_adapter));
          for(int _i0 = 0; _i0 < _len_adpt0; _i0++) {
            adpt[_i0].tx_q.consume_shift = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].tx_q.consume_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].tx_q.consume_reg = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].tx_q.produce_shift = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].tx_q.produce_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].tx_q.produce_reg = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].irq.mask = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].rx_q.intr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adpt__i0__rx_q_irq0 = 1;
          adpt[_i0].rx_q.irq = (struct TYPE_5__ *) malloc(_len_adpt__i0__rx_q_irq0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_adpt__i0__rx_q_irq0; _j0++) {
            adpt[_i0].rx_q.irq->mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        adpt[_i0].rx_q.consume_shift = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].rx_q.consume_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].rx_q.consume_reg = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].rx_q.process_shft = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].rx_q.process_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].rx_q.produce_shift = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].rx_q.produce_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].rx_q.netdev = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].netdev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          emac_mac_rx_tx_ring_init_all(pdev,adpt);
          free(pdev);
          free(adpt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pdev0 = 65025;
          struct platform_device * pdev = (struct platform_device *) malloc(_len_pdev0*sizeof(struct platform_device));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
            pdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_adpt0 = 65025;
          struct emac_adapter * adpt = (struct emac_adapter *) malloc(_len_adpt0*sizeof(struct emac_adapter));
          for(int _i0 = 0; _i0 < _len_adpt0; _i0++) {
            adpt[_i0].tx_q.consume_shift = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].tx_q.consume_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].tx_q.consume_reg = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].tx_q.produce_shift = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].tx_q.produce_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].tx_q.produce_reg = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].irq.mask = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].rx_q.intr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adpt__i0__rx_q_irq0 = 1;
          adpt[_i0].rx_q.irq = (struct TYPE_5__ *) malloc(_len_adpt__i0__rx_q_irq0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_adpt__i0__rx_q_irq0; _j0++) {
            adpt[_i0].rx_q.irq->mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        adpt[_i0].rx_q.consume_shift = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].rx_q.consume_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].rx_q.consume_reg = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].rx_q.process_shft = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].rx_q.process_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].rx_q.produce_shift = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].rx_q.produce_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].rx_q.netdev = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].netdev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          emac_mac_rx_tx_ring_init_all(pdev,adpt);
          free(pdev);
          free(adpt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pdev0 = 100;
          struct platform_device * pdev = (struct platform_device *) malloc(_len_pdev0*sizeof(struct platform_device));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
            pdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_adpt0 = 100;
          struct emac_adapter * adpt = (struct emac_adapter *) malloc(_len_adpt0*sizeof(struct emac_adapter));
          for(int _i0 = 0; _i0 < _len_adpt0; _i0++) {
            adpt[_i0].tx_q.consume_shift = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].tx_q.consume_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].tx_q.consume_reg = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].tx_q.produce_shift = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].tx_q.produce_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].tx_q.produce_reg = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].irq.mask = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].rx_q.intr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adpt__i0__rx_q_irq0 = 1;
          adpt[_i0].rx_q.irq = (struct TYPE_5__ *) malloc(_len_adpt__i0__rx_q_irq0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_adpt__i0__rx_q_irq0; _j0++) {
            adpt[_i0].rx_q.irq->mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        adpt[_i0].rx_q.consume_shift = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].rx_q.consume_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].rx_q.consume_reg = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].rx_q.process_shft = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].rx_q.process_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].rx_q.produce_shift = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].rx_q.produce_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].rx_q.netdev = ((-2 * (next_i()%2)) + 1) * next_i();
        adpt[_i0].netdev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          emac_mac_rx_tx_ring_init_all(pdev,adpt);
          free(pdev);
          free(adpt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

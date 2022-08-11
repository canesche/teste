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
typedef  struct TYPE_12__   TYPE_6__ ;
typedef  struct TYPE_11__   TYPE_5__ ;
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u64 ;
struct bnad {int num_rx; int num_rxp_per_rx; int num_tx; int num_txq_per_tx; TYPE_1__* tx_info; TYPE_6__* rx_info; } ;
struct bna_tcb {int /*<<< orphan*/ * hw_consumer_index; int /*<<< orphan*/  consumer_index; int /*<<< orphan*/  producer_index; TYPE_2__* txq; } ;
struct bna_rcb {int /*<<< orphan*/  consumer_index; int /*<<< orphan*/  producer_index; TYPE_3__* rxq; } ;
struct TYPE_12__ {TYPE_5__* rx_ctrl; int /*<<< orphan*/  rx; } ;
struct TYPE_11__ {TYPE_4__* ccb; int /*<<< orphan*/  rx_complete; int /*<<< orphan*/  rx_keep_poll; int /*<<< orphan*/  rx_schedule; int /*<<< orphan*/  rx_poll_ctr; int /*<<< orphan*/  rx_intr_ctr; } ;
struct TYPE_10__ {struct bna_rcb** rcb; int /*<<< orphan*/ * hw_producer_index; int /*<<< orphan*/  producer_index; } ;
struct TYPE_9__ {int /*<<< orphan*/  rxbuf_map_failed; int /*<<< orphan*/  rxbuf_alloc_failed; int /*<<< orphan*/  rx_packets_with_error; int /*<<< orphan*/  rx_bytes; int /*<<< orphan*/  rx_packets; } ;
struct TYPE_8__ {int /*<<< orphan*/  tx_bytes; int /*<<< orphan*/  tx_packets; } ;
struct TYPE_7__ {struct bna_tcb** tcb; int /*<<< orphan*/  tx; } ;

/* Variables and functions */

__attribute__((used)) static int
bnad_per_q_stats_fill(struct bnad *bnad, u64 *buf, int bi)
{
	int i, j;
	struct bna_rcb *rcb = NULL;
	struct bna_tcb *tcb = NULL;

	for (i = 0; i < bnad->num_rx; i++) {
		if (!bnad->rx_info[i].rx)
			continue;
		for (j = 0; j < bnad->num_rxp_per_rx; j++)
			if (bnad->rx_info[i].rx_ctrl[j].ccb &&
				bnad->rx_info[i].rx_ctrl[j].ccb->rcb[0] &&
				bnad->rx_info[i].rx_ctrl[j].ccb->rcb[0]->rxq) {
				buf[bi++] = bnad->rx_info[i].rx_ctrl[j].
						ccb->producer_index;
				buf[bi++] = 0; /* ccb->consumer_index */
				buf[bi++] = *(bnad->rx_info[i].rx_ctrl[j].
						ccb->hw_producer_index);

				buf[bi++] = bnad->rx_info[i].
						rx_ctrl[j].rx_intr_ctr;
				buf[bi++] = bnad->rx_info[i].
						rx_ctrl[j].rx_poll_ctr;
				buf[bi++] = bnad->rx_info[i].
						rx_ctrl[j].rx_schedule;
				buf[bi++] = bnad->rx_info[i].
						rx_ctrl[j].rx_keep_poll;
				buf[bi++] = bnad->rx_info[i].
						rx_ctrl[j].rx_complete;
			}
	}
	for (i = 0; i < bnad->num_rx; i++) {
		if (!bnad->rx_info[i].rx)
			continue;
		for (j = 0; j < bnad->num_rxp_per_rx; j++)
			if (bnad->rx_info[i].rx_ctrl[j].ccb) {
				if (bnad->rx_info[i].rx_ctrl[j].ccb->rcb[0] &&
					bnad->rx_info[i].rx_ctrl[j].ccb->
					rcb[0]->rxq) {
					rcb = bnad->rx_info[i].rx_ctrl[j].
							ccb->rcb[0];
					buf[bi++] = rcb->rxq->rx_packets;
					buf[bi++] = rcb->rxq->rx_bytes;
					buf[bi++] = rcb->rxq->
							rx_packets_with_error;
					buf[bi++] = rcb->rxq->
							rxbuf_alloc_failed;
					buf[bi++] = rcb->rxq->rxbuf_map_failed;
					buf[bi++] = rcb->producer_index;
					buf[bi++] = rcb->consumer_index;
				}
				if (bnad->rx_info[i].rx_ctrl[j].ccb->rcb[1] &&
					bnad->rx_info[i].rx_ctrl[j].ccb->
					rcb[1]->rxq) {
					rcb = bnad->rx_info[i].rx_ctrl[j].
								ccb->rcb[1];
					buf[bi++] = rcb->rxq->rx_packets;
					buf[bi++] = rcb->rxq->rx_bytes;
					buf[bi++] = rcb->rxq->
							rx_packets_with_error;
					buf[bi++] = rcb->rxq->
							rxbuf_alloc_failed;
					buf[bi++] = rcb->rxq->rxbuf_map_failed;
					buf[bi++] = rcb->producer_index;
					buf[bi++] = rcb->consumer_index;
				}
			}
	}

	for (i = 0; i < bnad->num_tx; i++) {
		if (!bnad->tx_info[i].tx)
			continue;
		for (j = 0; j < bnad->num_txq_per_tx; j++)
			if (bnad->tx_info[i].tcb[j] &&
				bnad->tx_info[i].tcb[j]->txq) {
				tcb = bnad->tx_info[i].tcb[j];
				buf[bi++] = tcb->txq->tx_packets;
				buf[bi++] = tcb->txq->tx_bytes;
				buf[bi++] = tcb->producer_index;
				buf[bi++] = tcb->consumer_index;
				buf[bi++] = *(tcb->hw_consumer_index);
			}
	}

	return bi;
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
          int bi = 100;
          int _len_bnad0 = 1;
          struct bnad * bnad = (struct bnad *) malloc(_len_bnad0*sizeof(struct bnad));
          for(int _i0 = 0; _i0 < _len_bnad0; _i0++) {
            bnad[_i0].num_rx = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].num_rxp_per_rx = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].num_tx = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].num_txq_per_tx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bnad__i0__tx_info0 = 1;
          bnad[_i0].tx_info = (struct TYPE_7__ *) malloc(_len_bnad__i0__tx_info0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_bnad__i0__tx_info0; _j0++) {
              int _len_bnad__i0__tx_info_tcb0 = 1;
          bnad[_i0].tx_info->tcb = (struct bna_tcb **) malloc(_len_bnad__i0__tx_info_tcb0*sizeof(struct bna_tcb *));
          for(int _j0 = 0; _j0 < _len_bnad__i0__tx_info_tcb0; _j0++) {
            int _len_bnad__i0__tx_info_tcb1 = 1;
            bnad[_i0].tx_info->tcb[_j0] = (struct bna_tcb *) malloc(_len_bnad__i0__tx_info_tcb1*sizeof(struct bna_tcb));
            for(int _j1 = 0; _j1 < _len_bnad__i0__tx_info_tcb1; _j1++) {
                int _len_bnad__i0__tx_info_tcb__j0__hw_consumer_index0 = 1;
          bnad[_i0].tx_info->tcb[_j0]->hw_consumer_index = (int *) malloc(_len_bnad__i0__tx_info_tcb__j0__hw_consumer_index0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bnad__i0__tx_info_tcb__j0__hw_consumer_index0; _j0++) {
            bnad[_i0].tx_info->tcb[_j0]->hw_consumer_index[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        bnad[_i0].tx_info->tcb[_j0]->consumer_index = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].tx_info->tcb[_j0]->producer_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bnad__i0__tx_info_tcb__j0__txq0 = 1;
          bnad[_i0].tx_info->tcb[_j0]->txq = (struct TYPE_8__ *) malloc(_len_bnad__i0__tx_info_tcb__j0__txq0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_bnad__i0__tx_info_tcb__j0__txq0; _j0++) {
            bnad[_i0].tx_info->tcb[_j0]->txq->tx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].tx_info->tcb[_j0]->txq->tx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
        bnad[_i0].tx_info->tx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bnad__i0__rx_info0 = 1;
          bnad[_i0].rx_info = (struct TYPE_12__ *) malloc(_len_bnad__i0__rx_info0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_bnad__i0__rx_info0; _j0++) {
              int _len_bnad__i0__rx_info_rx_ctrl0 = 1;
          bnad[_i0].rx_info->rx_ctrl = (struct TYPE_11__ *) malloc(_len_bnad__i0__rx_info_rx_ctrl0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_bnad__i0__rx_info_rx_ctrl0; _j0++) {
              int _len_bnad__i0__rx_info_rx_ctrl_ccb0 = 1;
          bnad[_i0].rx_info->rx_ctrl->ccb = (struct TYPE_10__ *) malloc(_len_bnad__i0__rx_info_rx_ctrl_ccb0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_bnad__i0__rx_info_rx_ctrl_ccb0; _j0++) {
              int _len_bnad__i0__rx_info_rx_ctrl_ccb_rcb0 = 1;
          bnad[_i0].rx_info->rx_ctrl->ccb->rcb = (struct bna_rcb **) malloc(_len_bnad__i0__rx_info_rx_ctrl_ccb_rcb0*sizeof(struct bna_rcb *));
          for(int _j0 = 0; _j0 < _len_bnad__i0__rx_info_rx_ctrl_ccb_rcb0; _j0++) {
            int _len_bnad__i0__rx_info_rx_ctrl_ccb_rcb1 = 1;
            bnad[_i0].rx_info->rx_ctrl->ccb->rcb[_j0] = (struct bna_rcb *) malloc(_len_bnad__i0__rx_info_rx_ctrl_ccb_rcb1*sizeof(struct bna_rcb));
            for(int _j1 = 0; _j1 < _len_bnad__i0__rx_info_rx_ctrl_ccb_rcb1; _j1++) {
              bnad[_i0].rx_info->rx_ctrl->ccb->rcb[_j0]->consumer_index = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].rx_info->rx_ctrl->ccb->rcb[_j0]->producer_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bnad__i0__rx_info_rx_ctrl_ccb_rcb__j0__rxq0 = 1;
          bnad[_i0].rx_info->rx_ctrl->ccb->rcb[_j0]->rxq = (struct TYPE_9__ *) malloc(_len_bnad__i0__rx_info_rx_ctrl_ccb_rcb__j0__rxq0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_bnad__i0__rx_info_rx_ctrl_ccb_rcb__j0__rxq0; _j0++) {
            bnad[_i0].rx_info->rx_ctrl->ccb->rcb[_j0]->rxq->rxbuf_map_failed = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].rx_info->rx_ctrl->ccb->rcb[_j0]->rxq->rxbuf_alloc_failed = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].rx_info->rx_ctrl->ccb->rcb[_j0]->rxq->rx_packets_with_error = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].rx_info->rx_ctrl->ccb->rcb[_j0]->rxq->rx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].rx_info->rx_ctrl->ccb->rcb[_j0]->rxq->rx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          int _len_bnad__i0__rx_info_rx_ctrl_ccb_hw_producer_index0 = 1;
          bnad[_i0].rx_info->rx_ctrl->ccb->hw_producer_index = (int *) malloc(_len_bnad__i0__rx_info_rx_ctrl_ccb_hw_producer_index0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bnad__i0__rx_info_rx_ctrl_ccb_hw_producer_index0; _j0++) {
            bnad[_i0].rx_info->rx_ctrl->ccb->hw_producer_index[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        bnad[_i0].rx_info->rx_ctrl->ccb->producer_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        bnad[_i0].rx_info->rx_ctrl->rx_complete = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].rx_info->rx_ctrl->rx_keep_poll = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].rx_info->rx_ctrl->rx_schedule = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].rx_info->rx_ctrl->rx_poll_ctr = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].rx_info->rx_ctrl->rx_intr_ctr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        bnad[_i0].rx_info->rx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buf0 = 1;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bnad_per_q_stats_fill(bnad,buf,bi);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bnad0; _aux++) {
          free(bnad[_aux].tx_info);
          }
          for(int _aux = 0; _aux < _len_bnad0; _aux++) {
          free(bnad[_aux].rx_info);
          }
          free(bnad);
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int bi = 255;
          int _len_bnad0 = 65025;
          struct bnad * bnad = (struct bnad *) malloc(_len_bnad0*sizeof(struct bnad));
          for(int _i0 = 0; _i0 < _len_bnad0; _i0++) {
            bnad[_i0].num_rx = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].num_rxp_per_rx = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].num_tx = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].num_txq_per_tx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bnad__i0__tx_info0 = 1;
          bnad[_i0].tx_info = (struct TYPE_7__ *) malloc(_len_bnad__i0__tx_info0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_bnad__i0__tx_info0; _j0++) {
              int _len_bnad__i0__tx_info_tcb0 = 1;
          bnad[_i0].tx_info->tcb = (struct bna_tcb **) malloc(_len_bnad__i0__tx_info_tcb0*sizeof(struct bna_tcb *));
          for(int _j0 = 0; _j0 < _len_bnad__i0__tx_info_tcb0; _j0++) {
            int _len_bnad__i0__tx_info_tcb1 = 1;
            bnad[_i0].tx_info->tcb[_j0] = (struct bna_tcb *) malloc(_len_bnad__i0__tx_info_tcb1*sizeof(struct bna_tcb));
            for(int _j1 = 0; _j1 < _len_bnad__i0__tx_info_tcb1; _j1++) {
                int _len_bnad__i0__tx_info_tcb__j0__hw_consumer_index0 = 1;
          bnad[_i0].tx_info->tcb[_j0]->hw_consumer_index = (int *) malloc(_len_bnad__i0__tx_info_tcb__j0__hw_consumer_index0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bnad__i0__tx_info_tcb__j0__hw_consumer_index0; _j0++) {
            bnad[_i0].tx_info->tcb[_j0]->hw_consumer_index[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        bnad[_i0].tx_info->tcb[_j0]->consumer_index = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].tx_info->tcb[_j0]->producer_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bnad__i0__tx_info_tcb__j0__txq0 = 1;
          bnad[_i0].tx_info->tcb[_j0]->txq = (struct TYPE_8__ *) malloc(_len_bnad__i0__tx_info_tcb__j0__txq0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_bnad__i0__tx_info_tcb__j0__txq0; _j0++) {
            bnad[_i0].tx_info->tcb[_j0]->txq->tx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].tx_info->tcb[_j0]->txq->tx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
        bnad[_i0].tx_info->tx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bnad__i0__rx_info0 = 1;
          bnad[_i0].rx_info = (struct TYPE_12__ *) malloc(_len_bnad__i0__rx_info0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_bnad__i0__rx_info0; _j0++) {
              int _len_bnad__i0__rx_info_rx_ctrl0 = 1;
          bnad[_i0].rx_info->rx_ctrl = (struct TYPE_11__ *) malloc(_len_bnad__i0__rx_info_rx_ctrl0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_bnad__i0__rx_info_rx_ctrl0; _j0++) {
              int _len_bnad__i0__rx_info_rx_ctrl_ccb0 = 1;
          bnad[_i0].rx_info->rx_ctrl->ccb = (struct TYPE_10__ *) malloc(_len_bnad__i0__rx_info_rx_ctrl_ccb0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_bnad__i0__rx_info_rx_ctrl_ccb0; _j0++) {
              int _len_bnad__i0__rx_info_rx_ctrl_ccb_rcb0 = 1;
          bnad[_i0].rx_info->rx_ctrl->ccb->rcb = (struct bna_rcb **) malloc(_len_bnad__i0__rx_info_rx_ctrl_ccb_rcb0*sizeof(struct bna_rcb *));
          for(int _j0 = 0; _j0 < _len_bnad__i0__rx_info_rx_ctrl_ccb_rcb0; _j0++) {
            int _len_bnad__i0__rx_info_rx_ctrl_ccb_rcb1 = 1;
            bnad[_i0].rx_info->rx_ctrl->ccb->rcb[_j0] = (struct bna_rcb *) malloc(_len_bnad__i0__rx_info_rx_ctrl_ccb_rcb1*sizeof(struct bna_rcb));
            for(int _j1 = 0; _j1 < _len_bnad__i0__rx_info_rx_ctrl_ccb_rcb1; _j1++) {
              bnad[_i0].rx_info->rx_ctrl->ccb->rcb[_j0]->consumer_index = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].rx_info->rx_ctrl->ccb->rcb[_j0]->producer_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bnad__i0__rx_info_rx_ctrl_ccb_rcb__j0__rxq0 = 1;
          bnad[_i0].rx_info->rx_ctrl->ccb->rcb[_j0]->rxq = (struct TYPE_9__ *) malloc(_len_bnad__i0__rx_info_rx_ctrl_ccb_rcb__j0__rxq0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_bnad__i0__rx_info_rx_ctrl_ccb_rcb__j0__rxq0; _j0++) {
            bnad[_i0].rx_info->rx_ctrl->ccb->rcb[_j0]->rxq->rxbuf_map_failed = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].rx_info->rx_ctrl->ccb->rcb[_j0]->rxq->rxbuf_alloc_failed = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].rx_info->rx_ctrl->ccb->rcb[_j0]->rxq->rx_packets_with_error = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].rx_info->rx_ctrl->ccb->rcb[_j0]->rxq->rx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].rx_info->rx_ctrl->ccb->rcb[_j0]->rxq->rx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          int _len_bnad__i0__rx_info_rx_ctrl_ccb_hw_producer_index0 = 1;
          bnad[_i0].rx_info->rx_ctrl->ccb->hw_producer_index = (int *) malloc(_len_bnad__i0__rx_info_rx_ctrl_ccb_hw_producer_index0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bnad__i0__rx_info_rx_ctrl_ccb_hw_producer_index0; _j0++) {
            bnad[_i0].rx_info->rx_ctrl->ccb->hw_producer_index[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        bnad[_i0].rx_info->rx_ctrl->ccb->producer_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        bnad[_i0].rx_info->rx_ctrl->rx_complete = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].rx_info->rx_ctrl->rx_keep_poll = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].rx_info->rx_ctrl->rx_schedule = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].rx_info->rx_ctrl->rx_poll_ctr = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].rx_info->rx_ctrl->rx_intr_ctr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        bnad[_i0].rx_info->rx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buf0 = 65025;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bnad_per_q_stats_fill(bnad,buf,bi);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bnad0; _aux++) {
          free(bnad[_aux].tx_info);
          }
          for(int _aux = 0; _aux < _len_bnad0; _aux++) {
          free(bnad[_aux].rx_info);
          }
          free(bnad);
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int bi = 10;
          int _len_bnad0 = 100;
          struct bnad * bnad = (struct bnad *) malloc(_len_bnad0*sizeof(struct bnad));
          for(int _i0 = 0; _i0 < _len_bnad0; _i0++) {
            bnad[_i0].num_rx = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].num_rxp_per_rx = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].num_tx = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].num_txq_per_tx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bnad__i0__tx_info0 = 1;
          bnad[_i0].tx_info = (struct TYPE_7__ *) malloc(_len_bnad__i0__tx_info0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_bnad__i0__tx_info0; _j0++) {
              int _len_bnad__i0__tx_info_tcb0 = 1;
          bnad[_i0].tx_info->tcb = (struct bna_tcb **) malloc(_len_bnad__i0__tx_info_tcb0*sizeof(struct bna_tcb *));
          for(int _j0 = 0; _j0 < _len_bnad__i0__tx_info_tcb0; _j0++) {
            int _len_bnad__i0__tx_info_tcb1 = 1;
            bnad[_i0].tx_info->tcb[_j0] = (struct bna_tcb *) malloc(_len_bnad__i0__tx_info_tcb1*sizeof(struct bna_tcb));
            for(int _j1 = 0; _j1 < _len_bnad__i0__tx_info_tcb1; _j1++) {
                int _len_bnad__i0__tx_info_tcb__j0__hw_consumer_index0 = 1;
          bnad[_i0].tx_info->tcb[_j0]->hw_consumer_index = (int *) malloc(_len_bnad__i0__tx_info_tcb__j0__hw_consumer_index0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bnad__i0__tx_info_tcb__j0__hw_consumer_index0; _j0++) {
            bnad[_i0].tx_info->tcb[_j0]->hw_consumer_index[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        bnad[_i0].tx_info->tcb[_j0]->consumer_index = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].tx_info->tcb[_j0]->producer_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bnad__i0__tx_info_tcb__j0__txq0 = 1;
          bnad[_i0].tx_info->tcb[_j0]->txq = (struct TYPE_8__ *) malloc(_len_bnad__i0__tx_info_tcb__j0__txq0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_bnad__i0__tx_info_tcb__j0__txq0; _j0++) {
            bnad[_i0].tx_info->tcb[_j0]->txq->tx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].tx_info->tcb[_j0]->txq->tx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
        bnad[_i0].tx_info->tx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bnad__i0__rx_info0 = 1;
          bnad[_i0].rx_info = (struct TYPE_12__ *) malloc(_len_bnad__i0__rx_info0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_bnad__i0__rx_info0; _j0++) {
              int _len_bnad__i0__rx_info_rx_ctrl0 = 1;
          bnad[_i0].rx_info->rx_ctrl = (struct TYPE_11__ *) malloc(_len_bnad__i0__rx_info_rx_ctrl0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_bnad__i0__rx_info_rx_ctrl0; _j0++) {
              int _len_bnad__i0__rx_info_rx_ctrl_ccb0 = 1;
          bnad[_i0].rx_info->rx_ctrl->ccb = (struct TYPE_10__ *) malloc(_len_bnad__i0__rx_info_rx_ctrl_ccb0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_bnad__i0__rx_info_rx_ctrl_ccb0; _j0++) {
              int _len_bnad__i0__rx_info_rx_ctrl_ccb_rcb0 = 1;
          bnad[_i0].rx_info->rx_ctrl->ccb->rcb = (struct bna_rcb **) malloc(_len_bnad__i0__rx_info_rx_ctrl_ccb_rcb0*sizeof(struct bna_rcb *));
          for(int _j0 = 0; _j0 < _len_bnad__i0__rx_info_rx_ctrl_ccb_rcb0; _j0++) {
            int _len_bnad__i0__rx_info_rx_ctrl_ccb_rcb1 = 1;
            bnad[_i0].rx_info->rx_ctrl->ccb->rcb[_j0] = (struct bna_rcb *) malloc(_len_bnad__i0__rx_info_rx_ctrl_ccb_rcb1*sizeof(struct bna_rcb));
            for(int _j1 = 0; _j1 < _len_bnad__i0__rx_info_rx_ctrl_ccb_rcb1; _j1++) {
              bnad[_i0].rx_info->rx_ctrl->ccb->rcb[_j0]->consumer_index = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].rx_info->rx_ctrl->ccb->rcb[_j0]->producer_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bnad__i0__rx_info_rx_ctrl_ccb_rcb__j0__rxq0 = 1;
          bnad[_i0].rx_info->rx_ctrl->ccb->rcb[_j0]->rxq = (struct TYPE_9__ *) malloc(_len_bnad__i0__rx_info_rx_ctrl_ccb_rcb__j0__rxq0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_bnad__i0__rx_info_rx_ctrl_ccb_rcb__j0__rxq0; _j0++) {
            bnad[_i0].rx_info->rx_ctrl->ccb->rcb[_j0]->rxq->rxbuf_map_failed = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].rx_info->rx_ctrl->ccb->rcb[_j0]->rxq->rxbuf_alloc_failed = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].rx_info->rx_ctrl->ccb->rcb[_j0]->rxq->rx_packets_with_error = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].rx_info->rx_ctrl->ccb->rcb[_j0]->rxq->rx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].rx_info->rx_ctrl->ccb->rcb[_j0]->rxq->rx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          int _len_bnad__i0__rx_info_rx_ctrl_ccb_hw_producer_index0 = 1;
          bnad[_i0].rx_info->rx_ctrl->ccb->hw_producer_index = (int *) malloc(_len_bnad__i0__rx_info_rx_ctrl_ccb_hw_producer_index0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bnad__i0__rx_info_rx_ctrl_ccb_hw_producer_index0; _j0++) {
            bnad[_i0].rx_info->rx_ctrl->ccb->hw_producer_index[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        bnad[_i0].rx_info->rx_ctrl->ccb->producer_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        bnad[_i0].rx_info->rx_ctrl->rx_complete = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].rx_info->rx_ctrl->rx_keep_poll = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].rx_info->rx_ctrl->rx_schedule = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].rx_info->rx_ctrl->rx_poll_ctr = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].rx_info->rx_ctrl->rx_intr_ctr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        bnad[_i0].rx_info->rx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buf0 = 100;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bnad_per_q_stats_fill(bnad,buf,bi);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bnad0; _aux++) {
          free(bnad[_aux].tx_info);
          }
          for(int _aux = 0; _aux < _len_bnad0; _aux++) {
          free(bnad[_aux].rx_info);
          }
          free(bnad);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

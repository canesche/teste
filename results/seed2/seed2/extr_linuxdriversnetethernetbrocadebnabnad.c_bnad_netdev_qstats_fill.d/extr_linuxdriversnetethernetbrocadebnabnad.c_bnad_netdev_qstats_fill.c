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
typedef  struct TYPE_16__   TYPE_8__ ;
typedef  struct TYPE_15__   TYPE_7__ ;
typedef  struct TYPE_14__   TYPE_6__ ;
typedef  struct TYPE_13__   TYPE_5__ ;
typedef  struct TYPE_12__   TYPE_4__ ;
typedef  struct TYPE_11__   TYPE_3__ ;
typedef  struct TYPE_10__   TYPE_2__ ;
typedef  struct TYPE_9__   TYPE_1__ ;

/* Type definitions */
struct rtnl_link_stats64 {int /*<<< orphan*/  tx_bytes; int /*<<< orphan*/  tx_packets; int /*<<< orphan*/  rx_bytes; int /*<<< orphan*/  rx_packets; } ;
struct bnad {int num_rx; int num_rxp_per_rx; int num_tx; int num_txq_per_tx; TYPE_8__* tx_info; TYPE_5__* rx_info; } ;
struct TYPE_16__ {TYPE_7__** tcb; } ;
struct TYPE_15__ {TYPE_6__* txq; } ;
struct TYPE_14__ {scalar_t__ tx_bytes; scalar_t__ tx_packets; } ;
struct TYPE_13__ {TYPE_4__* rx_ctrl; } ;
struct TYPE_12__ {TYPE_3__* ccb; } ;
struct TYPE_11__ {TYPE_2__** rcb; } ;
struct TYPE_10__ {TYPE_1__* rxq; } ;
struct TYPE_9__ {scalar_t__ rx_bytes; scalar_t__ rx_packets; } ;

/* Variables and functions */

void
bnad_netdev_qstats_fill(struct bnad *bnad, struct rtnl_link_stats64 *stats)
{
	int i, j;

	for (i = 0; i < bnad->num_rx; i++) {
		for (j = 0; j < bnad->num_rxp_per_rx; j++) {
			if (bnad->rx_info[i].rx_ctrl[j].ccb) {
				stats->rx_packets += bnad->rx_info[i].
				rx_ctrl[j].ccb->rcb[0]->rxq->rx_packets;
				stats->rx_bytes += bnad->rx_info[i].
					rx_ctrl[j].ccb->rcb[0]->rxq->rx_bytes;
				if (bnad->rx_info[i].rx_ctrl[j].ccb->rcb[1] &&
					bnad->rx_info[i].rx_ctrl[j].ccb->
					rcb[1]->rxq) {
					stats->rx_packets +=
						bnad->rx_info[i].rx_ctrl[j].
						ccb->rcb[1]->rxq->rx_packets;
					stats->rx_bytes +=
						bnad->rx_info[i].rx_ctrl[j].
						ccb->rcb[1]->rxq->rx_bytes;
				}
			}
		}
	}
	for (i = 0; i < bnad->num_tx; i++) {
		for (j = 0; j < bnad->num_txq_per_tx; j++) {
			if (bnad->tx_info[i].tcb[j]) {
				stats->tx_packets +=
				bnad->tx_info[i].tcb[j]->txq->tx_packets;
				stats->tx_bytes +=
					bnad->tx_info[i].tcb[j]->txq->tx_bytes;
			}
		}
	}
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
          int _len_bnad0 = 1;
          struct bnad * bnad = (struct bnad *) malloc(_len_bnad0*sizeof(struct bnad));
          for(int _i0 = 0; _i0 < _len_bnad0; _i0++) {
            bnad[_i0].num_rx = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].num_rxp_per_rx = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].num_tx = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].num_txq_per_tx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bnad__i0__tx_info0 = 1;
          bnad[_i0].tx_info = (struct TYPE_16__ *) malloc(_len_bnad__i0__tx_info0*sizeof(struct TYPE_16__));
          for(int _j0 = 0; _j0 < _len_bnad__i0__tx_info0; _j0++) {
              int _len_bnad__i0__tx_info_tcb0 = 1;
          bnad[_i0].tx_info->tcb = (struct TYPE_15__ **) malloc(_len_bnad__i0__tx_info_tcb0*sizeof(struct TYPE_15__ *));
          for(int _j0 = 0; _j0 < _len_bnad__i0__tx_info_tcb0; _j0++) {
            int _len_bnad__i0__tx_info_tcb1 = 1;
            bnad[_i0].tx_info->tcb[_j0] = (struct TYPE_15__ *) malloc(_len_bnad__i0__tx_info_tcb1*sizeof(struct TYPE_15__));
            for(int _j1 = 0; _j1 < _len_bnad__i0__tx_info_tcb1; _j1++) {
                int _len_bnad__i0__tx_info_tcb__j0__txq0 = 1;
          bnad[_i0].tx_info->tcb[_j0]->txq = (struct TYPE_14__ *) malloc(_len_bnad__i0__tx_info_tcb__j0__txq0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_bnad__i0__tx_info_tcb__j0__txq0; _j0++) {
            bnad[_i0].tx_info->tcb[_j0]->txq->tx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].tx_info->tcb[_j0]->txq->tx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int _len_bnad__i0__rx_info0 = 1;
          bnad[_i0].rx_info = (struct TYPE_13__ *) malloc(_len_bnad__i0__rx_info0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_bnad__i0__rx_info0; _j0++) {
              int _len_bnad__i0__rx_info_rx_ctrl0 = 1;
          bnad[_i0].rx_info->rx_ctrl = (struct TYPE_12__ *) malloc(_len_bnad__i0__rx_info_rx_ctrl0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_bnad__i0__rx_info_rx_ctrl0; _j0++) {
              int _len_bnad__i0__rx_info_rx_ctrl_ccb0 = 1;
          bnad[_i0].rx_info->rx_ctrl->ccb = (struct TYPE_11__ *) malloc(_len_bnad__i0__rx_info_rx_ctrl_ccb0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_bnad__i0__rx_info_rx_ctrl_ccb0; _j0++) {
              int _len_bnad__i0__rx_info_rx_ctrl_ccb_rcb0 = 1;
          bnad[_i0].rx_info->rx_ctrl->ccb->rcb = (struct TYPE_10__ **) malloc(_len_bnad__i0__rx_info_rx_ctrl_ccb_rcb0*sizeof(struct TYPE_10__ *));
          for(int _j0 = 0; _j0 < _len_bnad__i0__rx_info_rx_ctrl_ccb_rcb0; _j0++) {
            int _len_bnad__i0__rx_info_rx_ctrl_ccb_rcb1 = 1;
            bnad[_i0].rx_info->rx_ctrl->ccb->rcb[_j0] = (struct TYPE_10__ *) malloc(_len_bnad__i0__rx_info_rx_ctrl_ccb_rcb1*sizeof(struct TYPE_10__));
            for(int _j1 = 0; _j1 < _len_bnad__i0__rx_info_rx_ctrl_ccb_rcb1; _j1++) {
                int _len_bnad__i0__rx_info_rx_ctrl_ccb_rcb__j0__rxq0 = 1;
          bnad[_i0].rx_info->rx_ctrl->ccb->rcb[_j0]->rxq = (struct TYPE_9__ *) malloc(_len_bnad__i0__rx_info_rx_ctrl_ccb_rcb__j0__rxq0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_bnad__i0__rx_info_rx_ctrl_ccb_rcb__j0__rxq0; _j0++) {
            bnad[_i0].rx_info->rx_ctrl->ccb->rcb[_j0]->rxq->rx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].rx_info->rx_ctrl->ccb->rcb[_j0]->rxq->rx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          }
          }
          }
          int _len_stats0 = 1;
          struct rtnl_link_stats64 * stats = (struct rtnl_link_stats64 *) malloc(_len_stats0*sizeof(struct rtnl_link_stats64));
          for(int _i0 = 0; _i0 < _len_stats0; _i0++) {
            stats[_i0].tx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].tx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].rx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].rx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bnad_netdev_qstats_fill(bnad,stats);
          for(int _aux = 0; _aux < _len_bnad0; _aux++) {
          free(bnad[_aux].tx_info);
          }
          for(int _aux = 0; _aux < _len_bnad0; _aux++) {
          free(bnad[_aux].rx_info);
          }
          free(bnad);
          free(stats);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_bnad0 = 65025;
          struct bnad * bnad = (struct bnad *) malloc(_len_bnad0*sizeof(struct bnad));
          for(int _i0 = 0; _i0 < _len_bnad0; _i0++) {
            bnad[_i0].num_rx = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].num_rxp_per_rx = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].num_tx = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].num_txq_per_tx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bnad__i0__tx_info0 = 1;
          bnad[_i0].tx_info = (struct TYPE_16__ *) malloc(_len_bnad__i0__tx_info0*sizeof(struct TYPE_16__));
          for(int _j0 = 0; _j0 < _len_bnad__i0__tx_info0; _j0++) {
              int _len_bnad__i0__tx_info_tcb0 = 1;
          bnad[_i0].tx_info->tcb = (struct TYPE_15__ **) malloc(_len_bnad__i0__tx_info_tcb0*sizeof(struct TYPE_15__ *));
          for(int _j0 = 0; _j0 < _len_bnad__i0__tx_info_tcb0; _j0++) {
            int _len_bnad__i0__tx_info_tcb1 = 1;
            bnad[_i0].tx_info->tcb[_j0] = (struct TYPE_15__ *) malloc(_len_bnad__i0__tx_info_tcb1*sizeof(struct TYPE_15__));
            for(int _j1 = 0; _j1 < _len_bnad__i0__tx_info_tcb1; _j1++) {
                int _len_bnad__i0__tx_info_tcb__j0__txq0 = 1;
          bnad[_i0].tx_info->tcb[_j0]->txq = (struct TYPE_14__ *) malloc(_len_bnad__i0__tx_info_tcb__j0__txq0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_bnad__i0__tx_info_tcb__j0__txq0; _j0++) {
            bnad[_i0].tx_info->tcb[_j0]->txq->tx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].tx_info->tcb[_j0]->txq->tx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int _len_bnad__i0__rx_info0 = 1;
          bnad[_i0].rx_info = (struct TYPE_13__ *) malloc(_len_bnad__i0__rx_info0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_bnad__i0__rx_info0; _j0++) {
              int _len_bnad__i0__rx_info_rx_ctrl0 = 1;
          bnad[_i0].rx_info->rx_ctrl = (struct TYPE_12__ *) malloc(_len_bnad__i0__rx_info_rx_ctrl0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_bnad__i0__rx_info_rx_ctrl0; _j0++) {
              int _len_bnad__i0__rx_info_rx_ctrl_ccb0 = 1;
          bnad[_i0].rx_info->rx_ctrl->ccb = (struct TYPE_11__ *) malloc(_len_bnad__i0__rx_info_rx_ctrl_ccb0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_bnad__i0__rx_info_rx_ctrl_ccb0; _j0++) {
              int _len_bnad__i0__rx_info_rx_ctrl_ccb_rcb0 = 1;
          bnad[_i0].rx_info->rx_ctrl->ccb->rcb = (struct TYPE_10__ **) malloc(_len_bnad__i0__rx_info_rx_ctrl_ccb_rcb0*sizeof(struct TYPE_10__ *));
          for(int _j0 = 0; _j0 < _len_bnad__i0__rx_info_rx_ctrl_ccb_rcb0; _j0++) {
            int _len_bnad__i0__rx_info_rx_ctrl_ccb_rcb1 = 1;
            bnad[_i0].rx_info->rx_ctrl->ccb->rcb[_j0] = (struct TYPE_10__ *) malloc(_len_bnad__i0__rx_info_rx_ctrl_ccb_rcb1*sizeof(struct TYPE_10__));
            for(int _j1 = 0; _j1 < _len_bnad__i0__rx_info_rx_ctrl_ccb_rcb1; _j1++) {
                int _len_bnad__i0__rx_info_rx_ctrl_ccb_rcb__j0__rxq0 = 1;
          bnad[_i0].rx_info->rx_ctrl->ccb->rcb[_j0]->rxq = (struct TYPE_9__ *) malloc(_len_bnad__i0__rx_info_rx_ctrl_ccb_rcb__j0__rxq0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_bnad__i0__rx_info_rx_ctrl_ccb_rcb__j0__rxq0; _j0++) {
            bnad[_i0].rx_info->rx_ctrl->ccb->rcb[_j0]->rxq->rx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].rx_info->rx_ctrl->ccb->rcb[_j0]->rxq->rx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          }
          }
          }
          int _len_stats0 = 65025;
          struct rtnl_link_stats64 * stats = (struct rtnl_link_stats64 *) malloc(_len_stats0*sizeof(struct rtnl_link_stats64));
          for(int _i0 = 0; _i0 < _len_stats0; _i0++) {
            stats[_i0].tx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].tx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].rx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].rx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bnad_netdev_qstats_fill(bnad,stats);
          for(int _aux = 0; _aux < _len_bnad0; _aux++) {
          free(bnad[_aux].tx_info);
          }
          for(int _aux = 0; _aux < _len_bnad0; _aux++) {
          free(bnad[_aux].rx_info);
          }
          free(bnad);
          free(stats);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_bnad0 = 100;
          struct bnad * bnad = (struct bnad *) malloc(_len_bnad0*sizeof(struct bnad));
          for(int _i0 = 0; _i0 < _len_bnad0; _i0++) {
            bnad[_i0].num_rx = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].num_rxp_per_rx = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].num_tx = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].num_txq_per_tx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bnad__i0__tx_info0 = 1;
          bnad[_i0].tx_info = (struct TYPE_16__ *) malloc(_len_bnad__i0__tx_info0*sizeof(struct TYPE_16__));
          for(int _j0 = 0; _j0 < _len_bnad__i0__tx_info0; _j0++) {
              int _len_bnad__i0__tx_info_tcb0 = 1;
          bnad[_i0].tx_info->tcb = (struct TYPE_15__ **) malloc(_len_bnad__i0__tx_info_tcb0*sizeof(struct TYPE_15__ *));
          for(int _j0 = 0; _j0 < _len_bnad__i0__tx_info_tcb0; _j0++) {
            int _len_bnad__i0__tx_info_tcb1 = 1;
            bnad[_i0].tx_info->tcb[_j0] = (struct TYPE_15__ *) malloc(_len_bnad__i0__tx_info_tcb1*sizeof(struct TYPE_15__));
            for(int _j1 = 0; _j1 < _len_bnad__i0__tx_info_tcb1; _j1++) {
                int _len_bnad__i0__tx_info_tcb__j0__txq0 = 1;
          bnad[_i0].tx_info->tcb[_j0]->txq = (struct TYPE_14__ *) malloc(_len_bnad__i0__tx_info_tcb__j0__txq0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_bnad__i0__tx_info_tcb__j0__txq0; _j0++) {
            bnad[_i0].tx_info->tcb[_j0]->txq->tx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].tx_info->tcb[_j0]->txq->tx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int _len_bnad__i0__rx_info0 = 1;
          bnad[_i0].rx_info = (struct TYPE_13__ *) malloc(_len_bnad__i0__rx_info0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_bnad__i0__rx_info0; _j0++) {
              int _len_bnad__i0__rx_info_rx_ctrl0 = 1;
          bnad[_i0].rx_info->rx_ctrl = (struct TYPE_12__ *) malloc(_len_bnad__i0__rx_info_rx_ctrl0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_bnad__i0__rx_info_rx_ctrl0; _j0++) {
              int _len_bnad__i0__rx_info_rx_ctrl_ccb0 = 1;
          bnad[_i0].rx_info->rx_ctrl->ccb = (struct TYPE_11__ *) malloc(_len_bnad__i0__rx_info_rx_ctrl_ccb0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_bnad__i0__rx_info_rx_ctrl_ccb0; _j0++) {
              int _len_bnad__i0__rx_info_rx_ctrl_ccb_rcb0 = 1;
          bnad[_i0].rx_info->rx_ctrl->ccb->rcb = (struct TYPE_10__ **) malloc(_len_bnad__i0__rx_info_rx_ctrl_ccb_rcb0*sizeof(struct TYPE_10__ *));
          for(int _j0 = 0; _j0 < _len_bnad__i0__rx_info_rx_ctrl_ccb_rcb0; _j0++) {
            int _len_bnad__i0__rx_info_rx_ctrl_ccb_rcb1 = 1;
            bnad[_i0].rx_info->rx_ctrl->ccb->rcb[_j0] = (struct TYPE_10__ *) malloc(_len_bnad__i0__rx_info_rx_ctrl_ccb_rcb1*sizeof(struct TYPE_10__));
            for(int _j1 = 0; _j1 < _len_bnad__i0__rx_info_rx_ctrl_ccb_rcb1; _j1++) {
                int _len_bnad__i0__rx_info_rx_ctrl_ccb_rcb__j0__rxq0 = 1;
          bnad[_i0].rx_info->rx_ctrl->ccb->rcb[_j0]->rxq = (struct TYPE_9__ *) malloc(_len_bnad__i0__rx_info_rx_ctrl_ccb_rcb__j0__rxq0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_bnad__i0__rx_info_rx_ctrl_ccb_rcb__j0__rxq0; _j0++) {
            bnad[_i0].rx_info->rx_ctrl->ccb->rcb[_j0]->rxq->rx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        bnad[_i0].rx_info->rx_ctrl->ccb->rcb[_j0]->rxq->rx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          }
          }
          }
          int _len_stats0 = 100;
          struct rtnl_link_stats64 * stats = (struct rtnl_link_stats64 *) malloc(_len_stats0*sizeof(struct rtnl_link_stats64));
          for(int _i0 = 0; _i0 < _len_stats0; _i0++) {
            stats[_i0].tx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].tx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].rx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].rx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bnad_netdev_qstats_fill(bnad,stats);
          for(int _aux = 0; _aux < _len_bnad0; _aux++) {
          free(bnad[_aux].tx_info);
          }
          for(int _aux = 0; _aux < _len_bnad0; _aux++) {
          free(bnad[_aux].rx_info);
          }
          free(bnad);
          free(stats);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

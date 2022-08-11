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
typedef  size_t u32 ;
struct stmmac_tx_queue {scalar_t__ mss; scalar_t__ dirty_tx; scalar_t__ cur_tx; } ;
struct stmmac_rx_queue {scalar_t__ dirty_rx; scalar_t__ cur_rx; } ;
struct stmmac_priv {struct stmmac_tx_queue* tx_queue; struct stmmac_rx_queue* rx_queue; TYPE_1__* plat; } ;
struct TYPE_2__ {size_t rx_queues_to_use; size_t tx_queues_to_use; } ;

/* Variables and functions */

__attribute__((used)) static void stmmac_reset_queues_param(struct stmmac_priv *priv)
{
	u32 rx_cnt = priv->plat->rx_queues_to_use;
	u32 tx_cnt = priv->plat->tx_queues_to_use;
	u32 queue;

	for (queue = 0; queue < rx_cnt; queue++) {
		struct stmmac_rx_queue *rx_q = &priv->rx_queue[queue];

		rx_q->cur_rx = 0;
		rx_q->dirty_rx = 0;
	}

	for (queue = 0; queue < tx_cnt; queue++) {
		struct stmmac_tx_queue *tx_q = &priv->tx_queue[queue];

		tx_q->cur_tx = 0;
		tx_q->dirty_tx = 0;
		tx_q->mss = 0;
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
          int _len_priv0 = 1;
          struct stmmac_priv * priv = (struct stmmac_priv *) malloc(_len_priv0*sizeof(struct stmmac_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__tx_queue0 = 1;
          priv[_i0].tx_queue = (struct stmmac_tx_queue *) malloc(_len_priv__i0__tx_queue0*sizeof(struct stmmac_tx_queue));
          for(int _j0 = 0; _j0 < _len_priv__i0__tx_queue0; _j0++) {
            priv[_i0].tx_queue->mss = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].tx_queue->dirty_tx = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].tx_queue->cur_tx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_priv__i0__rx_queue0 = 1;
          priv[_i0].rx_queue = (struct stmmac_rx_queue *) malloc(_len_priv__i0__rx_queue0*sizeof(struct stmmac_rx_queue));
          for(int _j0 = 0; _j0 < _len_priv__i0__rx_queue0; _j0++) {
            priv[_i0].rx_queue->dirty_rx = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].rx_queue->cur_rx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_priv__i0__plat0 = 1;
          priv[_i0].plat = (struct TYPE_2__ *) malloc(_len_priv__i0__plat0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_priv__i0__plat0; _j0++) {
            priv[_i0].plat->rx_queues_to_use = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].plat->tx_queues_to_use = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          stmmac_reset_queues_param(priv);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].tx_queue);
          }
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].rx_queue);
          }
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].plat);
          }
          free(priv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_priv0 = 65025;
          struct stmmac_priv * priv = (struct stmmac_priv *) malloc(_len_priv0*sizeof(struct stmmac_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__tx_queue0 = 1;
          priv[_i0].tx_queue = (struct stmmac_tx_queue *) malloc(_len_priv__i0__tx_queue0*sizeof(struct stmmac_tx_queue));
          for(int _j0 = 0; _j0 < _len_priv__i0__tx_queue0; _j0++) {
            priv[_i0].tx_queue->mss = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].tx_queue->dirty_tx = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].tx_queue->cur_tx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_priv__i0__rx_queue0 = 1;
          priv[_i0].rx_queue = (struct stmmac_rx_queue *) malloc(_len_priv__i0__rx_queue0*sizeof(struct stmmac_rx_queue));
          for(int _j0 = 0; _j0 < _len_priv__i0__rx_queue0; _j0++) {
            priv[_i0].rx_queue->dirty_rx = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].rx_queue->cur_rx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_priv__i0__plat0 = 1;
          priv[_i0].plat = (struct TYPE_2__ *) malloc(_len_priv__i0__plat0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_priv__i0__plat0; _j0++) {
            priv[_i0].plat->rx_queues_to_use = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].plat->tx_queues_to_use = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          stmmac_reset_queues_param(priv);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].tx_queue);
          }
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].rx_queue);
          }
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].plat);
          }
          free(priv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_priv0 = 100;
          struct stmmac_priv * priv = (struct stmmac_priv *) malloc(_len_priv0*sizeof(struct stmmac_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__tx_queue0 = 1;
          priv[_i0].tx_queue = (struct stmmac_tx_queue *) malloc(_len_priv__i0__tx_queue0*sizeof(struct stmmac_tx_queue));
          for(int _j0 = 0; _j0 < _len_priv__i0__tx_queue0; _j0++) {
            priv[_i0].tx_queue->mss = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].tx_queue->dirty_tx = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].tx_queue->cur_tx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_priv__i0__rx_queue0 = 1;
          priv[_i0].rx_queue = (struct stmmac_rx_queue *) malloc(_len_priv__i0__rx_queue0*sizeof(struct stmmac_rx_queue));
          for(int _j0 = 0; _j0 < _len_priv__i0__rx_queue0; _j0++) {
            priv[_i0].rx_queue->dirty_rx = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].rx_queue->cur_rx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_priv__i0__plat0 = 1;
          priv[_i0].plat = (struct TYPE_2__ *) malloc(_len_priv__i0__plat0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_priv__i0__plat0; _j0++) {
            priv[_i0].plat->rx_queues_to_use = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].plat->tx_queues_to_use = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          stmmac_reset_queues_param(priv);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].tx_queue);
          }
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].rx_queue);
          }
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].plat);
          }
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

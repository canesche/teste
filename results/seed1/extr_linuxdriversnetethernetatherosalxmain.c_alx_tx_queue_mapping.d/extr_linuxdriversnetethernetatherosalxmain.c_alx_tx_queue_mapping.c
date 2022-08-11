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
struct sk_buff {unsigned int queue_mapping; } ;
struct alx_tx_queue {int dummy; } ;
struct alx_priv {unsigned int num_txq; TYPE_1__** qnapi; } ;
struct TYPE_2__ {struct alx_tx_queue* txq; } ;

/* Variables and functions */

__attribute__((used)) static struct alx_tx_queue *alx_tx_queue_mapping(struct alx_priv *alx,
						 struct sk_buff *skb)
{
	unsigned int r_idx = skb->queue_mapping;

	if (r_idx >= alx->num_txq)
		r_idx = r_idx % alx->num_txq;

	return alx->qnapi[r_idx]->txq;
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
          int _len_alx0 = 1;
          struct alx_priv * alx = (struct alx_priv *) malloc(_len_alx0*sizeof(struct alx_priv));
          for(int _i0 = 0; _i0 < _len_alx0; _i0++) {
            alx[_i0].num_txq = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_alx__i0__qnapi0 = 1;
          alx[_i0].qnapi = (struct TYPE_2__ **) malloc(_len_alx__i0__qnapi0*sizeof(struct TYPE_2__ *));
          for(int _j0 = 0; _j0 < _len_alx__i0__qnapi0; _j0++) {
            int _len_alx__i0__qnapi1 = 1;
            alx[_i0].qnapi[_j0] = (struct TYPE_2__ *) malloc(_len_alx__i0__qnapi1*sizeof(struct TYPE_2__));
            for(int _j1 = 0; _j1 < _len_alx__i0__qnapi1; _j1++) {
                int _len_alx__i0__qnapi__j0__txq0 = 1;
          alx[_i0].qnapi[_j0]->txq = (struct alx_tx_queue *) malloc(_len_alx__i0__qnapi__j0__txq0*sizeof(struct alx_tx_queue));
          for(int _j0 = 0; _j0 < _len_alx__i0__qnapi__j0__txq0; _j0++) {
            alx[_i0].qnapi[_j0]->txq->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int _len_skb0 = 1;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
            skb[_i0].queue_mapping = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct alx_tx_queue * benchRet = alx_tx_queue_mapping(alx,skb);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_alx0; _aux++) {
          free(*(alx[_aux].qnapi));
        free(alx[_aux].qnapi);
          }
          free(alx);
          free(skb);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_alx0 = 65025;
          struct alx_priv * alx = (struct alx_priv *) malloc(_len_alx0*sizeof(struct alx_priv));
          for(int _i0 = 0; _i0 < _len_alx0; _i0++) {
            alx[_i0].num_txq = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_alx__i0__qnapi0 = 1;
          alx[_i0].qnapi = (struct TYPE_2__ **) malloc(_len_alx__i0__qnapi0*sizeof(struct TYPE_2__ *));
          for(int _j0 = 0; _j0 < _len_alx__i0__qnapi0; _j0++) {
            int _len_alx__i0__qnapi1 = 1;
            alx[_i0].qnapi[_j0] = (struct TYPE_2__ *) malloc(_len_alx__i0__qnapi1*sizeof(struct TYPE_2__));
            for(int _j1 = 0; _j1 < _len_alx__i0__qnapi1; _j1++) {
                int _len_alx__i0__qnapi__j0__txq0 = 1;
          alx[_i0].qnapi[_j0]->txq = (struct alx_tx_queue *) malloc(_len_alx__i0__qnapi__j0__txq0*sizeof(struct alx_tx_queue));
          for(int _j0 = 0; _j0 < _len_alx__i0__qnapi__j0__txq0; _j0++) {
            alx[_i0].qnapi[_j0]->txq->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int _len_skb0 = 65025;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
            skb[_i0].queue_mapping = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct alx_tx_queue * benchRet = alx_tx_queue_mapping(alx,skb);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_alx0; _aux++) {
          free(*(alx[_aux].qnapi));
        free(alx[_aux].qnapi);
          }
          free(alx);
          free(skb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_alx0 = 100;
          struct alx_priv * alx = (struct alx_priv *) malloc(_len_alx0*sizeof(struct alx_priv));
          for(int _i0 = 0; _i0 < _len_alx0; _i0++) {
            alx[_i0].num_txq = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_alx__i0__qnapi0 = 1;
          alx[_i0].qnapi = (struct TYPE_2__ **) malloc(_len_alx__i0__qnapi0*sizeof(struct TYPE_2__ *));
          for(int _j0 = 0; _j0 < _len_alx__i0__qnapi0; _j0++) {
            int _len_alx__i0__qnapi1 = 1;
            alx[_i0].qnapi[_j0] = (struct TYPE_2__ *) malloc(_len_alx__i0__qnapi1*sizeof(struct TYPE_2__));
            for(int _j1 = 0; _j1 < _len_alx__i0__qnapi1; _j1++) {
                int _len_alx__i0__qnapi__j0__txq0 = 1;
          alx[_i0].qnapi[_j0]->txq = (struct alx_tx_queue *) malloc(_len_alx__i0__qnapi__j0__txq0*sizeof(struct alx_tx_queue));
          for(int _j0 = 0; _j0 < _len_alx__i0__qnapi__j0__txq0; _j0++) {
            alx[_i0].qnapi[_j0]->txq->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int _len_skb0 = 100;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
            skb[_i0].queue_mapping = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct alx_tx_queue * benchRet = alx_tx_queue_mapping(alx,skb);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_alx0; _aux++) {
          free(*(alx[_aux].qnapi));
        free(alx[_aux].qnapi);
          }
          free(alx);
          free(skb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

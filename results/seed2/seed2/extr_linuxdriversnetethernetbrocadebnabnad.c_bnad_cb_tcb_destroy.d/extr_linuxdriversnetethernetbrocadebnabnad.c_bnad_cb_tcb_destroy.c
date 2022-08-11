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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct bnad_tx_info {int /*<<< orphan*/ ** tcb; } ;
struct bnad {int dummy; } ;
struct bna_tcb {size_t id; int /*<<< orphan*/ * priv; TYPE_2__* txq; } ;
struct TYPE_4__ {TYPE_1__* tx; } ;
struct TYPE_3__ {scalar_t__ priv; } ;

/* Variables and functions */

__attribute__((used)) static void
bnad_cb_tcb_destroy(struct bnad *bnad, struct bna_tcb *tcb)
{
	struct bnad_tx_info *tx_info =
			(struct bnad_tx_info *)tcb->txq->tx->priv;

	tx_info->tcb[tcb->id] = NULL;
	tcb->priv = NULL;
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
            bnad[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tcb0 = 1;
          struct bna_tcb * tcb = (struct bna_tcb *) malloc(_len_tcb0*sizeof(struct bna_tcb));
          for(int _i0 = 0; _i0 < _len_tcb0; _i0++) {
            tcb[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tcb__i0__priv0 = 1;
          tcb[_i0].priv = (int *) malloc(_len_tcb__i0__priv0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tcb__i0__priv0; _j0++) {
            tcb[_i0].priv[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tcb__i0__txq0 = 1;
          tcb[_i0].txq = (struct TYPE_4__ *) malloc(_len_tcb__i0__txq0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_tcb__i0__txq0; _j0++) {
              int _len_tcb__i0__txq_tx0 = 1;
          tcb[_i0].txq->tx = (struct TYPE_3__ *) malloc(_len_tcb__i0__txq_tx0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_tcb__i0__txq_tx0; _j0++) {
            tcb[_i0].txq->tx->priv = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          bnad_cb_tcb_destroy(bnad,tcb);
          free(bnad);
          for(int _aux = 0; _aux < _len_tcb0; _aux++) {
          free(tcb[_aux].priv);
          }
          for(int _aux = 0; _aux < _len_tcb0; _aux++) {
          free(tcb[_aux].txq);
          }
          free(tcb);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_bnad0 = 65025;
          struct bnad * bnad = (struct bnad *) malloc(_len_bnad0*sizeof(struct bnad));
          for(int _i0 = 0; _i0 < _len_bnad0; _i0++) {
            bnad[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tcb0 = 65025;
          struct bna_tcb * tcb = (struct bna_tcb *) malloc(_len_tcb0*sizeof(struct bna_tcb));
          for(int _i0 = 0; _i0 < _len_tcb0; _i0++) {
            tcb[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tcb__i0__priv0 = 1;
          tcb[_i0].priv = (int *) malloc(_len_tcb__i0__priv0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tcb__i0__priv0; _j0++) {
            tcb[_i0].priv[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tcb__i0__txq0 = 1;
          tcb[_i0].txq = (struct TYPE_4__ *) malloc(_len_tcb__i0__txq0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_tcb__i0__txq0; _j0++) {
              int _len_tcb__i0__txq_tx0 = 1;
          tcb[_i0].txq->tx = (struct TYPE_3__ *) malloc(_len_tcb__i0__txq_tx0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_tcb__i0__txq_tx0; _j0++) {
            tcb[_i0].txq->tx->priv = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          bnad_cb_tcb_destroy(bnad,tcb);
          free(bnad);
          for(int _aux = 0; _aux < _len_tcb0; _aux++) {
          free(tcb[_aux].priv);
          }
          for(int _aux = 0; _aux < _len_tcb0; _aux++) {
          free(tcb[_aux].txq);
          }
          free(tcb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_bnad0 = 100;
          struct bnad * bnad = (struct bnad *) malloc(_len_bnad0*sizeof(struct bnad));
          for(int _i0 = 0; _i0 < _len_bnad0; _i0++) {
            bnad[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tcb0 = 100;
          struct bna_tcb * tcb = (struct bna_tcb *) malloc(_len_tcb0*sizeof(struct bna_tcb));
          for(int _i0 = 0; _i0 < _len_tcb0; _i0++) {
            tcb[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tcb__i0__priv0 = 1;
          tcb[_i0].priv = (int *) malloc(_len_tcb__i0__priv0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tcb__i0__priv0; _j0++) {
            tcb[_i0].priv[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tcb__i0__txq0 = 1;
          tcb[_i0].txq = (struct TYPE_4__ *) malloc(_len_tcb__i0__txq0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_tcb__i0__txq0; _j0++) {
              int _len_tcb__i0__txq_tx0 = 1;
          tcb[_i0].txq->tx = (struct TYPE_3__ *) malloc(_len_tcb__i0__txq_tx0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_tcb__i0__txq_tx0; _j0++) {
            tcb[_i0].txq->tx->priv = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          bnad_cb_tcb_destroy(bnad,tcb);
          free(bnad);
          for(int _aux = 0; _aux < _len_tcb0; _aux++) {
          free(tcb[_aux].priv);
          }
          for(int _aux = 0; _aux < _len_tcb0; _aux++) {
          free(tcb[_aux].txq);
          }
          free(tcb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

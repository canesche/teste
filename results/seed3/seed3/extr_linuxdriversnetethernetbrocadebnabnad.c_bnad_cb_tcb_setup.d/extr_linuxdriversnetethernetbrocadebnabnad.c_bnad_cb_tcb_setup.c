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
       3            linked\n\
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
struct bnad_tx_info {struct bna_tcb** tcb; } ;
struct bnad {int dummy; } ;
struct bna_tcb {size_t id; struct bna_tcb* priv; TYPE_2__* txq; } ;
struct TYPE_4__ {TYPE_1__* tx; } ;
struct TYPE_3__ {scalar_t__ priv; } ;

/* Variables and functions */

__attribute__((used)) static void
bnad_cb_tcb_setup(struct bnad *bnad, struct bna_tcb *tcb)
{
	struct bnad_tx_info *tx_info =
			(struct bnad_tx_info *)tcb->txq->tx->priv;

	tcb->priv = tcb;
	tx_info->tcb[tcb->id] = tcb;
}


// ------------------------------------------------------------------------- //

struct bna_tcb *_allocate_tcb(int length, struct bna_tcb *aux_tcb[]) {
  struct bna_tcb *walker = (struct bna_tcb *)malloc(sizeof(struct bna_tcb));

  aux_tcb[0] = walker;
walker->id = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->priv = NULL;
  int _len_walker_txq0 = 1;
  walker->txq = (struct TYPE_4__ *) malloc(_len_walker_txq0*sizeof(struct TYPE_4__));
  for(int _i0 = 0; _i0 < _len_walker_txq0; _i0++) {
      int _len_walker_txq_tx0 = 1;
  walker->txq.tx = (struct TYPE_3__ *) malloc(_len_walker_txq_tx0*sizeof(struct TYPE_3__));
  for(int _j0 = 0; _j0 < _len_walker_txq_tx0; _j0++) {
    walker->txq.tx->priv = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  }

  struct bna_tcb *head = walker;
  for(int i = 1; i < length; i++) {
    walker->priv = (struct bna_tcb *)malloc(sizeof(struct bna_tcb));
    walker = walker->priv;
    aux_tcb[i] = walker;
walker->id = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->priv = NULL;
  int _len_walker_txq0 = 1;
  walker->txq = (struct TYPE_4__ *) malloc(_len_walker_txq0*sizeof(struct TYPE_4__));
  for(int _i0 = 0; _i0 < _len_walker_txq0; _i0++) {
      int _len_walker_txq_tx0 = 1;
  walker->txq.tx = (struct TYPE_3__ *) malloc(_len_walker_txq_tx0*sizeof(struct TYPE_3__));
  for(int _j0 = 0; _j0 < _len_walker_txq_tx0; _j0++) {
    walker->txq.tx->priv = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  }
  }

  return head;
}

void _delete_tcb(struct bna_tcb *aux_tcb[], int aux_tcb_size) {
  for(int i = 0; i < aux_tcb_size; i++) 
    if(aux_tcb[i])
      free(aux_tcb[i]);
}

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
          struct bna_tcb * aux_tcb[1];
          struct bna_tcb * tcb = _allocate_tcb(1, aux_tcb);
          bnad_cb_tcb_setup(bnad,tcb);
          free(bnad);
          _delete_tcb(aux_tcb, 1);
        
        break;
    }
    // linked
    case 3:
    {
          int _len_bnad0 = 1;
          struct bnad * bnad = (struct bnad *) malloc(_len_bnad0*sizeof(struct bnad));
          for(int _i0 = 0; _i0 < _len_bnad0; _i0++) {
            bnad[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct bna_tcb * aux_tcb[10000];
          struct bna_tcb * tcb = _allocate_tcb(10000, aux_tcb);
          bnad_cb_tcb_setup(bnad,tcb);
          free(bnad);
          _delete_tcb(aux_tcb, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct bnad_rx_info {TYPE_3__* rx_ctrl; } ;
struct bnad {int dummy; } ;
struct bna_ccb {size_t id; TYPE_2__* cq; } ;
struct TYPE_6__ {int /*<<< orphan*/ * ccb; } ;
struct TYPE_5__ {TYPE_1__* rx; } ;
struct TYPE_4__ {scalar_t__ priv; } ;

/* Variables and functions */

__attribute__((used)) static void
bnad_cb_ccb_destroy(struct bnad *bnad, struct bna_ccb *ccb)
{
	struct bnad_rx_info *rx_info =
			(struct bnad_rx_info *)ccb->cq->rx->priv;

	rx_info->rx_ctrl[ccb->id].ccb = NULL;
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
          int _len_ccb0 = 1;
          struct bna_ccb * ccb = (struct bna_ccb *) malloc(_len_ccb0*sizeof(struct bna_ccb));
          for(int _i0 = 0; _i0 < _len_ccb0; _i0++) {
            ccb[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ccb__i0__cq0 = 1;
          ccb[_i0].cq = (struct TYPE_5__ *) malloc(_len_ccb__i0__cq0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_ccb__i0__cq0; _j0++) {
              int _len_ccb__i0__cq_rx0 = 1;
          ccb[_i0].cq->rx = (struct TYPE_4__ *) malloc(_len_ccb__i0__cq_rx0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ccb__i0__cq_rx0; _j0++) {
            ccb[_i0].cq->rx->priv = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          bnad_cb_ccb_destroy(bnad,ccb);
          free(bnad);
          for(int _aux = 0; _aux < _len_ccb0; _aux++) {
          free(ccb[_aux].cq);
          }
          free(ccb);
        
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
          int _len_ccb0 = 65025;
          struct bna_ccb * ccb = (struct bna_ccb *) malloc(_len_ccb0*sizeof(struct bna_ccb));
          for(int _i0 = 0; _i0 < _len_ccb0; _i0++) {
            ccb[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ccb__i0__cq0 = 1;
          ccb[_i0].cq = (struct TYPE_5__ *) malloc(_len_ccb__i0__cq0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_ccb__i0__cq0; _j0++) {
              int _len_ccb__i0__cq_rx0 = 1;
          ccb[_i0].cq->rx = (struct TYPE_4__ *) malloc(_len_ccb__i0__cq_rx0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ccb__i0__cq_rx0; _j0++) {
            ccb[_i0].cq->rx->priv = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          bnad_cb_ccb_destroy(bnad,ccb);
          free(bnad);
          for(int _aux = 0; _aux < _len_ccb0; _aux++) {
          free(ccb[_aux].cq);
          }
          free(ccb);
        
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
          int _len_ccb0 = 100;
          struct bna_ccb * ccb = (struct bna_ccb *) malloc(_len_ccb0*sizeof(struct bna_ccb));
          for(int _i0 = 0; _i0 < _len_ccb0; _i0++) {
            ccb[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ccb__i0__cq0 = 1;
          ccb[_i0].cq = (struct TYPE_5__ *) malloc(_len_ccb__i0__cq0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_ccb__i0__cq0; _j0++) {
              int _len_ccb__i0__cq_rx0 = 1;
          ccb[_i0].cq->rx = (struct TYPE_4__ *) malloc(_len_ccb__i0__cq_rx0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ccb__i0__cq_rx0; _j0++) {
            ccb[_i0].cq->rx->priv = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          bnad_cb_ccb_destroy(bnad,ccb);
          free(bnad);
          for(int _aux = 0; _aux < _len_ccb0; _aux++) {
          free(ccb[_aux].cq);
          }
          free(ccb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

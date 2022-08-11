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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct bna_rxq {int dummy; } ;
struct TYPE_6__ {struct bna_rxq* hdr; struct bna_rxq* data; } ;
struct TYPE_5__ {struct bna_rxq* small; struct bna_rxq* large; } ;
struct TYPE_7__ {int /*<<< orphan*/ * reserved; struct bna_rxq* only; } ;
struct TYPE_8__ {TYPE_2__ hds; TYPE_1__ slr; TYPE_3__ single; } ;
struct bna_rxp {int type; TYPE_4__ rxq; } ;

/* Variables and functions */
#define  BNA_RXP_HDS 130 
#define  BNA_RXP_SINGLE 129 
#define  BNA_RXP_SLR 128 

__attribute__((used)) static void
bna_rxp_add_rxqs(struct bna_rxp *rxp, struct bna_rxq *q0,
		struct bna_rxq *q1)
{
	switch (rxp->type) {
	case BNA_RXP_SINGLE:
		rxp->rxq.single.only = q0;
		rxp->rxq.single.reserved = NULL;
		break;
	case BNA_RXP_SLR:
		rxp->rxq.slr.large = q0;
		rxp->rxq.slr.small = q1;
		break;
	case BNA_RXP_HDS:
		rxp->rxq.hds.data = q0;
		rxp->rxq.hds.hdr = q1;
		break;
	default:
		break;
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
          int _len_rxp0 = 1;
          struct bna_rxp * rxp = (struct bna_rxp *) malloc(_len_rxp0*sizeof(struct bna_rxp));
          for(int _i0 = 0; _i0 < _len_rxp0; _i0++) {
            rxp[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rxp__i0__rxq_hds_hdr0 = 1;
          rxp[_i0].rxq.hds.hdr = (struct bna_rxq *) malloc(_len_rxp__i0__rxq_hds_hdr0*sizeof(struct bna_rxq));
          for(int _j0 = 0; _j0 < _len_rxp__i0__rxq_hds_hdr0; _j0++) {
            rxp[_i0].rxq.hds.hdr->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rxp__i0__rxq_hds_data0 = 1;
          rxp[_i0].rxq.hds.data = (struct bna_rxq *) malloc(_len_rxp__i0__rxq_hds_data0*sizeof(struct bna_rxq));
          for(int _j0 = 0; _j0 < _len_rxp__i0__rxq_hds_data0; _j0++) {
            rxp[_i0].rxq.hds.data->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rxp__i0__rxq_slr_small0 = 1;
          rxp[_i0].rxq.slr.small = (struct bna_rxq *) malloc(_len_rxp__i0__rxq_slr_small0*sizeof(struct bna_rxq));
          for(int _j0 = 0; _j0 < _len_rxp__i0__rxq_slr_small0; _j0++) {
            rxp[_i0].rxq.slr.small->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rxp__i0__rxq_slr_large0 = 1;
          rxp[_i0].rxq.slr.large = (struct bna_rxq *) malloc(_len_rxp__i0__rxq_slr_large0*sizeof(struct bna_rxq));
          for(int _j0 = 0; _j0 < _len_rxp__i0__rxq_slr_large0; _j0++) {
            rxp[_i0].rxq.slr.large->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rxp__i0__rxq_single_reserved0 = 1;
          rxp[_i0].rxq.single.reserved = (int *) malloc(_len_rxp__i0__rxq_single_reserved0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rxp__i0__rxq_single_reserved0; _j0++) {
            rxp[_i0].rxq.single.reserved[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rxp__i0__rxq_single_only0 = 1;
          rxp[_i0].rxq.single.only = (struct bna_rxq *) malloc(_len_rxp__i0__rxq_single_only0*sizeof(struct bna_rxq));
          for(int _j0 = 0; _j0 < _len_rxp__i0__rxq_single_only0; _j0++) {
            rxp[_i0].rxq.single.only->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_q00 = 1;
          struct bna_rxq * q0 = (struct bna_rxq *) malloc(_len_q00*sizeof(struct bna_rxq));
          for(int _i0 = 0; _i0 < _len_q00; _i0++) {
            q0[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_q10 = 1;
          struct bna_rxq * q1 = (struct bna_rxq *) malloc(_len_q10*sizeof(struct bna_rxq));
          for(int _i0 = 0; _i0 < _len_q10; _i0++) {
            q1[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bna_rxp_add_rxqs(rxp,q0,q1);
          free(rxp);
          free(q0);
          free(q1);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_rxp0 = 65025;
          struct bna_rxp * rxp = (struct bna_rxp *) malloc(_len_rxp0*sizeof(struct bna_rxp));
          for(int _i0 = 0; _i0 < _len_rxp0; _i0++) {
            rxp[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rxp__i0__rxq_hds_hdr0 = 1;
          rxp[_i0].rxq.hds.hdr = (struct bna_rxq *) malloc(_len_rxp__i0__rxq_hds_hdr0*sizeof(struct bna_rxq));
          for(int _j0 = 0; _j0 < _len_rxp__i0__rxq_hds_hdr0; _j0++) {
            rxp[_i0].rxq.hds.hdr->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rxp__i0__rxq_hds_data0 = 1;
          rxp[_i0].rxq.hds.data = (struct bna_rxq *) malloc(_len_rxp__i0__rxq_hds_data0*sizeof(struct bna_rxq));
          for(int _j0 = 0; _j0 < _len_rxp__i0__rxq_hds_data0; _j0++) {
            rxp[_i0].rxq.hds.data->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rxp__i0__rxq_slr_small0 = 1;
          rxp[_i0].rxq.slr.small = (struct bna_rxq *) malloc(_len_rxp__i0__rxq_slr_small0*sizeof(struct bna_rxq));
          for(int _j0 = 0; _j0 < _len_rxp__i0__rxq_slr_small0; _j0++) {
            rxp[_i0].rxq.slr.small->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rxp__i0__rxq_slr_large0 = 1;
          rxp[_i0].rxq.slr.large = (struct bna_rxq *) malloc(_len_rxp__i0__rxq_slr_large0*sizeof(struct bna_rxq));
          for(int _j0 = 0; _j0 < _len_rxp__i0__rxq_slr_large0; _j0++) {
            rxp[_i0].rxq.slr.large->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rxp__i0__rxq_single_reserved0 = 1;
          rxp[_i0].rxq.single.reserved = (int *) malloc(_len_rxp__i0__rxq_single_reserved0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rxp__i0__rxq_single_reserved0; _j0++) {
            rxp[_i0].rxq.single.reserved[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rxp__i0__rxq_single_only0 = 1;
          rxp[_i0].rxq.single.only = (struct bna_rxq *) malloc(_len_rxp__i0__rxq_single_only0*sizeof(struct bna_rxq));
          for(int _j0 = 0; _j0 < _len_rxp__i0__rxq_single_only0; _j0++) {
            rxp[_i0].rxq.single.only->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_q00 = 65025;
          struct bna_rxq * q0 = (struct bna_rxq *) malloc(_len_q00*sizeof(struct bna_rxq));
          for(int _i0 = 0; _i0 < _len_q00; _i0++) {
            q0[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_q10 = 65025;
          struct bna_rxq * q1 = (struct bna_rxq *) malloc(_len_q10*sizeof(struct bna_rxq));
          for(int _i0 = 0; _i0 < _len_q10; _i0++) {
            q1[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bna_rxp_add_rxqs(rxp,q0,q1);
          free(rxp);
          free(q0);
          free(q1);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_rxp0 = 100;
          struct bna_rxp * rxp = (struct bna_rxp *) malloc(_len_rxp0*sizeof(struct bna_rxp));
          for(int _i0 = 0; _i0 < _len_rxp0; _i0++) {
            rxp[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rxp__i0__rxq_hds_hdr0 = 1;
          rxp[_i0].rxq.hds.hdr = (struct bna_rxq *) malloc(_len_rxp__i0__rxq_hds_hdr0*sizeof(struct bna_rxq));
          for(int _j0 = 0; _j0 < _len_rxp__i0__rxq_hds_hdr0; _j0++) {
            rxp[_i0].rxq.hds.hdr->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rxp__i0__rxq_hds_data0 = 1;
          rxp[_i0].rxq.hds.data = (struct bna_rxq *) malloc(_len_rxp__i0__rxq_hds_data0*sizeof(struct bna_rxq));
          for(int _j0 = 0; _j0 < _len_rxp__i0__rxq_hds_data0; _j0++) {
            rxp[_i0].rxq.hds.data->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rxp__i0__rxq_slr_small0 = 1;
          rxp[_i0].rxq.slr.small = (struct bna_rxq *) malloc(_len_rxp__i0__rxq_slr_small0*sizeof(struct bna_rxq));
          for(int _j0 = 0; _j0 < _len_rxp__i0__rxq_slr_small0; _j0++) {
            rxp[_i0].rxq.slr.small->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rxp__i0__rxq_slr_large0 = 1;
          rxp[_i0].rxq.slr.large = (struct bna_rxq *) malloc(_len_rxp__i0__rxq_slr_large0*sizeof(struct bna_rxq));
          for(int _j0 = 0; _j0 < _len_rxp__i0__rxq_slr_large0; _j0++) {
            rxp[_i0].rxq.slr.large->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rxp__i0__rxq_single_reserved0 = 1;
          rxp[_i0].rxq.single.reserved = (int *) malloc(_len_rxp__i0__rxq_single_reserved0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rxp__i0__rxq_single_reserved0; _j0++) {
            rxp[_i0].rxq.single.reserved[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rxp__i0__rxq_single_only0 = 1;
          rxp[_i0].rxq.single.only = (struct bna_rxq *) malloc(_len_rxp__i0__rxq_single_only0*sizeof(struct bna_rxq));
          for(int _j0 = 0; _j0 < _len_rxp__i0__rxq_single_only0; _j0++) {
            rxp[_i0].rxq.single.only->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_q00 = 100;
          struct bna_rxq * q0 = (struct bna_rxq *) malloc(_len_q00*sizeof(struct bna_rxq));
          for(int _i0 = 0; _i0 < _len_q00; _i0++) {
            q0[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_q10 = 100;
          struct bna_rxq * q1 = (struct bna_rxq *) malloc(_len_q10*sizeof(struct bna_rxq));
          for(int _i0 = 0; _i0 < _len_q10; _i0++) {
            q1[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bna_rxp_add_rxqs(rxp,q0,q1);
          free(rxp);
          free(q0);
          free(q1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

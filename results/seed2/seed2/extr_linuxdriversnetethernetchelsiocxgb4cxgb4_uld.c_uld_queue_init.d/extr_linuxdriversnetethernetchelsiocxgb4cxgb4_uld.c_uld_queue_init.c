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
struct sge_uld_rxq_info {int /*<<< orphan*/  nciq; scalar_t__ nrxq; scalar_t__ rspq_id; } ;
struct cxgb4_lld_info {int /*<<< orphan*/  nciq; scalar_t__ ciq_ids; scalar_t__ nrxq; scalar_t__ rxq_ids; } ;
struct TYPE_2__ {struct sge_uld_rxq_info** uld_rxq_info; } ;
struct adapter {TYPE_1__ sge; } ;

/* Variables and functions */

__attribute__((used)) static void uld_queue_init(struct adapter *adap, unsigned int uld_type,
			   struct cxgb4_lld_info *lli)
{
	struct sge_uld_rxq_info *rxq_info = adap->sge.uld_rxq_info[uld_type];

	lli->rxq_ids = rxq_info->rspq_id;
	lli->nrxq = rxq_info->nrxq;
	lli->ciq_ids = rxq_info->rspq_id + rxq_info->nrxq;
	lli->nciq = rxq_info->nciq;
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
          unsigned int uld_type = 100;
          int _len_adap0 = 1;
          struct adapter * adap = (struct adapter *) malloc(_len_adap0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_adap0; _i0++) {
              int _len_adap__i0__sge_uld_rxq_info0 = 1;
          adap[_i0].sge.uld_rxq_info = (struct sge_uld_rxq_info **) malloc(_len_adap__i0__sge_uld_rxq_info0*sizeof(struct sge_uld_rxq_info *));
          for(int _j0 = 0; _j0 < _len_adap__i0__sge_uld_rxq_info0; _j0++) {
            int _len_adap__i0__sge_uld_rxq_info1 = 1;
            adap[_i0].sge.uld_rxq_info[_j0] = (struct sge_uld_rxq_info *) malloc(_len_adap__i0__sge_uld_rxq_info1*sizeof(struct sge_uld_rxq_info));
            for(int _j1 = 0; _j1 < _len_adap__i0__sge_uld_rxq_info1; _j1++) {
              adap[_i0].sge.uld_rxq_info[_j0]->nciq = ((-2 * (next_i()%2)) + 1) * next_i();
        adap[_i0].sge.uld_rxq_info[_j0]->nrxq = ((-2 * (next_i()%2)) + 1) * next_i();
        adap[_i0].sge.uld_rxq_info[_j0]->rspq_id = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_lli0 = 1;
          struct cxgb4_lld_info * lli = (struct cxgb4_lld_info *) malloc(_len_lli0*sizeof(struct cxgb4_lld_info));
          for(int _i0 = 0; _i0 < _len_lli0; _i0++) {
            lli[_i0].nciq = ((-2 * (next_i()%2)) + 1) * next_i();
        lli[_i0].ciq_ids = ((-2 * (next_i()%2)) + 1) * next_i();
        lli[_i0].nrxq = ((-2 * (next_i()%2)) + 1) * next_i();
        lli[_i0].rxq_ids = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          uld_queue_init(adap,uld_type,lli);
          free(adap);
          free(lli);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int uld_type = 255;
          int _len_adap0 = 65025;
          struct adapter * adap = (struct adapter *) malloc(_len_adap0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_adap0; _i0++) {
              int _len_adap__i0__sge_uld_rxq_info0 = 1;
          adap[_i0].sge.uld_rxq_info = (struct sge_uld_rxq_info **) malloc(_len_adap__i0__sge_uld_rxq_info0*sizeof(struct sge_uld_rxq_info *));
          for(int _j0 = 0; _j0 < _len_adap__i0__sge_uld_rxq_info0; _j0++) {
            int _len_adap__i0__sge_uld_rxq_info1 = 1;
            adap[_i0].sge.uld_rxq_info[_j0] = (struct sge_uld_rxq_info *) malloc(_len_adap__i0__sge_uld_rxq_info1*sizeof(struct sge_uld_rxq_info));
            for(int _j1 = 0; _j1 < _len_adap__i0__sge_uld_rxq_info1; _j1++) {
              adap[_i0].sge.uld_rxq_info[_j0]->nciq = ((-2 * (next_i()%2)) + 1) * next_i();
        adap[_i0].sge.uld_rxq_info[_j0]->nrxq = ((-2 * (next_i()%2)) + 1) * next_i();
        adap[_i0].sge.uld_rxq_info[_j0]->rspq_id = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_lli0 = 65025;
          struct cxgb4_lld_info * lli = (struct cxgb4_lld_info *) malloc(_len_lli0*sizeof(struct cxgb4_lld_info));
          for(int _i0 = 0; _i0 < _len_lli0; _i0++) {
            lli[_i0].nciq = ((-2 * (next_i()%2)) + 1) * next_i();
        lli[_i0].ciq_ids = ((-2 * (next_i()%2)) + 1) * next_i();
        lli[_i0].nrxq = ((-2 * (next_i()%2)) + 1) * next_i();
        lli[_i0].rxq_ids = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          uld_queue_init(adap,uld_type,lli);
          free(adap);
          free(lli);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int uld_type = 10;
          int _len_adap0 = 100;
          struct adapter * adap = (struct adapter *) malloc(_len_adap0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_adap0; _i0++) {
              int _len_adap__i0__sge_uld_rxq_info0 = 1;
          adap[_i0].sge.uld_rxq_info = (struct sge_uld_rxq_info **) malloc(_len_adap__i0__sge_uld_rxq_info0*sizeof(struct sge_uld_rxq_info *));
          for(int _j0 = 0; _j0 < _len_adap__i0__sge_uld_rxq_info0; _j0++) {
            int _len_adap__i0__sge_uld_rxq_info1 = 1;
            adap[_i0].sge.uld_rxq_info[_j0] = (struct sge_uld_rxq_info *) malloc(_len_adap__i0__sge_uld_rxq_info1*sizeof(struct sge_uld_rxq_info));
            for(int _j1 = 0; _j1 < _len_adap__i0__sge_uld_rxq_info1; _j1++) {
              adap[_i0].sge.uld_rxq_info[_j0]->nciq = ((-2 * (next_i()%2)) + 1) * next_i();
        adap[_i0].sge.uld_rxq_info[_j0]->nrxq = ((-2 * (next_i()%2)) + 1) * next_i();
        adap[_i0].sge.uld_rxq_info[_j0]->rspq_id = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_lli0 = 100;
          struct cxgb4_lld_info * lli = (struct cxgb4_lld_info *) malloc(_len_lli0*sizeof(struct cxgb4_lld_info));
          for(int _i0 = 0; _i0 < _len_lli0; _i0++) {
            lli[_i0].nciq = ((-2 * (next_i()%2)) + 1) * next_i();
        lli[_i0].ciq_ids = ((-2 * (next_i()%2)) + 1) * next_i();
        lli[_i0].nrxq = ((-2 * (next_i()%2)) + 1) * next_i();
        lli[_i0].rxq_ids = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          uld_queue_init(adap,uld_type,lli);
          free(adap);
          free(lli);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

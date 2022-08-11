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
struct TYPE_4__ {unsigned int cntxt_id; } ;
struct sge_qset {TYPE_3__* txq; TYPE_2__* fl; TYPE_1__ rspq; } ;
struct TYPE_6__ {scalar_t__ token; scalar_t__ cntxt_id; } ;
struct TYPE_5__ {int cntxt_id; } ;

/* Variables and functions */
 scalar_t__ FW_CTRL_SGEEC_START ; 
 scalar_t__ FW_CTRL_TID_START ; 
 scalar_t__ FW_OFLD_SGEEC_START ; 
 scalar_t__ FW_TUNNEL_SGEEC_START ; 
 scalar_t__ FW_TUNNEL_TID_START ; 
 size_t TXQ_CTRL ; 
 size_t TXQ_ETH ; 
 size_t TXQ_OFLD ; 

__attribute__((used)) static void init_qset_cntxt(struct sge_qset *qs, unsigned int id)
{
	qs->rspq.cntxt_id = id;
	qs->fl[0].cntxt_id = 2 * id;
	qs->fl[1].cntxt_id = 2 * id + 1;
	qs->txq[TXQ_ETH].cntxt_id = FW_TUNNEL_SGEEC_START + id;
	qs->txq[TXQ_ETH].token = FW_TUNNEL_TID_START + id;
	qs->txq[TXQ_OFLD].cntxt_id = FW_OFLD_SGEEC_START + id;
	qs->txq[TXQ_CTRL].cntxt_id = FW_CTRL_SGEEC_START + id;
	qs->txq[TXQ_CTRL].token = FW_CTRL_TID_START + id;
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
          unsigned int id = 100;
          int _len_qs0 = 1;
          struct sge_qset * qs = (struct sge_qset *) malloc(_len_qs0*sizeof(struct sge_qset));
          for(int _i0 = 0; _i0 < _len_qs0; _i0++) {
              int _len_qs__i0__txq0 = 1;
          qs[_i0].txq = (struct TYPE_6__ *) malloc(_len_qs__i0__txq0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_qs__i0__txq0; _j0++) {
            qs[_i0].txq->token = ((-2 * (next_i()%2)) + 1) * next_i();
        qs[_i0].txq->cntxt_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_qs__i0__fl0 = 1;
          qs[_i0].fl = (struct TYPE_5__ *) malloc(_len_qs__i0__fl0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_qs__i0__fl0; _j0++) {
            qs[_i0].fl->cntxt_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        qs[_i0].rspq.cntxt_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_qset_cntxt(qs,id);
          for(int _aux = 0; _aux < _len_qs0; _aux++) {
          free(qs[_aux].txq);
          }
          for(int _aux = 0; _aux < _len_qs0; _aux++) {
          free(qs[_aux].fl);
          }
          free(qs);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int id = 255;
          int _len_qs0 = 65025;
          struct sge_qset * qs = (struct sge_qset *) malloc(_len_qs0*sizeof(struct sge_qset));
          for(int _i0 = 0; _i0 < _len_qs0; _i0++) {
              int _len_qs__i0__txq0 = 1;
          qs[_i0].txq = (struct TYPE_6__ *) malloc(_len_qs__i0__txq0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_qs__i0__txq0; _j0++) {
            qs[_i0].txq->token = ((-2 * (next_i()%2)) + 1) * next_i();
        qs[_i0].txq->cntxt_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_qs__i0__fl0 = 1;
          qs[_i0].fl = (struct TYPE_5__ *) malloc(_len_qs__i0__fl0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_qs__i0__fl0; _j0++) {
            qs[_i0].fl->cntxt_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        qs[_i0].rspq.cntxt_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_qset_cntxt(qs,id);
          for(int _aux = 0; _aux < _len_qs0; _aux++) {
          free(qs[_aux].txq);
          }
          for(int _aux = 0; _aux < _len_qs0; _aux++) {
          free(qs[_aux].fl);
          }
          free(qs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int id = 10;
          int _len_qs0 = 100;
          struct sge_qset * qs = (struct sge_qset *) malloc(_len_qs0*sizeof(struct sge_qset));
          for(int _i0 = 0; _i0 < _len_qs0; _i0++) {
              int _len_qs__i0__txq0 = 1;
          qs[_i0].txq = (struct TYPE_6__ *) malloc(_len_qs__i0__txq0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_qs__i0__txq0; _j0++) {
            qs[_i0].txq->token = ((-2 * (next_i()%2)) + 1) * next_i();
        qs[_i0].txq->cntxt_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_qs__i0__fl0 = 1;
          qs[_i0].fl = (struct TYPE_5__ *) malloc(_len_qs__i0__fl0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_qs__i0__fl0; _j0++) {
            qs[_i0].fl->cntxt_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        qs[_i0].rspq.cntxt_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_qset_cntxt(qs,id);
          for(int _aux = 0; _aux < _len_qs0; _aux++) {
          free(qs[_aux].txq);
          }
          for(int _aux = 0; _aux < _len_qs0; _aux++) {
          free(qs[_aux].fl);
          }
          free(qs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

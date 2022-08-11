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
struct TYPE_8__ {size_t cons; } ;
struct qedr_qp {TYPE_4__ sq; TYPE_3__* wqe_wr_id; } ;
struct TYPE_7__ {scalar_t__ opcode; TYPE_2__* mr; } ;
struct TYPE_5__ {int /*<<< orphan*/  completed; } ;
struct TYPE_6__ {TYPE_1__ info; } ;

/* Variables and functions */
 scalar_t__ IB_WC_REG_MR ; 

__attribute__((used)) static inline void qedr_chk_if_fmr(struct qedr_qp *qp)
{
	if (qp->wqe_wr_id[qp->sq.cons].opcode == IB_WC_REG_MR)
		qp->wqe_wr_id[qp->sq.cons].mr->info.completed++;
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
          int _len_qp0 = 1;
          struct qedr_qp * qp = (struct qedr_qp *) malloc(_len_qp0*sizeof(struct qedr_qp));
          for(int _i0 = 0; _i0 < _len_qp0; _i0++) {
            qp[_i0].sq.cons = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_qp__i0__wqe_wr_id0 = 1;
          qp[_i0].wqe_wr_id = (struct TYPE_7__ *) malloc(_len_qp__i0__wqe_wr_id0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_qp__i0__wqe_wr_id0; _j0++) {
            qp[_i0].wqe_wr_id->opcode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_qp__i0__wqe_wr_id_mr0 = 1;
          qp[_i0].wqe_wr_id->mr = (struct TYPE_6__ *) malloc(_len_qp__i0__wqe_wr_id_mr0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_qp__i0__wqe_wr_id_mr0; _j0++) {
            qp[_i0].wqe_wr_id->mr->info.completed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          qedr_chk_if_fmr(qp);
          for(int _aux = 0; _aux < _len_qp0; _aux++) {
          free(qp[_aux].wqe_wr_id);
          }
          free(qp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_qp0 = 65025;
          struct qedr_qp * qp = (struct qedr_qp *) malloc(_len_qp0*sizeof(struct qedr_qp));
          for(int _i0 = 0; _i0 < _len_qp0; _i0++) {
            qp[_i0].sq.cons = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_qp__i0__wqe_wr_id0 = 1;
          qp[_i0].wqe_wr_id = (struct TYPE_7__ *) malloc(_len_qp__i0__wqe_wr_id0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_qp__i0__wqe_wr_id0; _j0++) {
            qp[_i0].wqe_wr_id->opcode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_qp__i0__wqe_wr_id_mr0 = 1;
          qp[_i0].wqe_wr_id->mr = (struct TYPE_6__ *) malloc(_len_qp__i0__wqe_wr_id_mr0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_qp__i0__wqe_wr_id_mr0; _j0++) {
            qp[_i0].wqe_wr_id->mr->info.completed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          qedr_chk_if_fmr(qp);
          for(int _aux = 0; _aux < _len_qp0; _aux++) {
          free(qp[_aux].wqe_wr_id);
          }
          free(qp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_qp0 = 100;
          struct qedr_qp * qp = (struct qedr_qp *) malloc(_len_qp0*sizeof(struct qedr_qp));
          for(int _i0 = 0; _i0 < _len_qp0; _i0++) {
            qp[_i0].sq.cons = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_qp__i0__wqe_wr_id0 = 1;
          qp[_i0].wqe_wr_id = (struct TYPE_7__ *) malloc(_len_qp__i0__wqe_wr_id0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_qp__i0__wqe_wr_id0; _j0++) {
            qp[_i0].wqe_wr_id->opcode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_qp__i0__wqe_wr_id_mr0 = 1;
          qp[_i0].wqe_wr_id->mr = (struct TYPE_6__ *) malloc(_len_qp__i0__wqe_wr_id_mr0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_qp__i0__wqe_wr_id_mr0; _j0++) {
            qp[_i0].wqe_wr_id->mr->info.completed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          qedr_chk_if_fmr(qp);
          for(int _aux = 0; _aux < _len_qp0; _aux++) {
          free(qp[_aux].wqe_wr_id);
          }
          free(qp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

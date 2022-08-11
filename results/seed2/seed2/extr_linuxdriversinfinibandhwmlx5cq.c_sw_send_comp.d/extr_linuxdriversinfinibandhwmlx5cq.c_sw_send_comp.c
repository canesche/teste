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
struct mlx5_ib_wq {unsigned int head; unsigned int tail; int last_poll; int wqe_cnt; TYPE_1__* w_list; int /*<<< orphan*/ * wrid; } ;
struct mlx5_ib_qp {int /*<<< orphan*/  ibqp; struct mlx5_ib_wq sq; } ;
struct ib_wc {int /*<<< orphan*/ * qp; int /*<<< orphan*/  vendor_err; int /*<<< orphan*/  status; int /*<<< orphan*/  wr_id; } ;
struct TYPE_2__ {int next; } ;

/* Variables and functions */
 int /*<<< orphan*/  IB_WC_WR_FLUSH_ERR ; 
 int /*<<< orphan*/  MLX5_CQE_SYNDROME_WR_FLUSH_ERR ; 

__attribute__((used)) static void sw_send_comp(struct mlx5_ib_qp *qp, int num_entries,
			 struct ib_wc *wc, int *npolled)
{
	struct mlx5_ib_wq *wq;
	unsigned int cur;
	unsigned int idx;
	int np;
	int i;

	wq = &qp->sq;
	cur = wq->head - wq->tail;
	np = *npolled;

	if (cur == 0)
		return;

	for (i = 0;  i < cur && np < num_entries; i++) {
		idx = wq->last_poll & (wq->wqe_cnt - 1);
		wc->wr_id = wq->wrid[idx];
		wc->status = IB_WC_WR_FLUSH_ERR;
		wc->vendor_err = MLX5_CQE_SYNDROME_WR_FLUSH_ERR;
		wq->tail++;
		np++;
		wc->qp = &qp->ibqp;
		wc++;
		wq->last_poll = wq->w_list[idx].next;
	}
	*npolled = np;
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
          int num_entries = 100;
          int _len_qp0 = 1;
          struct mlx5_ib_qp * qp = (struct mlx5_ib_qp *) malloc(_len_qp0*sizeof(struct mlx5_ib_qp));
          for(int _i0 = 0; _i0 < _len_qp0; _i0++) {
            qp[_i0].ibqp = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].sq.head = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].sq.tail = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].sq.last_poll = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].sq.wqe_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_qp__i0__sq_w_list0 = 1;
          qp[_i0].sq.w_list = (struct TYPE_2__ *) malloc(_len_qp__i0__sq_w_list0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_qp__i0__sq_w_list0; _j0++) {
            qp[_i0].sq.w_list->next = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_qp__i0__sq_wrid0 = 1;
          qp[_i0].sq.wrid = (int *) malloc(_len_qp__i0__sq_wrid0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_qp__i0__sq_wrid0; _j0++) {
            qp[_i0].sq.wrid[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_wc0 = 1;
          struct ib_wc * wc = (struct ib_wc *) malloc(_len_wc0*sizeof(struct ib_wc));
          for(int _i0 = 0; _i0 < _len_wc0; _i0++) {
              int _len_wc__i0__qp0 = 1;
          wc[_i0].qp = (int *) malloc(_len_wc__i0__qp0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_wc__i0__qp0; _j0++) {
            wc[_i0].qp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        wc[_i0].vendor_err = ((-2 * (next_i()%2)) + 1) * next_i();
        wc[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
        wc[_i0].wr_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_npolled0 = 1;
          int * npolled = (int *) malloc(_len_npolled0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_npolled0; _i0++) {
            npolled[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sw_send_comp(qp,num_entries,wc,npolled);
          free(qp);
          for(int _aux = 0; _aux < _len_wc0; _aux++) {
          free(wc[_aux].qp);
          }
          free(wc);
          free(npolled);
        
        break;
    }
    // big-arr
    case 1:
    {
          int num_entries = 255;
          int _len_qp0 = 65025;
          struct mlx5_ib_qp * qp = (struct mlx5_ib_qp *) malloc(_len_qp0*sizeof(struct mlx5_ib_qp));
          for(int _i0 = 0; _i0 < _len_qp0; _i0++) {
            qp[_i0].ibqp = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].sq.head = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].sq.tail = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].sq.last_poll = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].sq.wqe_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_qp__i0__sq_w_list0 = 1;
          qp[_i0].sq.w_list = (struct TYPE_2__ *) malloc(_len_qp__i0__sq_w_list0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_qp__i0__sq_w_list0; _j0++) {
            qp[_i0].sq.w_list->next = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_qp__i0__sq_wrid0 = 1;
          qp[_i0].sq.wrid = (int *) malloc(_len_qp__i0__sq_wrid0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_qp__i0__sq_wrid0; _j0++) {
            qp[_i0].sq.wrid[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_wc0 = 65025;
          struct ib_wc * wc = (struct ib_wc *) malloc(_len_wc0*sizeof(struct ib_wc));
          for(int _i0 = 0; _i0 < _len_wc0; _i0++) {
              int _len_wc__i0__qp0 = 1;
          wc[_i0].qp = (int *) malloc(_len_wc__i0__qp0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_wc__i0__qp0; _j0++) {
            wc[_i0].qp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        wc[_i0].vendor_err = ((-2 * (next_i()%2)) + 1) * next_i();
        wc[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
        wc[_i0].wr_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_npolled0 = 65025;
          int * npolled = (int *) malloc(_len_npolled0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_npolled0; _i0++) {
            npolled[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sw_send_comp(qp,num_entries,wc,npolled);
          free(qp);
          for(int _aux = 0; _aux < _len_wc0; _aux++) {
          free(wc[_aux].qp);
          }
          free(wc);
          free(npolled);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int num_entries = 10;
          int _len_qp0 = 100;
          struct mlx5_ib_qp * qp = (struct mlx5_ib_qp *) malloc(_len_qp0*sizeof(struct mlx5_ib_qp));
          for(int _i0 = 0; _i0 < _len_qp0; _i0++) {
            qp[_i0].ibqp = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].sq.head = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].sq.tail = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].sq.last_poll = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].sq.wqe_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_qp__i0__sq_w_list0 = 1;
          qp[_i0].sq.w_list = (struct TYPE_2__ *) malloc(_len_qp__i0__sq_w_list0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_qp__i0__sq_w_list0; _j0++) {
            qp[_i0].sq.w_list->next = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_qp__i0__sq_wrid0 = 1;
          qp[_i0].sq.wrid = (int *) malloc(_len_qp__i0__sq_wrid0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_qp__i0__sq_wrid0; _j0++) {
            qp[_i0].sq.wrid[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_wc0 = 100;
          struct ib_wc * wc = (struct ib_wc *) malloc(_len_wc0*sizeof(struct ib_wc));
          for(int _i0 = 0; _i0 < _len_wc0; _i0++) {
              int _len_wc__i0__qp0 = 1;
          wc[_i0].qp = (int *) malloc(_len_wc__i0__qp0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_wc__i0__qp0; _j0++) {
            wc[_i0].qp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        wc[_i0].vendor_err = ((-2 * (next_i()%2)) + 1) * next_i();
        wc[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
        wc[_i0].wr_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_npolled0 = 100;
          int * npolled = (int *) malloc(_len_npolled0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_npolled0; _i0++) {
            npolled[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sw_send_comp(qp,num_entries,wc,npolled);
          free(qp);
          for(int _aux = 0; _aux < _len_wc0; _aux++) {
          free(wc[_aux].qp);
          }
          free(wc);
          free(npolled);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

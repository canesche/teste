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
typedef  int u32 ;
typedef  int u16 ;
struct TYPE_4__ {int dbid; int max_cnt; int max_wqe_idx; } ;
struct TYPE_3__ {int dbid; int max_cnt; int max_wqe_idx; } ;
struct ocrdma_qp {int id; int max_ird; int max_ord; int dpp_enabled; TYPE_2__ rq; TYPE_1__ sq; } ;
struct ocrdma_create_qp_rsp {int qp_id; int sq_rq_id; int max_ord_ird; int dpp_response; int max_wqe_rqe; } ;
struct ib_qp_init_attr {int /*<<< orphan*/  srq; } ;

/* Variables and functions */
 int OCRDMA_CREATE_QP_RSP_DPP_CREDITS_MASK ; 
 int OCRDMA_CREATE_QP_RSP_DPP_CREDITS_SHIFT ; 
 int OCRDMA_CREATE_QP_RSP_DPP_ENABLED_MASK ; 
 int OCRDMA_CREATE_QP_RSP_DPP_PAGE_OFFSET_MASK ; 
 int OCRDMA_CREATE_QP_RSP_DPP_PAGE_OFFSET_SHIFT ; 
 int OCRDMA_CREATE_QP_RSP_MAX_IRD_MASK ; 
 int OCRDMA_CREATE_QP_RSP_MAX_ORD_SHIFT ; 
 int OCRDMA_CREATE_QP_RSP_MAX_WQE_SHIFT ; 
 int OCRDMA_CREATE_QP_RSP_QP_ID_MASK ; 
 int OCRDMA_CREATE_QP_RSP_RQ_ID_MASK ; 
 int OCRDMA_CREATE_QP_RSP_SQ_ID_SHIFT ; 

__attribute__((used)) static void ocrdma_get_create_qp_rsp(struct ocrdma_create_qp_rsp *rsp,
				     struct ocrdma_qp *qp,
				     struct ib_qp_init_attr *attrs,
				     u16 *dpp_offset, u16 *dpp_credit_lmt)
{
	u32 max_wqe_allocated, max_rqe_allocated;
	qp->id = rsp->qp_id & OCRDMA_CREATE_QP_RSP_QP_ID_MASK;
	qp->rq.dbid = rsp->sq_rq_id & OCRDMA_CREATE_QP_RSP_RQ_ID_MASK;
	qp->sq.dbid = rsp->sq_rq_id >> OCRDMA_CREATE_QP_RSP_SQ_ID_SHIFT;
	qp->max_ird = rsp->max_ord_ird & OCRDMA_CREATE_QP_RSP_MAX_IRD_MASK;
	qp->max_ord = (rsp->max_ord_ird >> OCRDMA_CREATE_QP_RSP_MAX_ORD_SHIFT);
	qp->dpp_enabled = false;
	if (rsp->dpp_response & OCRDMA_CREATE_QP_RSP_DPP_ENABLED_MASK) {
		qp->dpp_enabled = true;
		*dpp_credit_lmt = (rsp->dpp_response &
				OCRDMA_CREATE_QP_RSP_DPP_CREDITS_MASK) >>
				OCRDMA_CREATE_QP_RSP_DPP_CREDITS_SHIFT;
		*dpp_offset = (rsp->dpp_response &
				OCRDMA_CREATE_QP_RSP_DPP_PAGE_OFFSET_MASK) >>
				OCRDMA_CREATE_QP_RSP_DPP_PAGE_OFFSET_SHIFT;
	}
	max_wqe_allocated =
		rsp->max_wqe_rqe >> OCRDMA_CREATE_QP_RSP_MAX_WQE_SHIFT;
	max_wqe_allocated = 1 << max_wqe_allocated;
	max_rqe_allocated = 1 << ((u16)rsp->max_wqe_rqe);

	qp->sq.max_cnt = max_wqe_allocated;
	qp->sq.max_wqe_idx = max_wqe_allocated - 1;

	if (!attrs->srq) {
		qp->rq.max_cnt = max_rqe_allocated;
		qp->rq.max_wqe_idx = max_rqe_allocated - 1;
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
          int _len_rsp0 = 1;
          struct ocrdma_create_qp_rsp * rsp = (struct ocrdma_create_qp_rsp *) malloc(_len_rsp0*sizeof(struct ocrdma_create_qp_rsp));
          for(int _i0 = 0; _i0 < _len_rsp0; _i0++) {
            rsp[_i0].qp_id = ((-2 * (next_i()%2)) + 1) * next_i();
        rsp[_i0].sq_rq_id = ((-2 * (next_i()%2)) + 1) * next_i();
        rsp[_i0].max_ord_ird = ((-2 * (next_i()%2)) + 1) * next_i();
        rsp[_i0].dpp_response = ((-2 * (next_i()%2)) + 1) * next_i();
        rsp[_i0].max_wqe_rqe = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_qp0 = 1;
          struct ocrdma_qp * qp = (struct ocrdma_qp *) malloc(_len_qp0*sizeof(struct ocrdma_qp));
          for(int _i0 = 0; _i0 < _len_qp0; _i0++) {
            qp[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].max_ird = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].max_ord = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].dpp_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].rq.dbid = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].rq.max_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].rq.max_wqe_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].sq.dbid = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].sq.max_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].sq.max_wqe_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_attrs0 = 1;
          struct ib_qp_init_attr * attrs = (struct ib_qp_init_attr *) malloc(_len_attrs0*sizeof(struct ib_qp_init_attr));
          for(int _i0 = 0; _i0 < _len_attrs0; _i0++) {
            attrs[_i0].srq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dpp_offset0 = 1;
          int * dpp_offset = (int *) malloc(_len_dpp_offset0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dpp_offset0; _i0++) {
            dpp_offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dpp_credit_lmt0 = 1;
          int * dpp_credit_lmt = (int *) malloc(_len_dpp_credit_lmt0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dpp_credit_lmt0; _i0++) {
            dpp_credit_lmt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ocrdma_get_create_qp_rsp(rsp,qp,attrs,dpp_offset,dpp_credit_lmt);
          free(rsp);
          free(qp);
          free(attrs);
          free(dpp_offset);
          free(dpp_credit_lmt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_rsp0 = 65025;
          struct ocrdma_create_qp_rsp * rsp = (struct ocrdma_create_qp_rsp *) malloc(_len_rsp0*sizeof(struct ocrdma_create_qp_rsp));
          for(int _i0 = 0; _i0 < _len_rsp0; _i0++) {
            rsp[_i0].qp_id = ((-2 * (next_i()%2)) + 1) * next_i();
        rsp[_i0].sq_rq_id = ((-2 * (next_i()%2)) + 1) * next_i();
        rsp[_i0].max_ord_ird = ((-2 * (next_i()%2)) + 1) * next_i();
        rsp[_i0].dpp_response = ((-2 * (next_i()%2)) + 1) * next_i();
        rsp[_i0].max_wqe_rqe = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_qp0 = 65025;
          struct ocrdma_qp * qp = (struct ocrdma_qp *) malloc(_len_qp0*sizeof(struct ocrdma_qp));
          for(int _i0 = 0; _i0 < _len_qp0; _i0++) {
            qp[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].max_ird = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].max_ord = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].dpp_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].rq.dbid = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].rq.max_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].rq.max_wqe_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].sq.dbid = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].sq.max_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].sq.max_wqe_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_attrs0 = 65025;
          struct ib_qp_init_attr * attrs = (struct ib_qp_init_attr *) malloc(_len_attrs0*sizeof(struct ib_qp_init_attr));
          for(int _i0 = 0; _i0 < _len_attrs0; _i0++) {
            attrs[_i0].srq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dpp_offset0 = 65025;
          int * dpp_offset = (int *) malloc(_len_dpp_offset0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dpp_offset0; _i0++) {
            dpp_offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dpp_credit_lmt0 = 65025;
          int * dpp_credit_lmt = (int *) malloc(_len_dpp_credit_lmt0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dpp_credit_lmt0; _i0++) {
            dpp_credit_lmt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ocrdma_get_create_qp_rsp(rsp,qp,attrs,dpp_offset,dpp_credit_lmt);
          free(rsp);
          free(qp);
          free(attrs);
          free(dpp_offset);
          free(dpp_credit_lmt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_rsp0 = 100;
          struct ocrdma_create_qp_rsp * rsp = (struct ocrdma_create_qp_rsp *) malloc(_len_rsp0*sizeof(struct ocrdma_create_qp_rsp));
          for(int _i0 = 0; _i0 < _len_rsp0; _i0++) {
            rsp[_i0].qp_id = ((-2 * (next_i()%2)) + 1) * next_i();
        rsp[_i0].sq_rq_id = ((-2 * (next_i()%2)) + 1) * next_i();
        rsp[_i0].max_ord_ird = ((-2 * (next_i()%2)) + 1) * next_i();
        rsp[_i0].dpp_response = ((-2 * (next_i()%2)) + 1) * next_i();
        rsp[_i0].max_wqe_rqe = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_qp0 = 100;
          struct ocrdma_qp * qp = (struct ocrdma_qp *) malloc(_len_qp0*sizeof(struct ocrdma_qp));
          for(int _i0 = 0; _i0 < _len_qp0; _i0++) {
            qp[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].max_ird = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].max_ord = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].dpp_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].rq.dbid = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].rq.max_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].rq.max_wqe_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].sq.dbid = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].sq.max_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].sq.max_wqe_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_attrs0 = 100;
          struct ib_qp_init_attr * attrs = (struct ib_qp_init_attr *) malloc(_len_attrs0*sizeof(struct ib_qp_init_attr));
          for(int _i0 = 0; _i0 < _len_attrs0; _i0++) {
            attrs[_i0].srq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dpp_offset0 = 100;
          int * dpp_offset = (int *) malloc(_len_dpp_offset0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dpp_offset0; _i0++) {
            dpp_offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dpp_credit_lmt0 = 100;
          int * dpp_credit_lmt = (int *) malloc(_len_dpp_credit_lmt0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dpp_credit_lmt0; _i0++) {
            dpp_credit_lmt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ocrdma_get_create_qp_rsp(rsp,qp,attrs,dpp_offset,dpp_credit_lmt);
          free(rsp);
          free(qp);
          free(attrs);
          free(dpp_offset);
          free(dpp_credit_lmt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

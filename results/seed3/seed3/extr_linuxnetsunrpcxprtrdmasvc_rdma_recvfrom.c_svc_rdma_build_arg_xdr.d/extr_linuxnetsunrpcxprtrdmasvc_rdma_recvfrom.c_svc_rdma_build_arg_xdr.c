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
struct xdr_buf {int /*<<< orphan*/  len; int /*<<< orphan*/  buflen; scalar_t__ page_base; scalar_t__ page_len; TYPE_2__* tail; TYPE_1__* head; } ;
struct svc_rqst {struct xdr_buf rq_arg; } ;
struct svc_rdma_recv_ctxt {int /*<<< orphan*/  rc_byte_len; int /*<<< orphan*/  rc_recv_buf; } ;
struct TYPE_4__ {scalar_t__ iov_len; int /*<<< orphan*/ * iov_base; } ;
struct TYPE_3__ {int /*<<< orphan*/  iov_len; int /*<<< orphan*/  iov_base; } ;

/* Variables and functions */

__attribute__((used)) static void svc_rdma_build_arg_xdr(struct svc_rqst *rqstp,
				   struct svc_rdma_recv_ctxt *ctxt)
{
	struct xdr_buf *arg = &rqstp->rq_arg;

	arg->head[0].iov_base = ctxt->rc_recv_buf;
	arg->head[0].iov_len = ctxt->rc_byte_len;
	arg->tail[0].iov_base = NULL;
	arg->tail[0].iov_len = 0;
	arg->page_len = 0;
	arg->page_base = 0;
	arg->buflen = ctxt->rc_byte_len;
	arg->len = ctxt->rc_byte_len;
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
          int _len_rqstp0 = 1;
          struct svc_rqst * rqstp = (struct svc_rqst *) malloc(_len_rqstp0*sizeof(struct svc_rqst));
          for(int _i0 = 0; _i0 < _len_rqstp0; _i0++) {
            rqstp[_i0].rq_arg.len = ((-2 * (next_i()%2)) + 1) * next_i();
        rqstp[_i0].rq_arg.buflen = ((-2 * (next_i()%2)) + 1) * next_i();
        rqstp[_i0].rq_arg.page_base = ((-2 * (next_i()%2)) + 1) * next_i();
        rqstp[_i0].rq_arg.page_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rqstp__i0__rq_arg_tail0 = 1;
          rqstp[_i0].rq_arg.tail = (struct TYPE_4__ *) malloc(_len_rqstp__i0__rq_arg_tail0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_rqstp__i0__rq_arg_tail0; _j0++) {
            rqstp[_i0].rq_arg.tail->iov_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rqstp__i0__rq_arg_tail_iov_base0 = 1;
          rqstp[_i0].rq_arg.tail->iov_base = (int *) malloc(_len_rqstp__i0__rq_arg_tail_iov_base0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rqstp__i0__rq_arg_tail_iov_base0; _j0++) {
            rqstp[_i0].rq_arg.tail->iov_base[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rqstp__i0__rq_arg_head0 = 1;
          rqstp[_i0].rq_arg.head = (struct TYPE_3__ *) malloc(_len_rqstp__i0__rq_arg_head0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_rqstp__i0__rq_arg_head0; _j0++) {
            rqstp[_i0].rq_arg.head->iov_len = ((-2 * (next_i()%2)) + 1) * next_i();
        rqstp[_i0].rq_arg.head->iov_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctxt0 = 1;
          struct svc_rdma_recv_ctxt * ctxt = (struct svc_rdma_recv_ctxt *) malloc(_len_ctxt0*sizeof(struct svc_rdma_recv_ctxt));
          for(int _i0 = 0; _i0 < _len_ctxt0; _i0++) {
            ctxt[_i0].rc_byte_len = ((-2 * (next_i()%2)) + 1) * next_i();
        ctxt[_i0].rc_recv_buf = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          svc_rdma_build_arg_xdr(rqstp,ctxt);
          free(rqstp);
          free(ctxt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_rqstp0 = 65025;
          struct svc_rqst * rqstp = (struct svc_rqst *) malloc(_len_rqstp0*sizeof(struct svc_rqst));
          for(int _i0 = 0; _i0 < _len_rqstp0; _i0++) {
            rqstp[_i0].rq_arg.len = ((-2 * (next_i()%2)) + 1) * next_i();
        rqstp[_i0].rq_arg.buflen = ((-2 * (next_i()%2)) + 1) * next_i();
        rqstp[_i0].rq_arg.page_base = ((-2 * (next_i()%2)) + 1) * next_i();
        rqstp[_i0].rq_arg.page_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rqstp__i0__rq_arg_tail0 = 1;
          rqstp[_i0].rq_arg.tail = (struct TYPE_4__ *) malloc(_len_rqstp__i0__rq_arg_tail0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_rqstp__i0__rq_arg_tail0; _j0++) {
            rqstp[_i0].rq_arg.tail->iov_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rqstp__i0__rq_arg_tail_iov_base0 = 1;
          rqstp[_i0].rq_arg.tail->iov_base = (int *) malloc(_len_rqstp__i0__rq_arg_tail_iov_base0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rqstp__i0__rq_arg_tail_iov_base0; _j0++) {
            rqstp[_i0].rq_arg.tail->iov_base[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rqstp__i0__rq_arg_head0 = 1;
          rqstp[_i0].rq_arg.head = (struct TYPE_3__ *) malloc(_len_rqstp__i0__rq_arg_head0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_rqstp__i0__rq_arg_head0; _j0++) {
            rqstp[_i0].rq_arg.head->iov_len = ((-2 * (next_i()%2)) + 1) * next_i();
        rqstp[_i0].rq_arg.head->iov_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctxt0 = 65025;
          struct svc_rdma_recv_ctxt * ctxt = (struct svc_rdma_recv_ctxt *) malloc(_len_ctxt0*sizeof(struct svc_rdma_recv_ctxt));
          for(int _i0 = 0; _i0 < _len_ctxt0; _i0++) {
            ctxt[_i0].rc_byte_len = ((-2 * (next_i()%2)) + 1) * next_i();
        ctxt[_i0].rc_recv_buf = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          svc_rdma_build_arg_xdr(rqstp,ctxt);
          free(rqstp);
          free(ctxt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_rqstp0 = 100;
          struct svc_rqst * rqstp = (struct svc_rqst *) malloc(_len_rqstp0*sizeof(struct svc_rqst));
          for(int _i0 = 0; _i0 < _len_rqstp0; _i0++) {
            rqstp[_i0].rq_arg.len = ((-2 * (next_i()%2)) + 1) * next_i();
        rqstp[_i0].rq_arg.buflen = ((-2 * (next_i()%2)) + 1) * next_i();
        rqstp[_i0].rq_arg.page_base = ((-2 * (next_i()%2)) + 1) * next_i();
        rqstp[_i0].rq_arg.page_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rqstp__i0__rq_arg_tail0 = 1;
          rqstp[_i0].rq_arg.tail = (struct TYPE_4__ *) malloc(_len_rqstp__i0__rq_arg_tail0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_rqstp__i0__rq_arg_tail0; _j0++) {
            rqstp[_i0].rq_arg.tail->iov_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rqstp__i0__rq_arg_tail_iov_base0 = 1;
          rqstp[_i0].rq_arg.tail->iov_base = (int *) malloc(_len_rqstp__i0__rq_arg_tail_iov_base0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rqstp__i0__rq_arg_tail_iov_base0; _j0++) {
            rqstp[_i0].rq_arg.tail->iov_base[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rqstp__i0__rq_arg_head0 = 1;
          rqstp[_i0].rq_arg.head = (struct TYPE_3__ *) malloc(_len_rqstp__i0__rq_arg_head0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_rqstp__i0__rq_arg_head0; _j0++) {
            rqstp[_i0].rq_arg.head->iov_len = ((-2 * (next_i()%2)) + 1) * next_i();
        rqstp[_i0].rq_arg.head->iov_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctxt0 = 100;
          struct svc_rdma_recv_ctxt * ctxt = (struct svc_rdma_recv_ctxt *) malloc(_len_ctxt0*sizeof(struct svc_rdma_recv_ctxt));
          for(int _i0 = 0; _i0 < _len_ctxt0; _i0++) {
            ctxt[_i0].rc_byte_len = ((-2 * (next_i()%2)) + 1) * next_i();
        ctxt[_i0].rc_recv_buf = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          svc_rdma_build_arg_xdr(rqstp,ctxt);
          free(rqstp);
          free(ctxt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct TYPE_2__ {scalar_t__ iov_len; } ;
struct xdr_stream {int page_ptr; TYPE_1__ scratch; scalar_t__ end; scalar_t__ p; struct kvec* iov; struct xdr_buf* buf; } ;
struct xdr_buf {int pages; scalar_t__ buflen; struct kvec* head; scalar_t__ len; } ;
struct svc_rqst {int rq_page_end; scalar_t__ rq_auth_slack; struct xdr_buf rq_res; } ;
struct nfsd4_compoundres {struct xdr_stream xdr; } ;
struct kvec {scalar_t__ iov_len; scalar_t__ iov_base; } ;

/* Variables and functions */
 int PAGE_SIZE ; 

__attribute__((used)) static void svcxdr_init_encode(struct svc_rqst *rqstp,
			       struct nfsd4_compoundres *resp)
{
	struct xdr_stream *xdr = &resp->xdr;
	struct xdr_buf *buf = &rqstp->rq_res;
	struct kvec *head = buf->head;

	xdr->buf = buf;
	xdr->iov = head;
	xdr->p   = head->iov_base + head->iov_len;
	xdr->end = head->iov_base + PAGE_SIZE - rqstp->rq_auth_slack;
	/* Tail and page_len should be zero at this point: */
	buf->len = buf->head[0].iov_len;
	xdr->scratch.iov_len = 0;
	xdr->page_ptr = buf->pages - 1;
	buf->buflen = PAGE_SIZE * (1 + rqstp->rq_page_end - buf->pages)
		- rqstp->rq_auth_slack;
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
            rqstp[_i0].rq_page_end = ((-2 * (next_i()%2)) + 1) * next_i();
        rqstp[_i0].rq_auth_slack = ((-2 * (next_i()%2)) + 1) * next_i();
        rqstp[_i0].rq_res.pages = ((-2 * (next_i()%2)) + 1) * next_i();
        rqstp[_i0].rq_res.buflen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rqstp__i0__rq_res_head0 = 1;
          rqstp[_i0].rq_res.head = (struct kvec *) malloc(_len_rqstp__i0__rq_res_head0*sizeof(struct kvec));
          for(int _j0 = 0; _j0 < _len_rqstp__i0__rq_res_head0; _j0++) {
            rqstp[_i0].rq_res.head->iov_len = ((-2 * (next_i()%2)) + 1) * next_i();
        rqstp[_i0].rq_res.head->iov_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        rqstp[_i0].rq_res.len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resp0 = 1;
          struct nfsd4_compoundres * resp = (struct nfsd4_compoundres *) malloc(_len_resp0*sizeof(struct nfsd4_compoundres));
          for(int _i0 = 0; _i0 < _len_resp0; _i0++) {
            resp[_i0].xdr.page_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        resp[_i0].xdr.scratch.iov_len = ((-2 * (next_i()%2)) + 1) * next_i();
        resp[_i0].xdr.end = ((-2 * (next_i()%2)) + 1) * next_i();
        resp[_i0].xdr.p = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_resp__i0__xdr_iov0 = 1;
          resp[_i0].xdr.iov = (struct kvec *) malloc(_len_resp__i0__xdr_iov0*sizeof(struct kvec));
          for(int _j0 = 0; _j0 < _len_resp__i0__xdr_iov0; _j0++) {
            resp[_i0].xdr.iov->iov_len = ((-2 * (next_i()%2)) + 1) * next_i();
        resp[_i0].xdr.iov->iov_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resp__i0__xdr_buf0 = 1;
          resp[_i0].xdr.buf = (struct xdr_buf *) malloc(_len_resp__i0__xdr_buf0*sizeof(struct xdr_buf));
          for(int _j0 = 0; _j0 < _len_resp__i0__xdr_buf0; _j0++) {
            resp[_i0].xdr.buf->pages = ((-2 * (next_i()%2)) + 1) * next_i();
        resp[_i0].xdr.buf->buflen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_resp__i0__xdr_buf_head0 = 1;
          resp[_i0].xdr.buf->head = (struct kvec *) malloc(_len_resp__i0__xdr_buf_head0*sizeof(struct kvec));
          for(int _j0 = 0; _j0 < _len_resp__i0__xdr_buf_head0; _j0++) {
            resp[_i0].xdr.buf->head->iov_len = ((-2 * (next_i()%2)) + 1) * next_i();
        resp[_i0].xdr.buf->head->iov_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        resp[_i0].xdr.buf->len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          svcxdr_init_encode(rqstp,resp);
          free(rqstp);
          free(resp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_rqstp0 = 65025;
          struct svc_rqst * rqstp = (struct svc_rqst *) malloc(_len_rqstp0*sizeof(struct svc_rqst));
          for(int _i0 = 0; _i0 < _len_rqstp0; _i0++) {
            rqstp[_i0].rq_page_end = ((-2 * (next_i()%2)) + 1) * next_i();
        rqstp[_i0].rq_auth_slack = ((-2 * (next_i()%2)) + 1) * next_i();
        rqstp[_i0].rq_res.pages = ((-2 * (next_i()%2)) + 1) * next_i();
        rqstp[_i0].rq_res.buflen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rqstp__i0__rq_res_head0 = 1;
          rqstp[_i0].rq_res.head = (struct kvec *) malloc(_len_rqstp__i0__rq_res_head0*sizeof(struct kvec));
          for(int _j0 = 0; _j0 < _len_rqstp__i0__rq_res_head0; _j0++) {
            rqstp[_i0].rq_res.head->iov_len = ((-2 * (next_i()%2)) + 1) * next_i();
        rqstp[_i0].rq_res.head->iov_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        rqstp[_i0].rq_res.len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resp0 = 65025;
          struct nfsd4_compoundres * resp = (struct nfsd4_compoundres *) malloc(_len_resp0*sizeof(struct nfsd4_compoundres));
          for(int _i0 = 0; _i0 < _len_resp0; _i0++) {
            resp[_i0].xdr.page_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        resp[_i0].xdr.scratch.iov_len = ((-2 * (next_i()%2)) + 1) * next_i();
        resp[_i0].xdr.end = ((-2 * (next_i()%2)) + 1) * next_i();
        resp[_i0].xdr.p = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_resp__i0__xdr_iov0 = 1;
          resp[_i0].xdr.iov = (struct kvec *) malloc(_len_resp__i0__xdr_iov0*sizeof(struct kvec));
          for(int _j0 = 0; _j0 < _len_resp__i0__xdr_iov0; _j0++) {
            resp[_i0].xdr.iov->iov_len = ((-2 * (next_i()%2)) + 1) * next_i();
        resp[_i0].xdr.iov->iov_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resp__i0__xdr_buf0 = 1;
          resp[_i0].xdr.buf = (struct xdr_buf *) malloc(_len_resp__i0__xdr_buf0*sizeof(struct xdr_buf));
          for(int _j0 = 0; _j0 < _len_resp__i0__xdr_buf0; _j0++) {
            resp[_i0].xdr.buf->pages = ((-2 * (next_i()%2)) + 1) * next_i();
        resp[_i0].xdr.buf->buflen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_resp__i0__xdr_buf_head0 = 1;
          resp[_i0].xdr.buf->head = (struct kvec *) malloc(_len_resp__i0__xdr_buf_head0*sizeof(struct kvec));
          for(int _j0 = 0; _j0 < _len_resp__i0__xdr_buf_head0; _j0++) {
            resp[_i0].xdr.buf->head->iov_len = ((-2 * (next_i()%2)) + 1) * next_i();
        resp[_i0].xdr.buf->head->iov_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        resp[_i0].xdr.buf->len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          svcxdr_init_encode(rqstp,resp);
          free(rqstp);
          free(resp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_rqstp0 = 100;
          struct svc_rqst * rqstp = (struct svc_rqst *) malloc(_len_rqstp0*sizeof(struct svc_rqst));
          for(int _i0 = 0; _i0 < _len_rqstp0; _i0++) {
            rqstp[_i0].rq_page_end = ((-2 * (next_i()%2)) + 1) * next_i();
        rqstp[_i0].rq_auth_slack = ((-2 * (next_i()%2)) + 1) * next_i();
        rqstp[_i0].rq_res.pages = ((-2 * (next_i()%2)) + 1) * next_i();
        rqstp[_i0].rq_res.buflen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rqstp__i0__rq_res_head0 = 1;
          rqstp[_i0].rq_res.head = (struct kvec *) malloc(_len_rqstp__i0__rq_res_head0*sizeof(struct kvec));
          for(int _j0 = 0; _j0 < _len_rqstp__i0__rq_res_head0; _j0++) {
            rqstp[_i0].rq_res.head->iov_len = ((-2 * (next_i()%2)) + 1) * next_i();
        rqstp[_i0].rq_res.head->iov_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        rqstp[_i0].rq_res.len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resp0 = 100;
          struct nfsd4_compoundres * resp = (struct nfsd4_compoundres *) malloc(_len_resp0*sizeof(struct nfsd4_compoundres));
          for(int _i0 = 0; _i0 < _len_resp0; _i0++) {
            resp[_i0].xdr.page_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        resp[_i0].xdr.scratch.iov_len = ((-2 * (next_i()%2)) + 1) * next_i();
        resp[_i0].xdr.end = ((-2 * (next_i()%2)) + 1) * next_i();
        resp[_i0].xdr.p = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_resp__i0__xdr_iov0 = 1;
          resp[_i0].xdr.iov = (struct kvec *) malloc(_len_resp__i0__xdr_iov0*sizeof(struct kvec));
          for(int _j0 = 0; _j0 < _len_resp__i0__xdr_iov0; _j0++) {
            resp[_i0].xdr.iov->iov_len = ((-2 * (next_i()%2)) + 1) * next_i();
        resp[_i0].xdr.iov->iov_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resp__i0__xdr_buf0 = 1;
          resp[_i0].xdr.buf = (struct xdr_buf *) malloc(_len_resp__i0__xdr_buf0*sizeof(struct xdr_buf));
          for(int _j0 = 0; _j0 < _len_resp__i0__xdr_buf0; _j0++) {
            resp[_i0].xdr.buf->pages = ((-2 * (next_i()%2)) + 1) * next_i();
        resp[_i0].xdr.buf->buflen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_resp__i0__xdr_buf_head0 = 1;
          resp[_i0].xdr.buf->head = (struct kvec *) malloc(_len_resp__i0__xdr_buf_head0*sizeof(struct kvec));
          for(int _j0 = 0; _j0 < _len_resp__i0__xdr_buf_head0; _j0++) {
            resp[_i0].xdr.buf->head->iov_len = ((-2 * (next_i()%2)) + 1) * next_i();
        resp[_i0].xdr.buf->head->iov_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        resp[_i0].xdr.buf->len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          svcxdr_init_encode(rqstp,resp);
          free(rqstp);
          free(resp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

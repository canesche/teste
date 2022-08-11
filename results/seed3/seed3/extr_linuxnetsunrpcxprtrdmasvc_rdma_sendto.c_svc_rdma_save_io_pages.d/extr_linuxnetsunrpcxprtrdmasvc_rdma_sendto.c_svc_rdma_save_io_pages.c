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

/* Type definitions */
struct svc_rqst {int /*<<< orphan*/ ** rq_respages; int /*<<< orphan*/ ** rq_next_page; } ;
struct svc_rdma_send_ctxt {int sc_page_count; int /*<<< orphan*/ ** sc_pages; } ;

/* Variables and functions */

__attribute__((used)) static void svc_rdma_save_io_pages(struct svc_rqst *rqstp,
				   struct svc_rdma_send_ctxt *ctxt)
{
	int i, pages = rqstp->rq_next_page - rqstp->rq_respages;

	ctxt->sc_page_count += pages;
	for (i = 0; i < pages; i++) {
		ctxt->sc_pages[i] = rqstp->rq_respages[i];
		rqstp->rq_respages[i] = NULL;
	}

	/* Prevent svc_xprt_release from releasing pages in rq_pages */
	rqstp->rq_next_page = rqstp->rq_respages;
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
              int _len_rqstp__i0__rq_respages0 = 1;
          rqstp[_i0].rq_respages = (int **) malloc(_len_rqstp__i0__rq_respages0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_rqstp__i0__rq_respages0; _j0++) {
            int _len_rqstp__i0__rq_respages1 = 1;
            rqstp[_i0].rq_respages[_j0] = (int *) malloc(_len_rqstp__i0__rq_respages1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_rqstp__i0__rq_respages1; _j1++) {
              rqstp[_i0].rq_respages[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_rqstp__i0__rq_next_page0 = 1;
          rqstp[_i0].rq_next_page = (int **) malloc(_len_rqstp__i0__rq_next_page0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_rqstp__i0__rq_next_page0; _j0++) {
            int _len_rqstp__i0__rq_next_page1 = 1;
            rqstp[_i0].rq_next_page[_j0] = (int *) malloc(_len_rqstp__i0__rq_next_page1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_rqstp__i0__rq_next_page1; _j1++) {
              rqstp[_i0].rq_next_page[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_ctxt0 = 1;
          struct svc_rdma_send_ctxt * ctxt = (struct svc_rdma_send_ctxt *) malloc(_len_ctxt0*sizeof(struct svc_rdma_send_ctxt));
          for(int _i0 = 0; _i0 < _len_ctxt0; _i0++) {
            ctxt[_i0].sc_page_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctxt__i0__sc_pages0 = 1;
          ctxt[_i0].sc_pages = (int **) malloc(_len_ctxt__i0__sc_pages0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_ctxt__i0__sc_pages0; _j0++) {
            int _len_ctxt__i0__sc_pages1 = 1;
            ctxt[_i0].sc_pages[_j0] = (int *) malloc(_len_ctxt__i0__sc_pages1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_ctxt__i0__sc_pages1; _j1++) {
              ctxt[_i0].sc_pages[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          svc_rdma_save_io_pages(rqstp,ctxt);
          for(int _aux = 0; _aux < _len_rqstp0; _aux++) {
          free(*(rqstp[_aux].rq_respages));
        free(rqstp[_aux].rq_respages);
          }
          for(int _aux = 0; _aux < _len_rqstp0; _aux++) {
          free(*(rqstp[_aux].rq_next_page));
        free(rqstp[_aux].rq_next_page);
          }
          free(rqstp);
          for(int _aux = 0; _aux < _len_ctxt0; _aux++) {
          free(*(ctxt[_aux].sc_pages));
        free(ctxt[_aux].sc_pages);
          }
          free(ctxt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_rqstp0 = 65025;
          struct svc_rqst * rqstp = (struct svc_rqst *) malloc(_len_rqstp0*sizeof(struct svc_rqst));
          for(int _i0 = 0; _i0 < _len_rqstp0; _i0++) {
              int _len_rqstp__i0__rq_respages0 = 1;
          rqstp[_i0].rq_respages = (int **) malloc(_len_rqstp__i0__rq_respages0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_rqstp__i0__rq_respages0; _j0++) {
            int _len_rqstp__i0__rq_respages1 = 1;
            rqstp[_i0].rq_respages[_j0] = (int *) malloc(_len_rqstp__i0__rq_respages1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_rqstp__i0__rq_respages1; _j1++) {
              rqstp[_i0].rq_respages[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_rqstp__i0__rq_next_page0 = 1;
          rqstp[_i0].rq_next_page = (int **) malloc(_len_rqstp__i0__rq_next_page0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_rqstp__i0__rq_next_page0; _j0++) {
            int _len_rqstp__i0__rq_next_page1 = 1;
            rqstp[_i0].rq_next_page[_j0] = (int *) malloc(_len_rqstp__i0__rq_next_page1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_rqstp__i0__rq_next_page1; _j1++) {
              rqstp[_i0].rq_next_page[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_ctxt0 = 65025;
          struct svc_rdma_send_ctxt * ctxt = (struct svc_rdma_send_ctxt *) malloc(_len_ctxt0*sizeof(struct svc_rdma_send_ctxt));
          for(int _i0 = 0; _i0 < _len_ctxt0; _i0++) {
            ctxt[_i0].sc_page_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctxt__i0__sc_pages0 = 1;
          ctxt[_i0].sc_pages = (int **) malloc(_len_ctxt__i0__sc_pages0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_ctxt__i0__sc_pages0; _j0++) {
            int _len_ctxt__i0__sc_pages1 = 1;
            ctxt[_i0].sc_pages[_j0] = (int *) malloc(_len_ctxt__i0__sc_pages1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_ctxt__i0__sc_pages1; _j1++) {
              ctxt[_i0].sc_pages[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          svc_rdma_save_io_pages(rqstp,ctxt);
          for(int _aux = 0; _aux < _len_rqstp0; _aux++) {
          free(*(rqstp[_aux].rq_respages));
        free(rqstp[_aux].rq_respages);
          }
          for(int _aux = 0; _aux < _len_rqstp0; _aux++) {
          free(*(rqstp[_aux].rq_next_page));
        free(rqstp[_aux].rq_next_page);
          }
          free(rqstp);
          for(int _aux = 0; _aux < _len_ctxt0; _aux++) {
          free(*(ctxt[_aux].sc_pages));
        free(ctxt[_aux].sc_pages);
          }
          free(ctxt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_rqstp0 = 100;
          struct svc_rqst * rqstp = (struct svc_rqst *) malloc(_len_rqstp0*sizeof(struct svc_rqst));
          for(int _i0 = 0; _i0 < _len_rqstp0; _i0++) {
              int _len_rqstp__i0__rq_respages0 = 1;
          rqstp[_i0].rq_respages = (int **) malloc(_len_rqstp__i0__rq_respages0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_rqstp__i0__rq_respages0; _j0++) {
            int _len_rqstp__i0__rq_respages1 = 1;
            rqstp[_i0].rq_respages[_j0] = (int *) malloc(_len_rqstp__i0__rq_respages1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_rqstp__i0__rq_respages1; _j1++) {
              rqstp[_i0].rq_respages[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_rqstp__i0__rq_next_page0 = 1;
          rqstp[_i0].rq_next_page = (int **) malloc(_len_rqstp__i0__rq_next_page0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_rqstp__i0__rq_next_page0; _j0++) {
            int _len_rqstp__i0__rq_next_page1 = 1;
            rqstp[_i0].rq_next_page[_j0] = (int *) malloc(_len_rqstp__i0__rq_next_page1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_rqstp__i0__rq_next_page1; _j1++) {
              rqstp[_i0].rq_next_page[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_ctxt0 = 100;
          struct svc_rdma_send_ctxt * ctxt = (struct svc_rdma_send_ctxt *) malloc(_len_ctxt0*sizeof(struct svc_rdma_send_ctxt));
          for(int _i0 = 0; _i0 < _len_ctxt0; _i0++) {
            ctxt[_i0].sc_page_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctxt__i0__sc_pages0 = 1;
          ctxt[_i0].sc_pages = (int **) malloc(_len_ctxt__i0__sc_pages0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_ctxt__i0__sc_pages0; _j0++) {
            int _len_ctxt__i0__sc_pages1 = 1;
            ctxt[_i0].sc_pages[_j0] = (int *) malloc(_len_ctxt__i0__sc_pages1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_ctxt__i0__sc_pages1; _j1++) {
              ctxt[_i0].sc_pages[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          svc_rdma_save_io_pages(rqstp,ctxt);
          for(int _aux = 0; _aux < _len_rqstp0; _aux++) {
          free(*(rqstp[_aux].rq_respages));
        free(rqstp[_aux].rq_respages);
          }
          for(int _aux = 0; _aux < _len_rqstp0; _aux++) {
          free(*(rqstp[_aux].rq_next_page));
        free(rqstp[_aux].rq_next_page);
          }
          free(rqstp);
          for(int _aux = 0; _aux < _len_ctxt0; _aux++) {
          free(*(ctxt[_aux].sc_pages));
        free(ctxt[_aux].sc_pages);
          }
          free(ctxt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

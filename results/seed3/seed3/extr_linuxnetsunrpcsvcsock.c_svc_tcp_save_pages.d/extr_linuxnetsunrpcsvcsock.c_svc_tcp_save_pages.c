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
struct svc_sock {unsigned int sk_datalen; int /*<<< orphan*/ ** sk_pages; } ;
struct svc_rqst {int /*<<< orphan*/ ** rq_pages; } ;

/* Variables and functions */
 unsigned int PAGE_SHIFT ; 
 unsigned int PAGE_SIZE ; 

__attribute__((used)) static void svc_tcp_save_pages(struct svc_sock *svsk, struct svc_rqst *rqstp)
{
	unsigned int i, len, npages;

	if (svsk->sk_datalen == 0)
		return;
	len = svsk->sk_datalen;
	npages = (len + PAGE_SIZE - 1) >> PAGE_SHIFT;
	for (i = 0; i < npages; i++) {
		svsk->sk_pages[i] = rqstp->rq_pages[i];
		rqstp->rq_pages[i] = NULL;
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
          int _len_svsk0 = 1;
          struct svc_sock * svsk = (struct svc_sock *) malloc(_len_svsk0*sizeof(struct svc_sock));
          for(int _i0 = 0; _i0 < _len_svsk0; _i0++) {
            svsk[_i0].sk_datalen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_svsk__i0__sk_pages0 = 1;
          svsk[_i0].sk_pages = (int **) malloc(_len_svsk__i0__sk_pages0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_svsk__i0__sk_pages0; _j0++) {
            int _len_svsk__i0__sk_pages1 = 1;
            svsk[_i0].sk_pages[_j0] = (int *) malloc(_len_svsk__i0__sk_pages1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_svsk__i0__sk_pages1; _j1++) {
              svsk[_i0].sk_pages[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_rqstp0 = 1;
          struct svc_rqst * rqstp = (struct svc_rqst *) malloc(_len_rqstp0*sizeof(struct svc_rqst));
          for(int _i0 = 0; _i0 < _len_rqstp0; _i0++) {
              int _len_rqstp__i0__rq_pages0 = 1;
          rqstp[_i0].rq_pages = (int **) malloc(_len_rqstp__i0__rq_pages0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_rqstp__i0__rq_pages0; _j0++) {
            int _len_rqstp__i0__rq_pages1 = 1;
            rqstp[_i0].rq_pages[_j0] = (int *) malloc(_len_rqstp__i0__rq_pages1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_rqstp__i0__rq_pages1; _j1++) {
              rqstp[_i0].rq_pages[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          svc_tcp_save_pages(svsk,rqstp);
          for(int _aux = 0; _aux < _len_svsk0; _aux++) {
          free(*(svsk[_aux].sk_pages));
        free(svsk[_aux].sk_pages);
          }
          free(svsk);
          for(int _aux = 0; _aux < _len_rqstp0; _aux++) {
          free(*(rqstp[_aux].rq_pages));
        free(rqstp[_aux].rq_pages);
          }
          free(rqstp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_svsk0 = 65025;
          struct svc_sock * svsk = (struct svc_sock *) malloc(_len_svsk0*sizeof(struct svc_sock));
          for(int _i0 = 0; _i0 < _len_svsk0; _i0++) {
            svsk[_i0].sk_datalen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_svsk__i0__sk_pages0 = 1;
          svsk[_i0].sk_pages = (int **) malloc(_len_svsk__i0__sk_pages0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_svsk__i0__sk_pages0; _j0++) {
            int _len_svsk__i0__sk_pages1 = 1;
            svsk[_i0].sk_pages[_j0] = (int *) malloc(_len_svsk__i0__sk_pages1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_svsk__i0__sk_pages1; _j1++) {
              svsk[_i0].sk_pages[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_rqstp0 = 65025;
          struct svc_rqst * rqstp = (struct svc_rqst *) malloc(_len_rqstp0*sizeof(struct svc_rqst));
          for(int _i0 = 0; _i0 < _len_rqstp0; _i0++) {
              int _len_rqstp__i0__rq_pages0 = 1;
          rqstp[_i0].rq_pages = (int **) malloc(_len_rqstp__i0__rq_pages0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_rqstp__i0__rq_pages0; _j0++) {
            int _len_rqstp__i0__rq_pages1 = 1;
            rqstp[_i0].rq_pages[_j0] = (int *) malloc(_len_rqstp__i0__rq_pages1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_rqstp__i0__rq_pages1; _j1++) {
              rqstp[_i0].rq_pages[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          svc_tcp_save_pages(svsk,rqstp);
          for(int _aux = 0; _aux < _len_svsk0; _aux++) {
          free(*(svsk[_aux].sk_pages));
        free(svsk[_aux].sk_pages);
          }
          free(svsk);
          for(int _aux = 0; _aux < _len_rqstp0; _aux++) {
          free(*(rqstp[_aux].rq_pages));
        free(rqstp[_aux].rq_pages);
          }
          free(rqstp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_svsk0 = 100;
          struct svc_sock * svsk = (struct svc_sock *) malloc(_len_svsk0*sizeof(struct svc_sock));
          for(int _i0 = 0; _i0 < _len_svsk0; _i0++) {
            svsk[_i0].sk_datalen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_svsk__i0__sk_pages0 = 1;
          svsk[_i0].sk_pages = (int **) malloc(_len_svsk__i0__sk_pages0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_svsk__i0__sk_pages0; _j0++) {
            int _len_svsk__i0__sk_pages1 = 1;
            svsk[_i0].sk_pages[_j0] = (int *) malloc(_len_svsk__i0__sk_pages1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_svsk__i0__sk_pages1; _j1++) {
              svsk[_i0].sk_pages[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_rqstp0 = 100;
          struct svc_rqst * rqstp = (struct svc_rqst *) malloc(_len_rqstp0*sizeof(struct svc_rqst));
          for(int _i0 = 0; _i0 < _len_rqstp0; _i0++) {
              int _len_rqstp__i0__rq_pages0 = 1;
          rqstp[_i0].rq_pages = (int **) malloc(_len_rqstp__i0__rq_pages0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_rqstp__i0__rq_pages0; _j0++) {
            int _len_rqstp__i0__rq_pages1 = 1;
            rqstp[_i0].rq_pages[_j0] = (int *) malloc(_len_rqstp__i0__rq_pages1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_rqstp__i0__rq_pages1; _j1++) {
              rqstp[_i0].rq_pages[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          svc_tcp_save_pages(svsk,rqstp);
          for(int _aux = 0; _aux < _len_svsk0; _aux++) {
          free(*(svsk[_aux].sk_pages));
        free(svsk[_aux].sk_pages);
          }
          free(svsk);
          for(int _aux = 0; _aux < _len_rqstp0; _aux++) {
          free(*(rqstp[_aux].rq_pages));
        free(rqstp[_aux].rq_pages);
          }
          free(rqstp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

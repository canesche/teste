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
struct nfsd4_compoundres {int opcnt; TYPE_1__* rqstp; } ;
struct nfsd4_compoundargs {TYPE_2__* ops; } ;
struct TYPE_4__ {scalar_t__ opnum; } ;
struct TYPE_3__ {struct nfsd4_compoundargs* rq_argp; } ;

/* Variables and functions */
 scalar_t__ OP_SEQUENCE ; 

__attribute__((used)) static inline bool nfsd4_is_solo_sequence(struct nfsd4_compoundres *resp)
{
	struct nfsd4_compoundargs *args = resp->rqstp->rq_argp;
	return resp->opcnt == 1 && args->ops[0].opnum == OP_SEQUENCE;
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
          int _len_resp0 = 1;
          struct nfsd4_compoundres * resp = (struct nfsd4_compoundres *) malloc(_len_resp0*sizeof(struct nfsd4_compoundres));
          for(int _i0 = 0; _i0 < _len_resp0; _i0++) {
            resp[_i0].opcnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_resp__i0__rqstp0 = 1;
          resp[_i0].rqstp = (struct TYPE_3__ *) malloc(_len_resp__i0__rqstp0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_resp__i0__rqstp0; _j0++) {
              int _len_resp__i0__rqstp_rq_argp0 = 1;
          resp[_i0].rqstp->rq_argp = (struct nfsd4_compoundargs *) malloc(_len_resp__i0__rqstp_rq_argp0*sizeof(struct nfsd4_compoundargs));
          for(int _j0 = 0; _j0 < _len_resp__i0__rqstp_rq_argp0; _j0++) {
              int _len_resp__i0__rqstp_rq_argp_ops0 = 1;
          resp[_i0].rqstp->rq_argp->ops = (struct TYPE_4__ *) malloc(_len_resp__i0__rqstp_rq_argp_ops0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_resp__i0__rqstp_rq_argp_ops0; _j0++) {
            resp[_i0].rqstp->rq_argp->ops->opnum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = nfsd4_is_solo_sequence(resp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_resp0; _aux++) {
          free(resp[_aux].rqstp);
          }
          free(resp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_resp0 = 65025;
          struct nfsd4_compoundres * resp = (struct nfsd4_compoundres *) malloc(_len_resp0*sizeof(struct nfsd4_compoundres));
          for(int _i0 = 0; _i0 < _len_resp0; _i0++) {
            resp[_i0].opcnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_resp__i0__rqstp0 = 1;
          resp[_i0].rqstp = (struct TYPE_3__ *) malloc(_len_resp__i0__rqstp0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_resp__i0__rqstp0; _j0++) {
              int _len_resp__i0__rqstp_rq_argp0 = 1;
          resp[_i0].rqstp->rq_argp = (struct nfsd4_compoundargs *) malloc(_len_resp__i0__rqstp_rq_argp0*sizeof(struct nfsd4_compoundargs));
          for(int _j0 = 0; _j0 < _len_resp__i0__rqstp_rq_argp0; _j0++) {
              int _len_resp__i0__rqstp_rq_argp_ops0 = 1;
          resp[_i0].rqstp->rq_argp->ops = (struct TYPE_4__ *) malloc(_len_resp__i0__rqstp_rq_argp_ops0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_resp__i0__rqstp_rq_argp_ops0; _j0++) {
            resp[_i0].rqstp->rq_argp->ops->opnum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = nfsd4_is_solo_sequence(resp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_resp0; _aux++) {
          free(resp[_aux].rqstp);
          }
          free(resp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_resp0 = 100;
          struct nfsd4_compoundres * resp = (struct nfsd4_compoundres *) malloc(_len_resp0*sizeof(struct nfsd4_compoundres));
          for(int _i0 = 0; _i0 < _len_resp0; _i0++) {
            resp[_i0].opcnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_resp__i0__rqstp0 = 1;
          resp[_i0].rqstp = (struct TYPE_3__ *) malloc(_len_resp__i0__rqstp0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_resp__i0__rqstp0; _j0++) {
              int _len_resp__i0__rqstp_rq_argp0 = 1;
          resp[_i0].rqstp->rq_argp = (struct nfsd4_compoundargs *) malloc(_len_resp__i0__rqstp_rq_argp0*sizeof(struct nfsd4_compoundargs));
          for(int _j0 = 0; _j0 < _len_resp__i0__rqstp_rq_argp0; _j0++) {
              int _len_resp__i0__rqstp_rq_argp_ops0 = 1;
          resp[_i0].rqstp->rq_argp->ops = (struct TYPE_4__ *) malloc(_len_resp__i0__rqstp_rq_argp_ops0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_resp__i0__rqstp_rq_argp_ops0; _j0++) {
            resp[_i0].rqstp->rq_argp->ops->opnum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = nfsd4_is_solo_sequence(resp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_resp0; _aux++) {
          free(resp[_aux].rqstp);
          }
          free(resp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  X509_REQ ;
typedef  int /*<<< orphan*/  X509_CRL ;
struct TYPE_3__ {int flags; int /*<<< orphan*/ * subject_req; int /*<<< orphan*/ * crl; int /*<<< orphan*/ * subject_cert; int /*<<< orphan*/ * issuer_cert; } ;
typedef  TYPE_1__ X509V3_CTX ;
typedef  int /*<<< orphan*/  X509 ;

/* Variables and functions */

void X509V3_set_ctx(X509V3_CTX *ctx, X509 *issuer, X509 *subj, X509_REQ *req,
                    X509_CRL *crl, int flags)
{
    ctx->issuer_cert = issuer;
    ctx->subject_cert = subj;
    ctx->crl = crl;
    ctx->subject_req = req;
    ctx->flags = flags;
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
          int flags = 100;
          int _len_ctx0 = 1;
          struct TYPE_3__ * ctx = (struct TYPE_3__ *) malloc(_len_ctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__subject_req0 = 1;
          ctx[_i0].subject_req = (int *) malloc(_len_ctx__i0__subject_req0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__subject_req0; _j0++) {
            ctx[_i0].subject_req[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__crl0 = 1;
          ctx[_i0].crl = (int *) malloc(_len_ctx__i0__crl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__crl0; _j0++) {
            ctx[_i0].crl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__subject_cert0 = 1;
          ctx[_i0].subject_cert = (int *) malloc(_len_ctx__i0__subject_cert0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__subject_cert0; _j0++) {
            ctx[_i0].subject_cert[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__issuer_cert0 = 1;
          ctx[_i0].issuer_cert = (int *) malloc(_len_ctx__i0__issuer_cert0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__issuer_cert0; _j0++) {
            ctx[_i0].issuer_cert[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_issuer0 = 1;
          int * issuer = (int *) malloc(_len_issuer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_issuer0; _i0++) {
            issuer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_subj0 = 1;
          int * subj = (int *) malloc(_len_subj0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_subj0; _i0++) {
            subj[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_req0 = 1;
          int * req = (int *) malloc(_len_req0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_crl0 = 1;
          int * crl = (int *) malloc(_len_crl0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_crl0; _i0++) {
            crl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          X509V3_set_ctx(ctx,issuer,subj,req,crl,flags);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].subject_req);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].crl);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].subject_cert);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].issuer_cert);
          }
          free(ctx);
          free(issuer);
          free(subj);
          free(req);
          free(crl);
        
        break;
    }
    // big-arr
    case 1:
    {
          int flags = 255;
          int _len_ctx0 = 65025;
          struct TYPE_3__ * ctx = (struct TYPE_3__ *) malloc(_len_ctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__subject_req0 = 1;
          ctx[_i0].subject_req = (int *) malloc(_len_ctx__i0__subject_req0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__subject_req0; _j0++) {
            ctx[_i0].subject_req[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__crl0 = 1;
          ctx[_i0].crl = (int *) malloc(_len_ctx__i0__crl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__crl0; _j0++) {
            ctx[_i0].crl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__subject_cert0 = 1;
          ctx[_i0].subject_cert = (int *) malloc(_len_ctx__i0__subject_cert0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__subject_cert0; _j0++) {
            ctx[_i0].subject_cert[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__issuer_cert0 = 1;
          ctx[_i0].issuer_cert = (int *) malloc(_len_ctx__i0__issuer_cert0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__issuer_cert0; _j0++) {
            ctx[_i0].issuer_cert[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_issuer0 = 65025;
          int * issuer = (int *) malloc(_len_issuer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_issuer0; _i0++) {
            issuer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_subj0 = 65025;
          int * subj = (int *) malloc(_len_subj0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_subj0; _i0++) {
            subj[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_req0 = 65025;
          int * req = (int *) malloc(_len_req0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_crl0 = 65025;
          int * crl = (int *) malloc(_len_crl0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_crl0; _i0++) {
            crl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          X509V3_set_ctx(ctx,issuer,subj,req,crl,flags);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].subject_req);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].crl);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].subject_cert);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].issuer_cert);
          }
          free(ctx);
          free(issuer);
          free(subj);
          free(req);
          free(crl);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int flags = 10;
          int _len_ctx0 = 100;
          struct TYPE_3__ * ctx = (struct TYPE_3__ *) malloc(_len_ctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__subject_req0 = 1;
          ctx[_i0].subject_req = (int *) malloc(_len_ctx__i0__subject_req0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__subject_req0; _j0++) {
            ctx[_i0].subject_req[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__crl0 = 1;
          ctx[_i0].crl = (int *) malloc(_len_ctx__i0__crl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__crl0; _j0++) {
            ctx[_i0].crl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__subject_cert0 = 1;
          ctx[_i0].subject_cert = (int *) malloc(_len_ctx__i0__subject_cert0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__subject_cert0; _j0++) {
            ctx[_i0].subject_cert[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__issuer_cert0 = 1;
          ctx[_i0].issuer_cert = (int *) malloc(_len_ctx__i0__issuer_cert0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__issuer_cert0; _j0++) {
            ctx[_i0].issuer_cert[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_issuer0 = 100;
          int * issuer = (int *) malloc(_len_issuer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_issuer0; _i0++) {
            issuer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_subj0 = 100;
          int * subj = (int *) malloc(_len_subj0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_subj0; _i0++) {
            subj[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_req0 = 100;
          int * req = (int *) malloc(_len_req0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_crl0 = 100;
          int * crl = (int *) malloc(_len_crl0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_crl0; _i0++) {
            crl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          X509V3_set_ctx(ctx,issuer,subj,req,crl,flags);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].subject_req);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].crl);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].subject_cert);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].issuer_cert);
          }
          free(ctx);
          free(issuer);
          free(subj);
          free(req);
          free(crl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

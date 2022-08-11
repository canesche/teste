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
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {int /*<<< orphan*/ * pvfy_flags; int /*<<< orphan*/ * pcert_flags; int /*<<< orphan*/ * max_version; int /*<<< orphan*/ * min_version; int /*<<< orphan*/ * poptions; int /*<<< orphan*/ * ssl; TYPE_2__* ctx; } ;
struct TYPE_7__ {int /*<<< orphan*/  verify_mode; TYPE_1__* cert; int /*<<< orphan*/  max_proto_version; int /*<<< orphan*/  min_proto_version; int /*<<< orphan*/  options; } ;
struct TYPE_6__ {int /*<<< orphan*/  cert_flags; } ;
typedef  TYPE_2__ SSL_CTX ;
typedef  TYPE_3__ SSL_CONF_CTX ;

/* Variables and functions */

void SSL_CONF_CTX_set_ssl_ctx(SSL_CONF_CTX *cctx, SSL_CTX *ctx)
{
    cctx->ctx = ctx;
    cctx->ssl = NULL;
    if (ctx) {
        cctx->poptions = &ctx->options;
        cctx->min_version = &ctx->min_proto_version;
        cctx->max_version = &ctx->max_proto_version;
        cctx->pcert_flags = &ctx->cert->cert_flags;
        cctx->pvfy_flags = &ctx->verify_mode;
    } else {
        cctx->poptions = NULL;
        cctx->min_version = NULL;
        cctx->max_version = NULL;
        cctx->pcert_flags = NULL;
        cctx->pvfy_flags = NULL;
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
          int _len_cctx0 = 1;
          struct TYPE_8__ * cctx = (struct TYPE_8__ *) malloc(_len_cctx0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_cctx0; _i0++) {
              int _len_cctx__i0__pvfy_flags0 = 1;
          cctx[_i0].pvfy_flags = (int *) malloc(_len_cctx__i0__pvfy_flags0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cctx__i0__pvfy_flags0; _j0++) {
            cctx[_i0].pvfy_flags[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cctx__i0__pcert_flags0 = 1;
          cctx[_i0].pcert_flags = (int *) malloc(_len_cctx__i0__pcert_flags0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cctx__i0__pcert_flags0; _j0++) {
            cctx[_i0].pcert_flags[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cctx__i0__max_version0 = 1;
          cctx[_i0].max_version = (int *) malloc(_len_cctx__i0__max_version0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cctx__i0__max_version0; _j0++) {
            cctx[_i0].max_version[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cctx__i0__min_version0 = 1;
          cctx[_i0].min_version = (int *) malloc(_len_cctx__i0__min_version0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cctx__i0__min_version0; _j0++) {
            cctx[_i0].min_version[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cctx__i0__poptions0 = 1;
          cctx[_i0].poptions = (int *) malloc(_len_cctx__i0__poptions0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cctx__i0__poptions0; _j0++) {
            cctx[_i0].poptions[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cctx__i0__ssl0 = 1;
          cctx[_i0].ssl = (int *) malloc(_len_cctx__i0__ssl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cctx__i0__ssl0; _j0++) {
            cctx[_i0].ssl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cctx__i0__ctx0 = 1;
          cctx[_i0].ctx = (struct TYPE_7__ *) malloc(_len_cctx__i0__ctx0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_cctx__i0__ctx0; _j0++) {
            cctx[_i0].ctx->verify_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cctx__i0__ctx_cert0 = 1;
          cctx[_i0].ctx->cert = (struct TYPE_6__ *) malloc(_len_cctx__i0__ctx_cert0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_cctx__i0__ctx_cert0; _j0++) {
            cctx[_i0].ctx->cert->cert_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cctx[_i0].ctx->max_proto_version = ((-2 * (next_i()%2)) + 1) * next_i();
        cctx[_i0].ctx->min_proto_version = ((-2 * (next_i()%2)) + 1) * next_i();
        cctx[_i0].ctx->options = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 1;
          struct TYPE_7__ * ctx = (struct TYPE_7__ *) malloc(_len_ctx0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].verify_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__cert0 = 1;
          ctx[_i0].cert = (struct TYPE_6__ *) malloc(_len_ctx__i0__cert0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__cert0; _j0++) {
            ctx[_i0].cert->cert_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].max_proto_version = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].min_proto_version = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].options = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          SSL_CONF_CTX_set_ssl_ctx(cctx,ctx);
          for(int _aux = 0; _aux < _len_cctx0; _aux++) {
          free(cctx[_aux].pvfy_flags);
          }
          for(int _aux = 0; _aux < _len_cctx0; _aux++) {
          free(cctx[_aux].pcert_flags);
          }
          for(int _aux = 0; _aux < _len_cctx0; _aux++) {
          free(cctx[_aux].max_version);
          }
          for(int _aux = 0; _aux < _len_cctx0; _aux++) {
          free(cctx[_aux].min_version);
          }
          for(int _aux = 0; _aux < _len_cctx0; _aux++) {
          free(cctx[_aux].poptions);
          }
          for(int _aux = 0; _aux < _len_cctx0; _aux++) {
          free(cctx[_aux].ssl);
          }
          for(int _aux = 0; _aux < _len_cctx0; _aux++) {
          free(cctx[_aux].ctx);
          }
          free(cctx);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].cert);
          }
          free(ctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cctx0 = 65025;
          struct TYPE_8__ * cctx = (struct TYPE_8__ *) malloc(_len_cctx0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_cctx0; _i0++) {
              int _len_cctx__i0__pvfy_flags0 = 1;
          cctx[_i0].pvfy_flags = (int *) malloc(_len_cctx__i0__pvfy_flags0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cctx__i0__pvfy_flags0; _j0++) {
            cctx[_i0].pvfy_flags[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cctx__i0__pcert_flags0 = 1;
          cctx[_i0].pcert_flags = (int *) malloc(_len_cctx__i0__pcert_flags0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cctx__i0__pcert_flags0; _j0++) {
            cctx[_i0].pcert_flags[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cctx__i0__max_version0 = 1;
          cctx[_i0].max_version = (int *) malloc(_len_cctx__i0__max_version0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cctx__i0__max_version0; _j0++) {
            cctx[_i0].max_version[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cctx__i0__min_version0 = 1;
          cctx[_i0].min_version = (int *) malloc(_len_cctx__i0__min_version0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cctx__i0__min_version0; _j0++) {
            cctx[_i0].min_version[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cctx__i0__poptions0 = 1;
          cctx[_i0].poptions = (int *) malloc(_len_cctx__i0__poptions0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cctx__i0__poptions0; _j0++) {
            cctx[_i0].poptions[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cctx__i0__ssl0 = 1;
          cctx[_i0].ssl = (int *) malloc(_len_cctx__i0__ssl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cctx__i0__ssl0; _j0++) {
            cctx[_i0].ssl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cctx__i0__ctx0 = 1;
          cctx[_i0].ctx = (struct TYPE_7__ *) malloc(_len_cctx__i0__ctx0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_cctx__i0__ctx0; _j0++) {
            cctx[_i0].ctx->verify_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cctx__i0__ctx_cert0 = 1;
          cctx[_i0].ctx->cert = (struct TYPE_6__ *) malloc(_len_cctx__i0__ctx_cert0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_cctx__i0__ctx_cert0; _j0++) {
            cctx[_i0].ctx->cert->cert_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cctx[_i0].ctx->max_proto_version = ((-2 * (next_i()%2)) + 1) * next_i();
        cctx[_i0].ctx->min_proto_version = ((-2 * (next_i()%2)) + 1) * next_i();
        cctx[_i0].ctx->options = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 65025;
          struct TYPE_7__ * ctx = (struct TYPE_7__ *) malloc(_len_ctx0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].verify_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__cert0 = 1;
          ctx[_i0].cert = (struct TYPE_6__ *) malloc(_len_ctx__i0__cert0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__cert0; _j0++) {
            ctx[_i0].cert->cert_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].max_proto_version = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].min_proto_version = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].options = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          SSL_CONF_CTX_set_ssl_ctx(cctx,ctx);
          for(int _aux = 0; _aux < _len_cctx0; _aux++) {
          free(cctx[_aux].pvfy_flags);
          }
          for(int _aux = 0; _aux < _len_cctx0; _aux++) {
          free(cctx[_aux].pcert_flags);
          }
          for(int _aux = 0; _aux < _len_cctx0; _aux++) {
          free(cctx[_aux].max_version);
          }
          for(int _aux = 0; _aux < _len_cctx0; _aux++) {
          free(cctx[_aux].min_version);
          }
          for(int _aux = 0; _aux < _len_cctx0; _aux++) {
          free(cctx[_aux].poptions);
          }
          for(int _aux = 0; _aux < _len_cctx0; _aux++) {
          free(cctx[_aux].ssl);
          }
          for(int _aux = 0; _aux < _len_cctx0; _aux++) {
          free(cctx[_aux].ctx);
          }
          free(cctx);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].cert);
          }
          free(ctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cctx0 = 100;
          struct TYPE_8__ * cctx = (struct TYPE_8__ *) malloc(_len_cctx0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_cctx0; _i0++) {
              int _len_cctx__i0__pvfy_flags0 = 1;
          cctx[_i0].pvfy_flags = (int *) malloc(_len_cctx__i0__pvfy_flags0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cctx__i0__pvfy_flags0; _j0++) {
            cctx[_i0].pvfy_flags[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cctx__i0__pcert_flags0 = 1;
          cctx[_i0].pcert_flags = (int *) malloc(_len_cctx__i0__pcert_flags0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cctx__i0__pcert_flags0; _j0++) {
            cctx[_i0].pcert_flags[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cctx__i0__max_version0 = 1;
          cctx[_i0].max_version = (int *) malloc(_len_cctx__i0__max_version0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cctx__i0__max_version0; _j0++) {
            cctx[_i0].max_version[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cctx__i0__min_version0 = 1;
          cctx[_i0].min_version = (int *) malloc(_len_cctx__i0__min_version0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cctx__i0__min_version0; _j0++) {
            cctx[_i0].min_version[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cctx__i0__poptions0 = 1;
          cctx[_i0].poptions = (int *) malloc(_len_cctx__i0__poptions0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cctx__i0__poptions0; _j0++) {
            cctx[_i0].poptions[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cctx__i0__ssl0 = 1;
          cctx[_i0].ssl = (int *) malloc(_len_cctx__i0__ssl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cctx__i0__ssl0; _j0++) {
            cctx[_i0].ssl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cctx__i0__ctx0 = 1;
          cctx[_i0].ctx = (struct TYPE_7__ *) malloc(_len_cctx__i0__ctx0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_cctx__i0__ctx0; _j0++) {
            cctx[_i0].ctx->verify_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cctx__i0__ctx_cert0 = 1;
          cctx[_i0].ctx->cert = (struct TYPE_6__ *) malloc(_len_cctx__i0__ctx_cert0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_cctx__i0__ctx_cert0; _j0++) {
            cctx[_i0].ctx->cert->cert_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cctx[_i0].ctx->max_proto_version = ((-2 * (next_i()%2)) + 1) * next_i();
        cctx[_i0].ctx->min_proto_version = ((-2 * (next_i()%2)) + 1) * next_i();
        cctx[_i0].ctx->options = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 100;
          struct TYPE_7__ * ctx = (struct TYPE_7__ *) malloc(_len_ctx0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].verify_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__cert0 = 1;
          ctx[_i0].cert = (struct TYPE_6__ *) malloc(_len_ctx__i0__cert0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__cert0; _j0++) {
            ctx[_i0].cert->cert_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].max_proto_version = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].min_proto_version = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].options = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          SSL_CONF_CTX_set_ssl_ctx(cctx,ctx);
          for(int _aux = 0; _aux < _len_cctx0; _aux++) {
          free(cctx[_aux].pvfy_flags);
          }
          for(int _aux = 0; _aux < _len_cctx0; _aux++) {
          free(cctx[_aux].pcert_flags);
          }
          for(int _aux = 0; _aux < _len_cctx0; _aux++) {
          free(cctx[_aux].max_version);
          }
          for(int _aux = 0; _aux < _len_cctx0; _aux++) {
          free(cctx[_aux].min_version);
          }
          for(int _aux = 0; _aux < _len_cctx0; _aux++) {
          free(cctx[_aux].poptions);
          }
          for(int _aux = 0; _aux < _len_cctx0; _aux++) {
          free(cctx[_aux].ssl);
          }
          for(int _aux = 0; _aux < _len_cctx0; _aux++) {
          free(cctx[_aux].ctx);
          }
          free(cctx);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].cert);
          }
          free(ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

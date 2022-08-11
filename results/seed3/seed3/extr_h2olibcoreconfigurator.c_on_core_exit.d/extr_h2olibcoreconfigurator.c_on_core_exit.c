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
typedef  struct TYPE_17__   TYPE_8__ ;
typedef  struct TYPE_16__   TYPE_7__ ;
typedef  struct TYPE_15__   TYPE_6__ ;
typedef  struct TYPE_14__   TYPE_5__ ;
typedef  struct TYPE_13__   TYPE_4__ ;
typedef  struct TYPE_12__   TYPE_3__ ;
typedef  struct TYPE_11__   TYPE_2__ ;
typedef  struct TYPE_10__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  yoml_t ;
struct st_core_configurator_t {TYPE_7__* vars; } ;
typedef  int /*<<< orphan*/  h2o_configurator_t ;
struct TYPE_17__ {TYPE_5__* pathconf; TYPE_2__* hostconf; } ;
typedef  TYPE_8__ h2o_configurator_context_t ;
struct TYPE_15__ {int /*<<< orphan*/  emit_request_errors; } ;
struct TYPE_12__ {int /*<<< orphan*/  casper; int /*<<< orphan*/  allow_cross_origin_push; int /*<<< orphan*/  push_preload; int /*<<< orphan*/  reprioritize_blocking_assets; } ;
struct TYPE_16__ {TYPE_6__ error_log; TYPE_3__ http2; } ;
struct TYPE_13__ {int /*<<< orphan*/  emit_request_errors; } ;
struct TYPE_14__ {TYPE_4__ error_log; } ;
struct TYPE_10__ {int /*<<< orphan*/  casper; int /*<<< orphan*/  allow_cross_origin_push; int /*<<< orphan*/  push_preload; int /*<<< orphan*/  reprioritize_blocking_assets; } ;
struct TYPE_11__ {TYPE_1__ http2; } ;

/* Variables and functions */

__attribute__((used)) static int on_core_exit(h2o_configurator_t *_self, h2o_configurator_context_t *ctx, yoml_t *node)
{
    struct st_core_configurator_t *self = (void *)_self;

    if (ctx->hostconf != NULL && ctx->pathconf == NULL) {
        /* exitting from host-level configuration */
        ctx->hostconf->http2.reprioritize_blocking_assets = self->vars->http2.reprioritize_blocking_assets;
        ctx->hostconf->http2.push_preload = self->vars->http2.push_preload;
        ctx->hostconf->http2.allow_cross_origin_push = self->vars->http2.allow_cross_origin_push;
        ctx->hostconf->http2.casper = self->vars->http2.casper;
    } else if (ctx->pathconf != NULL) {
        /* exitting from path or extension-level configuration */
        ctx->pathconf->error_log.emit_request_errors = self->vars->error_log.emit_request_errors;
    }

    --self->vars;
    return 0;
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
          int _len__self0 = 1;
          int * _self = (int *) malloc(_len__self0*sizeof(int));
          for(int _i0 = 0; _i0 < _len__self0; _i0++) {
            _self[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx0 = 1;
          struct TYPE_17__ * ctx = (struct TYPE_17__ *) malloc(_len_ctx0*sizeof(struct TYPE_17__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__pathconf0 = 1;
          ctx[_i0].pathconf = (struct TYPE_14__ *) malloc(_len_ctx__i0__pathconf0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__pathconf0; _j0++) {
            ctx[_i0].pathconf->error_log.emit_request_errors = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__hostconf0 = 1;
          ctx[_i0].hostconf = (struct TYPE_11__ *) malloc(_len_ctx__i0__hostconf0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__hostconf0; _j0++) {
            ctx[_i0].hostconf->http2.casper = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].hostconf->http2.allow_cross_origin_push = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].hostconf->http2.push_preload = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].hostconf->http2.reprioritize_blocking_assets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_node0 = 1;
          int * node = (int *) malloc(_len_node0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
            node[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = on_core_exit(_self,ctx,node);
          printf("%d\n", benchRet); 
          free(_self);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].pathconf);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].hostconf);
          }
          free(ctx);
          free(node);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len__self0 = 65025;
          int * _self = (int *) malloc(_len__self0*sizeof(int));
          for(int _i0 = 0; _i0 < _len__self0; _i0++) {
            _self[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx0 = 65025;
          struct TYPE_17__ * ctx = (struct TYPE_17__ *) malloc(_len_ctx0*sizeof(struct TYPE_17__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__pathconf0 = 1;
          ctx[_i0].pathconf = (struct TYPE_14__ *) malloc(_len_ctx__i0__pathconf0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__pathconf0; _j0++) {
            ctx[_i0].pathconf->error_log.emit_request_errors = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__hostconf0 = 1;
          ctx[_i0].hostconf = (struct TYPE_11__ *) malloc(_len_ctx__i0__hostconf0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__hostconf0; _j0++) {
            ctx[_i0].hostconf->http2.casper = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].hostconf->http2.allow_cross_origin_push = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].hostconf->http2.push_preload = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].hostconf->http2.reprioritize_blocking_assets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_node0 = 65025;
          int * node = (int *) malloc(_len_node0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
            node[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = on_core_exit(_self,ctx,node);
          printf("%d\n", benchRet); 
          free(_self);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].pathconf);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].hostconf);
          }
          free(ctx);
          free(node);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len__self0 = 100;
          int * _self = (int *) malloc(_len__self0*sizeof(int));
          for(int _i0 = 0; _i0 < _len__self0; _i0++) {
            _self[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx0 = 100;
          struct TYPE_17__ * ctx = (struct TYPE_17__ *) malloc(_len_ctx0*sizeof(struct TYPE_17__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__pathconf0 = 1;
          ctx[_i0].pathconf = (struct TYPE_14__ *) malloc(_len_ctx__i0__pathconf0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__pathconf0; _j0++) {
            ctx[_i0].pathconf->error_log.emit_request_errors = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__hostconf0 = 1;
          ctx[_i0].hostconf = (struct TYPE_11__ *) malloc(_len_ctx__i0__hostconf0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__hostconf0; _j0++) {
            ctx[_i0].hostconf->http2.casper = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].hostconf->http2.allow_cross_origin_push = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].hostconf->http2.push_preload = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].hostconf->http2.reprioritize_blocking_assets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_node0 = 100;
          int * node = (int *) malloc(_len_node0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
            node[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = on_core_exit(_self,ctx,node);
          printf("%d\n", benchRet); 
          free(_self);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].pathconf);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].hostconf);
          }
          free(ctx);
          free(node);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

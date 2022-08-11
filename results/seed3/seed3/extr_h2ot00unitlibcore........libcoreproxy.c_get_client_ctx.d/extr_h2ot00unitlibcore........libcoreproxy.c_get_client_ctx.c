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
typedef  struct TYPE_11__   TYPE_5__ ;
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct TYPE_10__ {TYPE_3__* conn; TYPE_5__* overrides; } ;
typedef  TYPE_4__ h2o_req_t ;
struct TYPE_11__ {int /*<<< orphan*/ * client_ctx; } ;
typedef  TYPE_5__ h2o_req_overrides_t ;
typedef  int /*<<< orphan*/  h2o_httpclient_ctx_t ;
struct TYPE_9__ {TYPE_2__* ctx; } ;
struct TYPE_7__ {int /*<<< orphan*/  client_ctx; } ;
struct TYPE_8__ {TYPE_1__ proxy; } ;

/* Variables and functions */

__attribute__((used)) static h2o_httpclient_ctx_t *get_client_ctx(h2o_req_t *req)
{
    h2o_req_overrides_t *overrides = req->overrides;
    if (overrides != NULL && overrides->client_ctx != NULL)
        return overrides->client_ctx;
    return &req->conn->ctx->proxy.client_ctx;
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
          int _len_req0 = 1;
          struct TYPE_10__ * req = (struct TYPE_10__ *) malloc(_len_req0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
              int _len_req__i0__conn0 = 1;
          req[_i0].conn = (struct TYPE_9__ *) malloc(_len_req__i0__conn0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_req__i0__conn0; _j0++) {
              int _len_req__i0__conn_ctx0 = 1;
          req[_i0].conn->ctx = (struct TYPE_8__ *) malloc(_len_req__i0__conn_ctx0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_req__i0__conn_ctx0; _j0++) {
            req[_i0].conn->ctx->proxy.client_ctx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_req__i0__overrides0 = 1;
          req[_i0].overrides = (struct TYPE_11__ *) malloc(_len_req__i0__overrides0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_req__i0__overrides0; _j0++) {
              int _len_req__i0__overrides_client_ctx0 = 1;
          req[_i0].overrides->client_ctx = (int *) malloc(_len_req__i0__overrides_client_ctx0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_req__i0__overrides_client_ctx0; _j0++) {
            req[_i0].overrides->client_ctx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int * benchRet = get_client_ctx(req);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_req0; _aux++) {
          free(req[_aux].conn);
          }
          for(int _aux = 0; _aux < _len_req0; _aux++) {
          free(req[_aux].overrides);
          }
          free(req);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_req0 = 65025;
          struct TYPE_10__ * req = (struct TYPE_10__ *) malloc(_len_req0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
              int _len_req__i0__conn0 = 1;
          req[_i0].conn = (struct TYPE_9__ *) malloc(_len_req__i0__conn0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_req__i0__conn0; _j0++) {
              int _len_req__i0__conn_ctx0 = 1;
          req[_i0].conn->ctx = (struct TYPE_8__ *) malloc(_len_req__i0__conn_ctx0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_req__i0__conn_ctx0; _j0++) {
            req[_i0].conn->ctx->proxy.client_ctx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_req__i0__overrides0 = 1;
          req[_i0].overrides = (struct TYPE_11__ *) malloc(_len_req__i0__overrides0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_req__i0__overrides0; _j0++) {
              int _len_req__i0__overrides_client_ctx0 = 1;
          req[_i0].overrides->client_ctx = (int *) malloc(_len_req__i0__overrides_client_ctx0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_req__i0__overrides_client_ctx0; _j0++) {
            req[_i0].overrides->client_ctx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int * benchRet = get_client_ctx(req);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_req0; _aux++) {
          free(req[_aux].conn);
          }
          for(int _aux = 0; _aux < _len_req0; _aux++) {
          free(req[_aux].overrides);
          }
          free(req);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_req0 = 100;
          struct TYPE_10__ * req = (struct TYPE_10__ *) malloc(_len_req0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
              int _len_req__i0__conn0 = 1;
          req[_i0].conn = (struct TYPE_9__ *) malloc(_len_req__i0__conn0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_req__i0__conn0; _j0++) {
              int _len_req__i0__conn_ctx0 = 1;
          req[_i0].conn->ctx = (struct TYPE_8__ *) malloc(_len_req__i0__conn_ctx0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_req__i0__conn_ctx0; _j0++) {
            req[_i0].conn->ctx->proxy.client_ctx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_req__i0__overrides0 = 1;
          req[_i0].overrides = (struct TYPE_11__ *) malloc(_len_req__i0__overrides0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_req__i0__overrides0; _j0++) {
              int _len_req__i0__overrides_client_ctx0 = 1;
          req[_i0].overrides->client_ctx = (int *) malloc(_len_req__i0__overrides_client_ctx0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_req__i0__overrides_client_ctx0; _j0++) {
            req[_i0].overrides->client_ctx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int * benchRet = get_client_ctx(req);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_req0; _aux++) {
          free(req[_aux].conn);
          }
          for(int _aux = 0; _aux < _len_req0; _aux++) {
          free(req[_aux].overrides);
          }
          free(req);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

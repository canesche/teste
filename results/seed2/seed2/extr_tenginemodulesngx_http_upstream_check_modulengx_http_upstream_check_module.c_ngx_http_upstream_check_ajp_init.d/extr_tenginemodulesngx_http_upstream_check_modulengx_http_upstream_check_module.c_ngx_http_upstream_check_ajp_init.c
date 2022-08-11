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
typedef  struct TYPE_13__   TYPE_6__ ;
typedef  struct TYPE_12__   TYPE_5__ ;
typedef  struct TYPE_11__   TYPE_4__ ;
typedef  struct TYPE_10__   TYPE_3__ ;
typedef  struct TYPE_9__   TYPE_2__ ;
typedef  struct TYPE_8__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u_char ;
typedef  int /*<<< orphan*/  ngx_int_t ;
struct TYPE_9__ {int len; scalar_t__ data; } ;
struct TYPE_11__ {TYPE_2__ send; } ;
typedef  TYPE_4__ ngx_http_upstream_check_srv_conf_t ;
struct TYPE_12__ {TYPE_4__* conf; TYPE_6__* check_data; } ;
typedef  TYPE_5__ ngx_http_upstream_check_peer_t ;
struct TYPE_10__ {int /*<<< orphan*/ * last; int /*<<< orphan*/  end; int /*<<< orphan*/ * pos; int /*<<< orphan*/  start; } ;
struct TYPE_8__ {int /*<<< orphan*/ * start; int /*<<< orphan*/ * last; int /*<<< orphan*/ * end; int /*<<< orphan*/ * pos; } ;
struct TYPE_13__ {TYPE_3__ recv; TYPE_1__ send; } ;
typedef  TYPE_6__ ngx_http_upstream_check_ctx_t ;

/* Variables and functions */
 int /*<<< orphan*/  NGX_OK ; 

__attribute__((used)) static ngx_int_t
ngx_http_upstream_check_ajp_init(ngx_http_upstream_check_peer_t *peer)
{
    ngx_http_upstream_check_ctx_t       *ctx;
    ngx_http_upstream_check_srv_conf_t  *ucscf;

    ctx = peer->check_data;
    ucscf = peer->conf;

    ctx->send.start = ctx->send.pos = (u_char *)ucscf->send.data;
    ctx->send.end = ctx->send.last = ctx->send.start + ucscf->send.len;

    ctx->recv.start = ctx->recv.pos = NULL;
    ctx->recv.end = ctx->recv.last = NULL;

    return NGX_OK;
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
          int _len_peer0 = 1;
          struct TYPE_12__ * peer = (struct TYPE_12__ *) malloc(_len_peer0*sizeof(struct TYPE_12__));
          for(int _i0 = 0; _i0 < _len_peer0; _i0++) {
              int _len_peer__i0__conf0 = 1;
          peer[_i0].conf = (struct TYPE_11__ *) malloc(_len_peer__i0__conf0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_peer__i0__conf0; _j0++) {
            peer[_i0].conf->send.len = ((-2 * (next_i()%2)) + 1) * next_i();
        peer[_i0].conf->send.data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_peer__i0__check_data0 = 1;
          peer[_i0].check_data = (struct TYPE_13__ *) malloc(_len_peer__i0__check_data0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_peer__i0__check_data0; _j0++) {
              int _len_peer__i0__check_data_recv_last0 = 1;
          peer[_i0].check_data->recv.last = (int *) malloc(_len_peer__i0__check_data_recv_last0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_peer__i0__check_data_recv_last0; _j0++) {
            peer[_i0].check_data->recv.last[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        peer[_i0].check_data->recv.end = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_peer__i0__check_data_recv_pos0 = 1;
          peer[_i0].check_data->recv.pos = (int *) malloc(_len_peer__i0__check_data_recv_pos0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_peer__i0__check_data_recv_pos0; _j0++) {
            peer[_i0].check_data->recv.pos[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        peer[_i0].check_data->recv.start = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_peer__i0__check_data_send_start0 = 1;
          peer[_i0].check_data->send.start = (int *) malloc(_len_peer__i0__check_data_send_start0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_peer__i0__check_data_send_start0; _j0++) {
            peer[_i0].check_data->send.start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_peer__i0__check_data_send_last0 = 1;
          peer[_i0].check_data->send.last = (int *) malloc(_len_peer__i0__check_data_send_last0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_peer__i0__check_data_send_last0; _j0++) {
            peer[_i0].check_data->send.last[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_peer__i0__check_data_send_end0 = 1;
          peer[_i0].check_data->send.end = (int *) malloc(_len_peer__i0__check_data_send_end0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_peer__i0__check_data_send_end0; _j0++) {
            peer[_i0].check_data->send.end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_peer__i0__check_data_send_pos0 = 1;
          peer[_i0].check_data->send.pos = (int *) malloc(_len_peer__i0__check_data_send_pos0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_peer__i0__check_data_send_pos0; _j0++) {
            peer[_i0].check_data->send.pos[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = ngx_http_upstream_check_ajp_init(peer);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_peer0; _aux++) {
          free(peer[_aux].conf);
          }
          for(int _aux = 0; _aux < _len_peer0; _aux++) {
          free(peer[_aux].check_data);
          }
          free(peer);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_peer0 = 65025;
          struct TYPE_12__ * peer = (struct TYPE_12__ *) malloc(_len_peer0*sizeof(struct TYPE_12__));
          for(int _i0 = 0; _i0 < _len_peer0; _i0++) {
              int _len_peer__i0__conf0 = 1;
          peer[_i0].conf = (struct TYPE_11__ *) malloc(_len_peer__i0__conf0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_peer__i0__conf0; _j0++) {
            peer[_i0].conf->send.len = ((-2 * (next_i()%2)) + 1) * next_i();
        peer[_i0].conf->send.data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_peer__i0__check_data0 = 1;
          peer[_i0].check_data = (struct TYPE_13__ *) malloc(_len_peer__i0__check_data0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_peer__i0__check_data0; _j0++) {
              int _len_peer__i0__check_data_recv_last0 = 1;
          peer[_i0].check_data->recv.last = (int *) malloc(_len_peer__i0__check_data_recv_last0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_peer__i0__check_data_recv_last0; _j0++) {
            peer[_i0].check_data->recv.last[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        peer[_i0].check_data->recv.end = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_peer__i0__check_data_recv_pos0 = 1;
          peer[_i0].check_data->recv.pos = (int *) malloc(_len_peer__i0__check_data_recv_pos0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_peer__i0__check_data_recv_pos0; _j0++) {
            peer[_i0].check_data->recv.pos[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        peer[_i0].check_data->recv.start = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_peer__i0__check_data_send_start0 = 1;
          peer[_i0].check_data->send.start = (int *) malloc(_len_peer__i0__check_data_send_start0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_peer__i0__check_data_send_start0; _j0++) {
            peer[_i0].check_data->send.start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_peer__i0__check_data_send_last0 = 1;
          peer[_i0].check_data->send.last = (int *) malloc(_len_peer__i0__check_data_send_last0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_peer__i0__check_data_send_last0; _j0++) {
            peer[_i0].check_data->send.last[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_peer__i0__check_data_send_end0 = 1;
          peer[_i0].check_data->send.end = (int *) malloc(_len_peer__i0__check_data_send_end0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_peer__i0__check_data_send_end0; _j0++) {
            peer[_i0].check_data->send.end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_peer__i0__check_data_send_pos0 = 1;
          peer[_i0].check_data->send.pos = (int *) malloc(_len_peer__i0__check_data_send_pos0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_peer__i0__check_data_send_pos0; _j0++) {
            peer[_i0].check_data->send.pos[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = ngx_http_upstream_check_ajp_init(peer);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_peer0; _aux++) {
          free(peer[_aux].conf);
          }
          for(int _aux = 0; _aux < _len_peer0; _aux++) {
          free(peer[_aux].check_data);
          }
          free(peer);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_peer0 = 100;
          struct TYPE_12__ * peer = (struct TYPE_12__ *) malloc(_len_peer0*sizeof(struct TYPE_12__));
          for(int _i0 = 0; _i0 < _len_peer0; _i0++) {
              int _len_peer__i0__conf0 = 1;
          peer[_i0].conf = (struct TYPE_11__ *) malloc(_len_peer__i0__conf0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_peer__i0__conf0; _j0++) {
            peer[_i0].conf->send.len = ((-2 * (next_i()%2)) + 1) * next_i();
        peer[_i0].conf->send.data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_peer__i0__check_data0 = 1;
          peer[_i0].check_data = (struct TYPE_13__ *) malloc(_len_peer__i0__check_data0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_peer__i0__check_data0; _j0++) {
              int _len_peer__i0__check_data_recv_last0 = 1;
          peer[_i0].check_data->recv.last = (int *) malloc(_len_peer__i0__check_data_recv_last0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_peer__i0__check_data_recv_last0; _j0++) {
            peer[_i0].check_data->recv.last[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        peer[_i0].check_data->recv.end = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_peer__i0__check_data_recv_pos0 = 1;
          peer[_i0].check_data->recv.pos = (int *) malloc(_len_peer__i0__check_data_recv_pos0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_peer__i0__check_data_recv_pos0; _j0++) {
            peer[_i0].check_data->recv.pos[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        peer[_i0].check_data->recv.start = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_peer__i0__check_data_send_start0 = 1;
          peer[_i0].check_data->send.start = (int *) malloc(_len_peer__i0__check_data_send_start0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_peer__i0__check_data_send_start0; _j0++) {
            peer[_i0].check_data->send.start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_peer__i0__check_data_send_last0 = 1;
          peer[_i0].check_data->send.last = (int *) malloc(_len_peer__i0__check_data_send_last0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_peer__i0__check_data_send_last0; _j0++) {
            peer[_i0].check_data->send.last[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_peer__i0__check_data_send_end0 = 1;
          peer[_i0].check_data->send.end = (int *) malloc(_len_peer__i0__check_data_send_end0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_peer__i0__check_data_send_end0; _j0++) {
            peer[_i0].check_data->send.end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_peer__i0__check_data_send_pos0 = 1;
          peer[_i0].check_data->send.pos = (int *) malloc(_len_peer__i0__check_data_send_pos0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_peer__i0__check_data_send_pos0; _j0++) {
            peer[_i0].check_data->send.pos[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = ngx_http_upstream_check_ajp_init(peer);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_peer0; _aux++) {
          free(peer[_aux].conf);
          }
          for(int _aux = 0; _aux < _len_peer0; _aux++) {
          free(peer[_aux].check_data);
          }
          free(peer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

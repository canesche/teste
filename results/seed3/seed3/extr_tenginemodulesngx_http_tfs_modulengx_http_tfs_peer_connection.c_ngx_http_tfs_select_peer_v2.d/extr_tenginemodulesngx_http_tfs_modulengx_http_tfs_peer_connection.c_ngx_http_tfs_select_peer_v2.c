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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int code; } ;
struct TYPE_6__ {TYPE_1__ action; } ;
struct TYPE_7__ {int /*<<< orphan*/ * tfs_peer; int /*<<< orphan*/ * input_filter; int /*<<< orphan*/ * tfs_peer_servers; void* process_request_body; TYPE_2__ r_ctx; void* create_request; int /*<<< orphan*/  state; int /*<<< orphan*/ * retry_handler; } ;
typedef  TYPE_3__ ngx_http_tfs_t ;
typedef  int /*<<< orphan*/  ngx_http_tfs_peer_connection_t ;

/* Variables and functions */
#define  NGX_HTTP_TFS_ACTION_CREATE_DIR 167 
#define  NGX_HTTP_TFS_ACTION_CREATE_FILE 166 
#define  NGX_HTTP_TFS_ACTION_GET_APPID 165 
#define  NGX_HTTP_TFS_ACTION_LS_DIR 164 
#define  NGX_HTTP_TFS_ACTION_LS_FILE 163 
#define  NGX_HTTP_TFS_ACTION_MOVE_DIR 162 
#define  NGX_HTTP_TFS_ACTION_MOVE_FILE 161 
#define  NGX_HTTP_TFS_ACTION_READ_FILE 160 
#define  NGX_HTTP_TFS_ACTION_REMOVE_DIR 159 
#define  NGX_HTTP_TFS_ACTION_REMOVE_FILE 158 
#define  NGX_HTTP_TFS_ACTION_WRITE_FILE 157 
 size_t NGX_HTTP_TFS_DATA_SERVER ; 
 size_t NGX_HTTP_TFS_META_SERVER ; 
 size_t NGX_HTTP_TFS_NAME_SERVER ; 
 size_t NGX_HTTP_TFS_RC_SERVER ; 
 size_t NGX_HTTP_TFS_ROOT_SERVER ; 
#define  NGX_HTTP_TFS_STATE_ACTION_DONE 156 
#define  NGX_HTTP_TFS_STATE_ACTION_GET_META_TABLE 155 
#define  NGX_HTTP_TFS_STATE_ACTION_PROCESS 154 
#define  NGX_HTTP_TFS_STATE_ACTION_START 153 
#define  NGX_HTTP_TFS_STATE_READ_DONE 152 
#define  NGX_HTTP_TFS_STATE_READ_GET_BLK_INFO 151 
#define  NGX_HTTP_TFS_STATE_READ_GET_FRAG_INFO 150 
#define  NGX_HTTP_TFS_STATE_READ_GET_META_TABLE 149 
#define  NGX_HTTP_TFS_STATE_READ_READ_DATA 148 
#define  NGX_HTTP_TFS_STATE_READ_START 147 
#define  NGX_HTTP_TFS_STATE_REMOVE_DELETE_DATA 146 
#define  NGX_HTTP_TFS_STATE_REMOVE_DONE 145 
#define  NGX_HTTP_TFS_STATE_REMOVE_GET_BLK_INFO 144 
#define  NGX_HTTP_TFS_STATE_REMOVE_GET_FRAG_INFO 143 
#define  NGX_HTTP_TFS_STATE_REMOVE_GET_GROUP_COUNT 142 
#define  NGX_HTTP_TFS_STATE_REMOVE_GET_GROUP_SEQ 141 
#define  NGX_HTTP_TFS_STATE_REMOVE_GET_META_TABLE 140 
#define  NGX_HTTP_TFS_STATE_REMOVE_NOTIFY_MS 139 
#define  NGX_HTTP_TFS_STATE_REMOVE_START 138 
#define  NGX_HTTP_TFS_STATE_WRITE_CLOSE_FILE 137 
#define  NGX_HTTP_TFS_STATE_WRITE_CLUSTER_ID_MS 136 
#define  NGX_HTTP_TFS_STATE_WRITE_CLUSTER_ID_NS 135 
#define  NGX_HTTP_TFS_STATE_WRITE_CREATE_FILE_NAME 134 
#define  NGX_HTTP_TFS_STATE_WRITE_DONE 133 
#define  NGX_HTTP_TFS_STATE_WRITE_GET_BLK_INFO 132 
#define  NGX_HTTP_TFS_STATE_WRITE_GET_META_TABLE 131 
#define  NGX_HTTP_TFS_STATE_WRITE_START 130 
#define  NGX_HTTP_TFS_STATE_WRITE_WRITE_DATA 129 
#define  NGX_HTTP_TFS_STATE_WRITE_WRITE_MS 128 
 void* ngx_http_tfs_create_ds_request ; 
 void* ngx_http_tfs_create_ms_request ; 
 void* ngx_http_tfs_create_ns_request ; 
 void* ngx_http_tfs_create_rcs_request ; 
 void* ngx_http_tfs_create_rs_request ; 
 void* ngx_http_tfs_process_ds ; 
 int /*<<< orphan*/ * ngx_http_tfs_process_ds_input_filter ; 
 void* ngx_http_tfs_process_ds_read ; 
 void* ngx_http_tfs_process_ms ; 
 int /*<<< orphan*/ * ngx_http_tfs_process_ms_input_filter ; 
 void* ngx_http_tfs_process_ms_ls_dir ; 
 void* ngx_http_tfs_process_ns ; 
 void* ngx_http_tfs_process_rcs ; 
 void* ngx_http_tfs_process_rs ; 
 void* ngx_http_tfs_retry_ds ; 
 void* ngx_http_tfs_retry_ns ; 

__attribute__((used)) static ngx_http_tfs_peer_connection_t *
ngx_http_tfs_select_peer_v2(ngx_http_tfs_t *t)
{
    switch (t->r_ctx.action.code) {
    case NGX_HTTP_TFS_ACTION_GET_APPID:
            t->create_request = ngx_http_tfs_create_rcs_request;
            t->process_request_body = ngx_http_tfs_process_rcs;
            return &t->tfs_peer_servers[NGX_HTTP_TFS_RC_SERVER];

    case NGX_HTTP_TFS_ACTION_REMOVE_FILE:
        switch (t->state) {
        case NGX_HTTP_TFS_STATE_REMOVE_START:
            t->create_request = ngx_http_tfs_create_rcs_request;
            t->process_request_body = ngx_http_tfs_process_rcs;
            return &t->tfs_peer_servers[NGX_HTTP_TFS_RC_SERVER];

        case NGX_HTTP_TFS_STATE_REMOVE_GET_META_TABLE:
            t->create_request = ngx_http_tfs_create_rs_request;
            t->process_request_body = ngx_http_tfs_process_rs;
            return &t->tfs_peer_servers[NGX_HTTP_TFS_ROOT_SERVER];

        case NGX_HTTP_TFS_STATE_REMOVE_NOTIFY_MS:
        case NGX_HTTP_TFS_STATE_REMOVE_GET_FRAG_INFO:
            t->create_request = ngx_http_tfs_create_ms_request;
            t->process_request_body = ngx_http_tfs_process_ms;
            return &t->tfs_peer_servers[NGX_HTTP_TFS_META_SERVER];

        case NGX_HTTP_TFS_STATE_REMOVE_GET_GROUP_COUNT:
        case NGX_HTTP_TFS_STATE_REMOVE_GET_GROUP_SEQ:
        case NGX_HTTP_TFS_STATE_REMOVE_GET_BLK_INFO:
            t->create_request = ngx_http_tfs_create_ns_request;
            t->process_request_body = ngx_http_tfs_process_ns;
            return &t->tfs_peer_servers[NGX_HTTP_TFS_NAME_SERVER];

        case NGX_HTTP_TFS_STATE_REMOVE_DELETE_DATA:
            t->create_request = ngx_http_tfs_create_ds_request;
            t->process_request_body = ngx_http_tfs_process_ds;
            return &t->tfs_peer_servers[NGX_HTTP_TFS_DATA_SERVER];

        case NGX_HTTP_TFS_STATE_REMOVE_DONE:
            return t->tfs_peer;
        default:
            return NULL;
        }
        break;
    case NGX_HTTP_TFS_ACTION_READ_FILE:
        switch (t->state) {
        case NGX_HTTP_TFS_STATE_READ_START:
            t->create_request = ngx_http_tfs_create_rcs_request;
            t->process_request_body = ngx_http_tfs_process_rcs;
            t->input_filter = NULL;
            t->retry_handler = NULL;
            return &t->tfs_peer_servers[NGX_HTTP_TFS_RC_SERVER];

        case NGX_HTTP_TFS_STATE_READ_GET_META_TABLE:
            t->create_request = ngx_http_tfs_create_rs_request;
            t->process_request_body = ngx_http_tfs_process_rs;
            t->input_filter = NULL;
            t->retry_handler = NULL;
            return &t->tfs_peer_servers[NGX_HTTP_TFS_ROOT_SERVER];

        case NGX_HTTP_TFS_STATE_READ_GET_FRAG_INFO:
            t->create_request = ngx_http_tfs_create_ms_request;
            t->process_request_body = ngx_http_tfs_process_ms;
            t->input_filter = NULL;
            t->retry_handler = NULL;
            return &t->tfs_peer_servers[NGX_HTTP_TFS_META_SERVER];

        case NGX_HTTP_TFS_STATE_READ_GET_BLK_INFO:
            t->create_request = ngx_http_tfs_create_ns_request;
            t->process_request_body = ngx_http_tfs_process_ns;
            t->input_filter = NULL;
            t->retry_handler = ngx_http_tfs_retry_ns;
            return &t->tfs_peer_servers[NGX_HTTP_TFS_NAME_SERVER];

        case NGX_HTTP_TFS_STATE_READ_READ_DATA:
            t->create_request = ngx_http_tfs_create_ds_request;
            t->process_request_body = ngx_http_tfs_process_ds_read;
            t->input_filter = ngx_http_tfs_process_ds_input_filter;
            t->retry_handler = ngx_http_tfs_retry_ds;
            return &t->tfs_peer_servers[NGX_HTTP_TFS_DATA_SERVER];

        case NGX_HTTP_TFS_STATE_READ_DONE:
            t->input_filter = NULL;
            t->retry_handler = NULL;
            return t->tfs_peer;
        default:
            return NULL;
        }
        break;
    case NGX_HTTP_TFS_ACTION_WRITE_FILE:
        switch (t->state) {
        case NGX_HTTP_TFS_STATE_WRITE_START:
            t->create_request = ngx_http_tfs_create_rcs_request;
            t->process_request_body = ngx_http_tfs_process_rcs;
            t->input_filter = NULL;
            t->retry_handler = NULL;
            return &t->tfs_peer_servers[NGX_HTTP_TFS_RC_SERVER];

        case NGX_HTTP_TFS_STATE_WRITE_GET_META_TABLE:
            t->create_request = ngx_http_tfs_create_rs_request;
            t->process_request_body = ngx_http_tfs_process_rs;
            t->input_filter = NULL;
            t->retry_handler = NULL;
            return &t->tfs_peer_servers[NGX_HTTP_TFS_ROOT_SERVER];

        case NGX_HTTP_TFS_STATE_WRITE_CLUSTER_ID_MS:
        case NGX_HTTP_TFS_STATE_WRITE_WRITE_MS:
            t->create_request = ngx_http_tfs_create_ms_request;
            t->process_request_body = ngx_http_tfs_process_ms;
            t->input_filter = NULL;
            t->retry_handler = NULL;
            return &t->tfs_peer_servers[NGX_HTTP_TFS_META_SERVER];

        case NGX_HTTP_TFS_STATE_WRITE_CLUSTER_ID_NS:
        case NGX_HTTP_TFS_STATE_WRITE_GET_BLK_INFO:
            t->create_request = ngx_http_tfs_create_ns_request;
            t->process_request_body = ngx_http_tfs_process_ns;
            t->input_filter = NULL;
            t->retry_handler = ngx_http_tfs_retry_ns;
            return &t->tfs_peer_servers[NGX_HTTP_TFS_NAME_SERVER];

        case NGX_HTTP_TFS_STATE_WRITE_CREATE_FILE_NAME:
        case NGX_HTTP_TFS_STATE_WRITE_WRITE_DATA:
        case NGX_HTTP_TFS_STATE_WRITE_CLOSE_FILE:
            t->create_request = ngx_http_tfs_create_ds_request;
            t->process_request_body = ngx_http_tfs_process_ds;
            t->input_filter = NULL;
            /* FIXME: it's better to retry_ns instead of ds when write failed */
            t->retry_handler = ngx_http_tfs_retry_ds;
            return &t->tfs_peer_servers[NGX_HTTP_TFS_DATA_SERVER];

        case NGX_HTTP_TFS_STATE_WRITE_DONE:
            t->input_filter = NULL;
            t->retry_handler = NULL;
            return t->tfs_peer;
        default:
            return NULL;
        }
        break;
    case NGX_HTTP_TFS_ACTION_CREATE_FILE:
    case NGX_HTTP_TFS_ACTION_CREATE_DIR:
    case NGX_HTTP_TFS_ACTION_LS_FILE:
    case NGX_HTTP_TFS_ACTION_LS_DIR:
    case NGX_HTTP_TFS_ACTION_MOVE_DIR:
    case NGX_HTTP_TFS_ACTION_MOVE_FILE:
    case NGX_HTTP_TFS_ACTION_REMOVE_DIR:
        switch (t->state) {
        case NGX_HTTP_TFS_STATE_ACTION_START:
            t->create_request = ngx_http_tfs_create_rcs_request;
            t->process_request_body = ngx_http_tfs_process_rcs;
            t->input_filter = NULL;
            return &t->tfs_peer_servers[NGX_HTTP_TFS_RC_SERVER];

        case NGX_HTTP_TFS_STATE_ACTION_GET_META_TABLE:
            t->create_request = ngx_http_tfs_create_rs_request;
            t->process_request_body = ngx_http_tfs_process_rs;
            t->input_filter = NULL;
            return &t->tfs_peer_servers[NGX_HTTP_TFS_ROOT_SERVER];

        case NGX_HTTP_TFS_STATE_ACTION_PROCESS:
            t->create_request = ngx_http_tfs_create_ms_request;
            if (t->r_ctx.action.code == NGX_HTTP_TFS_ACTION_LS_DIR) {
                t->process_request_body = ngx_http_tfs_process_ms_ls_dir;
                t->input_filter = ngx_http_tfs_process_ms_input_filter;
            } else {
                t->process_request_body = ngx_http_tfs_process_ms;
                t->input_filter = NULL;
            }
            return &t->tfs_peer_servers[NGX_HTTP_TFS_META_SERVER];

        case NGX_HTTP_TFS_STATE_ACTION_DONE:
            t->input_filter = NULL;
            return t->tfs_peer;
        default:
            return NULL;
        }
        break;
    default:
        break;
    }

    return NULL;
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
          int _len_t0 = 1;
          struct TYPE_7__ * t = (struct TYPE_7__ *) malloc(_len_t0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
              int _len_t__i0__tfs_peer0 = 1;
          t[_i0].tfs_peer = (int *) malloc(_len_t__i0__tfs_peer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_t__i0__tfs_peer0; _j0++) {
            t[_i0].tfs_peer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_t__i0__input_filter0 = 1;
          t[_i0].input_filter = (int *) malloc(_len_t__i0__input_filter0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_t__i0__input_filter0; _j0++) {
            t[_i0].input_filter[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_t__i0__tfs_peer_servers0 = 1;
          t[_i0].tfs_peer_servers = (int *) malloc(_len_t__i0__tfs_peer_servers0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_t__i0__tfs_peer_servers0; _j0++) {
            t[_i0].tfs_peer_servers[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        t[_i0].r_ctx.action.code = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_t__i0__retry_handler0 = 1;
          t[_i0].retry_handler = (int *) malloc(_len_t__i0__retry_handler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_t__i0__retry_handler0; _j0++) {
            t[_i0].retry_handler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = ngx_http_tfs_select_peer_v2(t);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_t0; _aux++) {
          free(t[_aux].tfs_peer);
          }
          for(int _aux = 0; _aux < _len_t0; _aux++) {
          free(t[_aux].input_filter);
          }
          for(int _aux = 0; _aux < _len_t0; _aux++) {
          free(t[_aux].tfs_peer_servers);
          }
          for(int _aux = 0; _aux < _len_t0; _aux++) {
          free(t[_aux].retry_handler);
          }
          free(t);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_t0 = 65025;
          struct TYPE_7__ * t = (struct TYPE_7__ *) malloc(_len_t0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
              int _len_t__i0__tfs_peer0 = 1;
          t[_i0].tfs_peer = (int *) malloc(_len_t__i0__tfs_peer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_t__i0__tfs_peer0; _j0++) {
            t[_i0].tfs_peer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_t__i0__input_filter0 = 1;
          t[_i0].input_filter = (int *) malloc(_len_t__i0__input_filter0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_t__i0__input_filter0; _j0++) {
            t[_i0].input_filter[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_t__i0__tfs_peer_servers0 = 1;
          t[_i0].tfs_peer_servers = (int *) malloc(_len_t__i0__tfs_peer_servers0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_t__i0__tfs_peer_servers0; _j0++) {
            t[_i0].tfs_peer_servers[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        t[_i0].r_ctx.action.code = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_t__i0__retry_handler0 = 1;
          t[_i0].retry_handler = (int *) malloc(_len_t__i0__retry_handler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_t__i0__retry_handler0; _j0++) {
            t[_i0].retry_handler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = ngx_http_tfs_select_peer_v2(t);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_t0; _aux++) {
          free(t[_aux].tfs_peer);
          }
          for(int _aux = 0; _aux < _len_t0; _aux++) {
          free(t[_aux].input_filter);
          }
          for(int _aux = 0; _aux < _len_t0; _aux++) {
          free(t[_aux].tfs_peer_servers);
          }
          for(int _aux = 0; _aux < _len_t0; _aux++) {
          free(t[_aux].retry_handler);
          }
          free(t);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_t0 = 100;
          struct TYPE_7__ * t = (struct TYPE_7__ *) malloc(_len_t0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
              int _len_t__i0__tfs_peer0 = 1;
          t[_i0].tfs_peer = (int *) malloc(_len_t__i0__tfs_peer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_t__i0__tfs_peer0; _j0++) {
            t[_i0].tfs_peer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_t__i0__input_filter0 = 1;
          t[_i0].input_filter = (int *) malloc(_len_t__i0__input_filter0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_t__i0__input_filter0; _j0++) {
            t[_i0].input_filter[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_t__i0__tfs_peer_servers0 = 1;
          t[_i0].tfs_peer_servers = (int *) malloc(_len_t__i0__tfs_peer_servers0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_t__i0__tfs_peer_servers0; _j0++) {
            t[_i0].tfs_peer_servers[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        t[_i0].r_ctx.action.code = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_t__i0__retry_handler0 = 1;
          t[_i0].retry_handler = (int *) malloc(_len_t__i0__retry_handler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_t__i0__retry_handler0; _j0++) {
            t[_i0].retry_handler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = ngx_http_tfs_select_peer_v2(t);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_t0; _aux++) {
          free(t[_aux].tfs_peer);
          }
          for(int _aux = 0; _aux < _len_t0; _aux++) {
          free(t[_aux].input_filter);
          }
          for(int _aux = 0; _aux < _len_t0; _aux++) {
          free(t[_aux].tfs_peer_servers);
          }
          for(int _aux = 0; _aux < _len_t0; _aux++) {
          free(t[_aux].retry_handler);
          }
          free(t);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

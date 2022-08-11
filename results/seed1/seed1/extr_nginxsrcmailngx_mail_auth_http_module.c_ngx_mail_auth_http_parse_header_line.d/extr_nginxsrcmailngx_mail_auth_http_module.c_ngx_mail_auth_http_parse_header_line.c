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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int u_char ;
typedef  int /*<<< orphan*/  ngx_mail_session_t ;
struct TYPE_5__ {int state; int* header_end; int* header_name_start; int* header_name_end; int* header_start; TYPE_1__* response; } ;
typedef  TYPE_2__ ngx_mail_auth_http_ctx_t ;
typedef  int /*<<< orphan*/  ngx_int_t ;
struct TYPE_4__ {int* pos; int* last; } ;

/* Variables and functions */
#define  CR 129 
#define  LF 128 
 int /*<<< orphan*/  NGX_AGAIN ; 
 int /*<<< orphan*/  NGX_DONE ; 
 int /*<<< orphan*/  NGX_ERROR ; 
 int /*<<< orphan*/  NGX_OK ; 

__attribute__((used)) static ngx_int_t
ngx_mail_auth_http_parse_header_line(ngx_mail_session_t *s,
    ngx_mail_auth_http_ctx_t *ctx)
{
    u_char      c, ch, *p;
    enum {
        sw_start = 0,
        sw_name,
        sw_space_before_value,
        sw_value,
        sw_space_after_value,
        sw_almost_done,
        sw_header_almost_done
    } state;

    state = ctx->state;

    for (p = ctx->response->pos; p < ctx->response->last; p++) {
        ch = *p;

        switch (state) {

        /* first char */
        case sw_start:

            switch (ch) {
            case CR:
                ctx->header_end = p;
                state = sw_header_almost_done;
                break;
            case LF:
                ctx->header_end = p;
                goto header_done;
            default:
                state = sw_name;
                ctx->header_name_start = p;

                c = (u_char) (ch | 0x20);
                if (c >= 'a' && c <= 'z') {
                    break;
                }

                if (ch >= '0' && ch <= '9') {
                    break;
                }

                return NGX_ERROR;
            }
            break;

        /* header name */
        case sw_name:
            c = (u_char) (ch | 0x20);
            if (c >= 'a' && c <= 'z') {
                break;
            }

            if (ch == ':') {
                ctx->header_name_end = p;
                state = sw_space_before_value;
                break;
            }

            if (ch == '-') {
                break;
            }

            if (ch >= '0' && ch <= '9') {
                break;
            }

            if (ch == CR) {
                ctx->header_name_end = p;
                ctx->header_start = p;
                ctx->header_end = p;
                state = sw_almost_done;
                break;
            }

            if (ch == LF) {
                ctx->header_name_end = p;
                ctx->header_start = p;
                ctx->header_end = p;
                goto done;
            }

            return NGX_ERROR;

        /* space* before header value */
        case sw_space_before_value:
            switch (ch) {
            case ' ':
                break;
            case CR:
                ctx->header_start = p;
                ctx->header_end = p;
                state = sw_almost_done;
                break;
            case LF:
                ctx->header_start = p;
                ctx->header_end = p;
                goto done;
            default:
                ctx->header_start = p;
                state = sw_value;
                break;
            }
            break;

        /* header value */
        case sw_value:
            switch (ch) {
            case ' ':
                ctx->header_end = p;
                state = sw_space_after_value;
                break;
            case CR:
                ctx->header_end = p;
                state = sw_almost_done;
                break;
            case LF:
                ctx->header_end = p;
                goto done;
            }
            break;

        /* space* before end of header line */
        case sw_space_after_value:
            switch (ch) {
            case ' ':
                break;
            case CR:
                state = sw_almost_done;
                break;
            case LF:
                goto done;
            default:
                state = sw_value;
                break;
            }
            break;

        /* end of header line */
        case sw_almost_done:
            switch (ch) {
            case LF:
                goto done;
            default:
                return NGX_ERROR;
            }

        /* end of header */
        case sw_header_almost_done:
            switch (ch) {
            case LF:
                goto header_done;
            default:
                return NGX_ERROR;
            }
        }
    }

    ctx->response->pos = p;
    ctx->state = state;

    return NGX_AGAIN;

done:

    ctx->response->pos = p + 1;
    ctx->state = sw_start;

    return NGX_OK;

header_done:

    ctx->response->pos = p + 1;
    ctx->state = sw_start;

    return NGX_DONE;
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
          int _len_s0 = 1;
          int * s = (int *) malloc(_len_s0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx0 = 1;
          struct TYPE_5__ * ctx = (struct TYPE_5__ *) malloc(_len_ctx0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__header_end0 = 1;
          ctx[_i0].header_end = (int *) malloc(_len_ctx__i0__header_end0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__header_end0; _j0++) {
            ctx[_i0].header_end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__header_name_start0 = 1;
          ctx[_i0].header_name_start = (int *) malloc(_len_ctx__i0__header_name_start0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__header_name_start0; _j0++) {
            ctx[_i0].header_name_start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__header_name_end0 = 1;
          ctx[_i0].header_name_end = (int *) malloc(_len_ctx__i0__header_name_end0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__header_name_end0; _j0++) {
            ctx[_i0].header_name_end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__header_start0 = 1;
          ctx[_i0].header_start = (int *) malloc(_len_ctx__i0__header_start0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__header_start0; _j0++) {
            ctx[_i0].header_start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__response0 = 1;
          ctx[_i0].response = (struct TYPE_4__ *) malloc(_len_ctx__i0__response0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__response0; _j0++) {
              int _len_ctx__i0__response_pos0 = 1;
          ctx[_i0].response->pos = (int *) malloc(_len_ctx__i0__response_pos0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__response_pos0; _j0++) {
            ctx[_i0].response->pos[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__response_last0 = 1;
          ctx[_i0].response->last = (int *) malloc(_len_ctx__i0__response_last0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__response_last0; _j0++) {
            ctx[_i0].response->last[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = ngx_mail_auth_http_parse_header_line(s,ctx);
          printf("%d\n", benchRet); 
          free(s);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].header_end);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].header_name_start);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].header_name_end);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].header_start);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].response);
          }
          free(ctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s0 = 65025;
          int * s = (int *) malloc(_len_s0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx0 = 65025;
          struct TYPE_5__ * ctx = (struct TYPE_5__ *) malloc(_len_ctx0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__header_end0 = 1;
          ctx[_i0].header_end = (int *) malloc(_len_ctx__i0__header_end0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__header_end0; _j0++) {
            ctx[_i0].header_end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__header_name_start0 = 1;
          ctx[_i0].header_name_start = (int *) malloc(_len_ctx__i0__header_name_start0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__header_name_start0; _j0++) {
            ctx[_i0].header_name_start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__header_name_end0 = 1;
          ctx[_i0].header_name_end = (int *) malloc(_len_ctx__i0__header_name_end0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__header_name_end0; _j0++) {
            ctx[_i0].header_name_end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__header_start0 = 1;
          ctx[_i0].header_start = (int *) malloc(_len_ctx__i0__header_start0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__header_start0; _j0++) {
            ctx[_i0].header_start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__response0 = 1;
          ctx[_i0].response = (struct TYPE_4__ *) malloc(_len_ctx__i0__response0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__response0; _j0++) {
              int _len_ctx__i0__response_pos0 = 1;
          ctx[_i0].response->pos = (int *) malloc(_len_ctx__i0__response_pos0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__response_pos0; _j0++) {
            ctx[_i0].response->pos[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__response_last0 = 1;
          ctx[_i0].response->last = (int *) malloc(_len_ctx__i0__response_last0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__response_last0; _j0++) {
            ctx[_i0].response->last[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = ngx_mail_auth_http_parse_header_line(s,ctx);
          printf("%d\n", benchRet); 
          free(s);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].header_end);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].header_name_start);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].header_name_end);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].header_start);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].response);
          }
          free(ctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s0 = 100;
          int * s = (int *) malloc(_len_s0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx0 = 100;
          struct TYPE_5__ * ctx = (struct TYPE_5__ *) malloc(_len_ctx0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__header_end0 = 1;
          ctx[_i0].header_end = (int *) malloc(_len_ctx__i0__header_end0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__header_end0; _j0++) {
            ctx[_i0].header_end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__header_name_start0 = 1;
          ctx[_i0].header_name_start = (int *) malloc(_len_ctx__i0__header_name_start0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__header_name_start0; _j0++) {
            ctx[_i0].header_name_start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__header_name_end0 = 1;
          ctx[_i0].header_name_end = (int *) malloc(_len_ctx__i0__header_name_end0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__header_name_end0; _j0++) {
            ctx[_i0].header_name_end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__header_start0 = 1;
          ctx[_i0].header_start = (int *) malloc(_len_ctx__i0__header_start0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__header_start0; _j0++) {
            ctx[_i0].header_start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__response0 = 1;
          ctx[_i0].response = (struct TYPE_4__ *) malloc(_len_ctx__i0__response0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__response0; _j0++) {
              int _len_ctx__i0__response_pos0 = 1;
          ctx[_i0].response->pos = (int *) malloc(_len_ctx__i0__response_pos0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__response_pos0; _j0++) {
            ctx[_i0].response->pos[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__response_last0 = 1;
          ctx[_i0].response->last = (int *) malloc(_len_ctx__i0__response_last0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__response_last0; _j0++) {
            ctx[_i0].response->last[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = ngx_mail_auth_http_parse_header_line(s,ctx);
          printf("%d\n", benchRet); 
          free(s);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].header_end);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].header_name_start);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].header_name_end);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].header_start);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].response);
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

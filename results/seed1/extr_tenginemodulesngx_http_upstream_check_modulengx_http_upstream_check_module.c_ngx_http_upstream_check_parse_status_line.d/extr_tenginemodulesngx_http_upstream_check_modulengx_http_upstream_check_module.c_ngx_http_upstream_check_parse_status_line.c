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
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
typedef  char u_char ;
typedef  int /*<<< orphan*/  ngx_int_t ;
struct TYPE_7__ {int state; } ;
typedef  TYPE_1__ ngx_http_upstream_check_ctx_t ;
struct TYPE_8__ {int code; int count; char* start; char* end; } ;
typedef  TYPE_2__ ngx_http_status_t ;
struct TYPE_9__ {char* pos; char* last; } ;
typedef  TYPE_3__ ngx_buf_t ;

/* Variables and functions */
#define  CR 129 
#define  LF 128 
 int /*<<< orphan*/  NGX_AGAIN ; 
 int /*<<< orphan*/  NGX_ERROR ; 
 int /*<<< orphan*/  NGX_OK ; 

__attribute__((used)) static ngx_int_t
ngx_http_upstream_check_parse_status_line(ngx_http_upstream_check_ctx_t *ctx,
    ngx_buf_t *b, ngx_http_status_t *status)
{
    u_char ch, *p;
    enum {
        sw_start = 0,
        sw_H,
        sw_HT,
        sw_HTT,
        sw_HTTP,
        sw_first_major_digit,
        sw_major_digit,
        sw_first_minor_digit,
        sw_minor_digit,
        sw_status,
        sw_space_after_status,
        sw_status_text,
        sw_almost_done
    } state;

    state = ctx->state;

    for (p = b->pos; p < b->last; p++) {
        ch = *p;

        switch (state) {

        /* "HTTP/" */
        case sw_start:
            if (ch != 'H') {
                return NGX_ERROR;
            }

            state = sw_H;
            break;

        case sw_H:
            if (ch != 'T') {
                return NGX_ERROR;
            }

            state = sw_HT;
            break;

        case sw_HT:
            if (ch != 'T') {
                return NGX_ERROR;
            }

            state = sw_HTT;
            break;

        case sw_HTT:
            if (ch != 'P') {
                return NGX_ERROR;
            }

            state = sw_HTTP;
            break;

        case sw_HTTP:
            if (ch != '/') {
                return NGX_ERROR;
            }

            state = sw_first_major_digit;
            break;

        /* the first digit of major HTTP version */
        case sw_first_major_digit:
            if (ch < '1' || ch > '9') {
                return NGX_ERROR;
            }

            state = sw_major_digit;
            break;

        /* the major HTTP version or dot */
        case sw_major_digit:
            if (ch == '.') {
                state = sw_first_minor_digit;
                break;
            }

            if (ch < '0' || ch > '9') {
                return NGX_ERROR;
            }

            break;

        /* the first digit of minor HTTP version */
        case sw_first_minor_digit:
            if (ch < '0' || ch > '9') {
                return NGX_ERROR;
            }

            state = sw_minor_digit;
            break;

        /* the minor HTTP version or the end of the request line */
        case sw_minor_digit:
            if (ch == ' ') {
                state = sw_status;
                break;
            }

            if (ch < '0' || ch > '9') {
                return NGX_ERROR;
            }

            break;

        /* HTTP status code */
        case sw_status:
            if (ch == ' ') {
                break;
            }

            if (ch < '0' || ch > '9') {
                return NGX_ERROR;
            }

            status->code = status->code * 10 + ch - '0';

            if (++status->count == 3) {
                state = sw_space_after_status;
                status->start = p - 2;
            }

            break;

        /* space or end of line */
        case sw_space_after_status:
            switch (ch) {
            case ' ':
                state = sw_status_text;
                break;
            case '.':                    /* IIS may send 403.1, 403.2, etc */
                state = sw_status_text;
                break;
            case CR:
                state = sw_almost_done;
                break;
            case LF:
                goto done;
            default:
                return NGX_ERROR;
            }
            break;

        /* any text until end of line */
        case sw_status_text:
            switch (ch) {
            case CR:
                state = sw_almost_done;

                break;
            case LF:
                goto done;
            }
            break;

        /* end of status line */
        case sw_almost_done:
            status->end = p - 1;
            if (ch == LF) {
                goto done;
            } else {
                return NGX_ERROR;
            }
        }
    }

    b->pos = p;
    ctx->state = state;

    return NGX_AGAIN;

done:

    b->pos = p + 1;

    if (status->end == NULL) {
        status->end = p;
    }

    ctx->state = sw_start;

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
          int _len_ctx0 = 1;
          struct TYPE_7__ * ctx = (struct TYPE_7__ *) malloc(_len_ctx0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b0 = 1;
          struct TYPE_9__ * b = (struct TYPE_9__ *) malloc(_len_b0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              int _len_b__i0__pos0 = 1;
          b[_i0].pos = (char *) malloc(_len_b__i0__pos0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_b__i0__pos0; _j0++) {
            b[_i0].pos[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b__i0__last0 = 1;
          b[_i0].last = (char *) malloc(_len_b__i0__last0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_b__i0__last0; _j0++) {
            b[_i0].last[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_status0 = 1;
          struct TYPE_8__ * status = (struct TYPE_8__ *) malloc(_len_status0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_status0; _i0++) {
            status[_i0].code = ((-2 * (next_i()%2)) + 1) * next_i();
        status[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_status__i0__start0 = 1;
          status[_i0].start = (char *) malloc(_len_status__i0__start0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_status__i0__start0; _j0++) {
            status[_i0].start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_status__i0__end0 = 1;
          status[_i0].end = (char *) malloc(_len_status__i0__end0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_status__i0__end0; _j0++) {
            status[_i0].end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ngx_http_upstream_check_parse_status_line(ctx,b,status);
          printf("%d\n", benchRet); 
          free(ctx);
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].pos);
          }
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].last);
          }
          free(b);
          for(int _aux = 0; _aux < _len_status0; _aux++) {
          free(status[_aux].start);
          }
          for(int _aux = 0; _aux < _len_status0; _aux++) {
          free(status[_aux].end);
          }
          free(status);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ctx0 = 65025;
          struct TYPE_7__ * ctx = (struct TYPE_7__ *) malloc(_len_ctx0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b0 = 65025;
          struct TYPE_9__ * b = (struct TYPE_9__ *) malloc(_len_b0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              int _len_b__i0__pos0 = 1;
          b[_i0].pos = (char *) malloc(_len_b__i0__pos0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_b__i0__pos0; _j0++) {
            b[_i0].pos[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b__i0__last0 = 1;
          b[_i0].last = (char *) malloc(_len_b__i0__last0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_b__i0__last0; _j0++) {
            b[_i0].last[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_status0 = 65025;
          struct TYPE_8__ * status = (struct TYPE_8__ *) malloc(_len_status0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_status0; _i0++) {
            status[_i0].code = ((-2 * (next_i()%2)) + 1) * next_i();
        status[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_status__i0__start0 = 1;
          status[_i0].start = (char *) malloc(_len_status__i0__start0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_status__i0__start0; _j0++) {
            status[_i0].start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_status__i0__end0 = 1;
          status[_i0].end = (char *) malloc(_len_status__i0__end0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_status__i0__end0; _j0++) {
            status[_i0].end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ngx_http_upstream_check_parse_status_line(ctx,b,status);
          printf("%d\n", benchRet); 
          free(ctx);
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].pos);
          }
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].last);
          }
          free(b);
          for(int _aux = 0; _aux < _len_status0; _aux++) {
          free(status[_aux].start);
          }
          for(int _aux = 0; _aux < _len_status0; _aux++) {
          free(status[_aux].end);
          }
          free(status);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ctx0 = 100;
          struct TYPE_7__ * ctx = (struct TYPE_7__ *) malloc(_len_ctx0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b0 = 100;
          struct TYPE_9__ * b = (struct TYPE_9__ *) malloc(_len_b0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              int _len_b__i0__pos0 = 1;
          b[_i0].pos = (char *) malloc(_len_b__i0__pos0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_b__i0__pos0; _j0++) {
            b[_i0].pos[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b__i0__last0 = 1;
          b[_i0].last = (char *) malloc(_len_b__i0__last0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_b__i0__last0; _j0++) {
            b[_i0].last[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_status0 = 100;
          struct TYPE_8__ * status = (struct TYPE_8__ *) malloc(_len_status0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_status0; _i0++) {
            status[_i0].code = ((-2 * (next_i()%2)) + 1) * next_i();
        status[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_status__i0__start0 = 1;
          status[_i0].start = (char *) malloc(_len_status__i0__start0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_status__i0__start0; _j0++) {
            status[_i0].start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_status__i0__end0 = 1;
          status[_i0].end = (char *) malloc(_len_status__i0__end0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_status__i0__end0; _j0++) {
            status[_i0].end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ngx_http_upstream_check_parse_status_line(ctx,b,status);
          printf("%d\n", benchRet); 
          free(ctx);
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].pos);
          }
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].last);
          }
          free(b);
          for(int _aux = 0; _aux < _len_status0; _aux++) {
          free(status[_aux].start);
          }
          for(int _aux = 0; _aux < _len_status0; _aux++) {
          free(status[_aux].end);
          }
          free(status);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

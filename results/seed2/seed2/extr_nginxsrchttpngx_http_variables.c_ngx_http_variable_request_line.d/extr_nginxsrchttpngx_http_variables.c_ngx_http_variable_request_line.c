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
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u_char ;
typedef  int /*<<< orphan*/  ngx_int_t ;
struct TYPE_9__ {int not_found; int len; int valid; scalar_t__* data; scalar_t__ no_cacheable; } ;
typedef  TYPE_3__ ngx_http_variable_value_t ;
struct TYPE_8__ {scalar_t__* data; int len; } ;
struct TYPE_10__ {TYPE_2__ request_line; TYPE_1__* header_in; scalar_t__* request_start; } ;
typedef  TYPE_4__ ngx_http_request_t ;
struct TYPE_7__ {scalar_t__* last; } ;

/* Variables and functions */
 scalar_t__ CR ; 
 scalar_t__ LF ; 
 int /*<<< orphan*/  NGX_OK ; 

__attribute__((used)) static ngx_int_t
ngx_http_variable_request_line(ngx_http_request_t *r,
    ngx_http_variable_value_t *v, uintptr_t data)
{
    u_char  *p, *s;

    s = r->request_line.data;

    if (s == NULL) {
        s = r->request_start;

        if (s == NULL) {
            v->not_found = 1;
            return NGX_OK;
        }

        for (p = s; p < r->header_in->last; p++) {
            if (*p == CR || *p == LF) {
                break;
            }
        }

        r->request_line.len = p - s;
        r->request_line.data = s;
    }

    v->len = r->request_line.len;
    v->valid = 1;
    v->no_cacheable = 0;
    v->not_found = 0;
    v->data = s;

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
          unsigned long data = 100;
          int _len_r0 = 1;
          struct TYPE_10__ * r = (struct TYPE_10__ *) malloc(_len_r0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
              int _len_r__i0__request_line_data0 = 1;
          r[_i0].request_line.data = (long *) malloc(_len_r__i0__request_line_data0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_r__i0__request_line_data0; _j0++) {
            r[_i0].request_line.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        r[_i0].request_line.len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_r__i0__header_in0 = 1;
          r[_i0].header_in = (struct TYPE_7__ *) malloc(_len_r__i0__header_in0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_r__i0__header_in0; _j0++) {
              int _len_r__i0__header_in_last0 = 1;
          r[_i0].header_in->last = (long *) malloc(_len_r__i0__header_in_last0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_r__i0__header_in_last0; _j0++) {
            r[_i0].header_in->last[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_r__i0__request_start0 = 1;
          r[_i0].request_start = (long *) malloc(_len_r__i0__request_start0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_r__i0__request_start0; _j0++) {
            r[_i0].request_start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_v0 = 1;
          struct TYPE_9__ * v = (struct TYPE_9__ *) malloc(_len_v0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0].not_found = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].valid = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_v__i0__data0 = 1;
          v[_i0].data = (long *) malloc(_len_v__i0__data0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_v__i0__data0; _j0++) {
            v[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        v[_i0].no_cacheable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ngx_http_variable_request_line(r,v,data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_r0; _aux++) {
          free(r[_aux].header_in);
          }
          for(int _aux = 0; _aux < _len_r0; _aux++) {
          free(r[_aux].request_start);
          }
          free(r);
          for(int _aux = 0; _aux < _len_v0; _aux++) {
          free(v[_aux].data);
          }
          free(v);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long data = 255;
          int _len_r0 = 65025;
          struct TYPE_10__ * r = (struct TYPE_10__ *) malloc(_len_r0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
              int _len_r__i0__request_line_data0 = 1;
          r[_i0].request_line.data = (long *) malloc(_len_r__i0__request_line_data0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_r__i0__request_line_data0; _j0++) {
            r[_i0].request_line.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        r[_i0].request_line.len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_r__i0__header_in0 = 1;
          r[_i0].header_in = (struct TYPE_7__ *) malloc(_len_r__i0__header_in0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_r__i0__header_in0; _j0++) {
              int _len_r__i0__header_in_last0 = 1;
          r[_i0].header_in->last = (long *) malloc(_len_r__i0__header_in_last0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_r__i0__header_in_last0; _j0++) {
            r[_i0].header_in->last[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_r__i0__request_start0 = 1;
          r[_i0].request_start = (long *) malloc(_len_r__i0__request_start0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_r__i0__request_start0; _j0++) {
            r[_i0].request_start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_v0 = 65025;
          struct TYPE_9__ * v = (struct TYPE_9__ *) malloc(_len_v0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0].not_found = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].valid = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_v__i0__data0 = 1;
          v[_i0].data = (long *) malloc(_len_v__i0__data0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_v__i0__data0; _j0++) {
            v[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        v[_i0].no_cacheable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ngx_http_variable_request_line(r,v,data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_r0; _aux++) {
          free(r[_aux].header_in);
          }
          for(int _aux = 0; _aux < _len_r0; _aux++) {
          free(r[_aux].request_start);
          }
          free(r);
          for(int _aux = 0; _aux < _len_v0; _aux++) {
          free(v[_aux].data);
          }
          free(v);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long data = 10;
          int _len_r0 = 100;
          struct TYPE_10__ * r = (struct TYPE_10__ *) malloc(_len_r0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
              int _len_r__i0__request_line_data0 = 1;
          r[_i0].request_line.data = (long *) malloc(_len_r__i0__request_line_data0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_r__i0__request_line_data0; _j0++) {
            r[_i0].request_line.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        r[_i0].request_line.len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_r__i0__header_in0 = 1;
          r[_i0].header_in = (struct TYPE_7__ *) malloc(_len_r__i0__header_in0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_r__i0__header_in0; _j0++) {
              int _len_r__i0__header_in_last0 = 1;
          r[_i0].header_in->last = (long *) malloc(_len_r__i0__header_in_last0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_r__i0__header_in_last0; _j0++) {
            r[_i0].header_in->last[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_r__i0__request_start0 = 1;
          r[_i0].request_start = (long *) malloc(_len_r__i0__request_start0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_r__i0__request_start0; _j0++) {
            r[_i0].request_start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_v0 = 100;
          struct TYPE_9__ * v = (struct TYPE_9__ *) malloc(_len_v0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0].not_found = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].valid = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_v__i0__data0 = 1;
          v[_i0].data = (long *) malloc(_len_v__i0__data0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_v__i0__data0; _j0++) {
            v[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        v[_i0].no_cacheable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ngx_http_variable_request_line(r,v,data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_r0; _aux++) {
          free(r[_aux].header_in);
          }
          for(int _aux = 0; _aux < _len_r0; _aux++) {
          free(r[_aux].request_start);
          }
          free(r);
          for(int _aux = 0; _aux < _len_v0; _aux++) {
          free(v[_aux].data);
          }
          free(v);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

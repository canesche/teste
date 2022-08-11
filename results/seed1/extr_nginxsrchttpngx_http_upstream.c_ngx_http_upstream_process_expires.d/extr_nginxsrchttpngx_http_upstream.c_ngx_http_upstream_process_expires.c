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
typedef  int /*<<< orphan*/  ngx_uint_t ;
typedef  int /*<<< orphan*/  ngx_table_elt_t ;
typedef  int /*<<< orphan*/  ngx_int_t ;
struct TYPE_5__ {int /*<<< orphan*/ * expires; } ;
struct TYPE_6__ {TYPE_1__ headers_in; } ;
typedef  TYPE_2__ ngx_http_upstream_t ;
struct TYPE_7__ {TYPE_2__* upstream; } ;
typedef  TYPE_3__ ngx_http_request_t ;

/* Variables and functions */
 int /*<<< orphan*/  NGX_OK ; 

__attribute__((used)) static ngx_int_t
ngx_http_upstream_process_expires(ngx_http_request_t *r, ngx_table_elt_t *h,
    ngx_uint_t offset)
{
    ngx_http_upstream_t  *u;

    u = r->upstream;
    u->headers_in.expires = h;

#if (NGX_HTTP_CACHE)
    {
    time_t  expires;

    if (u->conf->ignore_headers & NGX_HTTP_UPSTREAM_IGN_EXPIRES) {
        return NGX_OK;
    }

    if (r->cache == NULL) {
        return NGX_OK;
    }

    if (r->cache->valid_sec != 0) {
        return NGX_OK;
    }

    expires = ngx_parse_http_time(h->value.data, h->value.len);

    if (expires == NGX_ERROR || expires < ngx_time()) {
        u->cacheable = 0;
        return NGX_OK;
    }

    r->cache->valid_sec = expires;
    }
#endif

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
          int offset = 100;
          int _len_r0 = 1;
          struct TYPE_7__ * r = (struct TYPE_7__ *) malloc(_len_r0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
              int _len_r__i0__upstream0 = 1;
          r[_i0].upstream = (struct TYPE_6__ *) malloc(_len_r__i0__upstream0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_r__i0__upstream0; _j0++) {
              int _len_r__i0__upstream_headers_in_expires0 = 1;
          r[_i0].upstream->headers_in.expires = (int *) malloc(_len_r__i0__upstream_headers_in_expires0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_r__i0__upstream_headers_in_expires0; _j0++) {
            r[_i0].upstream->headers_in.expires[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_h0 = 1;
          int * h = (int *) malloc(_len_h0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
            h[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ngx_http_upstream_process_expires(r,h,offset);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_r0; _aux++) {
          free(r[_aux].upstream);
          }
          free(r);
          free(h);
        
        break;
    }
    // big-arr
    case 1:
    {
          int offset = 255;
          int _len_r0 = 65025;
          struct TYPE_7__ * r = (struct TYPE_7__ *) malloc(_len_r0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
              int _len_r__i0__upstream0 = 1;
          r[_i0].upstream = (struct TYPE_6__ *) malloc(_len_r__i0__upstream0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_r__i0__upstream0; _j0++) {
              int _len_r__i0__upstream_headers_in_expires0 = 1;
          r[_i0].upstream->headers_in.expires = (int *) malloc(_len_r__i0__upstream_headers_in_expires0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_r__i0__upstream_headers_in_expires0; _j0++) {
            r[_i0].upstream->headers_in.expires[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_h0 = 65025;
          int * h = (int *) malloc(_len_h0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
            h[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ngx_http_upstream_process_expires(r,h,offset);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_r0; _aux++) {
          free(r[_aux].upstream);
          }
          free(r);
          free(h);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int offset = 10;
          int _len_r0 = 100;
          struct TYPE_7__ * r = (struct TYPE_7__ *) malloc(_len_r0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
              int _len_r__i0__upstream0 = 1;
          r[_i0].upstream = (struct TYPE_6__ *) malloc(_len_r__i0__upstream0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_r__i0__upstream0; _j0++) {
              int _len_r__i0__upstream_headers_in_expires0 = 1;
          r[_i0].upstream->headers_in.expires = (int *) malloc(_len_r__i0__upstream_headers_in_expires0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_r__i0__upstream_headers_in_expires0; _j0++) {
            r[_i0].upstream->headers_in.expires[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_h0 = 100;
          int * h = (int *) malloc(_len_h0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
            h[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ngx_http_upstream_process_expires(r,h,offset);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_r0; _aux++) {
          free(r[_aux].upstream);
          }
          free(r);
          free(h);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct TYPE_8__ {TYPE_1__* content_length; scalar_t__ content_length_n; } ;
struct TYPE_9__ {TYPE_2__ headers_out; } ;
typedef  TYPE_3__ ngx_http_request_t ;
struct TYPE_10__ {scalar_t__ pos; scalar_t__ last; } ;
typedef  TYPE_4__ ngx_buf_t ;
struct TYPE_7__ {scalar_t__ hash; } ;

/* Variables and functions */

__attribute__((used)) static void
ngx_http_image_length(ngx_http_request_t *r, ngx_buf_t *b)
{
    r->headers_out.content_length_n = b->last - b->pos;

    if (r->headers_out.content_length) {
        r->headers_out.content_length->hash = 0;
    }

    r->headers_out.content_length = NULL;
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
          int _len_r0 = 1;
          struct TYPE_9__ * r = (struct TYPE_9__ *) malloc(_len_r0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
              int _len_r__i0__headers_out_content_length0 = 1;
          r[_i0].headers_out.content_length = (struct TYPE_7__ *) malloc(_len_r__i0__headers_out_content_length0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_r__i0__headers_out_content_length0; _j0++) {
            r[_i0].headers_out.content_length->hash = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        r[_i0].headers_out.content_length_n = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b0 = 1;
          struct TYPE_10__ * b = (struct TYPE_10__ *) malloc(_len_b0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].last = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ngx_http_image_length(r,b);
          free(r);
          free(b);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_r0 = 65025;
          struct TYPE_9__ * r = (struct TYPE_9__ *) malloc(_len_r0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
              int _len_r__i0__headers_out_content_length0 = 1;
          r[_i0].headers_out.content_length = (struct TYPE_7__ *) malloc(_len_r__i0__headers_out_content_length0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_r__i0__headers_out_content_length0; _j0++) {
            r[_i0].headers_out.content_length->hash = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        r[_i0].headers_out.content_length_n = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b0 = 65025;
          struct TYPE_10__ * b = (struct TYPE_10__ *) malloc(_len_b0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].last = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ngx_http_image_length(r,b);
          free(r);
          free(b);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_r0 = 100;
          struct TYPE_9__ * r = (struct TYPE_9__ *) malloc(_len_r0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
              int _len_r__i0__headers_out_content_length0 = 1;
          r[_i0].headers_out.content_length = (struct TYPE_7__ *) malloc(_len_r__i0__headers_out_content_length0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_r__i0__headers_out_content_length0; _j0++) {
            r[_i0].headers_out.content_length->hash = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        r[_i0].headers_out.content_length_n = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b0 = 100;
          struct TYPE_10__ * b = (struct TYPE_10__ *) malloc(_len_b0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].last = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ngx_http_image_length(r,b);
          free(r);
          free(b);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

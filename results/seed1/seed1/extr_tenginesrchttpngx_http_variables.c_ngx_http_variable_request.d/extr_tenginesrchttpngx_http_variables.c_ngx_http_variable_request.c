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
struct TYPE_4__ {scalar_t__ data; int /*<<< orphan*/  len; } ;
typedef  TYPE_1__ ngx_str_t ;
typedef  int /*<<< orphan*/  ngx_int_t ;
struct TYPE_5__ {int valid; int not_found; scalar_t__ data; scalar_t__ no_cacheable; int /*<<< orphan*/  len; } ;
typedef  TYPE_2__ ngx_http_variable_value_t ;
typedef  int /*<<< orphan*/  ngx_http_request_t ;

/* Variables and functions */
 int /*<<< orphan*/  NGX_OK ; 

__attribute__((used)) static ngx_int_t
ngx_http_variable_request(ngx_http_request_t *r, ngx_http_variable_value_t *v,
    uintptr_t data)
{
    ngx_str_t  *s;

    s = (ngx_str_t *) ((char *) r + data);

    if (s->data) {
        v->len = s->len;
        v->valid = 1;
        v->no_cacheable = 0;
        v->not_found = 0;
        v->data = s->data;

    } else {
        v->not_found = 1;
    }

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
          int * r = (int *) malloc(_len_r0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_v0 = 1;
          struct TYPE_5__ * v = (struct TYPE_5__ *) malloc(_len_v0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0].valid = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].not_found = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].no_cacheable = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ngx_http_variable_request(r,v,data);
          printf("%d\n", benchRet); 
          free(r);
          free(v);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long data = 255;
          int _len_r0 = 65025;
          int * r = (int *) malloc(_len_r0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_v0 = 65025;
          struct TYPE_5__ * v = (struct TYPE_5__ *) malloc(_len_v0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0].valid = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].not_found = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].no_cacheable = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ngx_http_variable_request(r,v,data);
          printf("%d\n", benchRet); 
          free(r);
          free(v);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long data = 10;
          int _len_r0 = 100;
          int * r = (int *) malloc(_len_r0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_v0 = 100;
          struct TYPE_5__ * v = (struct TYPE_5__ *) malloc(_len_v0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0].valid = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].not_found = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].no_cacheable = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ngx_http_variable_request(r,v,data);
          printf("%d\n", benchRet); 
          free(r);
          free(v);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

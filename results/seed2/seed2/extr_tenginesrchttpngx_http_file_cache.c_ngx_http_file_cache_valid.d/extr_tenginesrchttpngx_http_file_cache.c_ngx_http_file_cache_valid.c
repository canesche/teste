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
typedef  int /*<<< orphan*/  time_t ;
typedef  size_t ngx_uint_t ;
struct TYPE_4__ {scalar_t__ status; int /*<<< orphan*/  valid; } ;
typedef  TYPE_1__ ngx_http_cache_valid_t ;
struct TYPE_5__ {size_t nelts; TYPE_1__* elts; } ;
typedef  TYPE_2__ ngx_array_t ;

/* Variables and functions */

time_t
ngx_http_file_cache_valid(ngx_array_t *cache_valid, ngx_uint_t status)
{
    ngx_uint_t               i;
    ngx_http_cache_valid_t  *valid;

    if (cache_valid == NULL) {
        return 0;
    }

    valid = cache_valid->elts;
    for (i = 0; i < cache_valid->nelts; i++) {

        if (valid[i].status == 0) {
            return valid[i].valid;
        }

        if (valid[i].status == status) {
            return valid[i].valid;
        }
    }

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
          unsigned long status = 100;
          int _len_cache_valid0 = 1;
          struct TYPE_5__ * cache_valid = (struct TYPE_5__ *) malloc(_len_cache_valid0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_cache_valid0; _i0++) {
            cache_valid[_i0].nelts = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cache_valid__i0__elts0 = 1;
          cache_valid[_i0].elts = (struct TYPE_4__ *) malloc(_len_cache_valid__i0__elts0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_cache_valid__i0__elts0; _j0++) {
            cache_valid[_i0].elts->status = ((-2 * (next_i()%2)) + 1) * next_i();
        cache_valid[_i0].elts->valid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ngx_http_file_cache_valid(cache_valid,status);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cache_valid0; _aux++) {
          free(cache_valid[_aux].elts);
          }
          free(cache_valid);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long status = 255;
          int _len_cache_valid0 = 65025;
          struct TYPE_5__ * cache_valid = (struct TYPE_5__ *) malloc(_len_cache_valid0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_cache_valid0; _i0++) {
            cache_valid[_i0].nelts = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cache_valid__i0__elts0 = 1;
          cache_valid[_i0].elts = (struct TYPE_4__ *) malloc(_len_cache_valid__i0__elts0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_cache_valid__i0__elts0; _j0++) {
            cache_valid[_i0].elts->status = ((-2 * (next_i()%2)) + 1) * next_i();
        cache_valid[_i0].elts->valid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ngx_http_file_cache_valid(cache_valid,status);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cache_valid0; _aux++) {
          free(cache_valid[_aux].elts);
          }
          free(cache_valid);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long status = 10;
          int _len_cache_valid0 = 100;
          struct TYPE_5__ * cache_valid = (struct TYPE_5__ *) malloc(_len_cache_valid0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_cache_valid0; _i0++) {
            cache_valid[_i0].nelts = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cache_valid__i0__elts0 = 1;
          cache_valid[_i0].elts = (struct TYPE_4__ *) malloc(_len_cache_valid__i0__elts0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_cache_valid__i0__elts0; _j0++) {
            cache_valid[_i0].elts->status = ((-2 * (next_i()%2)) + 1) * next_i();
        cache_valid[_i0].elts->valid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ngx_http_file_cache_valid(cache_valid,status);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cache_valid0; _aux++) {
          free(cache_valid[_aux].elts);
          }
          free(cache_valid);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

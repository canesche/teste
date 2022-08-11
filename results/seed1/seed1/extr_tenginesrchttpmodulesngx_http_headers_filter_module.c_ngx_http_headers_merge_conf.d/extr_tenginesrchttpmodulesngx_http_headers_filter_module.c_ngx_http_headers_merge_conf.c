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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {scalar_t__ expires; int /*<<< orphan*/ * trailers; int /*<<< orphan*/ * headers; int /*<<< orphan*/  expires_value; int /*<<< orphan*/  expires_time; } ;
typedef  TYPE_1__ ngx_http_headers_conf_t ;
typedef  int /*<<< orphan*/  ngx_conf_t ;

/* Variables and functions */
 char* NGX_CONF_OK ; 
 scalar_t__ NGX_HTTP_EXPIRES_OFF ; 
 scalar_t__ NGX_HTTP_EXPIRES_UNSET ; 

__attribute__((used)) static char *
ngx_http_headers_merge_conf(ngx_conf_t *cf, void *parent, void *child)
{
    ngx_http_headers_conf_t *prev = parent;
    ngx_http_headers_conf_t *conf = child;

    if (conf->expires == NGX_HTTP_EXPIRES_UNSET) {
        conf->expires = prev->expires;
        conf->expires_time = prev->expires_time;
        conf->expires_value = prev->expires_value;

        if (conf->expires == NGX_HTTP_EXPIRES_UNSET) {
            conf->expires = NGX_HTTP_EXPIRES_OFF;
        }
    }

    if (conf->headers == NULL) {
        conf->headers = prev->headers;
    }

    if (conf->trailers == NULL) {
        conf->trailers = prev->trailers;
    }

    return NGX_CONF_OK;
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
          int _len_cf0 = 1;
          int * cf = (int *) malloc(_len_cf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cf0; _i0++) {
            cf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * parent;
          void * child;
          char * benchRet = ngx_http_headers_merge_conf(cf,parent,child);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(cf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cf0 = 65025;
          int * cf = (int *) malloc(_len_cf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cf0; _i0++) {
            cf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * parent;
          void * child;
          char * benchRet = ngx_http_headers_merge_conf(cf,parent,child);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(cf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cf0 = 100;
          int * cf = (int *) malloc(_len_cf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cf0; _i0++) {
            cf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * parent;
          void * child;
          char * benchRet = ngx_http_headers_merge_conf(cf,parent,child);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(cf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

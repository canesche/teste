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
struct TYPE_4__ {int max_pending_timers; int max_running_timers; int /*<<< orphan*/  cycle; } ;
typedef  TYPE_1__ ngx_http_lua_main_conf_t ;
struct TYPE_5__ {int /*<<< orphan*/  cycle; } ;
typedef  TYPE_2__ ngx_conf_t ;

/* Variables and functions */
 char* NGX_CONF_OK ; 
 int NGX_CONF_UNSET ; 

__attribute__((used)) static char *
ngx_http_lua_init_main_conf(ngx_conf_t *cf, void *conf)
{
    ngx_http_lua_main_conf_t *lmcf = conf;

#if (NGX_PCRE)
    if (lmcf->regex_cache_max_entries == NGX_CONF_UNSET) {
        lmcf->regex_cache_max_entries = 1024;
    }

    if (lmcf->regex_match_limit == NGX_CONF_UNSET) {
        lmcf->regex_match_limit = 0;
    }
#endif

    if (lmcf->max_pending_timers == NGX_CONF_UNSET) {
        lmcf->max_pending_timers = 1024;
    }

    if (lmcf->max_running_timers == NGX_CONF_UNSET) {
        lmcf->max_running_timers = 256;
    }

#if (NGX_HTTP_LUA_HAVE_SA_RESTART)
    if (lmcf->set_sa_restart == NGX_CONF_UNSET) {
        lmcf->set_sa_restart = 1;
    }
#endif

#if (NGX_HTTP_LUA_HAVE_MALLOC_TRIM)
    if (lmcf->malloc_trim_cycle == NGX_CONF_UNSET_UINT) {
        lmcf->malloc_trim_cycle = 1000;  /* number of reqs */
    }
#endif

    lmcf->cycle = cf->cycle;

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
          struct TYPE_5__ * cf = (struct TYPE_5__ *) malloc(_len_cf0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_cf0; _i0++) {
            cf[_i0].cycle = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * conf;
          char * benchRet = ngx_http_lua_init_main_conf(cf,conf);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(cf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cf0 = 65025;
          struct TYPE_5__ * cf = (struct TYPE_5__ *) malloc(_len_cf0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_cf0; _i0++) {
            cf[_i0].cycle = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * conf;
          char * benchRet = ngx_http_lua_init_main_conf(cf,conf);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(cf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cf0 = 100;
          struct TYPE_5__ * cf = (struct TYPE_5__ *) malloc(_len_cf0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_cf0; _i0++) {
            cf[_i0].cycle = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * conf;
          char * benchRet = ngx_http_lua_init_main_conf(cf,conf);
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

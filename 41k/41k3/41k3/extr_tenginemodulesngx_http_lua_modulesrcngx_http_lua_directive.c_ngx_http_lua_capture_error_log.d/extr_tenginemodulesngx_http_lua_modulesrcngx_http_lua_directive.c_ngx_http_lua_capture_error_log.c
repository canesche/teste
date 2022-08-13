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

/* Type definitions */
typedef  int /*<<< orphan*/  ngx_conf_t ;
typedef  int /*<<< orphan*/  ngx_command_t ;

/* Variables and functions */

char *
ngx_http_lua_capture_error_log(ngx_conf_t *cf, ngx_command_t *cmd,
    void *conf)
{
#ifndef HAVE_INTERCEPT_ERROR_LOG_PATCH
    return "not found: missing the capture error log patch for nginx";
#else
    ngx_str_t                     *value;
    ssize_t                        size;
    u_char                        *data;
    ngx_cycle_t                   *cycle;
    ngx_http_lua_main_conf_t      *lmcf = conf;
    ngx_http_lua_log_ringbuf_t    *ringbuf;

    value = cf->args->elts;
    cycle = cf->cycle;

    if (lmcf->requires_capture_log) {
        return "is duplicate";
    }

    if (value[1].len == 0) {
        ngx_conf_log_error(NGX_LOG_EMERG, cf, 0,
                           "invalid capture error log size \"%V\"",
                           &value[1]);
        return NGX_CONF_ERROR;
    }

    size = ngx_parse_size(&value[1]);

    if (size < NGX_MAX_ERROR_STR) {
        ngx_conf_log_error(NGX_LOG_EMERG, cf, 0,
                           "invalid capture error log size \"%V\", "
                           "minimum size is %d", &value[1],
                           NGX_MAX_ERROR_STR);
        return NGX_CONF_ERROR;
    }

    if (cycle->intercept_error_log_handler) {
        return "capture error log handler has been hooked";
    }

    ringbuf = (ngx_http_lua_log_ringbuf_t *)
              ngx_palloc(cf->pool, sizeof(ngx_http_lua_log_ringbuf_t));
    if (ringbuf == NULL) {
        return NGX_CONF_ERROR;
    }

    data = ngx_palloc(cf->pool, size);
    if (data == NULL) {
        return NGX_CONF_ERROR;
    }

    ngx_http_lua_log_ringbuf_init(ringbuf, data, size);

    lmcf->requires_capture_log = 1;
    cycle->intercept_error_log_handler = (ngx_log_intercept_pt)
                                         ngx_http_lua_capture_log_handler;
    cycle->intercept_error_log_data = ringbuf;

    return NGX_CONF_OK;
#endif
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
          int _len_cmd0 = 1;
          int * cmd = (int *) malloc(_len_cmd0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * conf;
          char * benchRet = ngx_http_lua_capture_error_log(cf,cmd,conf);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(cf);
          free(cmd);
        
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
          int _len_cmd0 = 65025;
          int * cmd = (int *) malloc(_len_cmd0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * conf;
          char * benchRet = ngx_http_lua_capture_error_log(cf,cmd,conf);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(cf);
          free(cmd);
        
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
          int _len_cmd0 = 100;
          int * cmd = (int *) malloc(_len_cmd0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * conf;
          char * benchRet = ngx_http_lua_capture_error_log(cf,cmd,conf);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(cf);
          free(cmd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

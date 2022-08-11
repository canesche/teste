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
struct TYPE_2__ {int tfs_connect_timeout; int tfs_send_timeout; int tfs_read_timeout; int tair_timeout; scalar_t__ send_lowat; scalar_t__ buffer_size; scalar_t__ body_buffer_size; } ;
typedef  TYPE_1__ ngx_http_tfs_main_conf_t ;
typedef  int /*<<< orphan*/  ngx_conf_t ;

/* Variables and functions */
 char* NGX_CONF_OK ; 
 int NGX_CONF_UNSET_MSEC ; 
 scalar_t__ NGX_CONF_UNSET_SIZE ; 
 scalar_t__ NGX_HTTP_TFS_DEFAULT_BODY_BUFFER_SIZE ; 
 scalar_t__ ngx_pagesize ; 

__attribute__((used)) static char *
ngx_http_tfs_init_main_conf(ngx_conf_t *cf, void *conf)
{
    ngx_http_tfs_main_conf_t *tmcf = conf;

    if (tmcf->tfs_connect_timeout == NGX_CONF_UNSET_MSEC) {
        tmcf->tfs_connect_timeout = 3000;
    }

    if (tmcf->tfs_send_timeout == NGX_CONF_UNSET_MSEC) {
        tmcf->tfs_send_timeout = 3000;
    }

    if (tmcf->tfs_read_timeout == NGX_CONF_UNSET_MSEC) {
        tmcf->tfs_read_timeout = 3000;
    }

    if (tmcf->tair_timeout == NGX_CONF_UNSET_MSEC) {
        tmcf->tair_timeout = 3000;
    }

    if (tmcf->send_lowat == NGX_CONF_UNSET_SIZE) {
        tmcf->send_lowat = 0;
    }

    if (tmcf->buffer_size == NGX_CONF_UNSET_SIZE) {
        tmcf->buffer_size = (size_t) ngx_pagesize / 2;
    }

    if (tmcf->body_buffer_size == NGX_CONF_UNSET_SIZE) {
        tmcf->body_buffer_size = NGX_HTTP_TFS_DEFAULT_BODY_BUFFER_SIZE;
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
          void * conf;
          char * benchRet = ngx_http_tfs_init_main_conf(cf,conf);
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
          void * conf;
          char * benchRet = ngx_http_tfs_init_main_conf(cf,conf);
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
          void * conf;
          char * benchRet = ngx_http_tfs_init_main_conf(cf,conf);
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

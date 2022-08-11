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

/* Variables and functions */
 char* NGX_CONF_OK ; 

__attribute__((used)) static char *
ngx_http_lua_merge_srv_conf(ngx_conf_t *cf, void *parent, void *child)
{
#if (NGX_HTTP_SSL)

    ngx_http_lua_srv_conf_t *prev = parent;
    ngx_http_lua_srv_conf_t *conf = child;
    ngx_http_ssl_srv_conf_t *sscf;

    dd("merge srv conf");

    if (conf->srv.ssl_cert_src.len == 0) {
        conf->srv.ssl_cert_src = prev->srv.ssl_cert_src;
        conf->srv.ssl_cert_src_key = prev->srv.ssl_cert_src_key;
        conf->srv.ssl_cert_handler = prev->srv.ssl_cert_handler;
    }

    if (conf->srv.ssl_cert_src.len) {
        sscf = ngx_http_conf_get_module_srv_conf(cf, ngx_http_ssl_module);
        if (sscf == NULL || sscf->ssl.ctx == NULL) {
            ngx_log_error(NGX_LOG_EMERG, cf->log, 0,
                          "no ssl configured for the server");

            return NGX_CONF_ERROR;
        }

#ifdef LIBRESSL_VERSION_NUMBER

        ngx_log_error(NGX_LOG_EMERG, cf->log, 0,
                      "LibreSSL does not support ssl_certificate_by_lua*");
        return NGX_CONF_ERROR;

#else

#   if OPENSSL_VERSION_NUMBER >= 0x1000205fL

        SSL_CTX_set_cert_cb(sscf->ssl.ctx, ngx_http_lua_ssl_cert_handler, NULL);

#   else

        ngx_log_error(NGX_LOG_EMERG, cf->log, 0,
                      "OpenSSL too old to support ssl_certificate_by_lua*");
        return NGX_CONF_ERROR;

#   endif

#endif
    }

    if (conf->srv.ssl_sess_store_src.len == 0) {
        conf->srv.ssl_sess_store_src = prev->srv.ssl_sess_store_src;
        conf->srv.ssl_sess_store_src_key = prev->srv.ssl_sess_store_src_key;
        conf->srv.ssl_sess_store_handler = prev->srv.ssl_sess_store_handler;
    }

    if (conf->srv.ssl_sess_store_src.len) {
        sscf = ngx_http_conf_get_module_srv_conf(cf, ngx_http_ssl_module);
        if (sscf && sscf->ssl.ctx) {
#ifdef LIBRESSL_VERSION_NUMBER
            ngx_log_error(NGX_LOG_EMERG, cf->log, 0,
                          "LibreSSL does not support "
                          "ssl_session_store_by_lua*");

            return NGX_CONF_ERROR;
#else
            SSL_CTX_sess_set_new_cb(sscf->ssl.ctx,
                                    ngx_http_lua_ssl_sess_store_handler);
#endif
        }
    }

    if (conf->srv.ssl_sess_fetch_src.len == 0) {
        conf->srv.ssl_sess_fetch_src = prev->srv.ssl_sess_fetch_src;
        conf->srv.ssl_sess_fetch_src_key = prev->srv.ssl_sess_fetch_src_key;
        conf->srv.ssl_sess_fetch_handler = prev->srv.ssl_sess_fetch_handler;
    }

    if (conf->srv.ssl_sess_fetch_src.len) {
        sscf = ngx_http_conf_get_module_srv_conf(cf, ngx_http_ssl_module);
        if (sscf && sscf->ssl.ctx) {
#ifdef LIBRESSL_VERSION_NUMBER
            ngx_log_error(NGX_LOG_EMERG, cf->log, 0,
                          "LibreSSL does not support "
                          "ssl_session_fetch_by_lua*");

            return NGX_CONF_ERROR;
#else
            SSL_CTX_sess_set_get_cb(sscf->ssl.ctx,
                                    ngx_http_lua_ssl_sess_fetch_handler);
#endif
        }
    }

#endif  /* NGX_HTTP_SSL */
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
          char * benchRet = ngx_http_lua_merge_srv_conf(cf,parent,child);
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
          char * benchRet = ngx_http_lua_merge_srv_conf(cf,parent,child);
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
          char * benchRet = ngx_http_lua_merge_srv_conf(cf,parent,child);
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

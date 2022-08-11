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

/* Variables and functions */

void *
RTMP_TLS_AllocServerContext(const char* cert, const char* key)
{
    void *ctx = NULL;
#ifdef CRYPTO
    if (!RTMP_TLS_ctx)
        RTMP_TLS_Init();
#if defined(USE_MBEDTLS)
    tls_server_ctx *tc = ctx = calloc(1, sizeof(struct tls_server_ctx));
    tc->conf = &RTMP_TLS_ctx->conf;
    tc->ctr_drbg = &RTMP_TLS_ctx->ctr_drbg;

    mbedtls_x509_crt_init(&tc->cert);
    if (mbedtls_x509_crt_parse_file(&tc->cert, cert))
    {
        free(tc);
        return NULL;
    }

    mbedtls_pk_init(&tc->key);
    if (mbedtls_pk_parse_keyfile(&tc->key, key, NULL))
    {
        mbedtls_x509_crt_free(&tc->cert);
        mbedtls_pk_free(&tc->key);
        free(tc);
        return NULL;
    }
#elif defined(USE_POLARSSL)
    tls_server_ctx *tc = ctx = calloc(1, sizeof(struct tls_server_ctx));
    tc->dhm_P = my_dhm_P;
    tc->dhm_G = my_dhm_G;
    tc->hs = &RTMP_TLS_ctx->hs;
    if (x509parse_crtfile(&tc->cert, cert))
    {
        free(tc);
        return NULL;
    }
    if (x509parse_keyfile(&tc->key, key, NULL))
    {
        x509_free(&tc->cert);
        free(tc);
        return NULL;
    }
#elif defined(USE_GNUTLS) && !defined(NO_SSL)
    gnutls_certificate_allocate_credentials((gnutls_certificate_credentials*) &ctx);
    if (gnutls_certificate_set_x509_key_file(ctx, cert, key, GNUTLS_X509_FMT_PEM) != 0)
    {
        gnutls_certificate_free_credentials(ctx);
        return NULL;
    }
#elif !defined(NO_SSL) /* USE_OPENSSL */
    ctx = SSL_CTX_new(SSLv23_server_method());
    if (!SSL_CTX_use_certificate_chain_file(ctx, cert))
    {
        SSL_CTX_free(ctx);
        return NULL;
    }
    if (!SSL_CTX_use_PrivateKey_file(ctx, key, SSL_FILETYPE_PEM))
    {
        SSL_CTX_free(ctx);
        return NULL;
    }
#endif
#else
    (void)cert;
    (void)key;
#endif
    return ctx;
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
          int _len_cert0 = 1;
          const char * cert = (const char *) malloc(_len_cert0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_cert0; _i0++) {
            cert[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_key0 = 1;
          const char * key = (const char *) malloc(_len_key0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * benchRet = RTMP_TLS_AllocServerContext(cert,key);
          free(cert);
          free(key);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cert0 = 65025;
          const char * cert = (const char *) malloc(_len_cert0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_cert0; _i0++) {
            cert[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_key0 = 65025;
          const char * key = (const char *) malloc(_len_key0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * benchRet = RTMP_TLS_AllocServerContext(cert,key);
          free(cert);
          free(key);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cert0 = 100;
          const char * cert = (const char *) malloc(_len_cert0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_cert0; _i0++) {
            cert[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_key0 = 100;
          const char * key = (const char *) malloc(_len_key0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * benchRet = RTMP_TLS_AllocServerContext(cert,key);
          free(cert);
          free(key);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

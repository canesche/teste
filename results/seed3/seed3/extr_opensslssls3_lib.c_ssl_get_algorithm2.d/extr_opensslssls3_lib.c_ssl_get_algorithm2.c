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
typedef  struct TYPE_13__   TYPE_6__ ;
typedef  struct TYPE_12__   TYPE_5__ ;
typedef  struct TYPE_11__   TYPE_4__ ;
typedef  struct TYPE_10__   TYPE_3__ ;
typedef  struct TYPE_9__   TYPE_2__ ;
typedef  struct TYPE_8__   TYPE_1__ ;

/* Type definitions */
struct TYPE_9__ {TYPE_1__* new_cipher; } ;
struct TYPE_10__ {TYPE_2__ tmp; } ;
struct TYPE_13__ {TYPE_3__ s3; TYPE_5__* method; } ;
struct TYPE_12__ {TYPE_4__* ssl3_enc; } ;
struct TYPE_11__ {int enc_flags; } ;
struct TYPE_8__ {long algorithm2; int algorithm_mkey; } ;
typedef  TYPE_6__ SSL ;

/* Variables and functions */
 int SSL_ENC_FLAG_SHA256_PRF ; 
 long SSL_HANDSHAKE_MAC_DEFAULT ; 
 long SSL_HANDSHAKE_MAC_SHA256 ; 
 long SSL_HANDSHAKE_MAC_SHA384 ; 
 int SSL_PSK ; 
 long TLS1_PRF ; 
 long TLS1_PRF_SHA256 ; 
 long TLS1_PRF_SHA384 ; 

long ssl_get_algorithm2(SSL *s)
{
    long alg2;
    if (s->s3.tmp.new_cipher == NULL)
        return -1;
    alg2 = s->s3.tmp.new_cipher->algorithm2;
    if (s->method->ssl3_enc->enc_flags & SSL_ENC_FLAG_SHA256_PRF) {
        if (alg2 == (SSL_HANDSHAKE_MAC_DEFAULT | TLS1_PRF))
            return SSL_HANDSHAKE_MAC_SHA256 | TLS1_PRF_SHA256;
    } else if (s->s3.tmp.new_cipher->algorithm_mkey & SSL_PSK) {
        if (alg2 == (SSL_HANDSHAKE_MAC_SHA384 | TLS1_PRF_SHA384))
            return SSL_HANDSHAKE_MAC_DEFAULT | TLS1_PRF;
    }
    return alg2;
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
          int _len_s0 = 1;
          struct TYPE_13__ * s = (struct TYPE_13__ *) malloc(_len_s0*sizeof(struct TYPE_13__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__s3_tmp_new_cipher0 = 1;
          s[_i0].s3.tmp.new_cipher = (struct TYPE_8__ *) malloc(_len_s__i0__s3_tmp_new_cipher0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_s__i0__s3_tmp_new_cipher0; _j0++) {
            s[_i0].s3.tmp.new_cipher->algorithm2 = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].s3.tmp.new_cipher->algorithm_mkey = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__method0 = 1;
          s[_i0].method = (struct TYPE_12__ *) malloc(_len_s__i0__method0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_s__i0__method0; _j0++) {
              int _len_s__i0__method_ssl3_enc0 = 1;
          s[_i0].method->ssl3_enc = (struct TYPE_11__ *) malloc(_len_s__i0__method_ssl3_enc0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_s__i0__method_ssl3_enc0; _j0++) {
            s[_i0].method->ssl3_enc->enc_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          long benchRet = ssl_get_algorithm2(s);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].method);
          }
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s0 = 65025;
          struct TYPE_13__ * s = (struct TYPE_13__ *) malloc(_len_s0*sizeof(struct TYPE_13__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__s3_tmp_new_cipher0 = 1;
          s[_i0].s3.tmp.new_cipher = (struct TYPE_8__ *) malloc(_len_s__i0__s3_tmp_new_cipher0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_s__i0__s3_tmp_new_cipher0; _j0++) {
            s[_i0].s3.tmp.new_cipher->algorithm2 = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].s3.tmp.new_cipher->algorithm_mkey = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__method0 = 1;
          s[_i0].method = (struct TYPE_12__ *) malloc(_len_s__i0__method0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_s__i0__method0; _j0++) {
              int _len_s__i0__method_ssl3_enc0 = 1;
          s[_i0].method->ssl3_enc = (struct TYPE_11__ *) malloc(_len_s__i0__method_ssl3_enc0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_s__i0__method_ssl3_enc0; _j0++) {
            s[_i0].method->ssl3_enc->enc_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          long benchRet = ssl_get_algorithm2(s);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].method);
          }
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s0 = 100;
          struct TYPE_13__ * s = (struct TYPE_13__ *) malloc(_len_s0*sizeof(struct TYPE_13__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__s3_tmp_new_cipher0 = 1;
          s[_i0].s3.tmp.new_cipher = (struct TYPE_8__ *) malloc(_len_s__i0__s3_tmp_new_cipher0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_s__i0__s3_tmp_new_cipher0; _j0++) {
            s[_i0].s3.tmp.new_cipher->algorithm2 = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].s3.tmp.new_cipher->algorithm_mkey = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__method0 = 1;
          s[_i0].method = (struct TYPE_12__ *) malloc(_len_s__i0__method0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_s__i0__method0; _j0++) {
              int _len_s__i0__method_ssl3_enc0 = 1;
          s[_i0].method->ssl3_enc = (struct TYPE_11__ *) malloc(_len_s__i0__method_ssl3_enc0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_s__i0__method_ssl3_enc0; _j0++) {
            s[_i0].method->ssl3_enc->enc_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          long benchRet = ssl_get_algorithm2(s);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].method);
          }
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

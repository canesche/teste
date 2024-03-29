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
typedef  struct TYPE_11__   TYPE_5__ ;
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {TYPE_1__* new_cipher; } ;
struct TYPE_9__ {TYPE_2__ tmp; } ;
struct TYPE_11__ {TYPE_4__* cert; TYPE_3__ s3; } ;
struct TYPE_10__ {scalar_t__ psk_identity_hint; } ;
struct TYPE_7__ {unsigned long algorithm_mkey; } ;
typedef  TYPE_5__ SSL ;

/* Variables and functions */
 unsigned long SSL_PSK ; 
 unsigned long SSL_kDHE ; 
 unsigned long SSL_kDHEPSK ; 
 unsigned long SSL_kECDHE ; 
 unsigned long SSL_kECDHEPSK ; 
 unsigned long SSL_kPSK ; 
 unsigned long SSL_kRSAPSK ; 
 unsigned long SSL_kSRP ; 

__attribute__((used)) static int send_server_key_exchange(SSL *s)
{
    unsigned long alg_k = s->s3.tmp.new_cipher->algorithm_mkey;

    /*
     * only send a ServerKeyExchange if DH or fortezza but we have a
     * sign only certificate PSK: may send PSK identity hints For
     * ECC ciphersuites, we send a serverKeyExchange message only if
     * the cipher suite is either ECDH-anon or ECDHE. In other cases,
     * the server certificate contains the server's public key for
     * key exchange.
     */
    if (alg_k & (SSL_kDHE | SSL_kECDHE)
        /*
         * PSK: send ServerKeyExchange if PSK identity hint if
         * provided
         */
#ifndef OPENSSL_NO_PSK
        /* Only send SKE if we have identity hint for plain PSK */
        || ((alg_k & (SSL_kPSK | SSL_kRSAPSK))
            && s->cert->psk_identity_hint)
        /* For other PSK always send SKE */
        || (alg_k & (SSL_PSK & (SSL_kDHEPSK | SSL_kECDHEPSK)))
#endif
#ifndef OPENSSL_NO_SRP
        /* SRP: send ServerKeyExchange */
        || (alg_k & SSL_kSRP)
#endif
        ) {
        return 1;
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
          int _len_s0 = 1;
          struct TYPE_11__ * s = (struct TYPE_11__ *) malloc(_len_s0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__cert0 = 1;
          s[_i0].cert = (struct TYPE_10__ *) malloc(_len_s__i0__cert0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_s__i0__cert0; _j0++) {
            s[_i0].cert->psk_identity_hint = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__s3_tmp_new_cipher0 = 1;
          s[_i0].s3.tmp.new_cipher = (struct TYPE_7__ *) malloc(_len_s__i0__s3_tmp_new_cipher0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_s__i0__s3_tmp_new_cipher0; _j0++) {
            s[_i0].s3.tmp.new_cipher->algorithm_mkey = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = send_server_key_exchange(s);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].cert);
          }
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s0 = 65025;
          struct TYPE_11__ * s = (struct TYPE_11__ *) malloc(_len_s0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__cert0 = 1;
          s[_i0].cert = (struct TYPE_10__ *) malloc(_len_s__i0__cert0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_s__i0__cert0; _j0++) {
            s[_i0].cert->psk_identity_hint = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__s3_tmp_new_cipher0 = 1;
          s[_i0].s3.tmp.new_cipher = (struct TYPE_7__ *) malloc(_len_s__i0__s3_tmp_new_cipher0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_s__i0__s3_tmp_new_cipher0; _j0++) {
            s[_i0].s3.tmp.new_cipher->algorithm_mkey = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = send_server_key_exchange(s);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].cert);
          }
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s0 = 100;
          struct TYPE_11__ * s = (struct TYPE_11__ *) malloc(_len_s0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__cert0 = 1;
          s[_i0].cert = (struct TYPE_10__ *) malloc(_len_s__i0__cert0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_s__i0__cert0; _j0++) {
            s[_i0].cert->psk_identity_hint = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__s3_tmp_new_cipher0 = 1;
          s[_i0].s3.tmp.new_cipher = (struct TYPE_7__ *) malloc(_len_s__i0__s3_tmp_new_cipher0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_s__i0__s3_tmp_new_cipher0; _j0++) {
            s[_i0].s3.tmp.new_cipher->algorithm_mkey = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = send_server_key_exchange(s);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].cert);
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

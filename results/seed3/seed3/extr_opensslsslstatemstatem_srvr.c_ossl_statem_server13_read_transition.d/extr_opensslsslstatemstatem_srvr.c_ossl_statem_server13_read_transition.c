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
struct TYPE_13__ {int hand_state; } ;
struct TYPE_9__ {int /*<<< orphan*/  cert_request; } ;
struct TYPE_10__ {TYPE_2__ tmp; } ;
struct TYPE_8__ {int /*<<< orphan*/  early_data; } ;
struct TYPE_12__ {int /*<<< orphan*/  post_handshake_auth; int /*<<< orphan*/  early_data_state; TYPE_4__* session; TYPE_3__ s3; TYPE_1__ ext; int /*<<< orphan*/  hello_retry_request; TYPE_6__ statem; } ;
struct TYPE_11__ {int /*<<< orphan*/ * peer; } ;
typedef  TYPE_5__ SSL ;
typedef  TYPE_6__ OSSL_STATEM ;

/* Variables and functions */
 int SSL3_MT_CERTIFICATE ; 
 int SSL3_MT_CERTIFICATE_VERIFY ; 
 int SSL3_MT_CLIENT_HELLO ; 
 int SSL3_MT_END_OF_EARLY_DATA ; 
 int SSL3_MT_FINISHED ; 
 int SSL3_MT_KEY_UPDATE ; 
 int /*<<< orphan*/  SSL_EARLY_DATA_ACCEPTED ; 
 int /*<<< orphan*/  SSL_EARLY_DATA_READING ; 
 int /*<<< orphan*/  SSL_HRR_PENDING ; 
 int /*<<< orphan*/  SSL_PHA_REQUESTED ; 
#define  TLS_ST_EARLY_DATA 133 
#define  TLS_ST_OK 132 
#define  TLS_ST_SR_CERT 131 
#define  TLS_ST_SR_CERT_VRFY 130 
 int TLS_ST_SR_CLNT_HELLO ; 
#define  TLS_ST_SR_END_OF_EARLY_DATA 129 
 void* TLS_ST_SR_FINISHED ; 
 int TLS_ST_SR_KEY_UPDATE ; 
#define  TLS_ST_SW_FINISHED 128 

__attribute__((used)) static int ossl_statem_server13_read_transition(SSL *s, int mt)
{
    OSSL_STATEM *st = &s->statem;

    /*
     * Note: There is no case for TLS_ST_BEFORE because at that stage we have
     * not negotiated TLSv1.3 yet, so that case is handled by
     * ossl_statem_server_read_transition()
     */
    switch (st->hand_state) {
    default:
        break;

    case TLS_ST_EARLY_DATA:
        if (s->hello_retry_request == SSL_HRR_PENDING) {
            if (mt == SSL3_MT_CLIENT_HELLO) {
                st->hand_state = TLS_ST_SR_CLNT_HELLO;
                return 1;
            }
            break;
        } else if (s->ext.early_data == SSL_EARLY_DATA_ACCEPTED) {
            if (mt == SSL3_MT_END_OF_EARLY_DATA) {
                st->hand_state = TLS_ST_SR_END_OF_EARLY_DATA;
                return 1;
            }
            break;
        }
        /* Fall through */

    case TLS_ST_SR_END_OF_EARLY_DATA:
    case TLS_ST_SW_FINISHED:
        if (s->s3.tmp.cert_request) {
            if (mt == SSL3_MT_CERTIFICATE) {
                st->hand_state = TLS_ST_SR_CERT;
                return 1;
            }
        } else {
            if (mt == SSL3_MT_FINISHED) {
                st->hand_state = TLS_ST_SR_FINISHED;
                return 1;
            }
        }
        break;

    case TLS_ST_SR_CERT:
        if (s->session->peer == NULL) {
            if (mt == SSL3_MT_FINISHED) {
                st->hand_state = TLS_ST_SR_FINISHED;
                return 1;
            }
        } else {
            if (mt == SSL3_MT_CERTIFICATE_VERIFY) {
                st->hand_state = TLS_ST_SR_CERT_VRFY;
                return 1;
            }
        }
        break;

    case TLS_ST_SR_CERT_VRFY:
        if (mt == SSL3_MT_FINISHED) {
            st->hand_state = TLS_ST_SR_FINISHED;
            return 1;
        }
        break;

    case TLS_ST_OK:
        /*
         * Its never ok to start processing handshake messages in the middle of
         * early data (i.e. before we've received the end of early data alert)
         */
        if (s->early_data_state == SSL_EARLY_DATA_READING)
            break;

        if (mt == SSL3_MT_CERTIFICATE
                && s->post_handshake_auth == SSL_PHA_REQUESTED) {
            st->hand_state = TLS_ST_SR_CERT;
            return 1;
        }

        if (mt == SSL3_MT_KEY_UPDATE) {
            st->hand_state = TLS_ST_SR_KEY_UPDATE;
            return 1;
        }
        break;
    }

    /* No valid transition found */
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
          int mt = 100;
          int _len_s0 = 1;
          struct TYPE_12__ * s = (struct TYPE_12__ *) malloc(_len_s0*sizeof(struct TYPE_12__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].post_handshake_auth = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].early_data_state = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__session0 = 1;
          s[_i0].session = (struct TYPE_11__ *) malloc(_len_s__i0__session0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_s__i0__session0; _j0++) {
              int _len_s__i0__session_peer0 = 1;
          s[_i0].session->peer = (int *) malloc(_len_s__i0__session_peer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__session_peer0; _j0++) {
            s[_i0].session->peer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        s[_i0].s3.tmp.cert_request = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].ext.early_data = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].hello_retry_request = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].statem.hand_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ossl_statem_server13_read_transition(s,mt);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].session);
          }
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int mt = 255;
          int _len_s0 = 65025;
          struct TYPE_12__ * s = (struct TYPE_12__ *) malloc(_len_s0*sizeof(struct TYPE_12__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].post_handshake_auth = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].early_data_state = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__session0 = 1;
          s[_i0].session = (struct TYPE_11__ *) malloc(_len_s__i0__session0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_s__i0__session0; _j0++) {
              int _len_s__i0__session_peer0 = 1;
          s[_i0].session->peer = (int *) malloc(_len_s__i0__session_peer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__session_peer0; _j0++) {
            s[_i0].session->peer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        s[_i0].s3.tmp.cert_request = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].ext.early_data = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].hello_retry_request = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].statem.hand_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ossl_statem_server13_read_transition(s,mt);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].session);
          }
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mt = 10;
          int _len_s0 = 100;
          struct TYPE_12__ * s = (struct TYPE_12__ *) malloc(_len_s0*sizeof(struct TYPE_12__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].post_handshake_auth = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].early_data_state = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__session0 = 1;
          s[_i0].session = (struct TYPE_11__ *) malloc(_len_s__i0__session0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_s__i0__session0; _j0++) {
              int _len_s__i0__session_peer0 = 1;
          s[_i0].session->peer = (int *) malloc(_len_s__i0__session_peer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__session_peer0; _j0++) {
            s[_i0].session->peer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        s[_i0].s3.tmp.cert_request = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].ext.early_data = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].hello_retry_request = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].statem.hand_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ossl_statem_server13_read_transition(s,mt);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].session);
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

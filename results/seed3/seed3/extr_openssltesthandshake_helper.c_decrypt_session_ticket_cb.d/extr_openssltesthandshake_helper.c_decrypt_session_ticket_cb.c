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
typedef  int SSL_TICKET_STATUS ;
typedef  int /*<<< orphan*/  SSL_SESSION ;
typedef  int /*<<< orphan*/  SSL ;

/* Variables and functions */
#define  SSL_TICKET_EMPTY 131 
#define  SSL_TICKET_NO_DECRYPT 130 
 int SSL_TICKET_RETURN_ABORT ; 
 int SSL_TICKET_RETURN_IGNORE_RENEW ; 
 int SSL_TICKET_RETURN_USE ; 
 int SSL_TICKET_RETURN_USE_RENEW ; 
#define  SSL_TICKET_SUCCESS 129 
#define  SSL_TICKET_SUCCESS_RENEW 128 

__attribute__((used)) static int decrypt_session_ticket_cb(SSL *s, SSL_SESSION *ss,
                                     const unsigned char *keyname,
                                     size_t keyname_len,
                                     SSL_TICKET_STATUS status,
                                     void *arg)
{
    switch (status) {
    case SSL_TICKET_EMPTY:
    case SSL_TICKET_NO_DECRYPT:
        return SSL_TICKET_RETURN_IGNORE_RENEW;
    case SSL_TICKET_SUCCESS:
        return SSL_TICKET_RETURN_USE;
    case SSL_TICKET_SUCCESS_RENEW:
        return SSL_TICKET_RETURN_USE_RENEW;
    default:
        break;
    }
    return SSL_TICKET_RETURN_ABORT;
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
          unsigned long keyname_len = 100;
          int status = 100;
          int _len_s0 = 1;
          int * s = (int *) malloc(_len_s0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ss0 = 1;
          int * ss = (int *) malloc(_len_ss0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ss0; _i0++) {
            ss[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_keyname0 = 1;
          const unsigned char * keyname = (const unsigned char *) malloc(_len_keyname0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_keyname0; _i0++) {
            keyname[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * arg;
          int benchRet = decrypt_session_ticket_cb(s,ss,keyname,keyname_len,status,arg);
          printf("%d\n", benchRet); 
          free(s);
          free(ss);
          free(keyname);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long keyname_len = 255;
          int status = 255;
          int _len_s0 = 65025;
          int * s = (int *) malloc(_len_s0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ss0 = 65025;
          int * ss = (int *) malloc(_len_ss0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ss0; _i0++) {
            ss[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_keyname0 = 65025;
          const unsigned char * keyname = (const unsigned char *) malloc(_len_keyname0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_keyname0; _i0++) {
            keyname[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * arg;
          int benchRet = decrypt_session_ticket_cb(s,ss,keyname,keyname_len,status,arg);
          printf("%d\n", benchRet); 
          free(s);
          free(ss);
          free(keyname);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long keyname_len = 10;
          int status = 10;
          int _len_s0 = 100;
          int * s = (int *) malloc(_len_s0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ss0 = 100;
          int * ss = (int *) malloc(_len_ss0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ss0; _i0++) {
            ss[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_keyname0 = 100;
          const unsigned char * keyname = (const unsigned char *) malloc(_len_keyname0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_keyname0; _i0++) {
            keyname[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * arg;
          int benchRet = decrypt_session_ticket_cb(s,ss,keyname,keyname_len,status,arg);
          printf("%d\n", benchRet); 
          free(s);
          free(ss);
          free(keyname);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

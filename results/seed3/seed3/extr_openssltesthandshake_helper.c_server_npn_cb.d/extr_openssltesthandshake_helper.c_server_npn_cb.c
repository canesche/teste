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
struct TYPE_2__ {unsigned char* npn_protocols; unsigned int npn_protocols_len; } ;
typedef  int /*<<< orphan*/  SSL ;
typedef  TYPE_1__ CTX_DATA ;

/* Variables and functions */
 int SSL_TLSEXT_ERR_OK ; 

__attribute__((used)) static int server_npn_cb(SSL *s, const unsigned char **data,
                         unsigned int *len, void *arg)
{
    CTX_DATA *ctx_data = (CTX_DATA*)(arg);
    *data = ctx_data->npn_protocols;
    *len = ctx_data->npn_protocols_len;
    return SSL_TLSEXT_ERR_OK;
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
          int * s = (int *) malloc(_len_s0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 1;
          const unsigned char ** data = (const unsigned char **) malloc(_len_data0*sizeof(const unsigned char *));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            int _len_data1 = 1;
            data[_i0] = (const unsigned char *) malloc(_len_data1*sizeof(const unsigned char));
            for(int _i1 = 0; _i1 < _len_data1; _i1++) {
              data[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_len0 = 1;
          unsigned int * len = (unsigned int *) malloc(_len_len0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * arg;
          int benchRet = server_npn_cb(s,data,len,arg);
          printf("%d\n", benchRet); 
          free(s);
          for(int i1 = 0; i1 < _len_data0; i1++) {
            int _len_data1 = 1;
              free(data[i1]);
          }
          free(data);
          free(len);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s0 = 65025;
          int * s = (int *) malloc(_len_s0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 65025;
          const unsigned char ** data = (const unsigned char **) malloc(_len_data0*sizeof(const unsigned char *));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            int _len_data1 = 1;
            data[_i0] = (const unsigned char *) malloc(_len_data1*sizeof(const unsigned char));
            for(int _i1 = 0; _i1 < _len_data1; _i1++) {
              data[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_len0 = 65025;
          unsigned int * len = (unsigned int *) malloc(_len_len0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * arg;
          int benchRet = server_npn_cb(s,data,len,arg);
          printf("%d\n", benchRet); 
          free(s);
          for(int i1 = 0; i1 < _len_data0; i1++) {
            int _len_data1 = 1;
              free(data[i1]);
          }
          free(data);
          free(len);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s0 = 100;
          int * s = (int *) malloc(_len_s0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 100;
          const unsigned char ** data = (const unsigned char **) malloc(_len_data0*sizeof(const unsigned char *));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            int _len_data1 = 1;
            data[_i0] = (const unsigned char *) malloc(_len_data1*sizeof(const unsigned char));
            for(int _i1 = 0; _i1 < _len_data1; _i1++) {
              data[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_len0 = 100;
          unsigned int * len = (unsigned int *) malloc(_len_len0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * arg;
          int benchRet = server_npn_cb(s,data,len,arg);
          printf("%d\n", benchRet); 
          free(s);
          for(int i1 = 0; i1 < _len_data0; i1++) {
            int _len_data1 = 1;
              free(data[i1]);
          }
          free(data);
          free(len);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

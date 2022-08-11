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
typedef  int /*<<< orphan*/  SSL ;

/* Variables and functions */
 unsigned int TACK_EXT_TYPE ; 
 unsigned int TLSEXT_TYPE_signed_certificate_timestamp ; 
 int /*<<< orphan*/  serverinfo_other_seen ; 
 int /*<<< orphan*/  serverinfo_sct_seen ; 
 int /*<<< orphan*/  serverinfo_tack_seen ; 

__attribute__((used)) static int serverinfo_cli_parse_cb(SSL *s, unsigned int ext_type,
                                   const unsigned char *in, size_t inlen,
                                   int *al, void *arg)
{
    if (ext_type == TLSEXT_TYPE_signed_certificate_timestamp)
        serverinfo_sct_seen++;
    else if (ext_type == TACK_EXT_TYPE)
        serverinfo_tack_seen++;
    else
        serverinfo_other_seen++;
    return 1;
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
          unsigned int ext_type = 100;
          unsigned long inlen = 100;
          int _len_s0 = 1;
          int * s = (int *) malloc(_len_s0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_in0 = 1;
          const unsigned char * in = (const unsigned char *) malloc(_len_in0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_al0 = 1;
          int * al = (int *) malloc(_len_al0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_al0; _i0++) {
            al[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * arg;
          int benchRet = serverinfo_cli_parse_cb(s,ext_type,in,inlen,al,arg);
          printf("%d\n", benchRet); 
          free(s);
          free(in);
          free(al);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int ext_type = 255;
          unsigned long inlen = 255;
          int _len_s0 = 65025;
          int * s = (int *) malloc(_len_s0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_in0 = 65025;
          const unsigned char * in = (const unsigned char *) malloc(_len_in0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_al0 = 65025;
          int * al = (int *) malloc(_len_al0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_al0; _i0++) {
            al[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * arg;
          int benchRet = serverinfo_cli_parse_cb(s,ext_type,in,inlen,al,arg);
          printf("%d\n", benchRet); 
          free(s);
          free(in);
          free(al);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int ext_type = 10;
          unsigned long inlen = 10;
          int _len_s0 = 100;
          int * s = (int *) malloc(_len_s0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_in0 = 100;
          const unsigned char * in = (const unsigned char *) malloc(_len_in0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_al0 = 100;
          int * al = (int *) malloc(_len_al0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_al0; _i0++) {
            al[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * arg;
          int benchRet = serverinfo_cli_parse_cb(s,ext_type,in,inlen,al,arg);
          printf("%d\n", benchRet); 
          free(s);
          free(in);
          free(al);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

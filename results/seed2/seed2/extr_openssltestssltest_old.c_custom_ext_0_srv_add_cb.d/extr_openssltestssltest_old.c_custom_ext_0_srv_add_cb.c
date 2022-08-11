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
 int custom_ext_error ; 

__attribute__((used)) static int custom_ext_0_srv_add_cb(SSL *s, unsigned int ext_type,
                                   const unsigned char **out,
                                   size_t *outlen, int *al, void *arg)
{
    /* Error: should not have been called */
    custom_ext_error = 1;
    return 0;                   /* Don't send an extension */
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
          int _len_s0 = 1;
          int * s = (int *) malloc(_len_s0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 1;
          const unsigned char ** out = (const unsigned char **) malloc(_len_out0*sizeof(const unsigned char *));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            int _len_out1 = 1;
            out[_i0] = (const unsigned char *) malloc(_len_out1*sizeof(const unsigned char));
            for(int _i1 = 0; _i1 < _len_out1; _i1++) {
              out[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_outlen0 = 1;
          unsigned long * outlen = (unsigned long *) malloc(_len_outlen0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_outlen0; _i0++) {
            outlen[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_al0 = 1;
          int * al = (int *) malloc(_len_al0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_al0; _i0++) {
            al[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * arg;
          int benchRet = custom_ext_0_srv_add_cb(s,ext_type,out,outlen,al,arg);
          printf("%d\n", benchRet); 
          free(s);
          for(int i1 = 0; i1 < _len_out0; i1++) {
            int _len_out1 = 1;
              free(out[i1]);
          }
          free(out);
          free(outlen);
          free(al);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int ext_type = 255;
          int _len_s0 = 65025;
          int * s = (int *) malloc(_len_s0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 65025;
          const unsigned char ** out = (const unsigned char **) malloc(_len_out0*sizeof(const unsigned char *));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            int _len_out1 = 1;
            out[_i0] = (const unsigned char *) malloc(_len_out1*sizeof(const unsigned char));
            for(int _i1 = 0; _i1 < _len_out1; _i1++) {
              out[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_outlen0 = 65025;
          unsigned long * outlen = (unsigned long *) malloc(_len_outlen0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_outlen0; _i0++) {
            outlen[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_al0 = 65025;
          int * al = (int *) malloc(_len_al0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_al0; _i0++) {
            al[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * arg;
          int benchRet = custom_ext_0_srv_add_cb(s,ext_type,out,outlen,al,arg);
          printf("%d\n", benchRet); 
          free(s);
          for(int i1 = 0; i1 < _len_out0; i1++) {
            int _len_out1 = 1;
              free(out[i1]);
          }
          free(out);
          free(outlen);
          free(al);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int ext_type = 10;
          int _len_s0 = 100;
          int * s = (int *) malloc(_len_s0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 100;
          const unsigned char ** out = (const unsigned char **) malloc(_len_out0*sizeof(const unsigned char *));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            int _len_out1 = 1;
            out[_i0] = (const unsigned char *) malloc(_len_out1*sizeof(const unsigned char));
            for(int _i1 = 0; _i1 < _len_out1; _i1++) {
              out[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_outlen0 = 100;
          unsigned long * outlen = (unsigned long *) malloc(_len_outlen0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_outlen0; _i0++) {
            outlen[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_al0 = 100;
          int * al = (int *) malloc(_len_al0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_al0; _i0++) {
            al[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * arg;
          int benchRet = custom_ext_0_srv_add_cb(s,ext_type,out,outlen,al,arg);
          printf("%d\n", benchRet); 
          free(s);
          for(int i1 = 0; i1 < _len_out0; i1++) {
            int _len_out1 = 1;
              free(out[i1]);
          }
          free(out);
          free(outlen);
          free(al);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

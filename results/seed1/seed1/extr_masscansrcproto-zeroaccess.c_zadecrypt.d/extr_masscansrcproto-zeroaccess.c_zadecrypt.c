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

__attribute__((used)) static unsigned
zadecrypt(const unsigned char *src, size_t src_len, unsigned char *dst, size_t dst_len)
{
    unsigned key;
    size_t i;

    key = 'f'<<24 | 't'<<16 | 'p'<<8 | '2'<<0;

    for (i=0; i<dst_len && i<src_len; i+=4) {
        dst[i+0] = src[i+0] ^ (unsigned char)(key>> 0);
        dst[i+1] = src[i+1] ^ (unsigned char)(key>> 8);
        dst[i+2] = src[i+2] ^ (unsigned char)(key>>16);
        dst[i+3] = src[i+3] ^ (unsigned char)(key>>24);

        key = key<<1 | key>>31;
    }

    return (unsigned)src_len;
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
          unsigned long src_len = 100;
          unsigned long dst_len = 100;
          int _len_src0 = 1;
          const unsigned char * src = (const unsigned char *) malloc(_len_src0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 1;
          unsigned char * dst = (unsigned char *) malloc(_len_dst0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = zadecrypt(src,src_len,dst,dst_len);
          printf("%u\n", benchRet); 
          free(src);
          free(dst);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long src_len = 255;
          unsigned long dst_len = 255;
          int _len_src0 = 65025;
          const unsigned char * src = (const unsigned char *) malloc(_len_src0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 65025;
          unsigned char * dst = (unsigned char *) malloc(_len_dst0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = zadecrypt(src,src_len,dst,dst_len);
          printf("%u\n", benchRet); 
          free(src);
          free(dst);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long src_len = 10;
          unsigned long dst_len = 10;
          int _len_src0 = 100;
          const unsigned char * src = (const unsigned char *) malloc(_len_src0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 100;
          unsigned char * dst = (unsigned char *) malloc(_len_dst0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = zadecrypt(src,src_len,dst,dst_len);
          printf("%u\n", benchRet); 
          free(src);
          free(dst);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

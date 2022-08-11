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

unsigned base64_encode (char *dst,
                        const char *src,
                        unsigned srclen)
{
    static const char alphabet[] =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    char *start = dst;
    int nline = 19;
    for(; srclen; srclen -= 3) {
        unsigned int buf = *(src++) << 16;
        if(srclen > 1) buf |= *(src++) << 8;
        if(srclen > 2) buf |= *(src++);
        *(dst++) = alphabet[(buf >> 18) & 0x3f];
        *(dst++) = alphabet[(buf >> 12) & 0x3f];
        *(dst++) = (srclen > 1) ? alphabet[(buf >> 6) & 0x3f] : '=';
        *(dst++) = (srclen > 2) ? alphabet[buf & 0x3f] : '=';
        if(srclen < 3) break;
        if(!--nline) { *(dst++) = '\n'; nline = 19; }
    }
    *(dst++) = '\n';
    *(dst++) = '\0';
    return(dst - start - 1);
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
          unsigned int srclen = 100;
          int _len_dst0 = 1;
          char * dst = (char *) malloc(_len_dst0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 1;
          const char * src = (const char *) malloc(_len_src0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = base64_encode(dst,src,srclen);
          printf("%u\n", benchRet); 
          free(dst);
          free(src);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int srclen = 255;
          int _len_dst0 = 65025;
          char * dst = (char *) malloc(_len_dst0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 65025;
          const char * src = (const char *) malloc(_len_src0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = base64_encode(dst,src,srclen);
          printf("%u\n", benchRet); 
          free(dst);
          free(src);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int srclen = 10;
          int _len_dst0 = 100;
          char * dst = (char *) malloc(_len_dst0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 100;
          const char * src = (const char *) malloc(_len_src0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = base64_encode(dst,src,srclen);
          printf("%u\n", benchRet); 
          free(dst);
          free(src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

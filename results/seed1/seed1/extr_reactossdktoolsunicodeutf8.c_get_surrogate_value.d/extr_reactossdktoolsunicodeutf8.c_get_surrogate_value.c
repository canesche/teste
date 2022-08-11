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
typedef  int WCHAR ;

/* Variables and functions */

__attribute__((used)) static inline unsigned int get_surrogate_value( const WCHAR *src, unsigned int srclen )
{
    if (src[0] >= 0xd800 && src[0] <= 0xdfff)  /* surrogate pair */
    {
        if (src[0] > 0xdbff || /* invalid high surrogate */
            srclen <= 1 ||     /* missing low surrogate */
            src[1] < 0xdc00 || src[1] > 0xdfff) /* invalid low surrogate */
            return 0;
        return 0x10000 + ((src[0] & 0x3ff) << 10) + (src[1] & 0x3ff);
    }
    return src[0];
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
          int _len_src0 = 1;
          const int * src = (const int *) malloc(_len_src0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = get_surrogate_value(src,srclen);
          printf("%u\n", benchRet); 
          free(src);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int srclen = 255;
          int _len_src0 = 65025;
          const int * src = (const int *) malloc(_len_src0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = get_surrogate_value(src,srclen);
          printf("%u\n", benchRet); 
          free(src);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int srclen = 10;
          int _len_src0 = 100;
          const int * src = (const int *) malloc(_len_src0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = get_surrogate_value(src,srclen);
          printf("%u\n", benchRet); 
          free(src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  int uint8_t ;

/* Variables and functions */

__attribute__((used)) static inline int celt_bits2pulses(const uint8_t *cache, int bits)
{
    // TODO: Find the size of cache and make it into an array in the parameters list
    int i, low = 0, high;

    high = cache[0];
    bits--;

    for (i = 0; i < 6; i++) {
        int center = (low + high + 1) >> 1;
        if (cache[center] >= bits)
            high = center;
        else
            low = center;
    }

    return (bits - (low == 0 ? -1 : cache[low]) <= cache[high] - bits) ? low : high;
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
          int bits = 100;
          int _len_cache0 = 1;
          const int * cache = (const int *) malloc(_len_cache0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_cache0; _i0++) {
            cache[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = celt_bits2pulses(cache,bits);
          printf("%d\n", benchRet); 
          free(cache);
        
        break;
    }
    // big-arr
    case 1:
    {
          int bits = 255;
          int _len_cache0 = 65025;
          const int * cache = (const int *) malloc(_len_cache0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_cache0; _i0++) {
            cache[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = celt_bits2pulses(cache,bits);
          printf("%d\n", benchRet); 
          free(cache);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int bits = 10;
          int _len_cache0 = 100;
          const int * cache = (const int *) malloc(_len_cache0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_cache0; _i0++) {
            cache[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = celt_bits2pulses(cache,bits);
          printf("%d\n", benchRet); 
          free(cache);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

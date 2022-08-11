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
typedef  int u64 ;
typedef  scalar_t__ u32 ;
typedef  int dma_addr_t ;

/* Variables and functions */

__attribute__((used)) static inline void unpack_pointer(dma_addr_t ptr, u32 *r_low, u32 *r_high)
{
	*r_low = (u32)(ptr & 0xffffffff);
#if BITS_PER_LONG == 32
	*r_high = 0;
#else
	*r_high = (u32)((u64)ptr>>32);
#endif
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
          int ptr = 100;
          int _len_r_low0 = 1;
          long * r_low = (long *) malloc(_len_r_low0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_r_low0; _i0++) {
            r_low[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r_high0 = 1;
          long * r_high = (long *) malloc(_len_r_high0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_r_high0; _i0++) {
            r_high[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unpack_pointer(ptr,r_low,r_high);
          free(r_low);
          free(r_high);
        
        break;
    }
    // big-arr
    case 1:
    {
          int ptr = 255;
          int _len_r_low0 = 65025;
          long * r_low = (long *) malloc(_len_r_low0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_r_low0; _i0++) {
            r_low[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r_high0 = 65025;
          long * r_high = (long *) malloc(_len_r_high0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_r_high0; _i0++) {
            r_high[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unpack_pointer(ptr,r_low,r_high);
          free(r_low);
          free(r_high);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ptr = 10;
          int _len_r_low0 = 100;
          long * r_low = (long *) malloc(_len_r_low0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_r_low0; _i0++) {
            r_low[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r_high0 = 100;
          long * r_high = (long *) malloc(_len_r_high0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_r_high0; _i0++) {
            r_high[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unpack_pointer(ptr,r_low,r_high);
          free(r_low);
          free(r_high);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
 int* scale_factor_modshift ; 
 int** scale_factor_mult2 ; 

__attribute__((used)) static inline int l2_unscale_group(int steps, int mant, int scale_factor)
{
    int shift, mod, val;

    shift   = scale_factor_modshift[scale_factor];
    mod     = shift & 3;
    shift >>= 2;

    val = (mant - (steps >> 1)) * scale_factor_mult2[steps >> 2][mod];
    /* NOTE: at this point, 0 <= shift <= 21 */
    if (shift > 0)
        val = (val + (1 << (shift - 1))) >> shift;
    return val;
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
          int steps = 100;
          int mant = 100;
          int scale_factor = 100;
          int benchRet = l2_unscale_group(steps,mant,scale_factor);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int steps = 255;
          int mant = 255;
          int scale_factor = 255;
          int benchRet = l2_unscale_group(steps,mant,scale_factor);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int steps = 10;
          int mant = 10;
          int scale_factor = 10;
          int benchRet = l2_unscale_group(steps,mant,scale_factor);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

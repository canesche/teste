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
typedef  int start ;
typedef  int end ;
typedef  int UINT ;
typedef  float REAL ;
typedef  int ARGB ;

/* Variables and functions */

__attribute__((used)) static inline ARGB blend_colors_premult(ARGB start, ARGB end, REAL position)
{
    UINT pos = position * 255.0f + 0.5f;
    return
        (((((start >> 24)       ) << 8) + (((end >> 24)       ) - ((start >> 24)       )) * pos) >> 8) << 24 |
        (((((start >> 16) & 0xff) << 8) + (((end >> 16) & 0xff) - ((start >> 16) & 0xff)) * pos) >> 8) << 16 |
        (((((start >>  8) & 0xff) << 8) + (((end >>  8) & 0xff) - ((start >>  8) & 0xff)) * pos) >> 8) <<  8 |
        (((((start      ) & 0xff) << 8) + (((end      ) & 0xff) - ((start      ) & 0xff)) * pos) >> 8);
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
          int start = 100;
          int end = 100;
          float position = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int benchRet = blend_colors_premult(start,end,position);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int start = 255;
          int end = 255;
          float position = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int benchRet = blend_colors_premult(start,end,position);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int start = 10;
          int end = 10;
          float position = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int benchRet = blend_colors_premult(start,end,position);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

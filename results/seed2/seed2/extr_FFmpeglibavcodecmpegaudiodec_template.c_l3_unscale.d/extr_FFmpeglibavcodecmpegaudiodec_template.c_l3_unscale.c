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
typedef  int SUINT ;

/* Variables and functions */
 int* table_4_3_exp ; 
 unsigned int* table_4_3_value ; 

__attribute__((used)) static inline int l3_unscale(int value, int exponent)
{
    unsigned int m;
    int e;

    e  = table_4_3_exp  [4 * value + (exponent & 3)];
    m  = table_4_3_value[4 * value + (exponent & 3)];
    e -= exponent >> 2;
#ifdef DEBUG
    if(e < 1)
        av_log(NULL, AV_LOG_WARNING, "l3_unscale: e is %d\n", e);
#endif
    if (e > (SUINT)31)
        return 0;
    m = (m + ((1U << e)>>1)) >> e;

    return m;
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
          int value = 100;
          int exponent = 100;
          int benchRet = l3_unscale(value,exponent);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int value = 255;
          int exponent = 255;
          int benchRet = l3_unscale(value,exponent);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int value = 10;
          int exponent = 10;
          int benchRet = l3_unscale(value,exponent);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

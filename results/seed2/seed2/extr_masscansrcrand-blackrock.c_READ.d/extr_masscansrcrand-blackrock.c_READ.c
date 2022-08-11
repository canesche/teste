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
typedef  int uint64_t ;

/* Variables and functions */
 int* sbox ; 

__attribute__((used)) static inline uint64_t
READ(uint64_t r, uint64_t R, uint64_t seed)
{
    uint64_t r0, r1, r2, r3;

#define GETBYTE(R,n) ((((R)>>(n*8))^seed^r)&0xFF)

    R ^= (seed << r) ^ (seed >> (64 - r));

    r0 = sbox[GETBYTE(R,0)]<< 0 | sbox[GETBYTE(R,1)]<< 8;
    r1 = (sbox[GETBYTE(R,2)]<<16UL | sbox[GETBYTE(R,3)]<<24UL)&0x0ffffFFFFUL;
    r2 = sbox[GETBYTE(R,4)]<< 0 | sbox[GETBYTE(R,5)]<< 8;
    r3 = (sbox[GETBYTE(R,6)]<<16UL | sbox[GETBYTE(R,7)]<<24UL)&0x0ffffFFFFUL;

    R = r0 ^ r1 ^ r2<<23UL ^ r3<<33UL;

    return R;
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
          int r = 100;
          int R = 100;
          int seed = 100;
          int benchRet = READ(r,R,seed);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int r = 255;
          int R = 255;
          int seed = 255;
          int benchRet = READ(r,R,seed);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int r = 10;
          int R = 10;
          int seed = 10;
          int benchRet = READ(r,R,seed);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

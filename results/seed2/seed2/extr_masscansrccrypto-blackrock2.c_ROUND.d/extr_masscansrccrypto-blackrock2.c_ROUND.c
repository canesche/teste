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
typedef  size_t T ;

/* Variables and functions */
 int* SB1 ; 
 int* SB2 ; 
 int* SB3 ; 
 int* SB4 ; 
 int* SB5 ; 
 int* SB6 ; 
 int* SB7 ; 
 int* SB8 ; 

__attribute__((used)) static inline uint64_t
ROUND(uint64_t r, uint64_t R, uint64_t seed)
{
#define GETBYTE(R,n) ((uint64_t)(((((R)>>(n*8ULL)))&0xFFULL)))
#if 0    
    uint64_t r0, r1, r2, r3;
#endif
    uint64_t T, Y;

    T = R ^ ((seed>>r) | (seed<<(64-r)));


    if (r & 1) {
        Y = SB8[ (T      ) & 0x3F ] ^              \
             SB6[ (T >>  8) & 0x3F ] ^              \
             SB4[ (T >> 16) & 0x3F ] ^              \
             SB2[ (T >> 24) & 0x3F ];               \
    } else {
        Y = SB7[ (T      ) & 0x3F ] ^              \
             SB5[ (T >>  8) & 0x3F ] ^              \
             SB3[ (T >> 16) & 0x3F ] ^              \
             SB1[ (T >> 24) & 0x3F ]; 
    }
    return Y;
#if 0
    r0 = sbox2[GETBYTE(R,0)]<< 6 | sbox2[GETBYTE(R,1)]<< 0;
    r1 = sbox2[GETBYTE(R,2)]<< 6 | sbox2[GETBYTE(R,5)]<< 0;
    r2 = sbox2[GETBYTE(R,4)]<< 6 | sbox2[GETBYTE(R,5)]<< 0;
    r3 = sbox2[GETBYTE(R,6)]<< 6 | sbox2[GETBYTE(R,7)]<< 0;

    R = r0 ^ (r1<<12) * (r2 << 24) ^ (r3 << 36) * r;

    return R;
    /*return((uint64_t)sbox2[GETBYTE(R,7ULL)]<< 0ULL)
        | ((uint64_t)sbox2[GETBYTE(R,6ULL)]<< 8ULL)
        | ((uint64_t)sbox2[GETBYTE(R,5ULL)]<<16ULL)
        | ((uint64_t)sbox2[GETBYTE(R,4ULL)]<<24ULL)
        | ((uint64_t)sbox2[GETBYTE(R,3ULL)]<<32ULL)
        | ((uint64_t)sbox2[GETBYTE(R,2ULL)]<<40ULL)
        | ((uint64_t)sbox2[GETBYTE(R,1ULL)]<<48ULL)
        | ((uint64_t)sbox2[GETBYTE(R,0ULL)]<<56ULL)
        ;*/
    return R;
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
          int r = 100;
          int R = 100;
          int seed = 100;
          int benchRet = ROUND(r,R,seed);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int r = 255;
          int R = 255;
          int seed = 255;
          int benchRet = ROUND(r,R,seed);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int r = 10;
          int R = 10;
          int seed = 10;
          int benchRet = ROUND(r,R,seed);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

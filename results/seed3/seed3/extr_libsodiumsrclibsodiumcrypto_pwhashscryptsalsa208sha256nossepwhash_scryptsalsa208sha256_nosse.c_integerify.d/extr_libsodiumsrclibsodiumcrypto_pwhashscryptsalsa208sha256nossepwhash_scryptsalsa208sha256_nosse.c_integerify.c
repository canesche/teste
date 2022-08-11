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
typedef  int uint32_t ;
typedef  scalar_t__ B ;

/* Variables and functions */

__attribute__((used)) static inline uint64_t
integerify(const void *B, size_t r)
{
    const uint32_t *X = (const uint32_t *) ((uintptr_t)(B) + (2 * r - 1) * 64);

    return (((uint64_t)(X[1]) << 32) + X[0]);
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
          unsigned long r = 100;
          int _len_B0 = 1;
          const void * B = (const void *) malloc(_len_B0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_B0; _i0++) {
            B[_i0] = 0;
          }
          int benchRet = integerify(B,r);
          printf("%d\n", benchRet); 
          free(B);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long r = 255;
          int _len_B0 = 65025;
          const void * B = (const void *) malloc(_len_B0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_B0; _i0++) {
            B[_i0] = 0;
          }
          int benchRet = integerify(B,r);
          printf("%d\n", benchRet); 
          free(B);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long r = 10;
          int _len_B0 = 100;
          const void * B = (const void *) malloc(_len_B0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_B0; _i0++) {
            B[_i0] = 0;
          }
          int benchRet = integerify(B,r);
          printf("%d\n", benchRet); 
          free(B);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

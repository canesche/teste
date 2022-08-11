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
typedef  int u128 ;
typedef  int* fe51 ;

/* Variables and functions */
 int MASK51 ; 

__attribute__((used)) static void fe51_mul121666(fe51 h, fe51 f)
{
    u128 h0 = f[0] * (u128)121666;
    u128 h1 = f[1] * (u128)121666;
    u128 h2 = f[2] * (u128)121666;
    u128 h3 = f[3] * (u128)121666;
    u128 h4 = f[4] * (u128)121666;
    uint64_t g0, g1, g2, g3, g4;

    h3 += (uint64_t)(h2 >> 51); g2 = (uint64_t)h2 & MASK51;
    h1 += (uint64_t)(h0 >> 51); g0 = (uint64_t)h0 & MASK51;

    h4 += (uint64_t)(h3 >> 51); g3 = (uint64_t)h3 & MASK51;
    g2 += (uint64_t)(h1 >> 51); g1 = (uint64_t)h1 & MASK51;

    g0 += (uint64_t)(h4 >> 51) * 19; g4 = (uint64_t)h4 & MASK51;
    g3 += g2 >> 51; g2 &= MASK51;
    g1 += g0 >> 51; g0 &= MASK51;

    h[0] = g0;
    h[1] = g1;
    h[2] = g2;
    h[3] = g3;
    h[4] = g4;
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
          int _len_h0 = 1;
          int * h = (int *) malloc(_len_h0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
            h[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_f0 = 1;
          int * f = (int *) malloc(_len_f0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
            f[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fe51_mul121666(h,f);
          free(h);
          free(f);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_h0 = 65025;
          int * h = (int *) malloc(_len_h0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
            h[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_f0 = 65025;
          int * f = (int *) malloc(_len_f0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
            f[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fe51_mul121666(h,f);
          free(h);
          free(f);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_h0 = 100;
          int * h = (int *) malloc(_len_h0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
            h[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_f0 = 100;
          int * f = (int *) malloc(_len_f0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
            f[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fe51_mul121666(h,f);
          free(h);
          free(f);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

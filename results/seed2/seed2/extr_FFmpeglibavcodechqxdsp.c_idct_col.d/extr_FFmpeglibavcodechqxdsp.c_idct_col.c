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
typedef  int int16_t ;

/* Variables and functions */

__attribute__((used)) static inline void idct_col(int16_t *blk, const uint8_t *quant)
{
    int t0, t1, t2, t3, t4, t5, t6, t7, t8, t9, tA, tB, tC, tD, tE, tF;
    int t10, t11, t12, t13;
    int s0, s1, s2, s3, s4, s5, s6, s7;

    s0 = (int) blk[0 * 8] * quant[0 * 8];
    s1 = (int) blk[1 * 8] * quant[1 * 8];
    s2 = (int) blk[2 * 8] * quant[2 * 8];
    s3 = (int) blk[3 * 8] * quant[3 * 8];
    s4 = (int) blk[4 * 8] * quant[4 * 8];
    s5 = (int) blk[5 * 8] * quant[5 * 8];
    s6 = (int) blk[6 * 8] * quant[6 * 8];
    s7 = (int) blk[7 * 8] * quant[7 * 8];

    t0  =  (int)(s3 * 19266U + s5 * 12873U) >> 15;
    t1  =  (int)(s5 * 19266U - s3 * 12873U) >> 15;
    t2  = ((int)(s7 * 4520U  + s1 * 22725U) >> 15) - t0;
    t3  = ((int)(s1 * 4520U  - s7 * 22725U) >> 15) - t1;
    t4  = t0 * 2 + t2;
    t5  = t1 * 2 + t3;
    t6  = t2 - t3;
    t7  = t3 * 2 + t6;
    t8  = (int)(t6 * 11585U) >> 14;
    t9  = (int)(t7 * 11585U) >> 14;
    tA  = (int)(s2 * 8867U - s6 * 21407U) >> 14;
    tB  = (int)(s6 * 8867U + s2 * 21407U) >> 14;
    tC  = (s0 >> 1) - (s4 >> 1);
    tD  = (s4 >> 1) * 2 + tC;
    tE  = tC - (tA >> 1);
    tF  = tD - (tB >> 1);
    t10 = tF - t5;
    t11 = tE - t8;
    t12 = tE + (tA >> 1) * 2 - t9;
    t13 = tF + (tB >> 1) * 2 - t4;

    blk[0 * 8] = t13 + t4 * 2;
    blk[1 * 8] = t12 + t9 * 2;
    blk[2 * 8] = t11 + t8 * 2;
    blk[3 * 8] = t10 + t5 * 2;
    blk[4 * 8] = t10;
    blk[5 * 8] = t11;
    blk[6 * 8] = t12;
    blk[7 * 8] = t13;
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
          int _len_blk0 = 1;
          int * blk = (int *) malloc(_len_blk0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_blk0; _i0++) {
            blk[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_quant0 = 1;
          const int * quant = (const int *) malloc(_len_quant0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_quant0; _i0++) {
            quant[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          idct_col(blk,quant);
          free(blk);
          free(quant);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_blk0 = 65025;
          int * blk = (int *) malloc(_len_blk0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_blk0; _i0++) {
            blk[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_quant0 = 65025;
          const int * quant = (const int *) malloc(_len_quant0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_quant0; _i0++) {
            quant[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          idct_col(blk,quant);
          free(blk);
          free(quant);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_blk0 = 100;
          int * blk = (int *) malloc(_len_blk0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_blk0; _i0++) {
            blk[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_quant0 = 100;
          const int * quant = (const int *) malloc(_len_quant0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_quant0; _i0++) {
            quant[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          idct_col(blk,quant);
          free(blk);
          free(quant);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

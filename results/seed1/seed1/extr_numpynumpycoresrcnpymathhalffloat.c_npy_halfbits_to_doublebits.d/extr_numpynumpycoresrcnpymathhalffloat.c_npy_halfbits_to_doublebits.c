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
typedef  int npy_uint64 ;
typedef  int npy_uint16 ;

/* Variables and functions */

npy_uint64 npy_halfbits_to_doublebits(npy_uint16 h)
{
    npy_uint16 h_exp, h_sig;
    npy_uint64 d_sgn, d_exp, d_sig;

    h_exp = (h&0x7c00u);
    d_sgn = ((npy_uint64)h&0x8000u) << 48;
    switch (h_exp) {
        case 0x0000u: /* 0 or subnormal */
            h_sig = (h&0x03ffu);
            /* Signed zero */
            if (h_sig == 0) {
                return d_sgn;
            }
            /* Subnormal */
            h_sig <<= 1;
            while ((h_sig&0x0400u) == 0) {
                h_sig <<= 1;
                h_exp++;
            }
            d_exp = ((npy_uint64)(1023 - 15 - h_exp)) << 52;
            d_sig = ((npy_uint64)(h_sig&0x03ffu)) << 42;
            return d_sgn + d_exp + d_sig;
        case 0x7c00u: /* inf or NaN */
            /* All-ones exponent and a copy of the significand */
            return d_sgn + 0x7ff0000000000000ULL +
                                (((npy_uint64)(h&0x03ffu)) << 42);
        default: /* normalized */
            /* Just need to adjust the exponent and shift */
            return d_sgn + (((npy_uint64)(h&0x7fffu) + 0xfc000u) << 42);
    }
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
          int h = 100;
          int benchRet = npy_halfbits_to_doublebits(h);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int h = 255;
          int benchRet = npy_halfbits_to_doublebits(h);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int h = 10;
          int benchRet = npy_halfbits_to_doublebits(h);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

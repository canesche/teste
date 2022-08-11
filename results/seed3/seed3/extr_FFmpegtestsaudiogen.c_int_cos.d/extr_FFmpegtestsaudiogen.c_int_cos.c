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
 int CSHIFT ; 
 int FRAC_BITS ; 
 int FRAC_ONE ; 
 unsigned short* cos_table ; 

__attribute__((used)) static int int_cos(int a)
{
    int neg, v, f;
    const unsigned short *p;

    a = a & (FRAC_ONE - 1); /* modulo 2 * pi */
    if (a >= (FRAC_ONE / 2))
        a = FRAC_ONE - a;
    neg = 0;
    if (a > (FRAC_ONE / 4)) {
        neg = -1;
        a   = (FRAC_ONE / 2) - a;
    }
    p = cos_table + (a >> CSHIFT);
    /* linear interpolation */
    f = a & ((1 << CSHIFT) - 1);
    v = p[0] + (((p[1] - p[0]) * f + (1 << (CSHIFT - 1))) >> CSHIFT);
    v = (v ^ neg) - neg;
    v = v << (FRAC_BITS - 15);
    return v;
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
          int a = 100;
          int benchRet = int_cos(a);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int a = 255;
          int benchRet = int_cos(a);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int a = 10;
          int benchRet = int_cos(a);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

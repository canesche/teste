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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {long quot; long rem; } ;
typedef  TYPE_1__ ldiv_t ;

/* Variables and functions */

ldiv_t ldiv(long numerator, long denominator) {
  ldiv_t x;
  x.quot=numerator/denominator;
  x.rem=numerator-x.quot*denominator;
  return x;
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
          long numerator = 100;
          long denominator = 100;
          struct TYPE_3__ benchRet = ldiv(numerator,denominator);
          printf("%ld\n", benchRet.quot);
          printf("%ld\n", benchRet.rem);
        
        break;
    }
    // big-arr
    case 1:
    {
          long numerator = 255;
          long denominator = 255;
          struct TYPE_3__ benchRet = ldiv(numerator,denominator);
          printf("%ld\n", benchRet.quot);
          printf("%ld\n", benchRet.rem);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long numerator = 10;
          long denominator = 10;
          struct TYPE_3__ benchRet = ldiv(numerator,denominator);
          printf("%ld\n", benchRet.quot);
          printf("%ld\n", benchRet.rem);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

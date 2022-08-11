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
struct TYPE_3__ {int quot; int rem; } ;
typedef  TYPE_1__ div_t ;

/* Variables and functions */

div_t div(int numerator, int denominator) {
  div_t x;
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
          int numerator = 100;
          int denominator = 100;
          struct TYPE_3__ benchRet = div(numerator,denominator);
          printf("%d\n", benchRet.quot);
          printf("%d\n", benchRet.rem);
        
        break;
    }
    // big-arr
    case 1:
    {
          int numerator = 255;
          int denominator = 255;
          struct TYPE_3__ benchRet = div(numerator,denominator);
          printf("%d\n", benchRet.quot);
          printf("%d\n", benchRet.rem);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int numerator = 10;
          int denominator = 10;
          struct TYPE_3__ benchRet = div(numerator,denominator);
          printf("%d\n", benchRet.quot);
          printf("%d\n", benchRet.rem);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

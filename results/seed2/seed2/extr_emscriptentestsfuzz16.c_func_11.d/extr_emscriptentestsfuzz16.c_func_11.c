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
typedef  int /*<<< orphan*/  uint8_t ;
typedef  int /*<<< orphan*/  uint32_t ;
struct S5 {int dummy; } ;
struct S2 {int /*<<< orphan*/  f0; } ;
struct S0 {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static uint32_t  func_11(const struct S2  p_12, const struct S5  p_13, uint8_t  p_14, uint8_t  p_15, struct S0  p_16)
{ /* block id: 572 */
    return p_12.f0;
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
          int p_14 = 100;
          int p_15 = 100;
          const struct S2 p_12;
          const struct S5 p_13;
          struct S0 p_16;
        p_16.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          int benchRet = func_11(p_12,p_13,p_14,p_15,p_16);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int p_14 = 255;
          int p_15 = 255;
          const struct S2 p_12;
          const struct S5 p_13;
          struct S0 p_16;
        p_16.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          int benchRet = func_11(p_12,p_13,p_14,p_15,p_16);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int p_14 = 10;
          int p_15 = 10;
          const struct S2 p_12;
          const struct S5 p_13;
          struct S0 p_16;
        p_16.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          int benchRet = func_11(p_12,p_13,p_14,p_15,p_16);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

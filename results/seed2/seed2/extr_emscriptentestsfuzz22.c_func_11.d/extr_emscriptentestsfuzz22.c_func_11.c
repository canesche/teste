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
typedef  int uint32_t ;
typedef  unsigned long uint16_t ;
typedef  unsigned long int8_t ;

/* Variables and functions */
 unsigned long*** g_14 ; 
 int* g_17 ; 
 int g_18 ; 

__attribute__((used)) static int8_t  func_11(uint32_t  p_12)
{ /* block id: 2 */
    uint16_t l_19 = 0UL;
    for (p_12 = 0; p_12 < 3; p_12 += 1)
    {
        for (g_17[3] = 0; g_17[3] < 3; g_17[3] += 1)
        {
            for (g_18 = 0; g_18 < 1; g_18 += 1)
            {
                g_14[p_12][g_17[3]][g_18] = 7UL;
            }
        }
    }
    return l_19;
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
          int p_12 = 100;
          unsigned long benchRet = func_11(p_12);
          printf("%lu\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int p_12 = 255;
          unsigned long benchRet = func_11(p_12);
          printf("%lu\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int p_12 = 10;
          unsigned long benchRet = func_11(p_12);
          printf("%lu\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  union U1 {int dummy; } U1 ;
typedef  int uint16_t ;
typedef  int /*<<< orphan*/  int64_t ;
typedef  int int32_t ;
typedef  int /*<<< orphan*/  int16_t ;

/* Variables and functions */
 int* g_534 ; 

__attribute__((used)) static int16_t  func_13(int64_t  p_14, union U1  p_15, int32_t  p_16, int32_t  p_17, union U1  p_18)
{ /* block id: 797 */
    int32_t l_1596 = 4L;
    int32_t **l_1597 = &g_534;
    int32_t l_1598 = 1L;
    uint16_t l_1599 = 65532UL;
    l_1599 = (l_1598 = (l_1596 || (l_1597 == NULL)));
    return p_14;
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
          union U1 p_15 = 0;
          int p_16 = 100;
          int p_17 = 100;
          union U1 p_18 = 0;
          int benchRet = func_13(p_14,p_15,p_16,p_17,p_18);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int p_14 = 255;
          union U1 p_15 = 0;
          int p_16 = 255;
          int p_17 = 255;
          union U1 p_18 = 0;
          int benchRet = func_13(p_14,p_15,p_16,p_17,p_18);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int p_14 = 10;
          union U1 p_15 = 0;
          int p_16 = 10;
          int p_17 = 10;
          union U1 p_18 = 0;
          int benchRet = func_13(p_14,p_15,p_16,p_17,p_18);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  scalar_t__ u32 ;

/* Variables and functions */
 scalar_t__ BNX2_MAX_RX_DESC_CNT ; 

__attribute__((used)) static u32 bnx2_find_max_ring(u32 ring_size, u32 max_size)
{
	u32 max, num_rings = 1;

	while (ring_size > BNX2_MAX_RX_DESC_CNT) {
		ring_size -= BNX2_MAX_RX_DESC_CNT;
		num_rings++;
	}
	/* round to next power of 2 */
	max = max_size;
	while ((max & num_rings) == 0)
		max >>= 1;

	if (num_rings != max)
		max <<= 1;

	return max;
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
          long ring_size = 100;
          long max_size = 100;
          long benchRet = bnx2_find_max_ring(ring_size,max_size);
          printf("%ld\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          long ring_size = 255;
          long max_size = 255;
          long benchRet = bnx2_find_max_ring(ring_size,max_size);
          printf("%ld\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long ring_size = 10;
          long max_size = 10;
          long benchRet = bnx2_find_max_ring(ring_size,max_size);
          printf("%ld\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

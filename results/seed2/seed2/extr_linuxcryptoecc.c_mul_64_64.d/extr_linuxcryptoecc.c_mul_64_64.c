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
struct TYPE_3__ {int m_low; int m_high; } ;
typedef  TYPE_1__ uint128_t ;
typedef  int u64 ;

/* Variables and functions */

__attribute__((used)) static uint128_t mul_64_64(u64 left, u64 right)
{
	u64 a0 = left & 0xffffffffull;
	u64 a1 = left >> 32;
	u64 b0 = right & 0xffffffffull;
	u64 b1 = right >> 32;
	u64 m0 = a0 * b0;
	u64 m1 = a0 * b1;
	u64 m2 = a1 * b0;
	u64 m3 = a1 * b1;
	uint128_t result;

	m2 += (m0 >> 32);
	m2 += m1;

	/* Overflow */
	if (m2 < m1)
		m3 += 0x100000000ull;

	result.m_low = (m0 & 0xffffffffull) | (m2 << 32);
	result.m_high = m3 + (m2 >> 32);

	return result;
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
          int left = 100;
          int right = 100;
          struct TYPE_3__ benchRet = mul_64_64(left,right);
          printf("%d\n", benchRet.m_low);
          printf("%d\n", benchRet.m_high);
        
        break;
    }
    // big-arr
    case 1:
    {
          int left = 255;
          int right = 255;
          struct TYPE_3__ benchRet = mul_64_64(left,right);
          printf("%d\n", benchRet.m_low);
          printf("%d\n", benchRet.m_high);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int left = 10;
          int right = 10;
          struct TYPE_3__ benchRet = mul_64_64(left,right);
          printf("%d\n", benchRet.m_low);
          printf("%d\n", benchRet.m_high);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

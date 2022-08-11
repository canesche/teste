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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u8 ;
typedef  int u64 ;
struct TYPE_2__ {int /*<<< orphan*/ * fixed_ranges; } ;

/* Variables and functions */
 int /*<<< orphan*/  MTRR_TYPE_INVALID ; 
 TYPE_1__ mtrr_state ; 

__attribute__((used)) static u8 mtrr_type_lookup_fixed(u64 start, u64 end)
{
	int idx;

	if (start >= 0x100000)
		return MTRR_TYPE_INVALID;

	/* 0x0 - 0x7FFFF */
	if (start < 0x80000) {
		idx = 0;
		idx += (start >> 16);
		return mtrr_state.fixed_ranges[idx];
	/* 0x80000 - 0xBFFFF */
	} else if (start < 0xC0000) {
		idx = 1 * 8;
		idx += ((start - 0x80000) >> 14);
		return mtrr_state.fixed_ranges[idx];
	}

	/* 0xC0000 - 0xFFFFF */
	idx = 3 * 8;
	idx += ((start - 0xC0000) >> 12);
	return mtrr_state.fixed_ranges[idx];
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
          int start = 100;
          int end = 100;
          int benchRet = mtrr_type_lookup_fixed(start,end);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int start = 255;
          int end = 255;
          int benchRet = mtrr_type_lookup_fixed(start,end);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int start = 10;
          int end = 10;
          int benchRet = mtrr_type_lookup_fixed(start,end);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

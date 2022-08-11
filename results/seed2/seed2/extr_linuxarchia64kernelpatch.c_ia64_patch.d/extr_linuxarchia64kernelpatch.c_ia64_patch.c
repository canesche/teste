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
typedef  int u64 ;

/* Variables and functions */

void
ia64_patch (u64 insn_addr, u64 mask, u64 val)
{
	u64 m0, m1, v0, v1, b0, b1, *b = (u64 *) (insn_addr & -16);
#	define insn_mask ((1UL << 41) - 1)
	unsigned long shift;

	b0 = b[0]; b1 = b[1];
	shift = 5 + 41 * (insn_addr % 16); /* 5 bits of template, then 3 x 41-bit instructions */
	if (shift >= 64) {
		m1 = mask << (shift - 64);
		v1 = val << (shift - 64);
	} else {
		m0 = mask << shift; m1 = mask >> (64 - shift);
		v0 = val  << shift; v1 = val >> (64 - shift);
		b[0] = (b0 & ~m0) | (v0 & m0);
	}
	b[1] = (b1 & ~m1) | (v1 & m1);
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
          int insn_addr = 100;
          int mask = 100;
          int val = 100;
          ia64_patch(insn_addr,mask,val);
        
        break;
    }
    // big-arr
    case 1:
    {
          int insn_addr = 255;
          int mask = 255;
          int val = 255;
          ia64_patch(insn_addr,mask,val);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int insn_addr = 10;
          int mask = 10;
          int val = 10;
          ia64_patch(insn_addr,mask,val);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

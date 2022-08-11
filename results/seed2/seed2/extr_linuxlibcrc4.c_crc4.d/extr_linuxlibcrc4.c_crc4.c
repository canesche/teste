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
typedef  unsigned long long uint8_t ;
typedef  unsigned long long uint64_t ;

/* Variables and functions */
 unsigned long long* crc4_tab ; 

uint8_t crc4(uint8_t c, uint64_t x, int bits)
{
	int i;

	/* mask off anything above the top bit */
	x &= (1ull << bits) - 1;

	/* Align to 4-bits */
	bits = (bits + 3) & ~0x3;

	/* Calculate crc4 over four-bit nibbles, starting at the MSbit */
	for (i = bits - 4; i >= 0; i -= 4)
		c = crc4_tab[c ^ ((x >> i) & 0xf)];

	return c;
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
          unsigned long long c = 100;
          unsigned long long x = 100;
          int bits = 100;
          unsigned long long benchRet = crc4(c,x,bits);
          printf("%llu\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long long c = 255;
          unsigned long long x = 255;
          int bits = 255;
          unsigned long long benchRet = crc4(c,x,bits);
          printf("%llu\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long long c = 10;
          unsigned long long x = 10;
          int bits = 10;
          unsigned long long benchRet = crc4(c,x,bits);
          printf("%llu\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

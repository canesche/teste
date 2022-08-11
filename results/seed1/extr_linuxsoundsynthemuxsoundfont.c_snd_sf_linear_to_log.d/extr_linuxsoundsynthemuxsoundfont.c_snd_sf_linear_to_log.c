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

/* Variables and functions */
 int* log_tbl ; 

int
snd_sf_linear_to_log(unsigned int amount, int offset, int ratio)
{
	int v;
	int s, low, bit;
	
	if (amount < 2)
		return 0;
	for (bit = 0; ! (amount & 0x80000000L); bit++)
		amount <<= 1;
	s = (amount >> 24) & 0x7f;
	low = (amount >> 16) & 0xff;
	/* linear approxmimation by lower 8 bit */
	v = (log_tbl[s + 1] * low + log_tbl[s] * (0x100 - low)) >> 8;
	v -= offset;
	v = (v * ratio) >> 16;
	v += (24 - bit) * ratio;
	return v;
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
          unsigned int amount = 100;
          int offset = 100;
          int ratio = 100;
          int benchRet = snd_sf_linear_to_log(amount,offset,ratio);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int amount = 255;
          int offset = 255;
          int ratio = 255;
          int benchRet = snd_sf_linear_to_log(amount,offset,ratio);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int amount = 10;
          int offset = 10;
          int ratio = 10;
          int benchRet = snd_sf_linear_to_log(amount,offset,ratio);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

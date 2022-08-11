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
typedef  size_t u8 ;
typedef  int u16 ;

/* Variables and functions */
 unsigned int TSL2550_MAX_LUX ; 
 int* count_lut ; 
 int* ratio_lut ; 

__attribute__((used)) static int tsl2550_calculate_lux(u8 ch0, u8 ch1)
{
	unsigned int lux;

	/* Look up count from channel values */
	u16 c0 = count_lut[ch0];
	u16 c1 = count_lut[ch1];

	/*
	 * Calculate ratio.
	 * Note: the "128" is a scaling factor
	 */
	u8 r = 128;

	/* Avoid division by 0 and count 1 cannot be greater than count 0 */
	if (c1 <= c0)
		if (c0) {
			r = c1 * 128 / c0;

			/* Calculate LUX */
			lux = ((c0 - c1) * ratio_lut[r]) / 256;
		} else
			lux = 0;
	else
		return 0;

	/* LUX range check */
	return lux > TSL2550_MAX_LUX ? TSL2550_MAX_LUX : lux;
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
          unsigned long ch0 = 100;
          unsigned long ch1 = 100;
          int benchRet = tsl2550_calculate_lux(ch0,ch1);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long ch0 = 255;
          unsigned long ch1 = 255;
          int benchRet = tsl2550_calculate_lux(ch0,ch1);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long ch0 = 10;
          unsigned long ch1 = 10;
          int benchRet = tsl2550_calculate_lux(ch0,ch1);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

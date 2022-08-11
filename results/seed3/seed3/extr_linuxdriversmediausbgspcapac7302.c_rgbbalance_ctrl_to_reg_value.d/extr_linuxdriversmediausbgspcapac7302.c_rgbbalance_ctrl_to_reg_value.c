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
typedef  int u8 ;
typedef  unsigned int const s32 ;

/* Variables and functions */
 unsigned int const PAC7302_RGB_BALANCE_MAX ; 
 unsigned int const PAC7302_RGB_BALANCE_MIN ; 

__attribute__((used)) static u8 rgbbalance_ctrl_to_reg_value(s32 rgb_ctrl_val)
{
	const unsigned int k = 1000;	/* precision factor */
	unsigned int norm;

	/* Normed value [0...k] */
	norm = k * (rgb_ctrl_val - PAC7302_RGB_BALANCE_MIN)
		    / (PAC7302_RGB_BALANCE_MAX - PAC7302_RGB_BALANCE_MIN);
	/* Qudratic apporach improves control at small (register) values: */
	return 64 * norm * norm / (k*k)  +  32 * norm / k  +  32;
	/* Y = 64*X*X + 32*X + 32
	 * => register values 0x20-0x80; Windows driver uses these limits */

	/* NOTE: for full value range (0x00-0xff) use
	 *         Y = 254*X*X + X
	 *         => 254 * norm * norm / (k*k)  +  1 * norm / k	*/
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
          const unsigned int rgb_ctrl_val = 100;
          int benchRet = rgbbalance_ctrl_to_reg_value(rgb_ctrl_val);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          const unsigned int rgb_ctrl_val = 255;
          int benchRet = rgbbalance_ctrl_to_reg_value(rgb_ctrl_val);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const unsigned int rgb_ctrl_val = 10;
          int benchRet = rgbbalance_ctrl_to_reg_value(rgb_ctrl_val);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

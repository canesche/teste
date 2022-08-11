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
typedef  scalar_t__ u64 ;
typedef  int u32 ;

/* Variables and functions */
 int HDMI_DEFAULT_REF_CLOCK ; 
 scalar_t__ HDMI_DIG_FREQ_BIT_CLK_THRESHOLD ; 

__attribute__((used)) static inline u32 pll_get_integloop_gain(u64 frac_start, u64 bclk, u32 ref_clk,
					 bool gen_ssc)
{
	int digclk_divsel = bclk >= HDMI_DIG_FREQ_BIT_CLK_THRESHOLD ? 1 : 2;
	u64 base;

	if ((frac_start != 0) || gen_ssc)
		base = (64 * ref_clk) / HDMI_DEFAULT_REF_CLOCK;
	else
		base = (1022 * ref_clk) / 100;

	base <<= digclk_divsel;

	return (base <= 2046 ? base : 2046);
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
          long frac_start = 100;
          long bclk = 100;
          int ref_clk = 100;
          int gen_ssc = 100;
          int benchRet = pll_get_integloop_gain(frac_start,bclk,ref_clk,gen_ssc);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          long frac_start = 255;
          long bclk = 255;
          int ref_clk = 255;
          int gen_ssc = 255;
          int benchRet = pll_get_integloop_gain(frac_start,bclk,ref_clk,gen_ssc);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long frac_start = 10;
          long bclk = 10;
          int ref_clk = 10;
          int gen_ssc = 10;
          int benchRet = pll_get_integloop_gain(frac_start,bclk,ref_clk,gen_ssc);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

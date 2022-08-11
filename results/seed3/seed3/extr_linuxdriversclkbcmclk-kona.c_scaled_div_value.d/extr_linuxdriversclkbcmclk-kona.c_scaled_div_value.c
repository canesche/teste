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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int u64 ;
typedef  scalar_t__ u32 ;
struct TYPE_3__ {int frac_width; } ;
struct TYPE_4__ {TYPE_1__ s; } ;
struct bcm_clk_div {TYPE_2__ u; } ;

/* Variables and functions */

__attribute__((used)) static inline u64 scaled_div_value(struct bcm_clk_div *div, u32 reg_div)
{
	return (u64)reg_div + ((u64)1 << div->u.s.frac_width);
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
          long reg_div = 100;
          int _len_div0 = 1;
          struct bcm_clk_div * div = (struct bcm_clk_div *) malloc(_len_div0*sizeof(struct bcm_clk_div));
          for(int _i0 = 0; _i0 < _len_div0; _i0++) {
            div[_i0].u.s.frac_width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = scaled_div_value(div,reg_div);
          printf("%d\n", benchRet); 
          free(div);
        
        break;
    }
    // big-arr
    case 1:
    {
          long reg_div = 255;
          int _len_div0 = 65025;
          struct bcm_clk_div * div = (struct bcm_clk_div *) malloc(_len_div0*sizeof(struct bcm_clk_div));
          for(int _i0 = 0; _i0 < _len_div0; _i0++) {
            div[_i0].u.s.frac_width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = scaled_div_value(div,reg_div);
          printf("%d\n", benchRet); 
          free(div);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long reg_div = 10;
          int _len_div0 = 100;
          struct bcm_clk_div * div = (struct bcm_clk_div *) malloc(_len_div0*sizeof(struct bcm_clk_div));
          for(int _i0 = 0; _i0 < _len_div0; _i0++) {
            div[_i0].u.s.frac_width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = scaled_div_value(div,reg_div);
          printf("%d\n", benchRet); 
          free(div);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

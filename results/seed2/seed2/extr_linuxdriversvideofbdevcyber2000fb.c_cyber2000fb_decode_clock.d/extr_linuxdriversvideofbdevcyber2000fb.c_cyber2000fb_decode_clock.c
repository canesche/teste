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
typedef  int u_long ;
typedef  int u_int ;
struct par_info {int clock_mult; int clock_div; } ;
struct fb_var_screeninfo {int pixclock; } ;
struct cfb_info {int ref_ps; int* divisors; } ;

/* Variables and functions */
 int EINVAL ; 
 int EXT_DCLK_DIV_VFSEL ; 

__attribute__((used)) static int
cyber2000fb_decode_clock(struct par_info *hw, struct cfb_info *cfb,
			 struct fb_var_screeninfo *var)
{
	u_long pll_ps = var->pixclock;
	const u_long ref_ps = cfb->ref_ps;
	u_int div2, t_div1, best_div1, best_mult;
	int best_diff;
	int vco;

	/*
	 * Step 1:
	 *   find div2 such that 115MHz < fpll < 260MHz
	 *   and 0 <= div2 < 4
	 */
	for (div2 = 0; div2 < 4; div2++) {
		u_long new_pll;

		new_pll = pll_ps / cfb->divisors[div2];
		if (8696 > new_pll && new_pll > 3846) {
			pll_ps = new_pll;
			break;
		}
	}

	if (div2 == 4)
		return -EINVAL;

	/*
	 * Step 2:
	 *  Given pll_ps and ref_ps, find:
	 *    pll_ps * 0.995 < pll_ps_calc < pll_ps * 1.005
	 *  where { 1 < best_div1 < 32, 1 < best_mult < 256 }
	 *    pll_ps_calc = best_div1 / (ref_ps * best_mult)
	 */
	best_diff = 0x7fffffff;
	best_mult = 2;
	best_div1 = 32;
	for (t_div1 = 2; t_div1 < 32; t_div1 += 1) {
		u_int rr, t_mult, t_pll_ps;
		int diff;

		/*
		 * Find the multiplier for this divisor
		 */
		rr = ref_ps * t_div1;
		t_mult = (rr + pll_ps / 2) / pll_ps;

		/*
		 * Is the multiplier within the correct range?
		 */
		if (t_mult > 256 || t_mult < 2)
			continue;

		/*
		 * Calculate the actual clock period from this multiplier
		 * and divisor, and estimate the error.
		 */
		t_pll_ps = (rr + t_mult / 2) / t_mult;
		diff = pll_ps - t_pll_ps;
		if (diff < 0)
			diff = -diff;

		if (diff < best_diff) {
			best_diff = diff;
			best_mult = t_mult;
			best_div1 = t_div1;
		}

		/*
		 * If we hit an exact value, there is no point in continuing.
		 */
		if (diff == 0)
			break;
	}

	/*
	 * Step 3:
	 *  combine values
	 */
	hw->clock_mult = best_mult - 1;
	hw->clock_div  = div2 << 6 | (best_div1 - 1);

	vco = ref_ps * best_div1 / best_mult;
	if ((ref_ps == 40690) && (vco < 5556))
		/* Set VFSEL when VCO > 180MHz (5.556 ps). */
		hw->clock_div |= EXT_DCLK_DIV_VFSEL;

	return 0;
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
          int _len_hw0 = 1;
          struct par_info * hw = (struct par_info *) malloc(_len_hw0*sizeof(struct par_info));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].clock_mult = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].clock_div = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cfb0 = 1;
          struct cfb_info * cfb = (struct cfb_info *) malloc(_len_cfb0*sizeof(struct cfb_info));
          for(int _i0 = 0; _i0 < _len_cfb0; _i0++) {
            cfb[_i0].ref_ps = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cfb__i0__divisors0 = 1;
          cfb[_i0].divisors = (int *) malloc(_len_cfb__i0__divisors0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cfb__i0__divisors0; _j0++) {
            cfb[_i0].divisors[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_var0 = 1;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].pixclock = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cyber2000fb_decode_clock(hw,cfb,var);
          printf("%d\n", benchRet); 
          free(hw);
          for(int _aux = 0; _aux < _len_cfb0; _aux++) {
          free(cfb[_aux].divisors);
          }
          free(cfb);
          free(var);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hw0 = 65025;
          struct par_info * hw = (struct par_info *) malloc(_len_hw0*sizeof(struct par_info));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].clock_mult = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].clock_div = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cfb0 = 65025;
          struct cfb_info * cfb = (struct cfb_info *) malloc(_len_cfb0*sizeof(struct cfb_info));
          for(int _i0 = 0; _i0 < _len_cfb0; _i0++) {
            cfb[_i0].ref_ps = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cfb__i0__divisors0 = 1;
          cfb[_i0].divisors = (int *) malloc(_len_cfb__i0__divisors0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cfb__i0__divisors0; _j0++) {
            cfb[_i0].divisors[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_var0 = 65025;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].pixclock = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cyber2000fb_decode_clock(hw,cfb,var);
          printf("%d\n", benchRet); 
          free(hw);
          for(int _aux = 0; _aux < _len_cfb0; _aux++) {
          free(cfb[_aux].divisors);
          }
          free(cfb);
          free(var);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hw0 = 100;
          struct par_info * hw = (struct par_info *) malloc(_len_hw0*sizeof(struct par_info));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].clock_mult = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].clock_div = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cfb0 = 100;
          struct cfb_info * cfb = (struct cfb_info *) malloc(_len_cfb0*sizeof(struct cfb_info));
          for(int _i0 = 0; _i0 < _len_cfb0; _i0++) {
            cfb[_i0].ref_ps = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cfb__i0__divisors0 = 1;
          cfb[_i0].divisors = (int *) malloc(_len_cfb__i0__divisors0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cfb__i0__divisors0; _j0++) {
            cfb[_i0].divisors[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_var0 = 100;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].pixclock = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cyber2000fb_decode_clock(hw,cfb,var);
          printf("%d\n", benchRet); 
          free(hw);
          for(int _aux = 0; _aux < _len_cfb0; _aux++) {
          free(cfb[_aux].divisors);
          }
          free(cfb);
          free(var);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

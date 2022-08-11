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
typedef  size_t u32 ;
typedef  size_t u16 ;
struct aspeed_pwm_tacho_data {size_t clk_freq; size_t* type_pwm_clock_unit; size_t* type_pwm_clock_division_h; size_t* type_pwm_clock_division_l; size_t* type_fan_tach_unit; size_t* type_fan_tach_clock_division; } ;

/* Variables and functions */

__attribute__((used)) static u32 aspeed_get_fan_tach_ch_measure_period(struct aspeed_pwm_tacho_data
						 *priv, u8 type)
{
	u32 clk;
	u16 tacho_unit;
	u8 clk_unit, div_h, div_l, tacho_div;

	clk = priv->clk_freq;
	clk_unit = priv->type_pwm_clock_unit[type];
	div_h = priv->type_pwm_clock_division_h[type];
	div_h = 0x1 << div_h;
	div_l = priv->type_pwm_clock_division_l[type];
	if (div_l == 0)
		div_l = 1;
	else
		div_l = div_l * 2;

	tacho_unit = priv->type_fan_tach_unit[type];
	tacho_div = priv->type_fan_tach_clock_division[type];

	tacho_div = 0x4 << (tacho_div * 2);
	return clk / (clk_unit * div_h * div_l * tacho_div * tacho_unit);
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
          unsigned long type = 100;
          int _len_priv0 = 1;
          struct aspeed_pwm_tacho_data * priv = (struct aspeed_pwm_tacho_data *) malloc(_len_priv0*sizeof(struct aspeed_pwm_tacho_data));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].clk_freq = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__type_pwm_clock_unit0 = 1;
          priv[_i0].type_pwm_clock_unit = (unsigned long *) malloc(_len_priv__i0__type_pwm_clock_unit0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_priv__i0__type_pwm_clock_unit0; _j0++) {
            priv[_i0].type_pwm_clock_unit[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_priv__i0__type_pwm_clock_division_h0 = 1;
          priv[_i0].type_pwm_clock_division_h = (unsigned long *) malloc(_len_priv__i0__type_pwm_clock_division_h0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_priv__i0__type_pwm_clock_division_h0; _j0++) {
            priv[_i0].type_pwm_clock_division_h[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_priv__i0__type_pwm_clock_division_l0 = 1;
          priv[_i0].type_pwm_clock_division_l = (unsigned long *) malloc(_len_priv__i0__type_pwm_clock_division_l0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_priv__i0__type_pwm_clock_division_l0; _j0++) {
            priv[_i0].type_pwm_clock_division_l[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_priv__i0__type_fan_tach_unit0 = 1;
          priv[_i0].type_fan_tach_unit = (unsigned long *) malloc(_len_priv__i0__type_fan_tach_unit0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_priv__i0__type_fan_tach_unit0; _j0++) {
            priv[_i0].type_fan_tach_unit[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_priv__i0__type_fan_tach_clock_division0 = 1;
          priv[_i0].type_fan_tach_clock_division = (unsigned long *) malloc(_len_priv__i0__type_fan_tach_clock_division0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_priv__i0__type_fan_tach_clock_division0; _j0++) {
            priv[_i0].type_fan_tach_clock_division[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = aspeed_get_fan_tach_ch_measure_period(priv,type);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].type_pwm_clock_unit);
          }
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].type_pwm_clock_division_h);
          }
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].type_pwm_clock_division_l);
          }
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].type_fan_tach_unit);
          }
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].type_fan_tach_clock_division);
          }
          free(priv);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long type = 255;
          int _len_priv0 = 65025;
          struct aspeed_pwm_tacho_data * priv = (struct aspeed_pwm_tacho_data *) malloc(_len_priv0*sizeof(struct aspeed_pwm_tacho_data));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].clk_freq = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__type_pwm_clock_unit0 = 1;
          priv[_i0].type_pwm_clock_unit = (unsigned long *) malloc(_len_priv__i0__type_pwm_clock_unit0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_priv__i0__type_pwm_clock_unit0; _j0++) {
            priv[_i0].type_pwm_clock_unit[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_priv__i0__type_pwm_clock_division_h0 = 1;
          priv[_i0].type_pwm_clock_division_h = (unsigned long *) malloc(_len_priv__i0__type_pwm_clock_division_h0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_priv__i0__type_pwm_clock_division_h0; _j0++) {
            priv[_i0].type_pwm_clock_division_h[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_priv__i0__type_pwm_clock_division_l0 = 1;
          priv[_i0].type_pwm_clock_division_l = (unsigned long *) malloc(_len_priv__i0__type_pwm_clock_division_l0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_priv__i0__type_pwm_clock_division_l0; _j0++) {
            priv[_i0].type_pwm_clock_division_l[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_priv__i0__type_fan_tach_unit0 = 1;
          priv[_i0].type_fan_tach_unit = (unsigned long *) malloc(_len_priv__i0__type_fan_tach_unit0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_priv__i0__type_fan_tach_unit0; _j0++) {
            priv[_i0].type_fan_tach_unit[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_priv__i0__type_fan_tach_clock_division0 = 1;
          priv[_i0].type_fan_tach_clock_division = (unsigned long *) malloc(_len_priv__i0__type_fan_tach_clock_division0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_priv__i0__type_fan_tach_clock_division0; _j0++) {
            priv[_i0].type_fan_tach_clock_division[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = aspeed_get_fan_tach_ch_measure_period(priv,type);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].type_pwm_clock_unit);
          }
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].type_pwm_clock_division_h);
          }
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].type_pwm_clock_division_l);
          }
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].type_fan_tach_unit);
          }
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].type_fan_tach_clock_division);
          }
          free(priv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long type = 10;
          int _len_priv0 = 100;
          struct aspeed_pwm_tacho_data * priv = (struct aspeed_pwm_tacho_data *) malloc(_len_priv0*sizeof(struct aspeed_pwm_tacho_data));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].clk_freq = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__type_pwm_clock_unit0 = 1;
          priv[_i0].type_pwm_clock_unit = (unsigned long *) malloc(_len_priv__i0__type_pwm_clock_unit0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_priv__i0__type_pwm_clock_unit0; _j0++) {
            priv[_i0].type_pwm_clock_unit[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_priv__i0__type_pwm_clock_division_h0 = 1;
          priv[_i0].type_pwm_clock_division_h = (unsigned long *) malloc(_len_priv__i0__type_pwm_clock_division_h0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_priv__i0__type_pwm_clock_division_h0; _j0++) {
            priv[_i0].type_pwm_clock_division_h[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_priv__i0__type_pwm_clock_division_l0 = 1;
          priv[_i0].type_pwm_clock_division_l = (unsigned long *) malloc(_len_priv__i0__type_pwm_clock_division_l0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_priv__i0__type_pwm_clock_division_l0; _j0++) {
            priv[_i0].type_pwm_clock_division_l[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_priv__i0__type_fan_tach_unit0 = 1;
          priv[_i0].type_fan_tach_unit = (unsigned long *) malloc(_len_priv__i0__type_fan_tach_unit0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_priv__i0__type_fan_tach_unit0; _j0++) {
            priv[_i0].type_fan_tach_unit[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_priv__i0__type_fan_tach_clock_division0 = 1;
          priv[_i0].type_fan_tach_clock_division = (unsigned long *) malloc(_len_priv__i0__type_fan_tach_clock_division0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_priv__i0__type_fan_tach_clock_division0; _j0++) {
            priv[_i0].type_fan_tach_clock_division[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = aspeed_get_fan_tach_ch_measure_period(priv,type);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].type_pwm_clock_unit);
          }
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].type_pwm_clock_division_h);
          }
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].type_pwm_clock_division_l);
          }
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].type_fan_tach_unit);
          }
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].type_fan_tach_clock_division);
          }
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

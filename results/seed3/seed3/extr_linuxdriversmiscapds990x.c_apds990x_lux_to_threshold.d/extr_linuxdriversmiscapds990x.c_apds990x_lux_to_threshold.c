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
typedef  int u32 ;
typedef  int u16 ;
struct TYPE_4__ {int afactor; int cf1; int irf1; int cf2; int irf2; } ;
struct TYPE_3__ {int ga; int df; } ;
struct apds990x_chip {int lux_calib; size_t again_next; int lux_ir; size_t again_meas; int lux_clear; int a_max_result; TYPE_2__ rcf; TYPE_1__ cf; scalar_t__ atime; } ;

/* Variables and functions */
 int APDS_CALIB_SCALER ; 
 int APDS_PARAM_SCALE ; 
 int APDS_RANGE ; 
 scalar_t__* again ; 

__attribute__((used)) static u16 apds990x_lux_to_threshold(struct apds990x_chip *chip, u32 lux)
{
	u32 thres;
	u32 cpl;
	u32 ir;

	if (lux == 0)
		return 0;
	else if (lux == APDS_RANGE)
		return APDS_RANGE;

	/*
	 * Reported LUX value is a combination of the IR and CLEAR channel
	 * values. However, interrupt threshold is only for clear channel.
	 * This function approximates needed HW threshold value for a given
	 * LUX value in the current lightning type.
	 * IR level compared to visible light varies heavily depending on the
	 * source of the light
	 *
	 * Calculate threshold value for the next measurement period.
	 * Math: threshold = lux * cpl where
	 * cpl = atime * again / (glass_attenuation * device_factor)
	 * (count-per-lux)
	 *
	 * First remove calibration. Division by four is to avoid overflow
	 */
	lux = lux * (APDS_CALIB_SCALER / 4) / (chip->lux_calib / 4);

	/* Multiplication by 64 is to increase accuracy */
	cpl = ((u32)chip->atime * (u32)again[chip->again_next] *
		APDS_PARAM_SCALE * 64) / (chip->cf.ga * chip->cf.df);

	thres = lux * cpl / 64;
	/*
	 * Convert IR light from the latest result to match with
	 * new gain step. This helps to adapt with the current
	 * source of light.
	 */
	ir = (u32)chip->lux_ir * (u32)again[chip->again_next] /
		(u32)again[chip->again_meas];

	/*
	 * Compensate count with IR light impact
	 * IAC1 > IAC2 (see apds990x_get_lux for formulas)
	 */
	if (chip->lux_clear * APDS_PARAM_SCALE >=
		chip->rcf.afactor * chip->lux_ir)
		thres = (chip->rcf.cf1 * thres + chip->rcf.irf1 * ir) /
			APDS_PARAM_SCALE;
	else
		thres = (chip->rcf.cf2 * thres + chip->rcf.irf2 * ir) /
			APDS_PARAM_SCALE;

	if (thres >= chip->a_max_result)
		thres = chip->a_max_result - 1;
	return thres;
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
          int lux = 100;
          int _len_chip0 = 1;
          struct apds990x_chip * chip = (struct apds990x_chip *) malloc(_len_chip0*sizeof(struct apds990x_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].lux_calib = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].again_next = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].lux_ir = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].again_meas = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].lux_clear = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].a_max_result = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].rcf.afactor = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].rcf.cf1 = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].rcf.irf1 = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].rcf.cf2 = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].rcf.irf2 = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].cf.ga = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].cf.df = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].atime = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = apds990x_lux_to_threshold(chip,lux);
          printf("%d\n", benchRet); 
          free(chip);
        
        break;
    }
    // big-arr
    case 1:
    {
          int lux = 255;
          int _len_chip0 = 65025;
          struct apds990x_chip * chip = (struct apds990x_chip *) malloc(_len_chip0*sizeof(struct apds990x_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].lux_calib = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].again_next = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].lux_ir = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].again_meas = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].lux_clear = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].a_max_result = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].rcf.afactor = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].rcf.cf1 = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].rcf.irf1 = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].rcf.cf2 = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].rcf.irf2 = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].cf.ga = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].cf.df = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].atime = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = apds990x_lux_to_threshold(chip,lux);
          printf("%d\n", benchRet); 
          free(chip);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int lux = 10;
          int _len_chip0 = 100;
          struct apds990x_chip * chip = (struct apds990x_chip *) malloc(_len_chip0*sizeof(struct apds990x_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].lux_calib = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].again_next = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].lux_ir = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].again_meas = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].lux_clear = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].a_max_result = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].rcf.afactor = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].rcf.cf1 = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].rcf.irf1 = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].rcf.cf2 = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].rcf.irf2 = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].cf.ga = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].cf.df = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].atime = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = apds990x_lux_to_threshold(chip,lux);
          printf("%d\n", benchRet); 
          free(chip);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

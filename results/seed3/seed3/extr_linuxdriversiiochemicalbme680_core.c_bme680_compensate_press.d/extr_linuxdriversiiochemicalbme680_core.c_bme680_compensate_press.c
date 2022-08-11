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
typedef  int u32 ;
struct bme680_calib {int par_p6; int par_p5; int par_p4; int par_p3; int par_p2; int par_p1; int par_p9; int par_p8; int par_p10; int par_p7; } ;
struct bme680_data {int t_fine; struct bme680_calib bme680; } ;
typedef  int s32 ;

/* Variables and functions */
 int BME680_MAX_OVERFLOW_VAL ; 

__attribute__((used)) static u32 bme680_compensate_press(struct bme680_data *data,
				   u32 adc_press)
{
	struct bme680_calib *calib = &data->bme680;
	s32 var1, var2, var3, press_comp;

	var1 = (data->t_fine >> 1) - 64000;
	var2 = ((((var1 >> 2) * (var1 >> 2)) >> 11) * calib->par_p6) >> 2;
	var2 = var2 + (var1 * calib->par_p5 << 1);
	var2 = (var2 >> 2) + (calib->par_p4 << 16);
	var1 = (((((var1 >> 2) * (var1 >> 2)) >> 13) *
			(calib->par_p3 << 5)) >> 3) +
			((calib->par_p2 * var1) >> 1);
	var1 = var1 >> 18;
	var1 = ((32768 + var1) * calib->par_p1) >> 15;
	press_comp = 1048576 - adc_press;
	press_comp = ((press_comp - (var2 >> 12)) * 3125);

	if (press_comp >= BME680_MAX_OVERFLOW_VAL)
		press_comp = ((press_comp / (u32)var1) << 1);
	else
		press_comp = ((press_comp << 1) / (u32)var1);

	var1 = (calib->par_p9 * (((press_comp >> 3) *
			(press_comp >> 3)) >> 13)) >> 12;
	var2 = ((press_comp >> 2) * calib->par_p8) >> 13;
	var3 = ((press_comp >> 8) * (press_comp >> 8) *
			(press_comp >> 8) * calib->par_p10) >> 17;

	press_comp += (var1 + var2 + var3 + (calib->par_p7 << 7)) >> 4;

	return press_comp;
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
          int adc_press = 100;
          int _len_data0 = 1;
          struct bme680_data * data = (struct bme680_data *) malloc(_len_data0*sizeof(struct bme680_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].t_fine = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_p6 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_p5 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_p4 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_p3 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_p2 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_p1 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_p9 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_p8 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_p10 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_p7 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bme680_compensate_press(data,adc_press);
          printf("%d\n", benchRet); 
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int adc_press = 255;
          int _len_data0 = 65025;
          struct bme680_data * data = (struct bme680_data *) malloc(_len_data0*sizeof(struct bme680_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].t_fine = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_p6 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_p5 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_p4 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_p3 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_p2 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_p1 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_p9 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_p8 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_p10 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_p7 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bme680_compensate_press(data,adc_press);
          printf("%d\n", benchRet); 
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int adc_press = 10;
          int _len_data0 = 100;
          struct bme680_data * data = (struct bme680_data *) malloc(_len_data0*sizeof(struct bme680_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].t_fine = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_p6 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_p5 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_p4 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_p3 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_p2 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_p1 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_p9 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_p8 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_p10 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_p7 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bme680_compensate_press(data,adc_press);
          printf("%d\n", benchRet); 
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

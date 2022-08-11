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
typedef  int u16 ;
struct bme680_calib {int par_h4; int par_h5; int par_h6; int par_h7; scalar_t__ par_h2; scalar_t__ par_h3; scalar_t__ par_h1; } ;
struct bme680_data {int t_fine; struct bme680_calib bme680; } ;
typedef  int s32 ;

/* Variables and functions */

__attribute__((used)) static u32 bme680_compensate_humid(struct bme680_data *data,
				   u16 adc_humid)
{
	struct bme680_calib *calib = &data->bme680;
	s32 var1, var2, var3, var4, var5, var6, temp_scaled, calc_hum;

	temp_scaled = (data->t_fine * 5 + 128) >> 8;
	var1 = (adc_humid - ((s32) ((s32) calib->par_h1 * 16))) -
		(((temp_scaled * (s32) calib->par_h3) / 100) >> 1);
	var2 = ((s32) calib->par_h2 *
		(((temp_scaled * calib->par_h4) / 100) +
		 (((temp_scaled * ((temp_scaled * calib->par_h5) / 100))
		   >> 6) / 100) + (1 << 14))) >> 10;
	var3 = var1 * var2;
	var4 = calib->par_h6 << 7;
	var4 = (var4 + ((temp_scaled * calib->par_h7) / 100)) >> 4;
	var5 = ((var3 >> 14) * (var3 >> 14)) >> 10;
	var6 = (var4 * var5) >> 1;
	calc_hum = (((var3 + var6) >> 10) * 1000) >> 12;

	if (calc_hum > 100000) /* Cap at 100%rH */
		calc_hum = 100000;
	else if (calc_hum < 0)
		calc_hum = 0;

	return calc_hum;
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
          int adc_humid = 100;
          int _len_data0 = 1;
          struct bme680_data * data = (struct bme680_data *) malloc(_len_data0*sizeof(struct bme680_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].t_fine = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_h4 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_h5 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_h6 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_h7 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_h2 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_h3 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_h1 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bme680_compensate_humid(data,adc_humid);
          printf("%d\n", benchRet); 
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int adc_humid = 255;
          int _len_data0 = 65025;
          struct bme680_data * data = (struct bme680_data *) malloc(_len_data0*sizeof(struct bme680_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].t_fine = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_h4 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_h5 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_h6 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_h7 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_h2 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_h3 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_h1 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bme680_compensate_humid(data,adc_humid);
          printf("%d\n", benchRet); 
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int adc_humid = 10;
          int _len_data0 = 100;
          struct bme680_data * data = (struct bme680_data *) malloc(_len_data0*sizeof(struct bme680_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].t_fine = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_h4 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_h5 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_h6 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_h7 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_h2 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_h3 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].bme680.par_h1 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bme680_compensate_humid(data,adc_humid);
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

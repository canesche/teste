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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int u32 ;
struct bmp280_calib {int H4; int H5; int H6; int H2; scalar_t__ H1; scalar_t__ H3; } ;
struct TYPE_2__ {struct bmp280_calib bmp280; } ;
struct bmp280_data {scalar_t__ t_fine; TYPE_1__ calib; } ;
typedef  int s32 ;

/* Variables and functions */

__attribute__((used)) static u32 bmp280_compensate_humidity(struct bmp280_data *data,
				      s32 adc_humidity)
{
	s32 var;
	struct bmp280_calib *calib = &data->calib.bmp280;

	var = ((s32)data->t_fine) - (s32)76800;
	var = ((((adc_humidity << 14) - (calib->H4 << 20) - (calib->H5 * var))
		+ (s32)16384) >> 15) * (((((((var * calib->H6) >> 10)
		* (((var * (s32)calib->H3) >> 11) + (s32)32768)) >> 10)
		+ (s32)2097152) * calib->H2 + 8192) >> 14);
	var -= ((((var >> 15) * (var >> 15)) >> 7) * (s32)calib->H1) >> 4;

	return var >> 12;
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
          int adc_humidity = 100;
          int _len_data0 = 1;
          struct bmp280_data * data = (struct bmp280_data *) malloc(_len_data0*sizeof(struct bmp280_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].t_fine = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp280.H4 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp280.H5 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp280.H6 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp280.H2 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp280.H1 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp280.H3 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bmp280_compensate_humidity(data,adc_humidity);
          printf("%d\n", benchRet); 
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int adc_humidity = 255;
          int _len_data0 = 65025;
          struct bmp280_data * data = (struct bmp280_data *) malloc(_len_data0*sizeof(struct bmp280_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].t_fine = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp280.H4 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp280.H5 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp280.H6 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp280.H2 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp280.H1 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp280.H3 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bmp280_compensate_humidity(data,adc_humidity);
          printf("%d\n", benchRet); 
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int adc_humidity = 10;
          int _len_data0 = 100;
          struct bmp280_data * data = (struct bmp280_data *) malloc(_len_data0*sizeof(struct bmp280_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].t_fine = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp280.H4 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp280.H5 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp280.H6 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp280.H2 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp280.H1 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp280.H3 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bmp280_compensate_humidity(data,adc_humidity);
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

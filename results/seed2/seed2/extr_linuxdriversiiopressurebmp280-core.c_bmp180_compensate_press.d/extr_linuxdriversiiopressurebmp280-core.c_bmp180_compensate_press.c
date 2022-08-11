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
struct bmp180_calib {int B2; int AC2; int AC3; int B1; int AC4; scalar_t__ AC1; } ;
struct TYPE_2__ {struct bmp180_calib bmp180; } ;
struct bmp280_data {int oversampling_press; int t_fine; TYPE_1__ calib; } ;
typedef  int s32 ;

/* Variables and functions */

__attribute__((used)) static u32 bmp180_compensate_press(struct bmp280_data *data, s32 adc_press)
{
	s32 x1, x2, x3, p;
	s32 b3, b6;
	u32 b4, b7;
	s32 oss = data->oversampling_press;
	struct bmp180_calib *calib = &data->calib.bmp180;

	b6 = data->t_fine - 4000;
	x1 = (calib->B2 * (b6 * b6 >> 12)) >> 11;
	x2 = calib->AC2 * b6 >> 11;
	x3 = x1 + x2;
	b3 = ((((s32)calib->AC1 * 4 + x3) << oss) + 2) / 4;
	x1 = calib->AC3 * b6 >> 13;
	x2 = (calib->B1 * ((b6 * b6) >> 12)) >> 16;
	x3 = (x1 + x2 + 2) >> 2;
	b4 = calib->AC4 * (u32)(x3 + 32768) >> 15;
	b7 = ((u32)adc_press - b3) * (50000 >> oss);
	if (b7 < 0x80000000)
		p = (b7 * 2) / b4;
	else
		p = (b7 / b4) * 2;

	x1 = (p >> 8) * (p >> 8);
	x1 = (x1 * 3038) >> 16;
	x2 = (-7357 * p) >> 16;

	return p + ((x1 + x2 + 3791) >> 4);
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
          struct bmp280_data * data = (struct bmp280_data *) malloc(_len_data0*sizeof(struct bmp280_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].oversampling_press = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].t_fine = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp180.B2 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp180.AC2 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp180.AC3 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp180.B1 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp180.AC4 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp180.AC1 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bmp180_compensate_press(data,adc_press);
          printf("%d\n", benchRet); 
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int adc_press = 255;
          int _len_data0 = 65025;
          struct bmp280_data * data = (struct bmp280_data *) malloc(_len_data0*sizeof(struct bmp280_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].oversampling_press = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].t_fine = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp180.B2 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp180.AC2 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp180.AC3 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp180.B1 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp180.AC4 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp180.AC1 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bmp180_compensate_press(data,adc_press);
          printf("%d\n", benchRet); 
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int adc_press = 10;
          int _len_data0 = 100;
          struct bmp280_data * data = (struct bmp280_data *) malloc(_len_data0*sizeof(struct bmp280_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].oversampling_press = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].t_fine = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp180.B2 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp180.AC2 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp180.AC3 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp180.B1 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp180.AC4 = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].calib.bmp180.AC1 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bmp180_compensate_press(data,adc_press);
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

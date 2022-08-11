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
struct TYPE_2__ {scalar_t__ dig_P7; scalar_t__ dig_P8; scalar_t__ dig_P9; scalar_t__ dig_P1; scalar_t__ dig_P2; scalar_t__ dig_P3; scalar_t__ dig_P4; scalar_t__ dig_P5; scalar_t__ dig_P6; } ;
typedef  int /*<<< orphan*/  BME280_U32_t ;
typedef  int BME280_S64_t ;
typedef  int BME280_S32_t ;

/* Variables and functions */
 TYPE_1__ bme280_data ; 
 scalar_t__ bme280_t_fine ; 

__attribute__((used)) static BME280_U32_t bme280_compensate_P(BME280_S32_t adc_P) {
	BME280_S64_t var1, var2, p;
	var1 = ((BME280_S64_t)bme280_t_fine) - 128000;
	var2 = var1 * var1 * (BME280_S64_t)bme280_data.dig_P6;
	var2 = var2 + ((var1*(BME280_S64_t)bme280_data.dig_P5)<<17);
	var2 = var2 + (((BME280_S64_t)bme280_data.dig_P4)<<35);
	var1 = ((var1 * var1 * (BME280_S64_t)bme280_data.dig_P3)>>8) + ((var1 * (BME280_S64_t)bme280_data.dig_P2)<<12);
	var1 = (((((BME280_S64_t)1)<<47)+var1))*((BME280_S64_t)bme280_data.dig_P1)>>33;
	if (var1 == 0) {
		return 0; // avoid exception caused by division by zero
	}
	p = 1048576-adc_P;
	p = (((p<<31)-var2)*3125)/var1;
	var1 = (((BME280_S64_t)bme280_data.dig_P9) * (p>>13) * (p>>13)) >> 25;
	var2 = (((BME280_S64_t)bme280_data.dig_P8) * p) >> 19;
	p = ((p + var1 + var2) >> 8) + (((BME280_S64_t)bme280_data.dig_P7)<<4);
	p = (p * 10) >> 8;
	return (BME280_U32_t)p;
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
          int adc_P = 100;
          int benchRet = bme280_compensate_P(adc_P);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int adc_P = 255;
          int benchRet = bme280_compensate_P(adc_P);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int adc_P = 10;
          int benchRet = bme280_compensate_P(adc_P);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

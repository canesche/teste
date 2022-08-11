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
typedef  size_t uint8_t ;
typedef  int uint64_t ;
typedef  scalar_t__ uint32_t ;
typedef  scalar_t__ uint16_t ;
typedef  int int64_t ;
struct TYPE_2__ {scalar_t__ range_sw_err; } ;

/* Variables and functions */
 TYPE_1__ bme680_data ; 
 scalar_t__* lookupTable1 ; 
 scalar_t__* lookupTable2 ; 

__attribute__((used)) static uint32_t calc_gas_resistance(uint16_t gas_res_adc, uint8_t gas_range)
{
	int64_t var1;
	uint64_t var2;
	int64_t var3;
	uint32_t calc_gas_res;

	var1 = (int64_t) ((1340 + (5 * (int64_t) bme680_data.range_sw_err)) * ((int64_t) lookupTable1[gas_range])) / 65536;
	var2 = (((int64_t) ((int64_t) gas_res_adc * 32768) - (int64_t) (16777216)) + var1);
	var3 = (((int64_t) lookupTable2[gas_range] * (int64_t) var1) / 512);
	calc_gas_res = (uint32_t) ((var3 + ((int64_t) var2 / 2)) / (int64_t) var2);

	return calc_gas_res;
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
          long gas_res_adc = 100;
          unsigned long gas_range = 100;
          long benchRet = calc_gas_resistance(gas_res_adc,gas_range);
          printf("%ld\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          long gas_res_adc = 255;
          unsigned long gas_range = 255;
          long benchRet = calc_gas_resistance(gas_res_adc,gas_range);
          printf("%ld\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long gas_res_adc = 10;
          unsigned long gas_range = 10;
          long benchRet = calc_gas_resistance(gas_res_adc,gas_range);
          printf("%ld\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

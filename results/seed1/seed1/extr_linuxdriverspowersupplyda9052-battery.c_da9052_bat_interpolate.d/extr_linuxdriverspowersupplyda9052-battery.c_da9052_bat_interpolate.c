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

/* Variables and functions */

__attribute__((used)) static int da9052_bat_interpolate(int vbat_lower, int  vbat_upper,
				   int level_lower, int level_upper,
				   int bat_voltage)
{
	int tmp;

	tmp = ((level_upper - level_lower) * 1000) / (vbat_upper - vbat_lower);
	tmp = level_lower + (((bat_voltage - vbat_lower) * tmp) / 1000);

	return tmp;
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
          int vbat_lower = 100;
          int vbat_upper = 100;
          int level_lower = 100;
          int level_upper = 100;
          int bat_voltage = 100;
          int benchRet = da9052_bat_interpolate(vbat_lower,vbat_upper,level_lower,level_upper,bat_voltage);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int vbat_lower = 255;
          int vbat_upper = 255;
          int level_lower = 255;
          int level_upper = 255;
          int bat_voltage = 255;
          int benchRet = da9052_bat_interpolate(vbat_lower,vbat_upper,level_lower,level_upper,bat_voltage);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int vbat_lower = 10;
          int vbat_upper = 10;
          int level_lower = 10;
          int level_upper = 10;
          int bat_voltage = 10;
          int benchRet = da9052_bat_interpolate(vbat_lower,vbat_upper,level_lower,level_upper,bat_voltage);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

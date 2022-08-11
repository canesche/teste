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
typedef  int u8 ;

/* Variables and functions */
 int TWL6040_VIBDAT_MAX ; 
 int TWL6040_VIBRA_MOD ; 
 int USHRT_MAX ; 

__attribute__((used)) static u8 twl6040_vibra_code(int vddvib, int vibdrv_res, int motor_res,
			     int speed, int direction)
{
	int vpk, max_code;
	u8 vibdat;

	/* output swing */
	vpk = (vddvib * motor_res * TWL6040_VIBRA_MOD) /
		(100 * (vibdrv_res + motor_res));

	/* 50mV per VIBDAT code step */
	max_code = vpk / 50;
	if (max_code > TWL6040_VIBDAT_MAX)
		max_code = TWL6040_VIBDAT_MAX;

	/* scale speed to max allowed code */
	vibdat = (u8)((speed * max_code) / USHRT_MAX);

	/* 2's complement for direction > 180 degrees */
	vibdat *= direction;

	return vibdat;
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
          int vddvib = 100;
          int vibdrv_res = 100;
          int motor_res = 100;
          int speed = 100;
          int direction = 100;
          int benchRet = twl6040_vibra_code(vddvib,vibdrv_res,motor_res,speed,direction);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int vddvib = 255;
          int vibdrv_res = 255;
          int motor_res = 255;
          int speed = 255;
          int direction = 255;
          int benchRet = twl6040_vibra_code(vddvib,vibdrv_res,motor_res,speed,direction);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int vddvib = 10;
          int vibdrv_res = 10;
          int motor_res = 10;
          int speed = 10;
          int direction = 10;
          int benchRet = twl6040_vibra_code(vddvib,vibdrv_res,motor_res,speed,direction);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

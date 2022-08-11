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
typedef  void* u8 ;

/* Variables and functions */
 int FB_BACKLIGHT_LEVELS ; 
 void** bl_curve ; 

__attribute__((used)) static void pmu_backlight_init_curve(u8 off, u8 min, u8 max)
{
	int i, flat, count, range = (max - min);

	bl_curve[0] = off;

	for (flat = 1; flat < (FB_BACKLIGHT_LEVELS / 16); ++flat)
		bl_curve[flat] = min;

	count = FB_BACKLIGHT_LEVELS * 15 / 16;
	for (i = 0; i < count; ++i)
		bl_curve[flat + i] = min + (range * (i + 1) / count);
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
          void * off;
          void * min;
          void * max;
          pmu_backlight_init_curve(off,min,max);
        
        break;
    }
    // big-arr
    case 1:
    {
          void * off;
          void * min;
          void * max;
          pmu_backlight_init_curve(off,min,max);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          void * off;
          void * min;
          void * max;
          pmu_backlight_init_curve(off,min,max);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

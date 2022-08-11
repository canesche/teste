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
typedef  int umode_t ;
typedef  int u32 ;

/* Variables and functions */
 int S_IRUGO ; 
 int S_IWUSR ; 
#define  hwmon_temp_crit 140 
#define  hwmon_temp_crit_alarm 139 
#define  hwmon_temp_crit_hyst 138 
#define  hwmon_temp_emergency 137 
#define  hwmon_temp_emergency_alarm 136 
#define  hwmon_temp_emergency_hyst 135 
#define  hwmon_temp_fault 134 
#define  hwmon_temp_input 133 
#define  hwmon_temp_max 132 
#define  hwmon_temp_max_alarm 131 
#define  hwmon_temp_min 130 
#define  hwmon_temp_min_alarm 129 
#define  hwmon_temp_offset 128 

__attribute__((used)) static umode_t lm90_temp_is_visible(const void *data, u32 attr, int channel)
{
	switch (attr) {
	case hwmon_temp_input:
	case hwmon_temp_min_alarm:
	case hwmon_temp_max_alarm:
	case hwmon_temp_crit_alarm:
	case hwmon_temp_emergency_alarm:
	case hwmon_temp_emergency_hyst:
	case hwmon_temp_fault:
		return S_IRUGO;
	case hwmon_temp_min:
	case hwmon_temp_max:
	case hwmon_temp_crit:
	case hwmon_temp_emergency:
	case hwmon_temp_offset:
		return S_IRUGO | S_IWUSR;
	case hwmon_temp_crit_hyst:
		if (channel == 0)
			return S_IRUGO | S_IWUSR;
		return S_IRUGO;
	default:
		return 0;
	}
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
          int attr = 100;
          int channel = 100;
          int _len_data0 = 1;
          const void * data = (const void *) malloc(_len_data0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = 0;
          }
          int benchRet = lm90_temp_is_visible(data,attr,channel);
          printf("%d\n", benchRet); 
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int attr = 255;
          int channel = 255;
          int _len_data0 = 65025;
          const void * data = (const void *) malloc(_len_data0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = 0;
          }
          int benchRet = lm90_temp_is_visible(data,attr,channel);
          printf("%d\n", benchRet); 
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int attr = 10;
          int channel = 10;
          int _len_data0 = 100;
          const void * data = (const void *) malloc(_len_data0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = 0;
          }
          int benchRet = lm90_temp_is_visible(data,attr,channel);
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

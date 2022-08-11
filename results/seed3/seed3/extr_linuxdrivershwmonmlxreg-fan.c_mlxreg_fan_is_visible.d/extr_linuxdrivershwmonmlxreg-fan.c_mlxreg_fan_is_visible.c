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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int umode_t ;
typedef  int /*<<< orphan*/  u32 ;
struct TYPE_4__ {int /*<<< orphan*/  connected; } ;
struct mlxreg_fan {TYPE_2__ pwm; TYPE_1__* tacho; } ;
typedef  enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;
struct TYPE_3__ {int /*<<< orphan*/  connected; } ;

/* Variables and functions */
#define  hwmon_fan 132 
#define  hwmon_fan_fault 131 
#define  hwmon_fan_input 130 
#define  hwmon_pwm 129 
#define  hwmon_pwm_input 128 

__attribute__((used)) static umode_t
mlxreg_fan_is_visible(const void *data, enum hwmon_sensor_types type, u32 attr,
		      int channel)
{
	switch (type) {
	case hwmon_fan:
		if (!(((struct mlxreg_fan *)data)->tacho[channel].connected))
			return 0;

		switch (attr) {
		case hwmon_fan_input:
		case hwmon_fan_fault:
			return 0444;
		default:
			break;
		}
		break;

	case hwmon_pwm:
		if (!(((struct mlxreg_fan *)data)->pwm.connected))
			return 0;

		switch (attr) {
		case hwmon_pwm_input:
			return 0644;
		default:
			break;
		}
		break;

	default:
		break;
	}

	return 0;
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
          enum hwmon_sensor_types type = 0;
          int attr = 100;
          int channel = 100;
          int _len_data0 = 1;
          const void * data = (const void *) malloc(_len_data0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = 0;
          }
          int benchRet = mlxreg_fan_is_visible(data,type,attr,channel);
          printf("%d\n", benchRet); 
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum hwmon_sensor_types type = 0;
          int attr = 255;
          int channel = 255;
          int _len_data0 = 65025;
          const void * data = (const void *) malloc(_len_data0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = 0;
          }
          int benchRet = mlxreg_fan_is_visible(data,type,attr,channel);
          printf("%d\n", benchRet); 
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum hwmon_sensor_types type = 0;
          int attr = 10;
          int channel = 10;
          int _len_data0 = 100;
          const void * data = (const void *) malloc(_len_data0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = 0;
          }
          int benchRet = mlxreg_fan_is_visible(data,type,attr,channel);
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

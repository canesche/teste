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
typedef  int /*<<< orphan*/  umode_t ;
typedef  int u32 ;
struct jc42_data {unsigned int config; } ;
typedef  enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;

/* Variables and functions */
 unsigned int JC42_CFG_EVENT_LOCK ; 
 unsigned int JC42_CFG_TCRIT_LOCK ; 
 int /*<<< orphan*/  S_IRUGO ; 
 int /*<<< orphan*/  S_IWUSR ; 
#define  hwmon_temp_crit 136 
#define  hwmon_temp_crit_alarm 135 
#define  hwmon_temp_crit_hyst 134 
#define  hwmon_temp_input 133 
#define  hwmon_temp_max 132 
#define  hwmon_temp_max_alarm 131 
#define  hwmon_temp_max_hyst 130 
#define  hwmon_temp_min 129 
#define  hwmon_temp_min_alarm 128 

__attribute__((used)) static umode_t jc42_is_visible(const void *_data, enum hwmon_sensor_types type,
			       u32 attr, int channel)
{
	const struct jc42_data *data = _data;
	unsigned int config = data->config;
	umode_t mode = S_IRUGO;

	switch (attr) {
	case hwmon_temp_min:
	case hwmon_temp_max:
		if (!(config & JC42_CFG_EVENT_LOCK))
			mode |= S_IWUSR;
		break;
	case hwmon_temp_crit:
		if (!(config & JC42_CFG_TCRIT_LOCK))
			mode |= S_IWUSR;
		break;
	case hwmon_temp_crit_hyst:
		if (!(config & (JC42_CFG_EVENT_LOCK | JC42_CFG_TCRIT_LOCK)))
			mode |= S_IWUSR;
		break;
	case hwmon_temp_input:
	case hwmon_temp_max_hyst:
	case hwmon_temp_min_alarm:
	case hwmon_temp_max_alarm:
	case hwmon_temp_crit_alarm:
		break;
	default:
		mode = 0;
		break;
	}
	return mode;
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
          int _len__data0 = 1;
          const void * _data = (const void *) malloc(_len__data0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len__data0; _i0++) {
            _data[_i0] = 0;
          }
          int benchRet = jc42_is_visible(_data,type,attr,channel);
          printf("%d\n", benchRet); 
          free(_data);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum hwmon_sensor_types type = 0;
          int attr = 255;
          int channel = 255;
          int _len__data0 = 65025;
          const void * _data = (const void *) malloc(_len__data0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len__data0; _i0++) {
            _data[_i0] = 0;
          }
          int benchRet = jc42_is_visible(_data,type,attr,channel);
          printf("%d\n", benchRet); 
          free(_data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum hwmon_sensor_types type = 0;
          int attr = 10;
          int channel = 10;
          int _len__data0 = 100;
          const void * _data = (const void *) malloc(_len__data0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len__data0; _i0++) {
            _data[_i0] = 0;
          }
          int benchRet = jc42_is_visible(_data,type,attr,channel);
          printf("%d\n", benchRet); 
          free(_data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

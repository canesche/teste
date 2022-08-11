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
struct thermal_zone_device {struct mlxsw_thermal* devdata; } ;
struct mlxsw_thermal {TYPE_1__* trips; } ;
struct TYPE_2__ {int temp; } ;

/* Variables and functions */
 int EINVAL ; 
 int MLXSW_THERMAL_MAX_TEMP ; 
 int MLXSW_THERMAL_NUM_TRIPS ; 

__attribute__((used)) static int mlxsw_thermal_set_trip_temp(struct thermal_zone_device *tzdev,
				       int trip, int temp)
{
	struct mlxsw_thermal *thermal = tzdev->devdata;

	if (trip < 0 || trip >= MLXSW_THERMAL_NUM_TRIPS ||
	    temp > MLXSW_THERMAL_MAX_TEMP)
		return -EINVAL;

	thermal->trips[trip].temp = temp;
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
          int trip = 100;
          int temp = 100;
          int _len_tzdev0 = 1;
          struct thermal_zone_device * tzdev = (struct thermal_zone_device *) malloc(_len_tzdev0*sizeof(struct thermal_zone_device));
          for(int _i0 = 0; _i0 < _len_tzdev0; _i0++) {
              int _len_tzdev__i0__devdata0 = 1;
          tzdev[_i0].devdata = (struct mlxsw_thermal *) malloc(_len_tzdev__i0__devdata0*sizeof(struct mlxsw_thermal));
          for(int _j0 = 0; _j0 < _len_tzdev__i0__devdata0; _j0++) {
              int _len_tzdev__i0__devdata_trips0 = 1;
          tzdev[_i0].devdata->trips = (struct TYPE_2__ *) malloc(_len_tzdev__i0__devdata_trips0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_tzdev__i0__devdata_trips0; _j0++) {
            tzdev[_i0].devdata->trips->temp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = mlxsw_thermal_set_trip_temp(tzdev,trip,temp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tzdev0; _aux++) {
          free(tzdev[_aux].devdata);
          }
          free(tzdev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int trip = 255;
          int temp = 255;
          int _len_tzdev0 = 65025;
          struct thermal_zone_device * tzdev = (struct thermal_zone_device *) malloc(_len_tzdev0*sizeof(struct thermal_zone_device));
          for(int _i0 = 0; _i0 < _len_tzdev0; _i0++) {
              int _len_tzdev__i0__devdata0 = 1;
          tzdev[_i0].devdata = (struct mlxsw_thermal *) malloc(_len_tzdev__i0__devdata0*sizeof(struct mlxsw_thermal));
          for(int _j0 = 0; _j0 < _len_tzdev__i0__devdata0; _j0++) {
              int _len_tzdev__i0__devdata_trips0 = 1;
          tzdev[_i0].devdata->trips = (struct TYPE_2__ *) malloc(_len_tzdev__i0__devdata_trips0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_tzdev__i0__devdata_trips0; _j0++) {
            tzdev[_i0].devdata->trips->temp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = mlxsw_thermal_set_trip_temp(tzdev,trip,temp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tzdev0; _aux++) {
          free(tzdev[_aux].devdata);
          }
          free(tzdev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int trip = 10;
          int temp = 10;
          int _len_tzdev0 = 100;
          struct thermal_zone_device * tzdev = (struct thermal_zone_device *) malloc(_len_tzdev0*sizeof(struct thermal_zone_device));
          for(int _i0 = 0; _i0 < _len_tzdev0; _i0++) {
              int _len_tzdev__i0__devdata0 = 1;
          tzdev[_i0].devdata = (struct mlxsw_thermal *) malloc(_len_tzdev__i0__devdata0*sizeof(struct mlxsw_thermal));
          for(int _j0 = 0; _j0 < _len_tzdev__i0__devdata0; _j0++) {
              int _len_tzdev__i0__devdata_trips0 = 1;
          tzdev[_i0].devdata->trips = (struct TYPE_2__ *) malloc(_len_tzdev__i0__devdata_trips0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_tzdev__i0__devdata_trips0; _j0++) {
            tzdev[_i0].devdata->trips->temp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = mlxsw_thermal_set_trip_temp(tzdev,trip,temp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tzdev0; _aux++) {
          free(tzdev[_aux].devdata);
          }
          free(tzdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

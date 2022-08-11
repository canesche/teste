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
struct thermal_zone_device {struct __thermal_zone* devdata; } ;
struct __thermal_zone {int ntrips; TYPE_1__* trips; } ;
struct TYPE_2__ {int temperature; } ;

/* Variables and functions */
 int EDOM ; 

__attribute__((used)) static int of_thermal_get_trip_temp(struct thermal_zone_device *tz, int trip,
				    int *temp)
{
	struct __thermal_zone *data = tz->devdata;

	if (trip >= data->ntrips || trip < 0)
		return -EDOM;

	*temp = data->trips[trip].temperature;

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
          int _len_tz0 = 1;
          struct thermal_zone_device * tz = (struct thermal_zone_device *) malloc(_len_tz0*sizeof(struct thermal_zone_device));
          for(int _i0 = 0; _i0 < _len_tz0; _i0++) {
              int _len_tz__i0__devdata0 = 1;
          tz[_i0].devdata = (struct __thermal_zone *) malloc(_len_tz__i0__devdata0*sizeof(struct __thermal_zone));
          for(int _j0 = 0; _j0 < _len_tz__i0__devdata0; _j0++) {
            tz[_i0].devdata->ntrips = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tz__i0__devdata_trips0 = 1;
          tz[_i0].devdata->trips = (struct TYPE_2__ *) malloc(_len_tz__i0__devdata_trips0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_tz__i0__devdata_trips0; _j0++) {
            tz[_i0].devdata->trips->temperature = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_temp0 = 1;
          int * temp = (int *) malloc(_len_temp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_temp0; _i0++) {
            temp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = of_thermal_get_trip_temp(tz,trip,temp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tz0; _aux++) {
          free(tz[_aux].devdata);
          }
          free(tz);
          free(temp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int trip = 255;
          int _len_tz0 = 65025;
          struct thermal_zone_device * tz = (struct thermal_zone_device *) malloc(_len_tz0*sizeof(struct thermal_zone_device));
          for(int _i0 = 0; _i0 < _len_tz0; _i0++) {
              int _len_tz__i0__devdata0 = 1;
          tz[_i0].devdata = (struct __thermal_zone *) malloc(_len_tz__i0__devdata0*sizeof(struct __thermal_zone));
          for(int _j0 = 0; _j0 < _len_tz__i0__devdata0; _j0++) {
            tz[_i0].devdata->ntrips = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tz__i0__devdata_trips0 = 1;
          tz[_i0].devdata->trips = (struct TYPE_2__ *) malloc(_len_tz__i0__devdata_trips0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_tz__i0__devdata_trips0; _j0++) {
            tz[_i0].devdata->trips->temperature = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_temp0 = 65025;
          int * temp = (int *) malloc(_len_temp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_temp0; _i0++) {
            temp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = of_thermal_get_trip_temp(tz,trip,temp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tz0; _aux++) {
          free(tz[_aux].devdata);
          }
          free(tz);
          free(temp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int trip = 10;
          int _len_tz0 = 100;
          struct thermal_zone_device * tz = (struct thermal_zone_device *) malloc(_len_tz0*sizeof(struct thermal_zone_device));
          for(int _i0 = 0; _i0 < _len_tz0; _i0++) {
              int _len_tz__i0__devdata0 = 1;
          tz[_i0].devdata = (struct __thermal_zone *) malloc(_len_tz__i0__devdata0*sizeof(struct __thermal_zone));
          for(int _j0 = 0; _j0 < _len_tz__i0__devdata0; _j0++) {
            tz[_i0].devdata->ntrips = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tz__i0__devdata_trips0 = 1;
          tz[_i0].devdata->trips = (struct TYPE_2__ *) malloc(_len_tz__i0__devdata_trips0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_tz__i0__devdata_trips0; _j0++) {
            tz[_i0].devdata->trips->temperature = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_temp0 = 100;
          int * temp = (int *) malloc(_len_temp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_temp0; _i0++) {
            temp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = of_thermal_get_trip_temp(tz,trip,temp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tz0; _aux++) {
          free(tz[_aux].devdata);
          }
          free(tz);
          free(temp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

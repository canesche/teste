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
typedef  struct TYPE_18__   TYPE_9__ ;
typedef  struct TYPE_17__   TYPE_8__ ;
typedef  struct TYPE_16__   TYPE_7__ ;
typedef  struct TYPE_15__   TYPE_6__ ;
typedef  struct TYPE_14__   TYPE_5__ ;
typedef  struct TYPE_13__   TYPE_4__ ;
typedef  struct TYPE_12__   TYPE_3__ ;
typedef  struct TYPE_11__   TYPE_2__ ;
typedef  struct TYPE_10__   TYPE_1__ ;

/* Type definitions */
struct thermal_zone_device {struct acpi_thermal* devdata; } ;
struct TYPE_14__ {scalar_t__ valid; } ;
struct TYPE_15__ {TYPE_5__ flags; } ;
struct TYPE_12__ {scalar_t__ valid; } ;
struct TYPE_13__ {TYPE_3__ flags; } ;
struct TYPE_10__ {scalar_t__ valid; } ;
struct TYPE_11__ {TYPE_1__ flags; } ;
struct TYPE_18__ {TYPE_8__* active; TYPE_6__ passive; TYPE_4__ hot; TYPE_2__ critical; } ;
struct acpi_thermal {TYPE_9__ trips; } ;
typedef  enum thermal_trip_type { ____Placeholder_thermal_trip_type } thermal_trip_type ;
struct TYPE_16__ {scalar_t__ valid; } ;
struct TYPE_17__ {TYPE_7__ flags; } ;

/* Variables and functions */
 int ACPI_THERMAL_MAX_ACTIVE ; 
 int EINVAL ; 
 int THERMAL_TRIP_ACTIVE ; 
 int THERMAL_TRIP_CRITICAL ; 
 int THERMAL_TRIP_HOT ; 
 int THERMAL_TRIP_PASSIVE ; 

__attribute__((used)) static int thermal_get_trip_type(struct thermal_zone_device *thermal,
				 int trip, enum thermal_trip_type *type)
{
	struct acpi_thermal *tz = thermal->devdata;
	int i;

	if (!tz || trip < 0)
		return -EINVAL;

	if (tz->trips.critical.flags.valid) {
		if (!trip) {
			*type = THERMAL_TRIP_CRITICAL;
			return 0;
		}
		trip--;
	}

	if (tz->trips.hot.flags.valid) {
		if (!trip) {
			*type = THERMAL_TRIP_HOT;
			return 0;
		}
		trip--;
	}

	if (tz->trips.passive.flags.valid) {
		if (!trip) {
			*type = THERMAL_TRIP_PASSIVE;
			return 0;
		}
		trip--;
	}

	for (i = 0; i < ACPI_THERMAL_MAX_ACTIVE &&
		tz->trips.active[i].flags.valid; i++) {
		if (!trip) {
			*type = THERMAL_TRIP_ACTIVE;
			return 0;
		}
		trip--;
	}

	return -EINVAL;
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
          int _len_thermal0 = 1;
          struct thermal_zone_device * thermal = (struct thermal_zone_device *) malloc(_len_thermal0*sizeof(struct thermal_zone_device));
          for(int _i0 = 0; _i0 < _len_thermal0; _i0++) {
              int _len_thermal__i0__devdata0 = 1;
          thermal[_i0].devdata = (struct acpi_thermal *) malloc(_len_thermal__i0__devdata0*sizeof(struct acpi_thermal));
          for(int _j0 = 0; _j0 < _len_thermal__i0__devdata0; _j0++) {
              int _len_thermal__i0__devdata_trips_active0 = 1;
          thermal[_i0].devdata->trips.active = (struct TYPE_17__ *) malloc(_len_thermal__i0__devdata_trips_active0*sizeof(struct TYPE_17__));
          for(int _j0 = 0; _j0 < _len_thermal__i0__devdata_trips_active0; _j0++) {
            thermal[_i0].devdata->trips.active->flags.valid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        thermal[_i0].devdata->trips.passive.flags.valid = ((-2 * (next_i()%2)) + 1) * next_i();
        thermal[_i0].devdata->trips.hot.flags.valid = ((-2 * (next_i()%2)) + 1) * next_i();
        thermal[_i0].devdata->trips.critical.flags.valid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_type0 = 1;
          enum thermal_trip_type * type = (enum thermal_trip_type *) malloc(_len_type0*sizeof(enum thermal_trip_type));
          for(int _i0 = 0; _i0 < _len_type0; _i0++) {
            type[_i0] = 0;
          }
          int benchRet = thermal_get_trip_type(thermal,trip,type);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_thermal0; _aux++) {
          free(thermal[_aux].devdata);
          }
          free(thermal);
          free(type);
        
        break;
    }
    // big-arr
    case 1:
    {
          int trip = 255;
          int _len_thermal0 = 65025;
          struct thermal_zone_device * thermal = (struct thermal_zone_device *) malloc(_len_thermal0*sizeof(struct thermal_zone_device));
          for(int _i0 = 0; _i0 < _len_thermal0; _i0++) {
              int _len_thermal__i0__devdata0 = 1;
          thermal[_i0].devdata = (struct acpi_thermal *) malloc(_len_thermal__i0__devdata0*sizeof(struct acpi_thermal));
          for(int _j0 = 0; _j0 < _len_thermal__i0__devdata0; _j0++) {
              int _len_thermal__i0__devdata_trips_active0 = 1;
          thermal[_i0].devdata->trips.active = (struct TYPE_17__ *) malloc(_len_thermal__i0__devdata_trips_active0*sizeof(struct TYPE_17__));
          for(int _j0 = 0; _j0 < _len_thermal__i0__devdata_trips_active0; _j0++) {
            thermal[_i0].devdata->trips.active->flags.valid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        thermal[_i0].devdata->trips.passive.flags.valid = ((-2 * (next_i()%2)) + 1) * next_i();
        thermal[_i0].devdata->trips.hot.flags.valid = ((-2 * (next_i()%2)) + 1) * next_i();
        thermal[_i0].devdata->trips.critical.flags.valid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_type0 = 65025;
          enum thermal_trip_type * type = (enum thermal_trip_type *) malloc(_len_type0*sizeof(enum thermal_trip_type));
          for(int _i0 = 0; _i0 < _len_type0; _i0++) {
            type[_i0] = 0;
          }
          int benchRet = thermal_get_trip_type(thermal,trip,type);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_thermal0; _aux++) {
          free(thermal[_aux].devdata);
          }
          free(thermal);
          free(type);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int trip = 10;
          int _len_thermal0 = 100;
          struct thermal_zone_device * thermal = (struct thermal_zone_device *) malloc(_len_thermal0*sizeof(struct thermal_zone_device));
          for(int _i0 = 0; _i0 < _len_thermal0; _i0++) {
              int _len_thermal__i0__devdata0 = 1;
          thermal[_i0].devdata = (struct acpi_thermal *) malloc(_len_thermal__i0__devdata0*sizeof(struct acpi_thermal));
          for(int _j0 = 0; _j0 < _len_thermal__i0__devdata0; _j0++) {
              int _len_thermal__i0__devdata_trips_active0 = 1;
          thermal[_i0].devdata->trips.active = (struct TYPE_17__ *) malloc(_len_thermal__i0__devdata_trips_active0*sizeof(struct TYPE_17__));
          for(int _j0 = 0; _j0 < _len_thermal__i0__devdata_trips_active0; _j0++) {
            thermal[_i0].devdata->trips.active->flags.valid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        thermal[_i0].devdata->trips.passive.flags.valid = ((-2 * (next_i()%2)) + 1) * next_i();
        thermal[_i0].devdata->trips.hot.flags.valid = ((-2 * (next_i()%2)) + 1) * next_i();
        thermal[_i0].devdata->trips.critical.flags.valid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_type0 = 100;
          enum thermal_trip_type * type = (enum thermal_trip_type *) malloc(_len_type0*sizeof(enum thermal_trip_type));
          for(int _i0 = 0; _i0 < _len_type0; _i0++) {
            type[_i0] = 0;
          }
          int benchRet = thermal_get_trip_type(thermal,trip,type);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_thermal0; _aux++) {
          free(thermal[_aux].devdata);
          }
          free(thermal);
          free(type);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

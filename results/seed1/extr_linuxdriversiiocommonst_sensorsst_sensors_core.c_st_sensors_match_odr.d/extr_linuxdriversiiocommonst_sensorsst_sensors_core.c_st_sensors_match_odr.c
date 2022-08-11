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
struct TYPE_3__ {TYPE_2__* odr_avl; } ;
struct st_sensor_settings {TYPE_1__ odr; } ;
struct st_sensor_odr_avl {unsigned int hz; int /*<<< orphan*/  value; } ;
struct TYPE_4__ {unsigned int hz; int /*<<< orphan*/  value; } ;

/* Variables and functions */
 int EINVAL ; 
 int ST_SENSORS_ODR_LIST_MAX ; 

__attribute__((used)) static int st_sensors_match_odr(struct st_sensor_settings *sensor_settings,
			unsigned int odr, struct st_sensor_odr_avl *odr_out)
{
	int i, ret = -EINVAL;

	for (i = 0; i < ST_SENSORS_ODR_LIST_MAX; i++) {
		if (sensor_settings->odr.odr_avl[i].hz == 0)
			goto st_sensors_match_odr_error;

		if (sensor_settings->odr.odr_avl[i].hz == odr) {
			odr_out->hz = sensor_settings->odr.odr_avl[i].hz;
			odr_out->value = sensor_settings->odr.odr_avl[i].value;
			ret = 0;
			break;
		}
	}

st_sensors_match_odr_error:
	return ret;
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
          unsigned int odr = 100;
          int _len_sensor_settings0 = 1;
          struct st_sensor_settings * sensor_settings = (struct st_sensor_settings *) malloc(_len_sensor_settings0*sizeof(struct st_sensor_settings));
          for(int _i0 = 0; _i0 < _len_sensor_settings0; _i0++) {
              int _len_sensor_settings__i0__odr_odr_avl0 = 1;
          sensor_settings[_i0].odr.odr_avl = (struct TYPE_4__ *) malloc(_len_sensor_settings__i0__odr_odr_avl0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_sensor_settings__i0__odr_odr_avl0; _j0++) {
            sensor_settings[_i0].odr.odr_avl->hz = ((-2 * (next_i()%2)) + 1) * next_i();
        sensor_settings[_i0].odr.odr_avl->value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_odr_out0 = 1;
          struct st_sensor_odr_avl * odr_out = (struct st_sensor_odr_avl *) malloc(_len_odr_out0*sizeof(struct st_sensor_odr_avl));
          for(int _i0 = 0; _i0 < _len_odr_out0; _i0++) {
            odr_out[_i0].hz = ((-2 * (next_i()%2)) + 1) * next_i();
        odr_out[_i0].value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = st_sensors_match_odr(sensor_settings,odr,odr_out);
          printf("%d\n", benchRet); 
          free(sensor_settings);
          free(odr_out);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int odr = 255;
          int _len_sensor_settings0 = 65025;
          struct st_sensor_settings * sensor_settings = (struct st_sensor_settings *) malloc(_len_sensor_settings0*sizeof(struct st_sensor_settings));
          for(int _i0 = 0; _i0 < _len_sensor_settings0; _i0++) {
              int _len_sensor_settings__i0__odr_odr_avl0 = 1;
          sensor_settings[_i0].odr.odr_avl = (struct TYPE_4__ *) malloc(_len_sensor_settings__i0__odr_odr_avl0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_sensor_settings__i0__odr_odr_avl0; _j0++) {
            sensor_settings[_i0].odr.odr_avl->hz = ((-2 * (next_i()%2)) + 1) * next_i();
        sensor_settings[_i0].odr.odr_avl->value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_odr_out0 = 65025;
          struct st_sensor_odr_avl * odr_out = (struct st_sensor_odr_avl *) malloc(_len_odr_out0*sizeof(struct st_sensor_odr_avl));
          for(int _i0 = 0; _i0 < _len_odr_out0; _i0++) {
            odr_out[_i0].hz = ((-2 * (next_i()%2)) + 1) * next_i();
        odr_out[_i0].value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = st_sensors_match_odr(sensor_settings,odr,odr_out);
          printf("%d\n", benchRet); 
          free(sensor_settings);
          free(odr_out);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int odr = 10;
          int _len_sensor_settings0 = 100;
          struct st_sensor_settings * sensor_settings = (struct st_sensor_settings *) malloc(_len_sensor_settings0*sizeof(struct st_sensor_settings));
          for(int _i0 = 0; _i0 < _len_sensor_settings0; _i0++) {
              int _len_sensor_settings__i0__odr_odr_avl0 = 1;
          sensor_settings[_i0].odr.odr_avl = (struct TYPE_4__ *) malloc(_len_sensor_settings__i0__odr_odr_avl0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_sensor_settings__i0__odr_odr_avl0; _j0++) {
            sensor_settings[_i0].odr.odr_avl->hz = ((-2 * (next_i()%2)) + 1) * next_i();
        sensor_settings[_i0].odr.odr_avl->value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_odr_out0 = 100;
          struct st_sensor_odr_avl * odr_out = (struct st_sensor_odr_avl *) malloc(_len_odr_out0*sizeof(struct st_sensor_odr_avl));
          for(int _i0 = 0; _i0 < _len_odr_out0; _i0++) {
            odr_out[_i0].hz = ((-2 * (next_i()%2)) + 1) * next_i();
        odr_out[_i0].value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = st_sensors_match_odr(sensor_settings,odr,odr_out);
          printf("%d\n", benchRet); 
          free(sensor_settings);
          free(odr_out);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

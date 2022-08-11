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
struct TYPE_2__ {int* alarm_state; } ;
struct nvkm_therm {TYPE_1__ sensor; } ;
typedef  enum nvkm_therm_thrs_state { ____Placeholder_nvkm_therm_thrs_state } nvkm_therm_thrs_state ;
typedef  enum nvkm_therm_thrs { ____Placeholder_nvkm_therm_thrs } nvkm_therm_thrs ;

/* Variables and functions */

enum nvkm_therm_thrs_state
nvkm_therm_sensor_get_threshold_state(struct nvkm_therm *therm,
				      enum nvkm_therm_thrs thrs)
{
	return therm->sensor.alarm_state[thrs];
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
          enum nvkm_therm_thrs thrs = 0;
          int _len_therm0 = 1;
          struct nvkm_therm * therm = (struct nvkm_therm *) malloc(_len_therm0*sizeof(struct nvkm_therm));
          for(int _i0 = 0; _i0 < _len_therm0; _i0++) {
              int _len_therm__i0__sensor_alarm_state0 = 1;
          therm[_i0].sensor.alarm_state = (int *) malloc(_len_therm__i0__sensor_alarm_state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_therm__i0__sensor_alarm_state0; _j0++) {
            therm[_i0].sensor.alarm_state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          enum nvkm_therm_thrs_state benchRet = nvkm_therm_sensor_get_threshold_state(therm,thrs);
          free(therm);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum nvkm_therm_thrs thrs = 0;
          int _len_therm0 = 65025;
          struct nvkm_therm * therm = (struct nvkm_therm *) malloc(_len_therm0*sizeof(struct nvkm_therm));
          for(int _i0 = 0; _i0 < _len_therm0; _i0++) {
              int _len_therm__i0__sensor_alarm_state0 = 1;
          therm[_i0].sensor.alarm_state = (int *) malloc(_len_therm__i0__sensor_alarm_state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_therm__i0__sensor_alarm_state0; _j0++) {
            therm[_i0].sensor.alarm_state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          enum nvkm_therm_thrs_state benchRet = nvkm_therm_sensor_get_threshold_state(therm,thrs);
          free(therm);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum nvkm_therm_thrs thrs = 0;
          int _len_therm0 = 100;
          struct nvkm_therm * therm = (struct nvkm_therm *) malloc(_len_therm0*sizeof(struct nvkm_therm));
          for(int _i0 = 0; _i0 < _len_therm0; _i0++) {
              int _len_therm__i0__sensor_alarm_state0 = 1;
          therm[_i0].sensor.alarm_state = (int *) malloc(_len_therm__i0__sensor_alarm_state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_therm__i0__sensor_alarm_state0; _j0++) {
            therm[_i0].sensor.alarm_state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          enum nvkm_therm_thrs_state benchRet = nvkm_therm_sensor_get_threshold_state(therm,thrs);
          free(therm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

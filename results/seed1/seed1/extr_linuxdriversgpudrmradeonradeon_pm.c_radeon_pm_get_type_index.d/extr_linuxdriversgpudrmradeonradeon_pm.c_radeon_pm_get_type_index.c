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
struct TYPE_4__ {int num_power_states; int default_power_state_index; TYPE_1__* power_state; } ;
struct radeon_device {TYPE_2__ pm; } ;
typedef  enum radeon_pm_state_type { ____Placeholder_radeon_pm_state_type } radeon_pm_state_type ;
struct TYPE_3__ {int type; } ;

/* Variables and functions */

int radeon_pm_get_type_index(struct radeon_device *rdev,
			     enum radeon_pm_state_type ps_type,
			     int instance)
{
	int i;
	int found_instance = -1;

	for (i = 0; i < rdev->pm.num_power_states; i++) {
		if (rdev->pm.power_state[i].type == ps_type) {
			found_instance++;
			if (found_instance == instance)
				return i;
		}
	}
	/* return default if no match */
	return rdev->pm.default_power_state_index;
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
          enum radeon_pm_state_type ps_type = 0;
          int instance = 100;
          int _len_rdev0 = 1;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].pm.num_power_states = ((-2 * (next_i()%2)) + 1) * next_i();
        rdev[_i0].pm.default_power_state_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rdev__i0__pm_power_state0 = 1;
          rdev[_i0].pm.power_state = (struct TYPE_3__ *) malloc(_len_rdev__i0__pm_power_state0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_rdev__i0__pm_power_state0; _j0++) {
            rdev[_i0].pm.power_state->type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = radeon_pm_get_type_index(rdev,ps_type,instance);
          printf("%d\n", benchRet); 
          free(rdev);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum radeon_pm_state_type ps_type = 0;
          int instance = 255;
          int _len_rdev0 = 65025;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].pm.num_power_states = ((-2 * (next_i()%2)) + 1) * next_i();
        rdev[_i0].pm.default_power_state_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rdev__i0__pm_power_state0 = 1;
          rdev[_i0].pm.power_state = (struct TYPE_3__ *) malloc(_len_rdev__i0__pm_power_state0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_rdev__i0__pm_power_state0; _j0++) {
            rdev[_i0].pm.power_state->type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = radeon_pm_get_type_index(rdev,ps_type,instance);
          printf("%d\n", benchRet); 
          free(rdev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum radeon_pm_state_type ps_type = 0;
          int instance = 10;
          int _len_rdev0 = 100;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].pm.num_power_states = ((-2 * (next_i()%2)) + 1) * next_i();
        rdev[_i0].pm.default_power_state_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rdev__i0__pm_power_state0 = 1;
          rdev[_i0].pm.power_state = (struct TYPE_3__ *) malloc(_len_rdev__i0__pm_power_state0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_rdev__i0__pm_power_state0; _j0++) {
            rdev[_i0].pm.power_state->type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = radeon_pm_get_type_index(rdev,ps_type,instance);
          printf("%d\n", benchRet); 
          free(rdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

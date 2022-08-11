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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int u32 ;
struct TYPE_6__ {int default_power_state_index; TYPE_2__* power_state; } ;
struct radeon_device {TYPE_3__ pm; } ;
struct TYPE_5__ {int misc; int misc2; TYPE_1__* clock_info; TYPE_1__* default_clock_mode; void* type; int /*<<< orphan*/  flags; } ;
struct TYPE_4__ {int /*<<< orphan*/  flags; } ;

/* Variables and functions */
 int ATOM_PM_MISCINFO2_SYSTEM_AC_LITE_MODE ; 
 int ATOM_PM_MISCINFO_3D_ACCELERATION_EN ; 
 int ATOM_PM_MISCINFO_DEFAULT_DC_STATE_ENTRY_TRUE ; 
 int ATOM_PM_MISCINFO_DEFAULT_LOW_DC_STATE_ENTRY_TRUE ; 
 int ATOM_PM_MISCINFO_DRIVER_DEFAULT_MODE ; 
 int ATOM_PM_MISCINFO_LOAD_BALANCE_EN ; 
 int ATOM_PM_MISCINFO_POWER_SAVING_MODE ; 
 void* POWER_STATE_TYPE_BALANCED ; 
 void* POWER_STATE_TYPE_BATTERY ; 
 void* POWER_STATE_TYPE_DEFAULT ; 
 void* POWER_STATE_TYPE_PERFORMANCE ; 
 void* POWER_STATE_TYPE_POWERSAVE ; 
 int /*<<< orphan*/  RADEON_PM_MODE_NO_DISPLAY ; 
 int /*<<< orphan*/  RADEON_PM_STATE_SINGLE_DISPLAY_ONLY ; 

__attribute__((used)) static void radeon_atombios_parse_misc_flags_1_3(struct radeon_device *rdev,
						 int state_index,
						 u32 misc, u32 misc2)
{
	rdev->pm.power_state[state_index].misc = misc;
	rdev->pm.power_state[state_index].misc2 = misc2;
	/* order matters! */
	if (misc & ATOM_PM_MISCINFO_POWER_SAVING_MODE)
		rdev->pm.power_state[state_index].type =
			POWER_STATE_TYPE_POWERSAVE;
	if (misc & ATOM_PM_MISCINFO_DEFAULT_DC_STATE_ENTRY_TRUE)
		rdev->pm.power_state[state_index].type =
			POWER_STATE_TYPE_BATTERY;
	if (misc & ATOM_PM_MISCINFO_DEFAULT_LOW_DC_STATE_ENTRY_TRUE)
		rdev->pm.power_state[state_index].type =
			POWER_STATE_TYPE_BATTERY;
	if (misc & ATOM_PM_MISCINFO_LOAD_BALANCE_EN)
		rdev->pm.power_state[state_index].type =
			POWER_STATE_TYPE_BALANCED;
	if (misc & ATOM_PM_MISCINFO_3D_ACCELERATION_EN) {
		rdev->pm.power_state[state_index].type =
			POWER_STATE_TYPE_PERFORMANCE;
		rdev->pm.power_state[state_index].flags &=
			~RADEON_PM_STATE_SINGLE_DISPLAY_ONLY;
	}
	if (misc2 & ATOM_PM_MISCINFO2_SYSTEM_AC_LITE_MODE)
		rdev->pm.power_state[state_index].type =
			POWER_STATE_TYPE_BALANCED;
	if (misc & ATOM_PM_MISCINFO_DRIVER_DEFAULT_MODE) {
		rdev->pm.power_state[state_index].type =
			POWER_STATE_TYPE_DEFAULT;
		rdev->pm.default_power_state_index = state_index;
		rdev->pm.power_state[state_index].default_clock_mode =
			&rdev->pm.power_state[state_index].clock_info[0];
	} else if (state_index == 0) {
		rdev->pm.power_state[state_index].clock_info[0].flags |=
			RADEON_PM_MODE_NO_DISPLAY;
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
          int state_index = 100;
          int misc = 100;
          int misc2 = 100;
          int _len_rdev0 = 1;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].pm.default_power_state_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rdev__i0__pm_power_state0 = 1;
          rdev[_i0].pm.power_state = (struct TYPE_5__ *) malloc(_len_rdev__i0__pm_power_state0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_rdev__i0__pm_power_state0; _j0++) {
            rdev[_i0].pm.power_state->misc = ((-2 * (next_i()%2)) + 1) * next_i();
        rdev[_i0].pm.power_state->misc2 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rdev__i0__pm_power_state_clock_info0 = 1;
          rdev[_i0].pm.power_state->clock_info = (struct TYPE_4__ *) malloc(_len_rdev__i0__pm_power_state_clock_info0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_rdev__i0__pm_power_state_clock_info0; _j0++) {
            rdev[_i0].pm.power_state->clock_info->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rdev__i0__pm_power_state_default_clock_mode0 = 1;
          rdev[_i0].pm.power_state->default_clock_mode = (struct TYPE_4__ *) malloc(_len_rdev__i0__pm_power_state_default_clock_mode0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_rdev__i0__pm_power_state_default_clock_mode0; _j0++) {
            rdev[_i0].pm.power_state->default_clock_mode->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        rdev[_i0].pm.power_state->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          radeon_atombios_parse_misc_flags_1_3(rdev,state_index,misc,misc2);
          free(rdev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int state_index = 255;
          int misc = 255;
          int misc2 = 255;
          int _len_rdev0 = 65025;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].pm.default_power_state_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rdev__i0__pm_power_state0 = 1;
          rdev[_i0].pm.power_state = (struct TYPE_5__ *) malloc(_len_rdev__i0__pm_power_state0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_rdev__i0__pm_power_state0; _j0++) {
            rdev[_i0].pm.power_state->misc = ((-2 * (next_i()%2)) + 1) * next_i();
        rdev[_i0].pm.power_state->misc2 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rdev__i0__pm_power_state_clock_info0 = 1;
          rdev[_i0].pm.power_state->clock_info = (struct TYPE_4__ *) malloc(_len_rdev__i0__pm_power_state_clock_info0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_rdev__i0__pm_power_state_clock_info0; _j0++) {
            rdev[_i0].pm.power_state->clock_info->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rdev__i0__pm_power_state_default_clock_mode0 = 1;
          rdev[_i0].pm.power_state->default_clock_mode = (struct TYPE_4__ *) malloc(_len_rdev__i0__pm_power_state_default_clock_mode0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_rdev__i0__pm_power_state_default_clock_mode0; _j0++) {
            rdev[_i0].pm.power_state->default_clock_mode->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        rdev[_i0].pm.power_state->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          radeon_atombios_parse_misc_flags_1_3(rdev,state_index,misc,misc2);
          free(rdev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int state_index = 10;
          int misc = 10;
          int misc2 = 10;
          int _len_rdev0 = 100;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].pm.default_power_state_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rdev__i0__pm_power_state0 = 1;
          rdev[_i0].pm.power_state = (struct TYPE_5__ *) malloc(_len_rdev__i0__pm_power_state0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_rdev__i0__pm_power_state0; _j0++) {
            rdev[_i0].pm.power_state->misc = ((-2 * (next_i()%2)) + 1) * next_i();
        rdev[_i0].pm.power_state->misc2 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rdev__i0__pm_power_state_clock_info0 = 1;
          rdev[_i0].pm.power_state->clock_info = (struct TYPE_4__ *) malloc(_len_rdev__i0__pm_power_state_clock_info0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_rdev__i0__pm_power_state_clock_info0; _j0++) {
            rdev[_i0].pm.power_state->clock_info->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rdev__i0__pm_power_state_default_clock_mode0 = 1;
          rdev[_i0].pm.power_state->default_clock_mode = (struct TYPE_4__ *) malloc(_len_rdev__i0__pm_power_state_default_clock_mode0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_rdev__i0__pm_power_state_default_clock_mode0; _j0++) {
            rdev[_i0].pm.power_state->default_clock_mode->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        rdev[_i0].pm.power_state->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          radeon_atombios_parse_misc_flags_1_3(rdev,state_index,misc,misc2);
          free(rdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

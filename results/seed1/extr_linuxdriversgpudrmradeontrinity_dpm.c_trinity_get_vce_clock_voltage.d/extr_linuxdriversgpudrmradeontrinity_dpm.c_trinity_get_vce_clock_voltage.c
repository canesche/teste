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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u32 ;
typedef  int /*<<< orphan*/  u16 ;
struct radeon_vce_clock_voltage_dependency_table {scalar_t__ count; TYPE_4__* entries; } ;
struct TYPE_5__ {struct radeon_vce_clock_voltage_dependency_table vce_clock_voltage_dependency_table; } ;
struct TYPE_6__ {TYPE_1__ dyn_state; } ;
struct TYPE_7__ {TYPE_2__ dpm; } ;
struct radeon_device {TYPE_3__ pm; } ;
struct TYPE_8__ {scalar_t__ evclk; scalar_t__ ecclk; int /*<<< orphan*/  v; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int trinity_get_vce_clock_voltage(struct radeon_device *rdev,
					 u32 evclk, u32 ecclk, u16 *voltage)
{
	u32 i;
	int ret = -EINVAL;
	struct radeon_vce_clock_voltage_dependency_table *table =
		&rdev->pm.dpm.dyn_state.vce_clock_voltage_dependency_table;

	if (((evclk == 0) && (ecclk == 0)) ||
	    (table && (table->count == 0))) {
		*voltage = 0;
		return 0;
	}

	for (i = 0; i < table->count; i++) {
		if ((evclk <= table->entries[i].evclk) &&
		    (ecclk <= table->entries[i].ecclk)) {
			*voltage = table->entries[i].v;
			ret = 0;
			break;
		}
	}

	/* if no match return the highest voltage */
	if (ret)
		*voltage = table->entries[table->count - 1].v;

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
          long evclk = 100;
          long ecclk = 100;
          int _len_rdev0 = 1;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].pm.dpm.dyn_state.vce_clock_voltage_dependency_table.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rdev__i0__pm_dpm_dyn_state_vce_clock_voltage_dependency_table_entries0 = 1;
          rdev[_i0].pm.dpm.dyn_state.vce_clock_voltage_dependency_table.entries = (struct TYPE_8__ *) malloc(_len_rdev__i0__pm_dpm_dyn_state_vce_clock_voltage_dependency_table_entries0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_rdev__i0__pm_dpm_dyn_state_vce_clock_voltage_dependency_table_entries0; _j0++) {
            rdev[_i0].pm.dpm.dyn_state.vce_clock_voltage_dependency_table.entries->evclk = ((-2 * (next_i()%2)) + 1) * next_i();
        rdev[_i0].pm.dpm.dyn_state.vce_clock_voltage_dependency_table.entries->ecclk = ((-2 * (next_i()%2)) + 1) * next_i();
        rdev[_i0].pm.dpm.dyn_state.vce_clock_voltage_dependency_table.entries->v = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_voltage0 = 1;
          int * voltage = (int *) malloc(_len_voltage0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_voltage0; _i0++) {
            voltage[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = trinity_get_vce_clock_voltage(rdev,evclk,ecclk,voltage);
          printf("%d\n", benchRet); 
          free(rdev);
          free(voltage);
        
        break;
    }
    // big-arr
    case 1:
    {
          long evclk = 255;
          long ecclk = 255;
          int _len_rdev0 = 65025;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].pm.dpm.dyn_state.vce_clock_voltage_dependency_table.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rdev__i0__pm_dpm_dyn_state_vce_clock_voltage_dependency_table_entries0 = 1;
          rdev[_i0].pm.dpm.dyn_state.vce_clock_voltage_dependency_table.entries = (struct TYPE_8__ *) malloc(_len_rdev__i0__pm_dpm_dyn_state_vce_clock_voltage_dependency_table_entries0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_rdev__i0__pm_dpm_dyn_state_vce_clock_voltage_dependency_table_entries0; _j0++) {
            rdev[_i0].pm.dpm.dyn_state.vce_clock_voltage_dependency_table.entries->evclk = ((-2 * (next_i()%2)) + 1) * next_i();
        rdev[_i0].pm.dpm.dyn_state.vce_clock_voltage_dependency_table.entries->ecclk = ((-2 * (next_i()%2)) + 1) * next_i();
        rdev[_i0].pm.dpm.dyn_state.vce_clock_voltage_dependency_table.entries->v = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_voltage0 = 65025;
          int * voltage = (int *) malloc(_len_voltage0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_voltage0; _i0++) {
            voltage[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = trinity_get_vce_clock_voltage(rdev,evclk,ecclk,voltage);
          printf("%d\n", benchRet); 
          free(rdev);
          free(voltage);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long evclk = 10;
          long ecclk = 10;
          int _len_rdev0 = 100;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].pm.dpm.dyn_state.vce_clock_voltage_dependency_table.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rdev__i0__pm_dpm_dyn_state_vce_clock_voltage_dependency_table_entries0 = 1;
          rdev[_i0].pm.dpm.dyn_state.vce_clock_voltage_dependency_table.entries = (struct TYPE_8__ *) malloc(_len_rdev__i0__pm_dpm_dyn_state_vce_clock_voltage_dependency_table_entries0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_rdev__i0__pm_dpm_dyn_state_vce_clock_voltage_dependency_table_entries0; _j0++) {
            rdev[_i0].pm.dpm.dyn_state.vce_clock_voltage_dependency_table.entries->evclk = ((-2 * (next_i()%2)) + 1) * next_i();
        rdev[_i0].pm.dpm.dyn_state.vce_clock_voltage_dependency_table.entries->ecclk = ((-2 * (next_i()%2)) + 1) * next_i();
        rdev[_i0].pm.dpm.dyn_state.vce_clock_voltage_dependency_table.entries->v = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_voltage0 = 100;
          int * voltage = (int *) malloc(_len_voltage0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_voltage0; _i0++) {
            voltage[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = trinity_get_vce_clock_voltage(rdev,evclk,ecclk,voltage);
          printf("%d\n", benchRet); 
          free(rdev);
          free(voltage);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  size_t u8 ;
struct radeon_clock_voltage_dependency_table {size_t count; TYPE_4__* entries; } ;
struct TYPE_5__ {struct radeon_clock_voltage_dependency_table acp_clock_voltage_dependency_table; } ;
struct TYPE_6__ {TYPE_1__ dyn_state; } ;
struct TYPE_7__ {TYPE_2__ dpm; } ;
struct radeon_device {TYPE_3__ pm; } ;
struct TYPE_8__ {scalar_t__ clk; } ;

/* Variables and functions */

__attribute__((used)) static u8 kv_get_acp_boot_level(struct radeon_device *rdev)
{
	u8 i;
	struct radeon_clock_voltage_dependency_table *table =
		&rdev->pm.dpm.dyn_state.acp_clock_voltage_dependency_table;

	for (i = 0; i < table->count; i++) {
		if (table->entries[i].clk >= 0) /* XXX */
			break;
	}

	if (i >= table->count)
		i = table->count - 1;

	return i;
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
          int _len_rdev0 = 1;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].pm.dpm.dyn_state.acp_clock_voltage_dependency_table.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rdev__i0__pm_dpm_dyn_state_acp_clock_voltage_dependency_table_entries0 = 1;
          rdev[_i0].pm.dpm.dyn_state.acp_clock_voltage_dependency_table.entries = (struct TYPE_8__ *) malloc(_len_rdev__i0__pm_dpm_dyn_state_acp_clock_voltage_dependency_table_entries0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_rdev__i0__pm_dpm_dyn_state_acp_clock_voltage_dependency_table_entries0; _j0++) {
            rdev[_i0].pm.dpm.dyn_state.acp_clock_voltage_dependency_table.entries->clk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = kv_get_acp_boot_level(rdev);
          printf("%lu\n", benchRet); 
          free(rdev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_rdev0 = 65025;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].pm.dpm.dyn_state.acp_clock_voltage_dependency_table.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rdev__i0__pm_dpm_dyn_state_acp_clock_voltage_dependency_table_entries0 = 1;
          rdev[_i0].pm.dpm.dyn_state.acp_clock_voltage_dependency_table.entries = (struct TYPE_8__ *) malloc(_len_rdev__i0__pm_dpm_dyn_state_acp_clock_voltage_dependency_table_entries0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_rdev__i0__pm_dpm_dyn_state_acp_clock_voltage_dependency_table_entries0; _j0++) {
            rdev[_i0].pm.dpm.dyn_state.acp_clock_voltage_dependency_table.entries->clk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = kv_get_acp_boot_level(rdev);
          printf("%lu\n", benchRet); 
          free(rdev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_rdev0 = 100;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].pm.dpm.dyn_state.acp_clock_voltage_dependency_table.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rdev__i0__pm_dpm_dyn_state_acp_clock_voltage_dependency_table_entries0 = 1;
          rdev[_i0].pm.dpm.dyn_state.acp_clock_voltage_dependency_table.entries = (struct TYPE_8__ *) malloc(_len_rdev__i0__pm_dpm_dyn_state_acp_clock_voltage_dependency_table_entries0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_rdev__i0__pm_dpm_dyn_state_acp_clock_voltage_dependency_table_entries0; _j0++) {
            rdev[_i0].pm.dpm.dyn_state.acp_clock_voltage_dependency_table.entries->clk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = kv_get_acp_boot_level(rdev);
          printf("%lu\n", benchRet); 
          free(rdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

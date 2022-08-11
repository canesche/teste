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
typedef  size_t uint32_t ;
struct phm_clock_and_voltage_limits {scalar_t__ vddc; int /*<<< orphan*/  mclk; int /*<<< orphan*/  sclk; } ;
struct TYPE_4__ {struct phm_clock_and_voltage_limits max_clock_voltage_on_ac; struct phm_clock_voltage_dependency_table* vddc_dep_on_dal_pwrl; } ;
struct pp_hwmgr {TYPE_2__ dyn_state; } ;
struct phm_clock_voltage_dependency_table {size_t count; TYPE_1__* entries; } ;
struct amd_pp_simple_clock_info {int /*<<< orphan*/  level; int /*<<< orphan*/  memory_max_clock; int /*<<< orphan*/  engine_max_clock; } ;
struct TYPE_3__ {scalar_t__ v; int /*<<< orphan*/  clk; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int smu8_get_dal_power_level(struct pp_hwmgr *hwmgr,
		struct amd_pp_simple_clock_info *info)
{
	uint32_t i;
	const struct phm_clock_voltage_dependency_table *table =
			hwmgr->dyn_state.vddc_dep_on_dal_pwrl;
	const struct phm_clock_and_voltage_limits *limits =
			&hwmgr->dyn_state.max_clock_voltage_on_ac;

	info->engine_max_clock = limits->sclk;
	info->memory_max_clock = limits->mclk;

	for (i = table->count - 1; i > 0; i--) {
		if (limits->vddc >= table->entries[i].v) {
			info->level = table->entries[i].clk;
			return 0;
		}
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
          int _len_hwmgr0 = 1;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
            hwmgr[_i0].dyn_state.max_clock_voltage_on_ac.vddc = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].dyn_state.max_clock_voltage_on_ac.mclk = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].dyn_state.max_clock_voltage_on_ac.sclk = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__dyn_state_vddc_dep_on_dal_pwrl0 = 1;
          hwmgr[_i0].dyn_state.vddc_dep_on_dal_pwrl = (struct phm_clock_voltage_dependency_table *) malloc(_len_hwmgr__i0__dyn_state_vddc_dep_on_dal_pwrl0*sizeof(struct phm_clock_voltage_dependency_table));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__dyn_state_vddc_dep_on_dal_pwrl0; _j0++) {
            hwmgr[_i0].dyn_state.vddc_dep_on_dal_pwrl->count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__dyn_state_vddc_dep_on_dal_pwrl_entries0 = 1;
          hwmgr[_i0].dyn_state.vddc_dep_on_dal_pwrl->entries = (struct TYPE_3__ *) malloc(_len_hwmgr__i0__dyn_state_vddc_dep_on_dal_pwrl_entries0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__dyn_state_vddc_dep_on_dal_pwrl_entries0; _j0++) {
            hwmgr[_i0].dyn_state.vddc_dep_on_dal_pwrl->entries->v = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].dyn_state.vddc_dep_on_dal_pwrl->entries->clk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_info0 = 1;
          struct amd_pp_simple_clock_info * info = (struct amd_pp_simple_clock_info *) malloc(_len_info0*sizeof(struct amd_pp_simple_clock_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].level = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].memory_max_clock = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].engine_max_clock = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = smu8_get_dal_power_level(hwmgr,info);
          printf("%d\n", benchRet); 
          free(hwmgr);
          free(info);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hwmgr0 = 65025;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
            hwmgr[_i0].dyn_state.max_clock_voltage_on_ac.vddc = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].dyn_state.max_clock_voltage_on_ac.mclk = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].dyn_state.max_clock_voltage_on_ac.sclk = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__dyn_state_vddc_dep_on_dal_pwrl0 = 1;
          hwmgr[_i0].dyn_state.vddc_dep_on_dal_pwrl = (struct phm_clock_voltage_dependency_table *) malloc(_len_hwmgr__i0__dyn_state_vddc_dep_on_dal_pwrl0*sizeof(struct phm_clock_voltage_dependency_table));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__dyn_state_vddc_dep_on_dal_pwrl0; _j0++) {
            hwmgr[_i0].dyn_state.vddc_dep_on_dal_pwrl->count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__dyn_state_vddc_dep_on_dal_pwrl_entries0 = 1;
          hwmgr[_i0].dyn_state.vddc_dep_on_dal_pwrl->entries = (struct TYPE_3__ *) malloc(_len_hwmgr__i0__dyn_state_vddc_dep_on_dal_pwrl_entries0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__dyn_state_vddc_dep_on_dal_pwrl_entries0; _j0++) {
            hwmgr[_i0].dyn_state.vddc_dep_on_dal_pwrl->entries->v = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].dyn_state.vddc_dep_on_dal_pwrl->entries->clk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_info0 = 65025;
          struct amd_pp_simple_clock_info * info = (struct amd_pp_simple_clock_info *) malloc(_len_info0*sizeof(struct amd_pp_simple_clock_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].level = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].memory_max_clock = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].engine_max_clock = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = smu8_get_dal_power_level(hwmgr,info);
          printf("%d\n", benchRet); 
          free(hwmgr);
          free(info);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hwmgr0 = 100;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
            hwmgr[_i0].dyn_state.max_clock_voltage_on_ac.vddc = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].dyn_state.max_clock_voltage_on_ac.mclk = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].dyn_state.max_clock_voltage_on_ac.sclk = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__dyn_state_vddc_dep_on_dal_pwrl0 = 1;
          hwmgr[_i0].dyn_state.vddc_dep_on_dal_pwrl = (struct phm_clock_voltage_dependency_table *) malloc(_len_hwmgr__i0__dyn_state_vddc_dep_on_dal_pwrl0*sizeof(struct phm_clock_voltage_dependency_table));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__dyn_state_vddc_dep_on_dal_pwrl0; _j0++) {
            hwmgr[_i0].dyn_state.vddc_dep_on_dal_pwrl->count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__dyn_state_vddc_dep_on_dal_pwrl_entries0 = 1;
          hwmgr[_i0].dyn_state.vddc_dep_on_dal_pwrl->entries = (struct TYPE_3__ *) malloc(_len_hwmgr__i0__dyn_state_vddc_dep_on_dal_pwrl_entries0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__dyn_state_vddc_dep_on_dal_pwrl_entries0; _j0++) {
            hwmgr[_i0].dyn_state.vddc_dep_on_dal_pwrl->entries->v = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].dyn_state.vddc_dep_on_dal_pwrl->entries->clk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_info0 = 100;
          struct amd_pp_simple_clock_info * info = (struct amd_pp_simple_clock_info *) malloc(_len_info0*sizeof(struct amd_pp_simple_clock_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].level = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].memory_max_clock = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].engine_max_clock = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = smu8_get_dal_power_level(hwmgr,info);
          printf("%d\n", benchRet); 
          free(hwmgr);
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  struct TYPE_14__   TYPE_7__ ;
typedef  struct TYPE_13__   TYPE_6__ ;
typedef  struct TYPE_12__   TYPE_5__ ;
typedef  struct TYPE_11__   TYPE_4__ ;
typedef  struct TYPE_10__   TYPE_3__ ;
typedef  struct TYPE_9__   TYPE_2__ ;
typedef  struct TYPE_8__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u32 ;
typedef  size_t u16 ;
struct atom_voltage_table_entry {size_t value; } ;
struct TYPE_11__ {scalar_t__ count; TYPE_3__* entries; } ;
struct TYPE_9__ {scalar_t__ count; TYPE_1__* entries; } ;
struct TYPE_12__ {TYPE_4__ cac_leakage_table; TYPE_2__ vddc_dependency_on_sclk; } ;
struct TYPE_13__ {TYPE_5__ dyn_state; } ;
struct TYPE_14__ {TYPE_6__ dpm; } ;
struct amdgpu_device {TYPE_7__ pm; } ;
struct TYPE_10__ {size_t vddc; size_t leakage; } ;
struct TYPE_8__ {scalar_t__ v; } ;

/* Variables and functions */
 int EINVAL ; 
 size_t VOLTAGE_SCALE ; 

__attribute__((used)) static int ci_get_std_voltage_value_sidd(struct amdgpu_device *adev,
					 struct atom_voltage_table_entry *voltage_table,
					 u16 *std_voltage_hi_sidd, u16 *std_voltage_lo_sidd)
{
	u16 v_index, idx;
	bool voltage_found = false;
	*std_voltage_hi_sidd = voltage_table->value * VOLTAGE_SCALE;
	*std_voltage_lo_sidd = voltage_table->value * VOLTAGE_SCALE;

	if (adev->pm.dpm.dyn_state.vddc_dependency_on_sclk.entries == NULL)
		return -EINVAL;

	if (adev->pm.dpm.dyn_state.cac_leakage_table.entries) {
		for (v_index = 0; (u32)v_index < adev->pm.dpm.dyn_state.vddc_dependency_on_sclk.count; v_index++) {
			if (voltage_table->value ==
			    adev->pm.dpm.dyn_state.vddc_dependency_on_sclk.entries[v_index].v) {
				voltage_found = true;
				if ((u32)v_index < adev->pm.dpm.dyn_state.cac_leakage_table.count)
					idx = v_index;
				else
					idx = adev->pm.dpm.dyn_state.cac_leakage_table.count - 1;
				*std_voltage_lo_sidd =
					adev->pm.dpm.dyn_state.cac_leakage_table.entries[idx].vddc * VOLTAGE_SCALE;
				*std_voltage_hi_sidd =
					adev->pm.dpm.dyn_state.cac_leakage_table.entries[idx].leakage * VOLTAGE_SCALE;
				break;
			}
		}

		if (!voltage_found) {
			for (v_index = 0; (u32)v_index < adev->pm.dpm.dyn_state.vddc_dependency_on_sclk.count; v_index++) {
				if (voltage_table->value <=
				    adev->pm.dpm.dyn_state.vddc_dependency_on_sclk.entries[v_index].v) {
					voltage_found = true;
					if ((u32)v_index < adev->pm.dpm.dyn_state.cac_leakage_table.count)
						idx = v_index;
					else
						idx = adev->pm.dpm.dyn_state.cac_leakage_table.count - 1;
					*std_voltage_lo_sidd =
						adev->pm.dpm.dyn_state.cac_leakage_table.entries[idx].vddc * VOLTAGE_SCALE;
					*std_voltage_hi_sidd =
						adev->pm.dpm.dyn_state.cac_leakage_table.entries[idx].leakage * VOLTAGE_SCALE;
					break;
				}
			}
		}
	}

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
          int _len_adev0 = 1;
          struct amdgpu_device * adev = (struct amdgpu_device *) malloc(_len_adev0*sizeof(struct amdgpu_device));
          for(int _i0 = 0; _i0 < _len_adev0; _i0++) {
            adev[_i0].pm.dpm.dyn_state.cac_leakage_table.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adev__i0__pm_dpm_dyn_state_cac_leakage_table_entries0 = 1;
          adev[_i0].pm.dpm.dyn_state.cac_leakage_table.entries = (struct TYPE_10__ *) malloc(_len_adev__i0__pm_dpm_dyn_state_cac_leakage_table_entries0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_adev__i0__pm_dpm_dyn_state_cac_leakage_table_entries0; _j0++) {
            adev[_i0].pm.dpm.dyn_state.cac_leakage_table.entries->vddc = ((-2 * (next_i()%2)) + 1) * next_i();
        adev[_i0].pm.dpm.dyn_state.cac_leakage_table.entries->leakage = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        adev[_i0].pm.dpm.dyn_state.vddc_dependency_on_sclk.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adev__i0__pm_dpm_dyn_state_vddc_dependency_on_sclk_entries0 = 1;
          adev[_i0].pm.dpm.dyn_state.vddc_dependency_on_sclk.entries = (struct TYPE_8__ *) malloc(_len_adev__i0__pm_dpm_dyn_state_vddc_dependency_on_sclk_entries0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_adev__i0__pm_dpm_dyn_state_vddc_dependency_on_sclk_entries0; _j0++) {
            adev[_i0].pm.dpm.dyn_state.vddc_dependency_on_sclk.entries->v = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_voltage_table0 = 1;
          struct atom_voltage_table_entry * voltage_table = (struct atom_voltage_table_entry *) malloc(_len_voltage_table0*sizeof(struct atom_voltage_table_entry));
          for(int _i0 = 0; _i0 < _len_voltage_table0; _i0++) {
            voltage_table[_i0].value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_std_voltage_hi_sidd0 = 1;
          unsigned long * std_voltage_hi_sidd = (unsigned long *) malloc(_len_std_voltage_hi_sidd0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_std_voltage_hi_sidd0; _i0++) {
            std_voltage_hi_sidd[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_std_voltage_lo_sidd0 = 1;
          unsigned long * std_voltage_lo_sidd = (unsigned long *) malloc(_len_std_voltage_lo_sidd0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_std_voltage_lo_sidd0; _i0++) {
            std_voltage_lo_sidd[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ci_get_std_voltage_value_sidd(adev,voltage_table,std_voltage_hi_sidd,std_voltage_lo_sidd);
          printf("%d\n", benchRet); 
          free(adev);
          free(voltage_table);
          free(std_voltage_hi_sidd);
          free(std_voltage_lo_sidd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_adev0 = 65025;
          struct amdgpu_device * adev = (struct amdgpu_device *) malloc(_len_adev0*sizeof(struct amdgpu_device));
          for(int _i0 = 0; _i0 < _len_adev0; _i0++) {
            adev[_i0].pm.dpm.dyn_state.cac_leakage_table.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adev__i0__pm_dpm_dyn_state_cac_leakage_table_entries0 = 1;
          adev[_i0].pm.dpm.dyn_state.cac_leakage_table.entries = (struct TYPE_10__ *) malloc(_len_adev__i0__pm_dpm_dyn_state_cac_leakage_table_entries0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_adev__i0__pm_dpm_dyn_state_cac_leakage_table_entries0; _j0++) {
            adev[_i0].pm.dpm.dyn_state.cac_leakage_table.entries->vddc = ((-2 * (next_i()%2)) + 1) * next_i();
        adev[_i0].pm.dpm.dyn_state.cac_leakage_table.entries->leakage = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        adev[_i0].pm.dpm.dyn_state.vddc_dependency_on_sclk.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adev__i0__pm_dpm_dyn_state_vddc_dependency_on_sclk_entries0 = 1;
          adev[_i0].pm.dpm.dyn_state.vddc_dependency_on_sclk.entries = (struct TYPE_8__ *) malloc(_len_adev__i0__pm_dpm_dyn_state_vddc_dependency_on_sclk_entries0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_adev__i0__pm_dpm_dyn_state_vddc_dependency_on_sclk_entries0; _j0++) {
            adev[_i0].pm.dpm.dyn_state.vddc_dependency_on_sclk.entries->v = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_voltage_table0 = 65025;
          struct atom_voltage_table_entry * voltage_table = (struct atom_voltage_table_entry *) malloc(_len_voltage_table0*sizeof(struct atom_voltage_table_entry));
          for(int _i0 = 0; _i0 < _len_voltage_table0; _i0++) {
            voltage_table[_i0].value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_std_voltage_hi_sidd0 = 65025;
          unsigned long * std_voltage_hi_sidd = (unsigned long *) malloc(_len_std_voltage_hi_sidd0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_std_voltage_hi_sidd0; _i0++) {
            std_voltage_hi_sidd[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_std_voltage_lo_sidd0 = 65025;
          unsigned long * std_voltage_lo_sidd = (unsigned long *) malloc(_len_std_voltage_lo_sidd0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_std_voltage_lo_sidd0; _i0++) {
            std_voltage_lo_sidd[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ci_get_std_voltage_value_sidd(adev,voltage_table,std_voltage_hi_sidd,std_voltage_lo_sidd);
          printf("%d\n", benchRet); 
          free(adev);
          free(voltage_table);
          free(std_voltage_hi_sidd);
          free(std_voltage_lo_sidd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_adev0 = 100;
          struct amdgpu_device * adev = (struct amdgpu_device *) malloc(_len_adev0*sizeof(struct amdgpu_device));
          for(int _i0 = 0; _i0 < _len_adev0; _i0++) {
            adev[_i0].pm.dpm.dyn_state.cac_leakage_table.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adev__i0__pm_dpm_dyn_state_cac_leakage_table_entries0 = 1;
          adev[_i0].pm.dpm.dyn_state.cac_leakage_table.entries = (struct TYPE_10__ *) malloc(_len_adev__i0__pm_dpm_dyn_state_cac_leakage_table_entries0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_adev__i0__pm_dpm_dyn_state_cac_leakage_table_entries0; _j0++) {
            adev[_i0].pm.dpm.dyn_state.cac_leakage_table.entries->vddc = ((-2 * (next_i()%2)) + 1) * next_i();
        adev[_i0].pm.dpm.dyn_state.cac_leakage_table.entries->leakage = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        adev[_i0].pm.dpm.dyn_state.vddc_dependency_on_sclk.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adev__i0__pm_dpm_dyn_state_vddc_dependency_on_sclk_entries0 = 1;
          adev[_i0].pm.dpm.dyn_state.vddc_dependency_on_sclk.entries = (struct TYPE_8__ *) malloc(_len_adev__i0__pm_dpm_dyn_state_vddc_dependency_on_sclk_entries0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_adev__i0__pm_dpm_dyn_state_vddc_dependency_on_sclk_entries0; _j0++) {
            adev[_i0].pm.dpm.dyn_state.vddc_dependency_on_sclk.entries->v = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_voltage_table0 = 100;
          struct atom_voltage_table_entry * voltage_table = (struct atom_voltage_table_entry *) malloc(_len_voltage_table0*sizeof(struct atom_voltage_table_entry));
          for(int _i0 = 0; _i0 < _len_voltage_table0; _i0++) {
            voltage_table[_i0].value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_std_voltage_hi_sidd0 = 100;
          unsigned long * std_voltage_hi_sidd = (unsigned long *) malloc(_len_std_voltage_hi_sidd0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_std_voltage_hi_sidd0; _i0++) {
            std_voltage_hi_sidd[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_std_voltage_lo_sidd0 = 100;
          unsigned long * std_voltage_lo_sidd = (unsigned long *) malloc(_len_std_voltage_lo_sidd0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_std_voltage_lo_sidd0; _i0++) {
            std_voltage_lo_sidd[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ci_get_std_voltage_value_sidd(adev,voltage_table,std_voltage_hi_sidd,std_voltage_lo_sidd);
          printf("%d\n", benchRet); 
          free(adev);
          free(voltage_table);
          free(std_voltage_hi_sidd);
          free(std_voltage_lo_sidd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

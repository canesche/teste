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
typedef  struct TYPE_22__   TYPE_9__ ;
typedef  struct TYPE_21__   TYPE_8__ ;
typedef  struct TYPE_20__   TYPE_7__ ;
typedef  struct TYPE_19__   TYPE_6__ ;
typedef  struct TYPE_18__   TYPE_5__ ;
typedef  struct TYPE_17__   TYPE_4__ ;
typedef  struct TYPE_16__   TYPE_3__ ;
typedef  struct TYPE_15__   TYPE_2__ ;
typedef  struct TYPE_14__   TYPE_1__ ;
typedef  struct TYPE_13__   TYPE_11__ ;
typedef  struct TYPE_12__   TYPE_10__ ;

/* Type definitions */
typedef  int uint32_t ;
struct TYPE_12__ {int count; } ;
struct TYPE_13__ {TYPE_10__ pcie_speed_table; } ;
struct TYPE_22__ {int count; TYPE_3__* dpm_levels; } ;
struct TYPE_15__ {int count; TYPE_1__* dpm_levels; } ;
struct smu7_dpm_table {TYPE_9__ mclk_table; TYPE_2__ sclk_table; } ;
struct smu7_hwmgr {TYPE_11__ dpm_table; struct smu7_dpm_table golden_dpm_table; } ;
struct TYPE_19__ {TYPE_5__* vddc_dependency_on_sclk; } ;
struct pp_hwmgr {scalar_t__ pp_table_version; int pstate_sclk; int pstate_mclk; scalar_t__ pptable; TYPE_6__ dyn_state; scalar_t__ backend; } ;
struct phm_ppt_v1_information {TYPE_8__* vdd_dep_on_sclk; } ;
typedef  int int32_t ;
typedef  enum amd_dpm_forced_level { ____Placeholder_amd_dpm_forced_level } amd_dpm_forced_level ;
struct TYPE_21__ {int count; TYPE_7__* entries; } ;
struct TYPE_20__ {int clk; } ;
struct TYPE_18__ {int count; TYPE_4__* entries; } ;
struct TYPE_17__ {int clk; } ;
struct TYPE_16__ {int value; } ;
struct TYPE_14__ {int value; } ;

/* Variables and functions */
 int AMD_DPM_FORCED_LEVEL_PROFILE_MIN_MCLK ; 
 int AMD_DPM_FORCED_LEVEL_PROFILE_MIN_SCLK ; 
 int AMD_DPM_FORCED_LEVEL_PROFILE_PEAK ; 
 int EINVAL ; 
 scalar_t__ PP_TABLE_V0 ; 
 scalar_t__ PP_TABLE_V1 ; 

__attribute__((used)) static int smu7_get_profiling_clk(struct pp_hwmgr *hwmgr, enum amd_dpm_forced_level level,
				uint32_t *sclk_mask, uint32_t *mclk_mask, uint32_t *pcie_mask)
{
	uint32_t percentage;
	struct smu7_hwmgr *data = (struct smu7_hwmgr *)(hwmgr->backend);
	struct smu7_dpm_table *golden_dpm_table = &data->golden_dpm_table;
	int32_t tmp_mclk;
	int32_t tmp_sclk;
	int32_t count;

	if (golden_dpm_table->mclk_table.count < 1)
		return -EINVAL;

	percentage = 100 * golden_dpm_table->sclk_table.dpm_levels[golden_dpm_table->sclk_table.count - 1].value /
			golden_dpm_table->mclk_table.dpm_levels[golden_dpm_table->mclk_table.count - 1].value;

	if (golden_dpm_table->mclk_table.count == 1) {
		percentage = 70;
		tmp_mclk = golden_dpm_table->mclk_table.dpm_levels[golden_dpm_table->mclk_table.count - 1].value;
		*mclk_mask = golden_dpm_table->mclk_table.count - 1;
	} else {
		tmp_mclk = golden_dpm_table->mclk_table.dpm_levels[golden_dpm_table->mclk_table.count - 2].value;
		*mclk_mask = golden_dpm_table->mclk_table.count - 2;
	}

	tmp_sclk = tmp_mclk * percentage / 100;

	if (hwmgr->pp_table_version == PP_TABLE_V0) {
		for (count = hwmgr->dyn_state.vddc_dependency_on_sclk->count-1;
			count >= 0; count--) {
			if (tmp_sclk >= hwmgr->dyn_state.vddc_dependency_on_sclk->entries[count].clk) {
				tmp_sclk = hwmgr->dyn_state.vddc_dependency_on_sclk->entries[count].clk;
				*sclk_mask = count;
				break;
			}
		}
		if (count < 0 || level == AMD_DPM_FORCED_LEVEL_PROFILE_MIN_SCLK) {
			*sclk_mask = 0;
			tmp_sclk = hwmgr->dyn_state.vddc_dependency_on_sclk->entries[0].clk;
		}

		if (level == AMD_DPM_FORCED_LEVEL_PROFILE_PEAK)
			*sclk_mask = hwmgr->dyn_state.vddc_dependency_on_sclk->count-1;
	} else if (hwmgr->pp_table_version == PP_TABLE_V1) {
		struct phm_ppt_v1_information *table_info =
				(struct phm_ppt_v1_information *)(hwmgr->pptable);

		for (count = table_info->vdd_dep_on_sclk->count-1; count >= 0; count--) {
			if (tmp_sclk >= table_info->vdd_dep_on_sclk->entries[count].clk) {
				tmp_sclk = table_info->vdd_dep_on_sclk->entries[count].clk;
				*sclk_mask = count;
				break;
			}
		}
		if (count < 0 || level == AMD_DPM_FORCED_LEVEL_PROFILE_MIN_SCLK) {
			*sclk_mask = 0;
			tmp_sclk =  table_info->vdd_dep_on_sclk->entries[0].clk;
		}

		if (level == AMD_DPM_FORCED_LEVEL_PROFILE_PEAK)
			*sclk_mask = table_info->vdd_dep_on_sclk->count - 1;
	}

	if (level == AMD_DPM_FORCED_LEVEL_PROFILE_MIN_MCLK)
		*mclk_mask = 0;
	else if (level == AMD_DPM_FORCED_LEVEL_PROFILE_PEAK)
		*mclk_mask = golden_dpm_table->mclk_table.count - 1;

	*pcie_mask = data->dpm_table.pcie_speed_table.count - 1;
	hwmgr->pstate_sclk = tmp_sclk;
	hwmgr->pstate_mclk = tmp_mclk;

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
          enum amd_dpm_forced_level level = 0;
          int _len_hwmgr0 = 1;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
            hwmgr[_i0].pp_table_version = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].pstate_sclk = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].pstate_mclk = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].pptable = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk0 = 1;
          hwmgr[_i0].dyn_state.vddc_dependency_on_sclk = (struct TYPE_18__ *) malloc(_len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk0*sizeof(struct TYPE_18__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk0; _j0++) {
            hwmgr[_i0].dyn_state.vddc_dependency_on_sclk->count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk_entries0 = 1;
          hwmgr[_i0].dyn_state.vddc_dependency_on_sclk->entries = (struct TYPE_17__ *) malloc(_len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk_entries0*sizeof(struct TYPE_17__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk_entries0; _j0++) {
            hwmgr[_i0].dyn_state.vddc_dependency_on_sclk->entries->clk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        hwmgr[_i0].backend = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sclk_mask0 = 1;
          int * sclk_mask = (int *) malloc(_len_sclk_mask0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sclk_mask0; _i0++) {
            sclk_mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mclk_mask0 = 1;
          int * mclk_mask = (int *) malloc(_len_mclk_mask0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mclk_mask0; _i0++) {
            mclk_mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pcie_mask0 = 1;
          int * pcie_mask = (int *) malloc(_len_pcie_mask0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pcie_mask0; _i0++) {
            pcie_mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = smu7_get_profiling_clk(hwmgr,level,sclk_mask,mclk_mask,pcie_mask);
          printf("%d\n", benchRet); 
          free(hwmgr);
          free(sclk_mask);
          free(mclk_mask);
          free(pcie_mask);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum amd_dpm_forced_level level = 0;
          int _len_hwmgr0 = 65025;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
            hwmgr[_i0].pp_table_version = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].pstate_sclk = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].pstate_mclk = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].pptable = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk0 = 1;
          hwmgr[_i0].dyn_state.vddc_dependency_on_sclk = (struct TYPE_18__ *) malloc(_len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk0*sizeof(struct TYPE_18__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk0; _j0++) {
            hwmgr[_i0].dyn_state.vddc_dependency_on_sclk->count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk_entries0 = 1;
          hwmgr[_i0].dyn_state.vddc_dependency_on_sclk->entries = (struct TYPE_17__ *) malloc(_len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk_entries0*sizeof(struct TYPE_17__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk_entries0; _j0++) {
            hwmgr[_i0].dyn_state.vddc_dependency_on_sclk->entries->clk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        hwmgr[_i0].backend = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sclk_mask0 = 65025;
          int * sclk_mask = (int *) malloc(_len_sclk_mask0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sclk_mask0; _i0++) {
            sclk_mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mclk_mask0 = 65025;
          int * mclk_mask = (int *) malloc(_len_mclk_mask0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mclk_mask0; _i0++) {
            mclk_mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pcie_mask0 = 65025;
          int * pcie_mask = (int *) malloc(_len_pcie_mask0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pcie_mask0; _i0++) {
            pcie_mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = smu7_get_profiling_clk(hwmgr,level,sclk_mask,mclk_mask,pcie_mask);
          printf("%d\n", benchRet); 
          free(hwmgr);
          free(sclk_mask);
          free(mclk_mask);
          free(pcie_mask);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum amd_dpm_forced_level level = 0;
          int _len_hwmgr0 = 100;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
            hwmgr[_i0].pp_table_version = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].pstate_sclk = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].pstate_mclk = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].pptable = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk0 = 1;
          hwmgr[_i0].dyn_state.vddc_dependency_on_sclk = (struct TYPE_18__ *) malloc(_len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk0*sizeof(struct TYPE_18__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk0; _j0++) {
            hwmgr[_i0].dyn_state.vddc_dependency_on_sclk->count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk_entries0 = 1;
          hwmgr[_i0].dyn_state.vddc_dependency_on_sclk->entries = (struct TYPE_17__ *) malloc(_len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk_entries0*sizeof(struct TYPE_17__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk_entries0; _j0++) {
            hwmgr[_i0].dyn_state.vddc_dependency_on_sclk->entries->clk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        hwmgr[_i0].backend = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sclk_mask0 = 100;
          int * sclk_mask = (int *) malloc(_len_sclk_mask0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sclk_mask0; _i0++) {
            sclk_mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mclk_mask0 = 100;
          int * mclk_mask = (int *) malloc(_len_mclk_mask0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mclk_mask0; _i0++) {
            mclk_mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pcie_mask0 = 100;
          int * pcie_mask = (int *) malloc(_len_pcie_mask0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pcie_mask0; _i0++) {
            pcie_mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = smu7_get_profiling_clk(hwmgr,level,sclk_mask,mclk_mask,pcie_mask);
          printf("%d\n", benchRet); 
          free(hwmgr);
          free(sclk_mask);
          free(mclk_mask);
          free(pcie_mask);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

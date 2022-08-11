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
typedef  int uint8_t ;
struct vega10_single_dpm_table {int count; TYPE_6__* dpm_levels; } ;
struct vega10_odn_vddc_lookup_table {int count; TYPE_3__* entries; } ;
struct vega10_odn_clock_voltage_dependency_table {int count; TYPE_7__* entries; } ;
struct TYPE_11__ {struct vega10_single_dpm_table soc_table; } ;
struct TYPE_9__ {struct vega10_odn_clock_voltage_dependency_table vdd_dep_on_mclk; struct vega10_odn_clock_voltage_dependency_table vdd_dep_on_sclk; struct vega10_odn_vddc_lookup_table vddc_lookup_table; struct vega10_odn_clock_voltage_dependency_table vdd_dep_on_socclk; } ;
struct TYPE_8__ {struct vega10_single_dpm_table soc_table; } ;
struct vega10_hwmgr {int /*<<< orphan*/  need_update_dpm_table; TYPE_4__ dpm_table; TYPE_2__ odn_dpm_table; TYPE_1__ golden_dpm_table; } ;
struct pp_hwmgr {struct phm_ppt_v2_information* pptable; struct vega10_hwmgr* backend; } ;
struct phm_ppt_v2_information {struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_socclk; } ;
struct phm_ppt_v1_clock_voltage_dependency_table {int count; TYPE_5__* entries; } ;
typedef  enum PP_OD_DPM_TABLE_COMMAND { ____Placeholder_PP_OD_DPM_TABLE_COMMAND } PP_OD_DPM_TABLE_COMMAND ;
struct TYPE_14__ {scalar_t__ vddc; int vddInd; scalar_t__ clk; } ;
struct TYPE_13__ {scalar_t__ value; } ;
struct TYPE_12__ {int vddInd; scalar_t__ clk; } ;
struct TYPE_10__ {scalar_t__ us_vdd; } ;

/* Variables and functions */
 int /*<<< orphan*/  DPMTABLE_OD_UPDATE_VDDC ; 
 int /*<<< orphan*/  DPMTABLE_UPDATE_SOCCLK ; 
 int PP_OD_EDIT_MCLK_VDDC_TABLE ; 
 int PP_OD_EDIT_SCLK_VDDC_TABLE ; 

__attribute__((used)) static void vega10_odn_update_soc_table(struct pp_hwmgr *hwmgr,
						enum PP_OD_DPM_TABLE_COMMAND type)
{
	struct vega10_hwmgr *data = hwmgr->backend;
	struct phm_ppt_v2_information *table_info = hwmgr->pptable;
	struct phm_ppt_v1_clock_voltage_dependency_table *dep_table = table_info->vdd_dep_on_socclk;
	struct vega10_single_dpm_table *dpm_table = &data->golden_dpm_table.soc_table;

	struct vega10_odn_clock_voltage_dependency_table *podn_vdd_dep_on_socclk =
							&data->odn_dpm_table.vdd_dep_on_socclk;
	struct vega10_odn_vddc_lookup_table *od_vddc_lookup_table = &data->odn_dpm_table.vddc_lookup_table;

	struct vega10_odn_clock_voltage_dependency_table *podn_vdd_dep;
	uint8_t i, j;

	if (type == PP_OD_EDIT_SCLK_VDDC_TABLE) {
		podn_vdd_dep = &data->odn_dpm_table.vdd_dep_on_sclk;
		for (i = 0; i < podn_vdd_dep->count - 1; i++)
			od_vddc_lookup_table->entries[i].us_vdd = podn_vdd_dep->entries[i].vddc;
		if (od_vddc_lookup_table->entries[i].us_vdd < podn_vdd_dep->entries[i].vddc)
			od_vddc_lookup_table->entries[i].us_vdd = podn_vdd_dep->entries[i].vddc;
	} else if (type == PP_OD_EDIT_MCLK_VDDC_TABLE) {
		podn_vdd_dep = &data->odn_dpm_table.vdd_dep_on_mclk;
		for (i = 0; i < dpm_table->count; i++) {
			for (j = 0; j < od_vddc_lookup_table->count; j++) {
				if (od_vddc_lookup_table->entries[j].us_vdd >
					podn_vdd_dep->entries[i].vddc)
					break;
			}
			if (j == od_vddc_lookup_table->count) {
				od_vddc_lookup_table->entries[j-1].us_vdd =
					podn_vdd_dep->entries[i].vddc;
				data->need_update_dpm_table |= DPMTABLE_OD_UPDATE_VDDC;
			}
			podn_vdd_dep->entries[i].vddInd = j;
		}
		dpm_table = &data->dpm_table.soc_table;
		for (i = 0; i < dep_table->count; i++) {
			if (dep_table->entries[i].vddInd == podn_vdd_dep->entries[dep_table->count-1].vddInd &&
					dep_table->entries[i].clk < podn_vdd_dep->entries[dep_table->count-1].clk) {
				data->need_update_dpm_table |= DPMTABLE_UPDATE_SOCCLK;
				podn_vdd_dep_on_socclk->entries[i].clk = podn_vdd_dep->entries[dep_table->count-1].clk;
				dpm_table->dpm_levels[i].value = podn_vdd_dep_on_socclk->entries[i].clk;
			}
		}
		if (podn_vdd_dep_on_socclk->entries[podn_vdd_dep_on_socclk->count - 1].clk <
					podn_vdd_dep->entries[dep_table->count-1].clk) {
			data->need_update_dpm_table |= DPMTABLE_UPDATE_SOCCLK;
			podn_vdd_dep_on_socclk->entries[podn_vdd_dep_on_socclk->count - 1].clk = podn_vdd_dep->entries[dep_table->count-1].clk;
			dpm_table->dpm_levels[podn_vdd_dep_on_socclk->count - 1].value = podn_vdd_dep->entries[dep_table->count-1].clk;
		}
		if (podn_vdd_dep_on_socclk->entries[podn_vdd_dep_on_socclk->count - 1].vddInd <
					podn_vdd_dep->entries[dep_table->count-1].vddInd) {
			data->need_update_dpm_table |= DPMTABLE_UPDATE_SOCCLK;
			podn_vdd_dep_on_socclk->entries[podn_vdd_dep_on_socclk->count - 1].vddInd = podn_vdd_dep->entries[dep_table->count-1].vddInd;
		}
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
          enum PP_OD_DPM_TABLE_COMMAND type = 0;
          int _len_hwmgr0 = 1;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
              int _len_hwmgr__i0__pptable0 = 1;
          hwmgr[_i0].pptable = (struct phm_ppt_v2_information *) malloc(_len_hwmgr__i0__pptable0*sizeof(struct phm_ppt_v2_information));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__pptable0; _j0++) {
              int _len_hwmgr__i0__pptable_vdd_dep_on_socclk0 = 1;
          hwmgr[_i0].pptable->vdd_dep_on_socclk = (struct phm_ppt_v1_clock_voltage_dependency_table *) malloc(_len_hwmgr__i0__pptable_vdd_dep_on_socclk0*sizeof(struct phm_ppt_v1_clock_voltage_dependency_table));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__pptable_vdd_dep_on_socclk0; _j0++) {
            hwmgr[_i0].pptable->vdd_dep_on_socclk->count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__pptable_vdd_dep_on_socclk_entries0 = 1;
          hwmgr[_i0].pptable->vdd_dep_on_socclk->entries = (struct TYPE_12__ *) malloc(_len_hwmgr__i0__pptable_vdd_dep_on_socclk_entries0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__pptable_vdd_dep_on_socclk_entries0; _j0++) {
            hwmgr[_i0].pptable->vdd_dep_on_socclk->entries->vddInd = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].pptable->vdd_dep_on_socclk->entries->clk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_hwmgr__i0__backend0 = 1;
          hwmgr[_i0].backend = (struct vega10_hwmgr *) malloc(_len_hwmgr__i0__backend0*sizeof(struct vega10_hwmgr));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__backend0; _j0++) {
            hwmgr[_i0].backend->need_update_dpm_table = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->dpm_table.soc_table.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__backend_dpm_table_soc_table_dpm_levels0 = 1;
          hwmgr[_i0].backend->dpm_table.soc_table.dpm_levels = (struct TYPE_13__ *) malloc(_len_hwmgr__i0__backend_dpm_table_soc_table_dpm_levels0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__backend_dpm_table_soc_table_dpm_levels0; _j0++) {
            hwmgr[_i0].backend->dpm_table.soc_table.dpm_levels->value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_mclk.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__backend_odn_dpm_table_vdd_dep_on_mclk_entries0 = 1;
          hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_mclk.entries = (struct TYPE_14__ *) malloc(_len_hwmgr__i0__backend_odn_dpm_table_vdd_dep_on_mclk_entries0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__backend_odn_dpm_table_vdd_dep_on_mclk_entries0; _j0++) {
            hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_mclk.entries->vddc = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_mclk.entries->vddInd = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_mclk.entries->clk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_sclk.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__backend_odn_dpm_table_vdd_dep_on_sclk_entries0 = 1;
          hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_sclk.entries = (struct TYPE_14__ *) malloc(_len_hwmgr__i0__backend_odn_dpm_table_vdd_dep_on_sclk_entries0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__backend_odn_dpm_table_vdd_dep_on_sclk_entries0; _j0++) {
            hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_sclk.entries->vddc = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_sclk.entries->vddInd = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_sclk.entries->clk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hwmgr[_i0].backend->odn_dpm_table.vddc_lookup_table.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__backend_odn_dpm_table_vddc_lookup_table_entries0 = 1;
          hwmgr[_i0].backend->odn_dpm_table.vddc_lookup_table.entries = (struct TYPE_10__ *) malloc(_len_hwmgr__i0__backend_odn_dpm_table_vddc_lookup_table_entries0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__backend_odn_dpm_table_vddc_lookup_table_entries0; _j0++) {
            hwmgr[_i0].backend->odn_dpm_table.vddc_lookup_table.entries->us_vdd = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_socclk.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__backend_odn_dpm_table_vdd_dep_on_socclk_entries0 = 1;
          hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_socclk.entries = (struct TYPE_14__ *) malloc(_len_hwmgr__i0__backend_odn_dpm_table_vdd_dep_on_socclk_entries0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__backend_odn_dpm_table_vdd_dep_on_socclk_entries0; _j0++) {
            hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_socclk.entries->vddc = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_socclk.entries->vddInd = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_socclk.entries->clk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hwmgr[_i0].backend->golden_dpm_table.soc_table.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__backend_golden_dpm_table_soc_table_dpm_levels0 = 1;
          hwmgr[_i0].backend->golden_dpm_table.soc_table.dpm_levels = (struct TYPE_13__ *) malloc(_len_hwmgr__i0__backend_golden_dpm_table_soc_table_dpm_levels0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__backend_golden_dpm_table_soc_table_dpm_levels0; _j0++) {
            hwmgr[_i0].backend->golden_dpm_table.soc_table.dpm_levels->value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          vega10_odn_update_soc_table(hwmgr,type);
          for(int _aux = 0; _aux < _len_hwmgr0; _aux++) {
          free(hwmgr[_aux].pptable);
          }
          for(int _aux = 0; _aux < _len_hwmgr0; _aux++) {
          free(hwmgr[_aux].backend);
          }
          free(hwmgr);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum PP_OD_DPM_TABLE_COMMAND type = 0;
          int _len_hwmgr0 = 65025;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
              int _len_hwmgr__i0__pptable0 = 1;
          hwmgr[_i0].pptable = (struct phm_ppt_v2_information *) malloc(_len_hwmgr__i0__pptable0*sizeof(struct phm_ppt_v2_information));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__pptable0; _j0++) {
              int _len_hwmgr__i0__pptable_vdd_dep_on_socclk0 = 1;
          hwmgr[_i0].pptable->vdd_dep_on_socclk = (struct phm_ppt_v1_clock_voltage_dependency_table *) malloc(_len_hwmgr__i0__pptable_vdd_dep_on_socclk0*sizeof(struct phm_ppt_v1_clock_voltage_dependency_table));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__pptable_vdd_dep_on_socclk0; _j0++) {
            hwmgr[_i0].pptable->vdd_dep_on_socclk->count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__pptable_vdd_dep_on_socclk_entries0 = 1;
          hwmgr[_i0].pptable->vdd_dep_on_socclk->entries = (struct TYPE_12__ *) malloc(_len_hwmgr__i0__pptable_vdd_dep_on_socclk_entries0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__pptable_vdd_dep_on_socclk_entries0; _j0++) {
            hwmgr[_i0].pptable->vdd_dep_on_socclk->entries->vddInd = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].pptable->vdd_dep_on_socclk->entries->clk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_hwmgr__i0__backend0 = 1;
          hwmgr[_i0].backend = (struct vega10_hwmgr *) malloc(_len_hwmgr__i0__backend0*sizeof(struct vega10_hwmgr));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__backend0; _j0++) {
            hwmgr[_i0].backend->need_update_dpm_table = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->dpm_table.soc_table.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__backend_dpm_table_soc_table_dpm_levels0 = 1;
          hwmgr[_i0].backend->dpm_table.soc_table.dpm_levels = (struct TYPE_13__ *) malloc(_len_hwmgr__i0__backend_dpm_table_soc_table_dpm_levels0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__backend_dpm_table_soc_table_dpm_levels0; _j0++) {
            hwmgr[_i0].backend->dpm_table.soc_table.dpm_levels->value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_mclk.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__backend_odn_dpm_table_vdd_dep_on_mclk_entries0 = 1;
          hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_mclk.entries = (struct TYPE_14__ *) malloc(_len_hwmgr__i0__backend_odn_dpm_table_vdd_dep_on_mclk_entries0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__backend_odn_dpm_table_vdd_dep_on_mclk_entries0; _j0++) {
            hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_mclk.entries->vddc = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_mclk.entries->vddInd = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_mclk.entries->clk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_sclk.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__backend_odn_dpm_table_vdd_dep_on_sclk_entries0 = 1;
          hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_sclk.entries = (struct TYPE_14__ *) malloc(_len_hwmgr__i0__backend_odn_dpm_table_vdd_dep_on_sclk_entries0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__backend_odn_dpm_table_vdd_dep_on_sclk_entries0; _j0++) {
            hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_sclk.entries->vddc = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_sclk.entries->vddInd = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_sclk.entries->clk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hwmgr[_i0].backend->odn_dpm_table.vddc_lookup_table.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__backend_odn_dpm_table_vddc_lookup_table_entries0 = 1;
          hwmgr[_i0].backend->odn_dpm_table.vddc_lookup_table.entries = (struct TYPE_10__ *) malloc(_len_hwmgr__i0__backend_odn_dpm_table_vddc_lookup_table_entries0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__backend_odn_dpm_table_vddc_lookup_table_entries0; _j0++) {
            hwmgr[_i0].backend->odn_dpm_table.vddc_lookup_table.entries->us_vdd = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_socclk.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__backend_odn_dpm_table_vdd_dep_on_socclk_entries0 = 1;
          hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_socclk.entries = (struct TYPE_14__ *) malloc(_len_hwmgr__i0__backend_odn_dpm_table_vdd_dep_on_socclk_entries0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__backend_odn_dpm_table_vdd_dep_on_socclk_entries0; _j0++) {
            hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_socclk.entries->vddc = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_socclk.entries->vddInd = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_socclk.entries->clk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hwmgr[_i0].backend->golden_dpm_table.soc_table.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__backend_golden_dpm_table_soc_table_dpm_levels0 = 1;
          hwmgr[_i0].backend->golden_dpm_table.soc_table.dpm_levels = (struct TYPE_13__ *) malloc(_len_hwmgr__i0__backend_golden_dpm_table_soc_table_dpm_levels0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__backend_golden_dpm_table_soc_table_dpm_levels0; _j0++) {
            hwmgr[_i0].backend->golden_dpm_table.soc_table.dpm_levels->value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          vega10_odn_update_soc_table(hwmgr,type);
          for(int _aux = 0; _aux < _len_hwmgr0; _aux++) {
          free(hwmgr[_aux].pptable);
          }
          for(int _aux = 0; _aux < _len_hwmgr0; _aux++) {
          free(hwmgr[_aux].backend);
          }
          free(hwmgr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum PP_OD_DPM_TABLE_COMMAND type = 0;
          int _len_hwmgr0 = 100;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
              int _len_hwmgr__i0__pptable0 = 1;
          hwmgr[_i0].pptable = (struct phm_ppt_v2_information *) malloc(_len_hwmgr__i0__pptable0*sizeof(struct phm_ppt_v2_information));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__pptable0; _j0++) {
              int _len_hwmgr__i0__pptable_vdd_dep_on_socclk0 = 1;
          hwmgr[_i0].pptable->vdd_dep_on_socclk = (struct phm_ppt_v1_clock_voltage_dependency_table *) malloc(_len_hwmgr__i0__pptable_vdd_dep_on_socclk0*sizeof(struct phm_ppt_v1_clock_voltage_dependency_table));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__pptable_vdd_dep_on_socclk0; _j0++) {
            hwmgr[_i0].pptable->vdd_dep_on_socclk->count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__pptable_vdd_dep_on_socclk_entries0 = 1;
          hwmgr[_i0].pptable->vdd_dep_on_socclk->entries = (struct TYPE_12__ *) malloc(_len_hwmgr__i0__pptable_vdd_dep_on_socclk_entries0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__pptable_vdd_dep_on_socclk_entries0; _j0++) {
            hwmgr[_i0].pptable->vdd_dep_on_socclk->entries->vddInd = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].pptable->vdd_dep_on_socclk->entries->clk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_hwmgr__i0__backend0 = 1;
          hwmgr[_i0].backend = (struct vega10_hwmgr *) malloc(_len_hwmgr__i0__backend0*sizeof(struct vega10_hwmgr));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__backend0; _j0++) {
            hwmgr[_i0].backend->need_update_dpm_table = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->dpm_table.soc_table.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__backend_dpm_table_soc_table_dpm_levels0 = 1;
          hwmgr[_i0].backend->dpm_table.soc_table.dpm_levels = (struct TYPE_13__ *) malloc(_len_hwmgr__i0__backend_dpm_table_soc_table_dpm_levels0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__backend_dpm_table_soc_table_dpm_levels0; _j0++) {
            hwmgr[_i0].backend->dpm_table.soc_table.dpm_levels->value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_mclk.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__backend_odn_dpm_table_vdd_dep_on_mclk_entries0 = 1;
          hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_mclk.entries = (struct TYPE_14__ *) malloc(_len_hwmgr__i0__backend_odn_dpm_table_vdd_dep_on_mclk_entries0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__backend_odn_dpm_table_vdd_dep_on_mclk_entries0; _j0++) {
            hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_mclk.entries->vddc = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_mclk.entries->vddInd = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_mclk.entries->clk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_sclk.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__backend_odn_dpm_table_vdd_dep_on_sclk_entries0 = 1;
          hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_sclk.entries = (struct TYPE_14__ *) malloc(_len_hwmgr__i0__backend_odn_dpm_table_vdd_dep_on_sclk_entries0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__backend_odn_dpm_table_vdd_dep_on_sclk_entries0; _j0++) {
            hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_sclk.entries->vddc = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_sclk.entries->vddInd = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_sclk.entries->clk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hwmgr[_i0].backend->odn_dpm_table.vddc_lookup_table.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__backend_odn_dpm_table_vddc_lookup_table_entries0 = 1;
          hwmgr[_i0].backend->odn_dpm_table.vddc_lookup_table.entries = (struct TYPE_10__ *) malloc(_len_hwmgr__i0__backend_odn_dpm_table_vddc_lookup_table_entries0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__backend_odn_dpm_table_vddc_lookup_table_entries0; _j0++) {
            hwmgr[_i0].backend->odn_dpm_table.vddc_lookup_table.entries->us_vdd = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_socclk.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__backend_odn_dpm_table_vdd_dep_on_socclk_entries0 = 1;
          hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_socclk.entries = (struct TYPE_14__ *) malloc(_len_hwmgr__i0__backend_odn_dpm_table_vdd_dep_on_socclk_entries0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__backend_odn_dpm_table_vdd_dep_on_socclk_entries0; _j0++) {
            hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_socclk.entries->vddc = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_socclk.entries->vddInd = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_socclk.entries->clk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hwmgr[_i0].backend->golden_dpm_table.soc_table.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__backend_golden_dpm_table_soc_table_dpm_levels0 = 1;
          hwmgr[_i0].backend->golden_dpm_table.soc_table.dpm_levels = (struct TYPE_13__ *) malloc(_len_hwmgr__i0__backend_golden_dpm_table_soc_table_dpm_levels0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__backend_golden_dpm_table_soc_table_dpm_levels0; _j0++) {
            hwmgr[_i0].backend->golden_dpm_table.soc_table.dpm_levels->value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          vega10_odn_update_soc_table(hwmgr,type);
          for(int _aux = 0; _aux < _len_hwmgr0; _aux++) {
          free(hwmgr[_aux].pptable);
          }
          for(int _aux = 0; _aux < _len_hwmgr0; _aux++) {
          free(hwmgr[_aux].backend);
          }
          free(hwmgr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

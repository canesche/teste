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
typedef  size_t uint32_t ;
struct vega10_odn_dpm_table {int /*<<< orphan*/  vdd_dep_on_sclk; int /*<<< orphan*/  vdd_dep_on_mclk; } ;
struct vega10_hwmgr {int need_update_dpm_table; struct vega10_odn_dpm_table odn_dpm_table; } ;
struct pp_hwmgr {struct phm_ppt_v2_information* pptable; struct vega10_hwmgr* backend; } ;
struct phm_ppt_v2_information {struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_sclk; struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_mclk; } ;
struct phm_ppt_v1_clock_voltage_dependency_table {size_t count; TYPE_1__* entries; } ;
struct TYPE_2__ {scalar_t__ vddc; } ;

/* Variables and functions */
 int DPMTABLE_OD_UPDATE_MCLK ; 
 int DPMTABLE_OD_UPDATE_SCLK ; 
 int DPMTABLE_OD_UPDATE_VDDC ; 

__attribute__((used)) static void vega10_check_dpm_table_updated(struct pp_hwmgr *hwmgr)
{
	struct vega10_hwmgr *data = hwmgr->backend;
	struct vega10_odn_dpm_table *odn_table = &(data->odn_dpm_table);
	struct phm_ppt_v2_information *table_info = hwmgr->pptable;
	struct phm_ppt_v1_clock_voltage_dependency_table *dep_table;
	struct phm_ppt_v1_clock_voltage_dependency_table *odn_dep_table;
	uint32_t i;

	dep_table = table_info->vdd_dep_on_mclk;
	odn_dep_table = (struct phm_ppt_v1_clock_voltage_dependency_table *)&(odn_table->vdd_dep_on_mclk);

	for (i = 0; i < dep_table->count; i++) {
		if (dep_table->entries[i].vddc != odn_dep_table->entries[i].vddc) {
			data->need_update_dpm_table |= DPMTABLE_OD_UPDATE_VDDC | DPMTABLE_OD_UPDATE_MCLK;
			return;
		}
	}

	dep_table = table_info->vdd_dep_on_sclk;
	odn_dep_table = (struct phm_ppt_v1_clock_voltage_dependency_table *)&(odn_table->vdd_dep_on_sclk);
	for (i = 0; i < dep_table->count; i++) {
		if (dep_table->entries[i].vddc != odn_dep_table->entries[i].vddc) {
			data->need_update_dpm_table |= DPMTABLE_OD_UPDATE_VDDC | DPMTABLE_OD_UPDATE_SCLK;
			return;
		}
	}

	if (data->need_update_dpm_table & DPMTABLE_OD_UPDATE_VDDC) {
		data->need_update_dpm_table &= ~DPMTABLE_OD_UPDATE_VDDC;
		data->need_update_dpm_table |= DPMTABLE_OD_UPDATE_SCLK | DPMTABLE_OD_UPDATE_MCLK;
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
          int _len_hwmgr0 = 1;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
              int _len_hwmgr__i0__pptable0 = 1;
          hwmgr[_i0].pptable = (struct phm_ppt_v2_information *) malloc(_len_hwmgr__i0__pptable0*sizeof(struct phm_ppt_v2_information));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__pptable0; _j0++) {
              int _len_hwmgr__i0__pptable_vdd_dep_on_sclk0 = 1;
          hwmgr[_i0].pptable->vdd_dep_on_sclk = (struct phm_ppt_v1_clock_voltage_dependency_table *) malloc(_len_hwmgr__i0__pptable_vdd_dep_on_sclk0*sizeof(struct phm_ppt_v1_clock_voltage_dependency_table));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__pptable_vdd_dep_on_sclk0; _j0++) {
            hwmgr[_i0].pptable->vdd_dep_on_sclk->count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__pptable_vdd_dep_on_sclk_entries0 = 1;
          hwmgr[_i0].pptable->vdd_dep_on_sclk->entries = (struct TYPE_2__ *) malloc(_len_hwmgr__i0__pptable_vdd_dep_on_sclk_entries0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__pptable_vdd_dep_on_sclk_entries0; _j0++) {
            hwmgr[_i0].pptable->vdd_dep_on_sclk->entries->vddc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_hwmgr__i0__pptable_vdd_dep_on_mclk0 = 1;
          hwmgr[_i0].pptable->vdd_dep_on_mclk = (struct phm_ppt_v1_clock_voltage_dependency_table *) malloc(_len_hwmgr__i0__pptable_vdd_dep_on_mclk0*sizeof(struct phm_ppt_v1_clock_voltage_dependency_table));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__pptable_vdd_dep_on_mclk0; _j0++) {
            hwmgr[_i0].pptable->vdd_dep_on_mclk->count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__pptable_vdd_dep_on_mclk_entries0 = 1;
          hwmgr[_i0].pptable->vdd_dep_on_mclk->entries = (struct TYPE_2__ *) malloc(_len_hwmgr__i0__pptable_vdd_dep_on_mclk_entries0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__pptable_vdd_dep_on_mclk_entries0; _j0++) {
            hwmgr[_i0].pptable->vdd_dep_on_mclk->entries->vddc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_hwmgr__i0__backend0 = 1;
          hwmgr[_i0].backend = (struct vega10_hwmgr *) malloc(_len_hwmgr__i0__backend0*sizeof(struct vega10_hwmgr));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__backend0; _j0++) {
            hwmgr[_i0].backend->need_update_dpm_table = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_sclk = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_mclk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          vega10_check_dpm_table_updated(hwmgr);
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
          int _len_hwmgr0 = 65025;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
              int _len_hwmgr__i0__pptable0 = 1;
          hwmgr[_i0].pptable = (struct phm_ppt_v2_information *) malloc(_len_hwmgr__i0__pptable0*sizeof(struct phm_ppt_v2_information));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__pptable0; _j0++) {
              int _len_hwmgr__i0__pptable_vdd_dep_on_sclk0 = 1;
          hwmgr[_i0].pptable->vdd_dep_on_sclk = (struct phm_ppt_v1_clock_voltage_dependency_table *) malloc(_len_hwmgr__i0__pptable_vdd_dep_on_sclk0*sizeof(struct phm_ppt_v1_clock_voltage_dependency_table));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__pptable_vdd_dep_on_sclk0; _j0++) {
            hwmgr[_i0].pptable->vdd_dep_on_sclk->count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__pptable_vdd_dep_on_sclk_entries0 = 1;
          hwmgr[_i0].pptable->vdd_dep_on_sclk->entries = (struct TYPE_2__ *) malloc(_len_hwmgr__i0__pptable_vdd_dep_on_sclk_entries0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__pptable_vdd_dep_on_sclk_entries0; _j0++) {
            hwmgr[_i0].pptable->vdd_dep_on_sclk->entries->vddc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_hwmgr__i0__pptable_vdd_dep_on_mclk0 = 1;
          hwmgr[_i0].pptable->vdd_dep_on_mclk = (struct phm_ppt_v1_clock_voltage_dependency_table *) malloc(_len_hwmgr__i0__pptable_vdd_dep_on_mclk0*sizeof(struct phm_ppt_v1_clock_voltage_dependency_table));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__pptable_vdd_dep_on_mclk0; _j0++) {
            hwmgr[_i0].pptable->vdd_dep_on_mclk->count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__pptable_vdd_dep_on_mclk_entries0 = 1;
          hwmgr[_i0].pptable->vdd_dep_on_mclk->entries = (struct TYPE_2__ *) malloc(_len_hwmgr__i0__pptable_vdd_dep_on_mclk_entries0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__pptable_vdd_dep_on_mclk_entries0; _j0++) {
            hwmgr[_i0].pptable->vdd_dep_on_mclk->entries->vddc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_hwmgr__i0__backend0 = 1;
          hwmgr[_i0].backend = (struct vega10_hwmgr *) malloc(_len_hwmgr__i0__backend0*sizeof(struct vega10_hwmgr));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__backend0; _j0++) {
            hwmgr[_i0].backend->need_update_dpm_table = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_sclk = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_mclk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          vega10_check_dpm_table_updated(hwmgr);
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
          int _len_hwmgr0 = 100;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
              int _len_hwmgr__i0__pptable0 = 1;
          hwmgr[_i0].pptable = (struct phm_ppt_v2_information *) malloc(_len_hwmgr__i0__pptable0*sizeof(struct phm_ppt_v2_information));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__pptable0; _j0++) {
              int _len_hwmgr__i0__pptable_vdd_dep_on_sclk0 = 1;
          hwmgr[_i0].pptable->vdd_dep_on_sclk = (struct phm_ppt_v1_clock_voltage_dependency_table *) malloc(_len_hwmgr__i0__pptable_vdd_dep_on_sclk0*sizeof(struct phm_ppt_v1_clock_voltage_dependency_table));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__pptable_vdd_dep_on_sclk0; _j0++) {
            hwmgr[_i0].pptable->vdd_dep_on_sclk->count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__pptable_vdd_dep_on_sclk_entries0 = 1;
          hwmgr[_i0].pptable->vdd_dep_on_sclk->entries = (struct TYPE_2__ *) malloc(_len_hwmgr__i0__pptable_vdd_dep_on_sclk_entries0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__pptable_vdd_dep_on_sclk_entries0; _j0++) {
            hwmgr[_i0].pptable->vdd_dep_on_sclk->entries->vddc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_hwmgr__i0__pptable_vdd_dep_on_mclk0 = 1;
          hwmgr[_i0].pptable->vdd_dep_on_mclk = (struct phm_ppt_v1_clock_voltage_dependency_table *) malloc(_len_hwmgr__i0__pptable_vdd_dep_on_mclk0*sizeof(struct phm_ppt_v1_clock_voltage_dependency_table));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__pptable_vdd_dep_on_mclk0; _j0++) {
            hwmgr[_i0].pptable->vdd_dep_on_mclk->count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__pptable_vdd_dep_on_mclk_entries0 = 1;
          hwmgr[_i0].pptable->vdd_dep_on_mclk->entries = (struct TYPE_2__ *) malloc(_len_hwmgr__i0__pptable_vdd_dep_on_mclk_entries0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__pptable_vdd_dep_on_mclk_entries0; _j0++) {
            hwmgr[_i0].pptable->vdd_dep_on_mclk->entries->vddc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_hwmgr__i0__backend0 = 1;
          hwmgr[_i0].backend = (struct vega10_hwmgr *) malloc(_len_hwmgr__i0__backend0*sizeof(struct vega10_hwmgr));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__backend0; _j0++) {
            hwmgr[_i0].backend->need_update_dpm_table = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_sclk = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->odn_dpm_table.vdd_dep_on_mclk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          vega10_check_dpm_table_updated(hwmgr);
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

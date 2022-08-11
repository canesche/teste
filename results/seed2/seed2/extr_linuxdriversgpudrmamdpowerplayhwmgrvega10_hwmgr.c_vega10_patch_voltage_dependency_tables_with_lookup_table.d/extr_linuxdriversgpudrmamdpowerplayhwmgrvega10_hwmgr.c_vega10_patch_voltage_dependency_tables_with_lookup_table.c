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
typedef  struct TYPE_16__   TYPE_8__ ;
typedef  struct TYPE_15__   TYPE_7__ ;
typedef  struct TYPE_14__   TYPE_6__ ;
typedef  struct TYPE_13__   TYPE_5__ ;
typedef  struct TYPE_12__   TYPE_4__ ;
typedef  struct TYPE_11__   TYPE_3__ ;
typedef  struct TYPE_10__   TYPE_2__ ;
typedef  struct TYPE_9__   TYPE_1__ ;

/* Type definitions */
typedef  size_t uint8_t ;
struct pp_hwmgr {scalar_t__ pptable; } ;
struct phm_ppt_v2_information {TYPE_8__* vddmem_lookup_table; TYPE_5__* vddci_lookup_table; TYPE_3__* vddc_lookup_table; struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_phyclk; struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_dispclk; struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_pixclk; struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_dcefclk; struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_sclk; struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_socclk; struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_mclk; struct phm_ppt_v1_mm_clock_voltage_dependency_table* mm_dep_table; } ;
struct phm_ppt_v1_mm_clock_voltage_dependency_table {size_t count; TYPE_1__* entries; } ;
struct phm_ppt_v1_clock_voltage_dependency_table {size_t count; TYPE_6__* entries; } ;
struct TYPE_16__ {TYPE_7__* entries; } ;
struct TYPE_15__ {int /*<<< orphan*/  us_vdd; } ;
struct TYPE_14__ {size_t vddInd; size_t vddciInd; size_t mvddInd; int /*<<< orphan*/  mvdd; int /*<<< orphan*/  vddci; int /*<<< orphan*/  vddc; } ;
struct TYPE_13__ {TYPE_4__* entries; } ;
struct TYPE_12__ {int /*<<< orphan*/  us_vdd; } ;
struct TYPE_11__ {TYPE_2__* entries; } ;
struct TYPE_10__ {int /*<<< orphan*/  us_vdd; } ;
struct TYPE_9__ {size_t vddcInd; int /*<<< orphan*/  vddc; } ;

/* Variables and functions */

__attribute__((used)) static int vega10_patch_voltage_dependency_tables_with_lookup_table(
		struct pp_hwmgr *hwmgr)
{
	uint8_t entry_id, voltage_id;
	unsigned i;
	struct phm_ppt_v2_information *table_info =
			(struct phm_ppt_v2_information *)(hwmgr->pptable);
	struct phm_ppt_v1_mm_clock_voltage_dependency_table *mm_table =
			table_info->mm_dep_table;
	struct phm_ppt_v1_clock_voltage_dependency_table *mclk_table =
			table_info->vdd_dep_on_mclk;

	for (i = 0; i < 6; i++) {
		struct phm_ppt_v1_clock_voltage_dependency_table *vdt;
		switch (i) {
			case 0: vdt = table_info->vdd_dep_on_socclk; break;
			case 1: vdt = table_info->vdd_dep_on_sclk; break;
			case 2: vdt = table_info->vdd_dep_on_dcefclk; break;
			case 3: vdt = table_info->vdd_dep_on_pixclk; break;
			case 4: vdt = table_info->vdd_dep_on_dispclk; break;
			case 5: vdt = table_info->vdd_dep_on_phyclk; break;
		}

		for (entry_id = 0; entry_id < vdt->count; entry_id++) {
			voltage_id = vdt->entries[entry_id].vddInd;
			vdt->entries[entry_id].vddc =
					table_info->vddc_lookup_table->entries[voltage_id].us_vdd;
		}
	}

	for (entry_id = 0; entry_id < mm_table->count; ++entry_id) {
		voltage_id = mm_table->entries[entry_id].vddcInd;
		mm_table->entries[entry_id].vddc =
			table_info->vddc_lookup_table->entries[voltage_id].us_vdd;
	}

	for (entry_id = 0; entry_id < mclk_table->count; ++entry_id) {
		voltage_id = mclk_table->entries[entry_id].vddInd;
		mclk_table->entries[entry_id].vddc =
				table_info->vddc_lookup_table->entries[voltage_id].us_vdd;
		voltage_id = mclk_table->entries[entry_id].vddciInd;
		mclk_table->entries[entry_id].vddci =
				table_info->vddci_lookup_table->entries[voltage_id].us_vdd;
		voltage_id = mclk_table->entries[entry_id].mvddInd;
		mclk_table->entries[entry_id].mvdd =
				table_info->vddmem_lookup_table->entries[voltage_id].us_vdd;
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
          int _len_hwmgr0 = 1;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
            hwmgr[_i0].pptable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vega10_patch_voltage_dependency_tables_with_lookup_table(hwmgr);
          printf("%d\n", benchRet); 
          free(hwmgr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hwmgr0 = 65025;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
            hwmgr[_i0].pptable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vega10_patch_voltage_dependency_tables_with_lookup_table(hwmgr);
          printf("%d\n", benchRet); 
          free(hwmgr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hwmgr0 = 100;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
            hwmgr[_i0].pptable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vega10_patch_voltage_dependency_tables_with_lookup_table(hwmgr);
          printf("%d\n", benchRet); 
          free(hwmgr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

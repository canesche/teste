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
typedef  struct TYPE_12__   TYPE_6__ ;
typedef  struct TYPE_11__   TYPE_5__ ;
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
typedef  size_t uint8_t ;
struct TYPE_12__ {size_t GraphicsBootLevel; size_t MemoryBootLevel; } ;
struct vegam_smumgr {TYPE_6__ smc_state_table; } ;
struct TYPE_11__ {scalar_t__ sclk_bootup_value; scalar_t__ mclk_bootup_value; } ;
struct smu7_hwmgr {TYPE_5__ vbios_boot_state; } ;
struct pp_hwmgr {scalar_t__ pptable; scalar_t__ smu_backend; scalar_t__ backend; } ;
struct phm_ppt_v1_information {TYPE_4__* vdd_dep_on_mclk; TYPE_2__* vdd_dep_on_sclk; } ;
struct TYPE_10__ {TYPE_3__* entries; scalar_t__ count; } ;
struct TYPE_9__ {scalar_t__ clk; } ;
struct TYPE_8__ {TYPE_1__* entries; scalar_t__ count; } ;
struct TYPE_7__ {scalar_t__ clk; } ;

/* Variables and functions */

__attribute__((used)) static int vegam_populate_smc_initial_state(struct pp_hwmgr *hwmgr)
{
	struct smu7_hwmgr *hw_data = (struct smu7_hwmgr *)(hwmgr->backend);
	struct vegam_smumgr *smu_data = (struct vegam_smumgr *)(hwmgr->smu_backend);
	struct phm_ppt_v1_information *table_info =
			(struct phm_ppt_v1_information *)(hwmgr->pptable);
	uint8_t count, level;

	count = (uint8_t)(table_info->vdd_dep_on_sclk->count);

	for (level = 0; level < count; level++) {
		if (table_info->vdd_dep_on_sclk->entries[level].clk >=
				hw_data->vbios_boot_state.sclk_bootup_value) {
			smu_data->smc_state_table.GraphicsBootLevel = level;
			break;
		}
	}

	count = (uint8_t)(table_info->vdd_dep_on_mclk->count);
	for (level = 0; level < count; level++) {
		if (table_info->vdd_dep_on_mclk->entries[level].clk >=
				hw_data->vbios_boot_state.mclk_bootup_value) {
			smu_data->smc_state_table.MemoryBootLevel = level;
			break;
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
          int _len_hwmgr0 = 1;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
            hwmgr[_i0].pptable = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].smu_backend = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vegam_populate_smc_initial_state(hwmgr);
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
        hwmgr[_i0].smu_backend = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vegam_populate_smc_initial_state(hwmgr);
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
        hwmgr[_i0].smu_backend = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vegam_populate_smc_initial_state(hwmgr);
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

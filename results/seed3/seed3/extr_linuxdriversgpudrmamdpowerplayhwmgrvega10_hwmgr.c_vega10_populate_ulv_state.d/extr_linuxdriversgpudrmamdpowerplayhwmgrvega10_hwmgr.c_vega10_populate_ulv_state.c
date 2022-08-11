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
typedef  void* uint8_t ;
struct TYPE_6__ {scalar_t__ psi1_enable; scalar_t__ psi0_enable; } ;
struct TYPE_4__ {void* UlvPhaseSheddingPsi1; void* UlvPhaseSheddingPsi0; void* UlvGfxclkBypass; void* UlvMp1clkDid; void* UlvSmnclkDid; void* UlvOffsetVid; } ;
struct TYPE_5__ {TYPE_1__ pp_table; } ;
struct vega10_hwmgr {TYPE_3__ vddc_voltage_table; TYPE_2__ smc_state_table; } ;
struct pp_hwmgr {scalar_t__ pptable; struct vega10_hwmgr* backend; } ;
struct phm_ppt_v2_information {scalar_t__ us_ulv_gfxclk_bypass; scalar_t__ us_ulv_mp1clk_did; scalar_t__ us_ulv_smnclk_did; scalar_t__ us_ulv_voltage_offset; } ;

/* Variables and functions */

__attribute__((used)) static int vega10_populate_ulv_state(struct pp_hwmgr *hwmgr)
{
	struct vega10_hwmgr *data = hwmgr->backend;
	struct phm_ppt_v2_information *table_info =
			(struct phm_ppt_v2_information *)(hwmgr->pptable);

	data->smc_state_table.pp_table.UlvOffsetVid =
			(uint8_t)table_info->us_ulv_voltage_offset;

	data->smc_state_table.pp_table.UlvSmnclkDid =
			(uint8_t)(table_info->us_ulv_smnclk_did);
	data->smc_state_table.pp_table.UlvMp1clkDid =
			(uint8_t)(table_info->us_ulv_mp1clk_did);
	data->smc_state_table.pp_table.UlvGfxclkBypass =
			(uint8_t)(table_info->us_ulv_gfxclk_bypass);
	data->smc_state_table.pp_table.UlvPhaseSheddingPsi0 =
			(uint8_t)(data->vddc_voltage_table.psi0_enable);
	data->smc_state_table.pp_table.UlvPhaseSheddingPsi1 =
			(uint8_t)(data->vddc_voltage_table.psi1_enable);

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
          int _len_hwmgr__i0__backend0 = 1;
          hwmgr[_i0].backend = (struct vega10_hwmgr *) malloc(_len_hwmgr__i0__backend0*sizeof(struct vega10_hwmgr));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__backend0; _j0++) {
            hwmgr[_i0].backend->vddc_voltage_table.psi1_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->vddc_voltage_table.psi0_enable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = vega10_populate_ulv_state(hwmgr);
          printf("%d\n", benchRet); 
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
            hwmgr[_i0].pptable = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__backend0 = 1;
          hwmgr[_i0].backend = (struct vega10_hwmgr *) malloc(_len_hwmgr__i0__backend0*sizeof(struct vega10_hwmgr));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__backend0; _j0++) {
            hwmgr[_i0].backend->vddc_voltage_table.psi1_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->vddc_voltage_table.psi0_enable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = vega10_populate_ulv_state(hwmgr);
          printf("%d\n", benchRet); 
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
            hwmgr[_i0].pptable = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__backend0 = 1;
          hwmgr[_i0].backend = (struct vega10_hwmgr *) malloc(_len_hwmgr__i0__backend0*sizeof(struct vega10_hwmgr));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__backend0; _j0++) {
            hwmgr[_i0].backend->vddc_voltage_table.psi1_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->vddc_voltage_table.psi0_enable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = vega10_populate_ulv_state(hwmgr);
          printf("%d\n", benchRet); 
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

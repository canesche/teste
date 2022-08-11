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
typedef  int uint32_t ;
struct TYPE_3__ {struct phm_clock_voltage_dependency_table* vddc_dependency_on_sclk; } ;
struct pp_hwmgr {TYPE_1__ dyn_state; } ;
struct phm_clock_voltage_dependency_table {TYPE_2__* entries; scalar_t__ count; } ;
struct TYPE_4__ {int clk; } ;

/* Variables and functions */
#define  PPSMC_MSG_SetSclkHardMax 131 
#define  PPSMC_MSG_SetSclkHardMin 130 
#define  PPSMC_MSG_SetSclkSoftMax 129 
#define  PPSMC_MSG_SetSclkSoftMin 128 

__attribute__((used)) static uint32_t smu8_get_sclk_level(struct pp_hwmgr *hwmgr,
				uint32_t clock, uint32_t msg)
{
	int i = 0;
	struct phm_clock_voltage_dependency_table *table =
				hwmgr->dyn_state.vddc_dependency_on_sclk;

	switch (msg) {
	case PPSMC_MSG_SetSclkSoftMin:
	case PPSMC_MSG_SetSclkHardMin:
		for (i = 0; i < (int)table->count; i++) {
			if (clock <= table->entries[i].clk)
				break;
		}
		break;

	case PPSMC_MSG_SetSclkSoftMax:
	case PPSMC_MSG_SetSclkHardMax:
		for (i = table->count - 1; i >= 0; i--) {
			if (clock >= table->entries[i].clk)
				break;
		}
		break;

	default:
		break;
	}
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
          int clock = 100;
          int msg = 100;
          int _len_hwmgr0 = 1;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
              int _len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk0 = 1;
          hwmgr[_i0].dyn_state.vddc_dependency_on_sclk = (struct phm_clock_voltage_dependency_table *) malloc(_len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk0*sizeof(struct phm_clock_voltage_dependency_table));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk0; _j0++) {
              int _len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk_entries0 = 1;
          hwmgr[_i0].dyn_state.vddc_dependency_on_sclk->entries = (struct TYPE_4__ *) malloc(_len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk_entries0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk_entries0; _j0++) {
            hwmgr[_i0].dyn_state.vddc_dependency_on_sclk->entries->clk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hwmgr[_i0].dyn_state.vddc_dependency_on_sclk->count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = smu8_get_sclk_level(hwmgr,clock,msg);
          printf("%d\n", benchRet); 
          free(hwmgr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int clock = 255;
          int msg = 255;
          int _len_hwmgr0 = 65025;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
              int _len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk0 = 1;
          hwmgr[_i0].dyn_state.vddc_dependency_on_sclk = (struct phm_clock_voltage_dependency_table *) malloc(_len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk0*sizeof(struct phm_clock_voltage_dependency_table));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk0; _j0++) {
              int _len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk_entries0 = 1;
          hwmgr[_i0].dyn_state.vddc_dependency_on_sclk->entries = (struct TYPE_4__ *) malloc(_len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk_entries0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk_entries0; _j0++) {
            hwmgr[_i0].dyn_state.vddc_dependency_on_sclk->entries->clk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hwmgr[_i0].dyn_state.vddc_dependency_on_sclk->count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = smu8_get_sclk_level(hwmgr,clock,msg);
          printf("%d\n", benchRet); 
          free(hwmgr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int clock = 10;
          int msg = 10;
          int _len_hwmgr0 = 100;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
              int _len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk0 = 1;
          hwmgr[_i0].dyn_state.vddc_dependency_on_sclk = (struct phm_clock_voltage_dependency_table *) malloc(_len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk0*sizeof(struct phm_clock_voltage_dependency_table));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk0; _j0++) {
              int _len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk_entries0 = 1;
          hwmgr[_i0].dyn_state.vddc_dependency_on_sclk->entries = (struct TYPE_4__ *) malloc(_len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk_entries0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk_entries0; _j0++) {
            hwmgr[_i0].dyn_state.vddc_dependency_on_sclk->entries->clk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hwmgr[_i0].dyn_state.vddc_dependency_on_sclk->count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = smu8_get_sclk_level(hwmgr,clock,msg);
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

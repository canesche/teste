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
typedef  int uint32_t ;
struct vega12_single_dpm_table {scalar_t__ count; TYPE_3__* dpm_levels; } ;
struct TYPE_6__ {struct vega12_single_dpm_table gfx_table; } ;
struct vega12_hwmgr {TYPE_2__ dpm_table; TYPE_1__* smu_features; } ;
struct pp_hwmgr {scalar_t__ backend; } ;
struct pp_clock_levels_with_latency {int num_levels; TYPE_4__* data; } ;
struct TYPE_8__ {int clocks_in_khz; scalar_t__ latency_in_us; } ;
struct TYPE_7__ {int value; } ;
struct TYPE_5__ {int /*<<< orphan*/  enabled; } ;

/* Variables and functions */
 size_t GNLD_DPM_GFXCLK ; 
 scalar_t__ MAX_NUM_CLOCKS ; 

__attribute__((used)) static int vega12_get_sclks(struct pp_hwmgr *hwmgr,
		struct pp_clock_levels_with_latency *clocks)
{
	struct vega12_hwmgr *data = (struct vega12_hwmgr *)(hwmgr->backend);
	uint32_t ucount;
	int i;
	struct vega12_single_dpm_table *dpm_table;

	if (!data->smu_features[GNLD_DPM_GFXCLK].enabled)
		return -1;

	dpm_table = &(data->dpm_table.gfx_table);
	ucount = (dpm_table->count > MAX_NUM_CLOCKS) ?
		MAX_NUM_CLOCKS : dpm_table->count;

	for (i = 0; i < ucount; i++) {
		clocks->data[i].clocks_in_khz =
			dpm_table->dpm_levels[i].value * 1000;

		clocks->data[i].latency_in_us = 0;
	}

	clocks->num_levels = ucount;

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
            hwmgr[_i0].backend = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_clocks0 = 1;
          struct pp_clock_levels_with_latency * clocks = (struct pp_clock_levels_with_latency *) malloc(_len_clocks0*sizeof(struct pp_clock_levels_with_latency));
          for(int _i0 = 0; _i0 < _len_clocks0; _i0++) {
            clocks[_i0].num_levels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_clocks__i0__data0 = 1;
          clocks[_i0].data = (struct TYPE_8__ *) malloc(_len_clocks__i0__data0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_clocks__i0__data0; _j0++) {
            clocks[_i0].data->clocks_in_khz = ((-2 * (next_i()%2)) + 1) * next_i();
        clocks[_i0].data->latency_in_us = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = vega12_get_sclks(hwmgr,clocks);
          printf("%d\n", benchRet); 
          free(hwmgr);
          for(int _aux = 0; _aux < _len_clocks0; _aux++) {
          free(clocks[_aux].data);
          }
          free(clocks);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hwmgr0 = 65025;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
            hwmgr[_i0].backend = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_clocks0 = 65025;
          struct pp_clock_levels_with_latency * clocks = (struct pp_clock_levels_with_latency *) malloc(_len_clocks0*sizeof(struct pp_clock_levels_with_latency));
          for(int _i0 = 0; _i0 < _len_clocks0; _i0++) {
            clocks[_i0].num_levels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_clocks__i0__data0 = 1;
          clocks[_i0].data = (struct TYPE_8__ *) malloc(_len_clocks__i0__data0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_clocks__i0__data0; _j0++) {
            clocks[_i0].data->clocks_in_khz = ((-2 * (next_i()%2)) + 1) * next_i();
        clocks[_i0].data->latency_in_us = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = vega12_get_sclks(hwmgr,clocks);
          printf("%d\n", benchRet); 
          free(hwmgr);
          for(int _aux = 0; _aux < _len_clocks0; _aux++) {
          free(clocks[_aux].data);
          }
          free(clocks);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hwmgr0 = 100;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
            hwmgr[_i0].backend = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_clocks0 = 100;
          struct pp_clock_levels_with_latency * clocks = (struct pp_clock_levels_with_latency *) malloc(_len_clocks0*sizeof(struct pp_clock_levels_with_latency));
          for(int _i0 = 0; _i0 < _len_clocks0; _i0++) {
            clocks[_i0].num_levels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_clocks__i0__data0 = 1;
          clocks[_i0].data = (struct TYPE_8__ *) malloc(_len_clocks__i0__data0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_clocks__i0__data0; _j0++) {
            clocks[_i0].data->clocks_in_khz = ((-2 * (next_i()%2)) + 1) * next_i();
        clocks[_i0].data->latency_in_us = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = vega12_get_sclks(hwmgr,clocks);
          printf("%d\n", benchRet); 
          free(hwmgr);
          for(int _aux = 0; _aux < _len_clocks0; _aux++) {
          free(clocks[_aux].data);
          }
          free(clocks);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

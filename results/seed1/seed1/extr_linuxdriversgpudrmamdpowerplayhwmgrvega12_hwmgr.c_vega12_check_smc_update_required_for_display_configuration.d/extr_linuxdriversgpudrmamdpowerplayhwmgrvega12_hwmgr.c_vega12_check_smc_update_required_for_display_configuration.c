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
struct TYPE_5__ {scalar_t__ num_existing_displays; scalar_t__ min_clock_in_sr; } ;
struct TYPE_4__ {scalar_t__ gfx_clk_deep_sleep_support; } ;
struct vega12_hwmgr {TYPE_2__ display_timing; TYPE_1__ registry_data; } ;
struct pp_hwmgr {TYPE_3__* display_config; scalar_t__ backend; } ;
struct TYPE_6__ {scalar_t__ num_display; scalar_t__ min_core_set_clock_in_sr; } ;

/* Variables and functions */

__attribute__((used)) static bool
vega12_check_smc_update_required_for_display_configuration(struct pp_hwmgr *hwmgr)
{
	struct vega12_hwmgr *data = (struct vega12_hwmgr *)(hwmgr->backend);
	bool is_update_required = false;

	if (data->display_timing.num_existing_displays != hwmgr->display_config->num_display)
		is_update_required = true;

	if (data->registry_data.gfx_clk_deep_sleep_support) {
		if (data->display_timing.min_clock_in_sr != hwmgr->display_config->min_core_set_clock_in_sr)
			is_update_required = true;
	}

	return is_update_required;
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
              int _len_hwmgr__i0__display_config0 = 1;
          hwmgr[_i0].display_config = (struct TYPE_6__ *) malloc(_len_hwmgr__i0__display_config0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__display_config0; _j0++) {
            hwmgr[_i0].display_config->num_display = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].display_config->min_core_set_clock_in_sr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hwmgr[_i0].backend = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vega12_check_smc_update_required_for_display_configuration(hwmgr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hwmgr0; _aux++) {
          free(hwmgr[_aux].display_config);
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
              int _len_hwmgr__i0__display_config0 = 1;
          hwmgr[_i0].display_config = (struct TYPE_6__ *) malloc(_len_hwmgr__i0__display_config0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__display_config0; _j0++) {
            hwmgr[_i0].display_config->num_display = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].display_config->min_core_set_clock_in_sr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hwmgr[_i0].backend = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vega12_check_smc_update_required_for_display_configuration(hwmgr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hwmgr0; _aux++) {
          free(hwmgr[_aux].display_config);
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
              int _len_hwmgr__i0__display_config0 = 1;
          hwmgr[_i0].display_config = (struct TYPE_6__ *) malloc(_len_hwmgr__i0__display_config0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__display_config0; _j0++) {
            hwmgr[_i0].display_config->num_display = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].display_config->min_core_set_clock_in_sr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hwmgr[_i0].backend = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vega12_check_smc_update_required_for_display_configuration(hwmgr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hwmgr0; _aux++) {
          free(hwmgr[_aux].display_config);
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

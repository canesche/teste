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
typedef  scalar_t__ uint32_t ;
struct vega12_single_dpm_table {scalar_t__ count; } ;
struct TYPE_2__ {struct vega12_single_dpm_table soc_table; struct vega12_single_dpm_table mem_table; struct vega12_single_dpm_table gfx_table; } ;
struct vega12_hwmgr {TYPE_1__ dpm_table; } ;
struct pp_hwmgr {scalar_t__ backend; } ;
typedef  enum amd_dpm_forced_level { ____Placeholder_amd_dpm_forced_level } amd_dpm_forced_level ;

/* Variables and functions */
 int AMD_DPM_FORCED_LEVEL_PROFILE_MIN_MCLK ; 
 int AMD_DPM_FORCED_LEVEL_PROFILE_MIN_SCLK ; 
 int AMD_DPM_FORCED_LEVEL_PROFILE_PEAK ; 
 scalar_t__ VEGA12_UMD_PSTATE_GFXCLK_LEVEL ; 
 scalar_t__ VEGA12_UMD_PSTATE_MCLK_LEVEL ; 
 scalar_t__ VEGA12_UMD_PSTATE_SOCCLK_LEVEL ; 

__attribute__((used)) static int vega12_get_profiling_clk_mask(struct pp_hwmgr *hwmgr, enum amd_dpm_forced_level level,
				uint32_t *sclk_mask, uint32_t *mclk_mask, uint32_t *soc_mask)
{
	struct vega12_hwmgr *data = (struct vega12_hwmgr *)(hwmgr->backend);
	struct vega12_single_dpm_table *gfx_dpm_table = &(data->dpm_table.gfx_table);
	struct vega12_single_dpm_table *mem_dpm_table = &(data->dpm_table.mem_table);
	struct vega12_single_dpm_table *soc_dpm_table = &(data->dpm_table.soc_table);

	*sclk_mask = 0;
	*mclk_mask = 0;
	*soc_mask  = 0;

	if (gfx_dpm_table->count > VEGA12_UMD_PSTATE_GFXCLK_LEVEL &&
	    mem_dpm_table->count > VEGA12_UMD_PSTATE_MCLK_LEVEL &&
	    soc_dpm_table->count > VEGA12_UMD_PSTATE_SOCCLK_LEVEL) {
		*sclk_mask = VEGA12_UMD_PSTATE_GFXCLK_LEVEL;
		*mclk_mask = VEGA12_UMD_PSTATE_MCLK_LEVEL;
		*soc_mask  = VEGA12_UMD_PSTATE_SOCCLK_LEVEL;
	}

	if (level == AMD_DPM_FORCED_LEVEL_PROFILE_MIN_SCLK) {
		*sclk_mask = 0;
	} else if (level == AMD_DPM_FORCED_LEVEL_PROFILE_MIN_MCLK) {
		*mclk_mask = 0;
	} else if (level == AMD_DPM_FORCED_LEVEL_PROFILE_PEAK) {
		*sclk_mask = gfx_dpm_table->count - 1;
		*mclk_mask = mem_dpm_table->count - 1;
		*soc_mask  = soc_dpm_table->count - 1;
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
          enum amd_dpm_forced_level level = 0;
          int _len_hwmgr0 = 1;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
            hwmgr[_i0].backend = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sclk_mask0 = 1;
          long * sclk_mask = (long *) malloc(_len_sclk_mask0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_sclk_mask0; _i0++) {
            sclk_mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mclk_mask0 = 1;
          long * mclk_mask = (long *) malloc(_len_mclk_mask0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_mclk_mask0; _i0++) {
            mclk_mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_soc_mask0 = 1;
          long * soc_mask = (long *) malloc(_len_soc_mask0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_soc_mask0; _i0++) {
            soc_mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vega12_get_profiling_clk_mask(hwmgr,level,sclk_mask,mclk_mask,soc_mask);
          printf("%d\n", benchRet); 
          free(hwmgr);
          free(sclk_mask);
          free(mclk_mask);
          free(soc_mask);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum amd_dpm_forced_level level = 0;
          int _len_hwmgr0 = 65025;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
            hwmgr[_i0].backend = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sclk_mask0 = 65025;
          long * sclk_mask = (long *) malloc(_len_sclk_mask0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_sclk_mask0; _i0++) {
            sclk_mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mclk_mask0 = 65025;
          long * mclk_mask = (long *) malloc(_len_mclk_mask0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_mclk_mask0; _i0++) {
            mclk_mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_soc_mask0 = 65025;
          long * soc_mask = (long *) malloc(_len_soc_mask0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_soc_mask0; _i0++) {
            soc_mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vega12_get_profiling_clk_mask(hwmgr,level,sclk_mask,mclk_mask,soc_mask);
          printf("%d\n", benchRet); 
          free(hwmgr);
          free(sclk_mask);
          free(mclk_mask);
          free(soc_mask);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum amd_dpm_forced_level level = 0;
          int _len_hwmgr0 = 100;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
            hwmgr[_i0].backend = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sclk_mask0 = 100;
          long * sclk_mask = (long *) malloc(_len_sclk_mask0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_sclk_mask0; _i0++) {
            sclk_mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mclk_mask0 = 100;
          long * mclk_mask = (long *) malloc(_len_mclk_mask0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_mclk_mask0; _i0++) {
            mclk_mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_soc_mask0 = 100;
          long * soc_mask = (long *) malloc(_len_soc_mask0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_soc_mask0; _i0++) {
            soc_mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vega12_get_profiling_clk_mask(hwmgr,level,sclk_mask,mclk_mask,soc_mask);
          printf("%d\n", benchRet); 
          free(hwmgr);
          free(sclk_mask);
          free(mclk_mask);
          free(soc_mask);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

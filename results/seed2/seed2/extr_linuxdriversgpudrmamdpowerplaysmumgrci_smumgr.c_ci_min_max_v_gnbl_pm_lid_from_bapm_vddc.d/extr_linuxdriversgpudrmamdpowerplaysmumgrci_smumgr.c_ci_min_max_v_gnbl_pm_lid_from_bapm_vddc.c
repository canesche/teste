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
typedef  int u8 ;
struct pp_hwmgr {scalar_t__ smu_backend; } ;
struct TYPE_2__ {int* BapmVddCVidHiSidd; int* BapmVddCVidLoSidd; int GnbLPMLMaxVid; int GnbLPMLMinVid; } ;
struct ci_smumgr {TYPE_1__ power_tune_table; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int ci_min_max_v_gnbl_pm_lid_from_bapm_vddc(struct pp_hwmgr *hwmgr)
{
	struct ci_smumgr *smu_data = (struct ci_smumgr *)(hwmgr->smu_backend);
	u8 *hi_vid = smu_data->power_tune_table.BapmVddCVidHiSidd;
	u8 *lo_vid = smu_data->power_tune_table.BapmVddCVidLoSidd;
	int i, min, max;

	min = max = hi_vid[0];
	for (i = 0; i < 8; i++) {
		if (0 != hi_vid[i]) {
			if (min > hi_vid[i])
				min = hi_vid[i];
			if (max < hi_vid[i])
				max = hi_vid[i];
		}

		if (0 != lo_vid[i]) {
			if (min > lo_vid[i])
				min = lo_vid[i];
			if (max < lo_vid[i])
				max = lo_vid[i];
		}
	}

	if ((min == 0) || (max == 0))
		return -EINVAL;
	smu_data->power_tune_table.GnbLPMLMaxVid = (u8)max;
	smu_data->power_tune_table.GnbLPMLMinVid = (u8)min;

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
            hwmgr[_i0].smu_backend = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ci_min_max_v_gnbl_pm_lid_from_bapm_vddc(hwmgr);
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
            hwmgr[_i0].smu_backend = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ci_min_max_v_gnbl_pm_lid_from_bapm_vddc(hwmgr);
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
            hwmgr[_i0].smu_backend = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ci_min_max_v_gnbl_pm_lid_from_bapm_vddc(hwmgr);
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

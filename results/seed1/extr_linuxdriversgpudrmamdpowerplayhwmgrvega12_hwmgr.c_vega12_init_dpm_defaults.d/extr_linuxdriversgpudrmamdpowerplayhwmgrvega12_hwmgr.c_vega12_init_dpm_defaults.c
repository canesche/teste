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
typedef  scalar_t__ uint64_t ;
struct TYPE_4__ {int disallowed_features; } ;
struct vega12_hwmgr {TYPE_2__ registry_data; TYPE_1__* smu_features; } ;
struct pp_hwmgr {scalar_t__ backend; } ;
struct TYPE_3__ {unsigned long long smu_feature_id; int allowed; scalar_t__ smu_feature_bitmap; } ;

/* Variables and functions */
 unsigned long long FEATURE_ACDC_BIT ; 
 unsigned long long FEATURE_ACG_BIT ; 
 unsigned long long FEATURE_CG_BIT ; 
 unsigned long long FEATURE_DPM_DCEFCLK_BIT ; 
 unsigned long long FEATURE_DPM_GFXCLK_BIT ; 
 unsigned long long FEATURE_DPM_LINK_BIT ; 
 unsigned long long FEATURE_DPM_MP0CLK_BIT ; 
 unsigned long long FEATURE_DPM_PREFETCHER_BIT ; 
 unsigned long long FEATURE_DPM_SOCCLK_BIT ; 
 unsigned long long FEATURE_DPM_UCLK_BIT ; 
 unsigned long long FEATURE_DPM_UVD_BIT ; 
 unsigned long long FEATURE_DPM_VCE_BIT ; 
 unsigned long long FEATURE_DS_DCEFCLK_BIT ; 
 unsigned long long FEATURE_DS_GFXCLK_BIT ; 
 unsigned long long FEATURE_DS_LCLK_BIT ; 
 unsigned long long FEATURE_DS_SOCCLK_BIT ; 
 unsigned long long FEATURE_FAN_CONTROL_BIT ; 
 unsigned long long FEATURE_FW_CTF_BIT ; 
 unsigned long long FEATURE_GFXOFF_BIT ; 
 unsigned long long FEATURE_GFX_EDC_BIT ; 
 unsigned long long FEATURE_GFX_PER_CU_CG_BIT ; 
 unsigned long long FEATURE_LED_DISPLAY_BIT ; 
 unsigned long long FEATURE_PPT_BIT ; 
 unsigned long long FEATURE_RM_BIT ; 
 unsigned long long FEATURE_TDC_BIT ; 
 unsigned long long FEATURE_THERMAL_BIT ; 
 unsigned long long FEATURE_ULV_BIT ; 
 unsigned long long FEATURE_VR0HOT_BIT ; 
 unsigned long long FEATURE_VR1HOT_BIT ; 
 size_t GNLD_ACDC ; 
 size_t GNLD_ACG ; 
 size_t GNLD_CG ; 
 size_t GNLD_DIDT ; 
 size_t GNLD_DPM_DCEFCLK ; 
 size_t GNLD_DPM_GFXCLK ; 
 size_t GNLD_DPM_LINK ; 
 size_t GNLD_DPM_MP0CLK ; 
 size_t GNLD_DPM_PREFETCHER ; 
 size_t GNLD_DPM_SOCCLK ; 
 size_t GNLD_DPM_UCLK ; 
 size_t GNLD_DPM_UVD ; 
 size_t GNLD_DPM_VCE ; 
 size_t GNLD_DS_DCEFCLK ; 
 size_t GNLD_DS_GFXCLK ; 
 size_t GNLD_DS_LCLK ; 
 size_t GNLD_DS_SOCCLK ; 
 size_t GNLD_FAN_CONTROL ; 
 int GNLD_FEATURES_MAX ; 
 size_t GNLD_FW_CTF ; 
 size_t GNLD_GFXOFF ; 
 size_t GNLD_GFX_PER_CU_CG ; 
 size_t GNLD_LED_DISPLAY ; 
 size_t GNLD_PPT ; 
 size_t GNLD_RM ; 
 size_t GNLD_TDC ; 
 size_t GNLD_THERMAL ; 
 size_t GNLD_ULV ; 
 size_t GNLD_VR0HOT ; 
 size_t GNLD_VR1HOT ; 

__attribute__((used)) static void vega12_init_dpm_defaults(struct pp_hwmgr *hwmgr)
{
	struct vega12_hwmgr *data = (struct vega12_hwmgr *)(hwmgr->backend);
	int i;

	data->smu_features[GNLD_DPM_PREFETCHER].smu_feature_id =
			FEATURE_DPM_PREFETCHER_BIT;
	data->smu_features[GNLD_DPM_GFXCLK].smu_feature_id =
			FEATURE_DPM_GFXCLK_BIT;
	data->smu_features[GNLD_DPM_UCLK].smu_feature_id =
			FEATURE_DPM_UCLK_BIT;
	data->smu_features[GNLD_DPM_SOCCLK].smu_feature_id =
			FEATURE_DPM_SOCCLK_BIT;
	data->smu_features[GNLD_DPM_UVD].smu_feature_id =
			FEATURE_DPM_UVD_BIT;
	data->smu_features[GNLD_DPM_VCE].smu_feature_id =
			FEATURE_DPM_VCE_BIT;
	data->smu_features[GNLD_ULV].smu_feature_id =
			FEATURE_ULV_BIT;
	data->smu_features[GNLD_DPM_MP0CLK].smu_feature_id =
			FEATURE_DPM_MP0CLK_BIT;
	data->smu_features[GNLD_DPM_LINK].smu_feature_id =
			FEATURE_DPM_LINK_BIT;
	data->smu_features[GNLD_DPM_DCEFCLK].smu_feature_id =
			FEATURE_DPM_DCEFCLK_BIT;
	data->smu_features[GNLD_DS_GFXCLK].smu_feature_id =
			FEATURE_DS_GFXCLK_BIT;
	data->smu_features[GNLD_DS_SOCCLK].smu_feature_id =
			FEATURE_DS_SOCCLK_BIT;
	data->smu_features[GNLD_DS_LCLK].smu_feature_id =
			FEATURE_DS_LCLK_BIT;
	data->smu_features[GNLD_PPT].smu_feature_id =
			FEATURE_PPT_BIT;
	data->smu_features[GNLD_TDC].smu_feature_id =
			FEATURE_TDC_BIT;
	data->smu_features[GNLD_THERMAL].smu_feature_id =
			FEATURE_THERMAL_BIT;
	data->smu_features[GNLD_GFX_PER_CU_CG].smu_feature_id =
			FEATURE_GFX_PER_CU_CG_BIT;
	data->smu_features[GNLD_RM].smu_feature_id =
			FEATURE_RM_BIT;
	data->smu_features[GNLD_DS_DCEFCLK].smu_feature_id =
			FEATURE_DS_DCEFCLK_BIT;
	data->smu_features[GNLD_ACDC].smu_feature_id =
			FEATURE_ACDC_BIT;
	data->smu_features[GNLD_VR0HOT].smu_feature_id =
			FEATURE_VR0HOT_BIT;
	data->smu_features[GNLD_VR1HOT].smu_feature_id =
			FEATURE_VR1HOT_BIT;
	data->smu_features[GNLD_FW_CTF].smu_feature_id =
			FEATURE_FW_CTF_BIT;
	data->smu_features[GNLD_LED_DISPLAY].smu_feature_id =
			FEATURE_LED_DISPLAY_BIT;
	data->smu_features[GNLD_FAN_CONTROL].smu_feature_id =
			FEATURE_FAN_CONTROL_BIT;
	data->smu_features[GNLD_DIDT].smu_feature_id = FEATURE_GFX_EDC_BIT;
	data->smu_features[GNLD_GFXOFF].smu_feature_id = FEATURE_GFXOFF_BIT;
	data->smu_features[GNLD_CG].smu_feature_id = FEATURE_CG_BIT;
	data->smu_features[GNLD_ACG].smu_feature_id = FEATURE_ACG_BIT;

	for (i = 0; i < GNLD_FEATURES_MAX; i++) {
		data->smu_features[i].smu_feature_bitmap =
			(uint64_t)(1ULL << data->smu_features[i].smu_feature_id);
		data->smu_features[i].allowed =
			((data->registry_data.disallowed_features >> i) & 1) ?
			false : true;
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
            hwmgr[_i0].backend = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vega12_init_dpm_defaults(hwmgr);
          free(hwmgr);
        
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
          vega12_init_dpm_defaults(hwmgr);
          free(hwmgr);
        
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
          vega12_init_dpm_defaults(hwmgr);
          free(hwmgr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

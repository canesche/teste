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
typedef  struct TYPE_10__   TYPE_5__ ;
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
typedef  size_t u32 ;
struct sumo_vid_mapping_table {size_t num_entries; TYPE_5__* entries; } ;
struct amdgpu_clock_voltage_dependency_table {size_t count; TYPE_4__* entries; } ;
struct TYPE_6__ {struct amdgpu_clock_voltage_dependency_table vddc_dependency_on_sclk; } ;
struct TYPE_7__ {TYPE_1__ dyn_state; } ;
struct TYPE_8__ {TYPE_2__ dpm; } ;
struct amdgpu_device {TYPE_3__ pm; } ;
struct TYPE_10__ {size_t vid_2bit; size_t vid_7bit; } ;
struct TYPE_9__ {size_t v; } ;

/* Variables and functions */

__attribute__((used)) static u32 kv_convert_vid2_to_vid7(struct amdgpu_device *adev,
				   struct sumo_vid_mapping_table *vid_mapping_table,
				   u32 vid_2bit)
{
	struct amdgpu_clock_voltage_dependency_table *vddc_sclk_table =
		&adev->pm.dpm.dyn_state.vddc_dependency_on_sclk;
	u32 i;

	if (vddc_sclk_table && vddc_sclk_table->count) {
		if (vid_2bit < vddc_sclk_table->count)
			return vddc_sclk_table->entries[vid_2bit].v;
		else
			return vddc_sclk_table->entries[vddc_sclk_table->count - 1].v;
	} else {
		for (i = 0; i < vid_mapping_table->num_entries; i++) {
			if (vid_mapping_table->entries[i].vid_2bit == vid_2bit)
				return vid_mapping_table->entries[i].vid_7bit;
		}
		return vid_mapping_table->entries[vid_mapping_table->num_entries - 1].vid_7bit;
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
          unsigned long vid_2bit = 100;
          int _len_adev0 = 1;
          struct amdgpu_device * adev = (struct amdgpu_device *) malloc(_len_adev0*sizeof(struct amdgpu_device));
          for(int _i0 = 0; _i0 < _len_adev0; _i0++) {
            adev[_i0].pm.dpm.dyn_state.vddc_dependency_on_sclk.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adev__i0__pm_dpm_dyn_state_vddc_dependency_on_sclk_entries0 = 1;
          adev[_i0].pm.dpm.dyn_state.vddc_dependency_on_sclk.entries = (struct TYPE_9__ *) malloc(_len_adev__i0__pm_dpm_dyn_state_vddc_dependency_on_sclk_entries0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_adev__i0__pm_dpm_dyn_state_vddc_dependency_on_sclk_entries0; _j0++) {
            adev[_i0].pm.dpm.dyn_state.vddc_dependency_on_sclk.entries->v = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_vid_mapping_table0 = 1;
          struct sumo_vid_mapping_table * vid_mapping_table = (struct sumo_vid_mapping_table *) malloc(_len_vid_mapping_table0*sizeof(struct sumo_vid_mapping_table));
          for(int _i0 = 0; _i0 < _len_vid_mapping_table0; _i0++) {
            vid_mapping_table[_i0].num_entries = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vid_mapping_table__i0__entries0 = 1;
          vid_mapping_table[_i0].entries = (struct TYPE_10__ *) malloc(_len_vid_mapping_table__i0__entries0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_vid_mapping_table__i0__entries0; _j0++) {
            vid_mapping_table[_i0].entries->vid_2bit = ((-2 * (next_i()%2)) + 1) * next_i();
        vid_mapping_table[_i0].entries->vid_7bit = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = kv_convert_vid2_to_vid7(adev,vid_mapping_table,vid_2bit);
          printf("%lu\n", benchRet); 
          free(adev);
          for(int _aux = 0; _aux < _len_vid_mapping_table0; _aux++) {
          free(vid_mapping_table[_aux].entries);
          }
          free(vid_mapping_table);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long vid_2bit = 255;
          int _len_adev0 = 65025;
          struct amdgpu_device * adev = (struct amdgpu_device *) malloc(_len_adev0*sizeof(struct amdgpu_device));
          for(int _i0 = 0; _i0 < _len_adev0; _i0++) {
            adev[_i0].pm.dpm.dyn_state.vddc_dependency_on_sclk.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adev__i0__pm_dpm_dyn_state_vddc_dependency_on_sclk_entries0 = 1;
          adev[_i0].pm.dpm.dyn_state.vddc_dependency_on_sclk.entries = (struct TYPE_9__ *) malloc(_len_adev__i0__pm_dpm_dyn_state_vddc_dependency_on_sclk_entries0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_adev__i0__pm_dpm_dyn_state_vddc_dependency_on_sclk_entries0; _j0++) {
            adev[_i0].pm.dpm.dyn_state.vddc_dependency_on_sclk.entries->v = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_vid_mapping_table0 = 65025;
          struct sumo_vid_mapping_table * vid_mapping_table = (struct sumo_vid_mapping_table *) malloc(_len_vid_mapping_table0*sizeof(struct sumo_vid_mapping_table));
          for(int _i0 = 0; _i0 < _len_vid_mapping_table0; _i0++) {
            vid_mapping_table[_i0].num_entries = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vid_mapping_table__i0__entries0 = 1;
          vid_mapping_table[_i0].entries = (struct TYPE_10__ *) malloc(_len_vid_mapping_table__i0__entries0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_vid_mapping_table__i0__entries0; _j0++) {
            vid_mapping_table[_i0].entries->vid_2bit = ((-2 * (next_i()%2)) + 1) * next_i();
        vid_mapping_table[_i0].entries->vid_7bit = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = kv_convert_vid2_to_vid7(adev,vid_mapping_table,vid_2bit);
          printf("%lu\n", benchRet); 
          free(adev);
          for(int _aux = 0; _aux < _len_vid_mapping_table0; _aux++) {
          free(vid_mapping_table[_aux].entries);
          }
          free(vid_mapping_table);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long vid_2bit = 10;
          int _len_adev0 = 100;
          struct amdgpu_device * adev = (struct amdgpu_device *) malloc(_len_adev0*sizeof(struct amdgpu_device));
          for(int _i0 = 0; _i0 < _len_adev0; _i0++) {
            adev[_i0].pm.dpm.dyn_state.vddc_dependency_on_sclk.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adev__i0__pm_dpm_dyn_state_vddc_dependency_on_sclk_entries0 = 1;
          adev[_i0].pm.dpm.dyn_state.vddc_dependency_on_sclk.entries = (struct TYPE_9__ *) malloc(_len_adev__i0__pm_dpm_dyn_state_vddc_dependency_on_sclk_entries0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_adev__i0__pm_dpm_dyn_state_vddc_dependency_on_sclk_entries0; _j0++) {
            adev[_i0].pm.dpm.dyn_state.vddc_dependency_on_sclk.entries->v = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_vid_mapping_table0 = 100;
          struct sumo_vid_mapping_table * vid_mapping_table = (struct sumo_vid_mapping_table *) malloc(_len_vid_mapping_table0*sizeof(struct sumo_vid_mapping_table));
          for(int _i0 = 0; _i0 < _len_vid_mapping_table0; _i0++) {
            vid_mapping_table[_i0].num_entries = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vid_mapping_table__i0__entries0 = 1;
          vid_mapping_table[_i0].entries = (struct TYPE_10__ *) malloc(_len_vid_mapping_table__i0__entries0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_vid_mapping_table__i0__entries0; _j0++) {
            vid_mapping_table[_i0].entries->vid_2bit = ((-2 * (next_i()%2)) + 1) * next_i();
        vid_mapping_table[_i0].entries->vid_7bit = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = kv_convert_vid2_to_vid7(adev,vid_mapping_table,vid_2bit);
          printf("%lu\n", benchRet); 
          free(adev);
          for(int _aux = 0; _aux < _len_vid_mapping_table0; _aux++) {
          free(vid_mapping_table[_aux].entries);
          }
          free(vid_mapping_table);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

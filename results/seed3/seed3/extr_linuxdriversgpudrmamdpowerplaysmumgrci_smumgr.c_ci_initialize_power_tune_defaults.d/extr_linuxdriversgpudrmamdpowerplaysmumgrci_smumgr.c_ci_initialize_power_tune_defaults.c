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
typedef  int uint32_t ;
struct pp_hwmgr {struct amdgpu_device* adev; scalar_t__ smu_backend; } ;
struct ci_smumgr {int /*<<< orphan*/ * power_tune_defaults; } ;
struct amdgpu_device {TYPE_1__* pdev; } ;
struct TYPE_2__ {int device; } ;

/* Variables and functions */
 int /*<<< orphan*/  defaults_bonaire_xt ; 
 int /*<<< orphan*/  defaults_hawaii_pro ; 
 int /*<<< orphan*/  defaults_hawaii_xt ; 
 int /*<<< orphan*/  defaults_saturn_xt ; 

__attribute__((used)) static void ci_initialize_power_tune_defaults(struct pp_hwmgr *hwmgr)
{
	struct ci_smumgr *smu_data = (struct ci_smumgr *)(hwmgr->smu_backend);
	struct amdgpu_device *adev = hwmgr->adev;
	uint32_t dev_id;

	dev_id = adev->pdev->device;

	switch (dev_id) {
	case 0x67BA:
	case 0x66B1:
		smu_data->power_tune_defaults = &defaults_hawaii_pro;
		break;
	case 0x67B8:
	case 0x66B0:
		smu_data->power_tune_defaults = &defaults_hawaii_xt;
		break;
	case 0x6640:
	case 0x6641:
	case 0x6646:
	case 0x6647:
		smu_data->power_tune_defaults = &defaults_saturn_xt;
		break;
	case 0x6649:
	case 0x6650:
	case 0x6651:
	case 0x6658:
	case 0x665C:
	case 0x665D:
	case 0x67A0:
	case 0x67A1:
	case 0x67A2:
	case 0x67A8:
	case 0x67A9:
	case 0x67AA:
	case 0x67B9:
	case 0x67BE:
	default:
		smu_data->power_tune_defaults = &defaults_bonaire_xt;
		break;
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
              int _len_hwmgr__i0__adev0 = 1;
          hwmgr[_i0].adev = (struct amdgpu_device *) malloc(_len_hwmgr__i0__adev0*sizeof(struct amdgpu_device));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__adev0; _j0++) {
              int _len_hwmgr__i0__adev_pdev0 = 1;
          hwmgr[_i0].adev->pdev = (struct TYPE_2__ *) malloc(_len_hwmgr__i0__adev_pdev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__adev_pdev0; _j0++) {
            hwmgr[_i0].adev->pdev->device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        hwmgr[_i0].smu_backend = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ci_initialize_power_tune_defaults(hwmgr);
          for(int _aux = 0; _aux < _len_hwmgr0; _aux++) {
          free(hwmgr[_aux].adev);
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
              int _len_hwmgr__i0__adev0 = 1;
          hwmgr[_i0].adev = (struct amdgpu_device *) malloc(_len_hwmgr__i0__adev0*sizeof(struct amdgpu_device));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__adev0; _j0++) {
              int _len_hwmgr__i0__adev_pdev0 = 1;
          hwmgr[_i0].adev->pdev = (struct TYPE_2__ *) malloc(_len_hwmgr__i0__adev_pdev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__adev_pdev0; _j0++) {
            hwmgr[_i0].adev->pdev->device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        hwmgr[_i0].smu_backend = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ci_initialize_power_tune_defaults(hwmgr);
          for(int _aux = 0; _aux < _len_hwmgr0; _aux++) {
          free(hwmgr[_aux].adev);
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
              int _len_hwmgr__i0__adev0 = 1;
          hwmgr[_i0].adev = (struct amdgpu_device *) malloc(_len_hwmgr__i0__adev0*sizeof(struct amdgpu_device));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__adev0; _j0++) {
              int _len_hwmgr__i0__adev_pdev0 = 1;
          hwmgr[_i0].adev->pdev = (struct TYPE_2__ *) malloc(_len_hwmgr__i0__adev_pdev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__adev_pdev0; _j0++) {
            hwmgr[_i0].adev->pdev->device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        hwmgr[_i0].smu_backend = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ci_initialize_power_tune_defaults(hwmgr);
          for(int _aux = 0; _aux < _len_hwmgr0; _aux++) {
          free(hwmgr[_aux].adev);
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

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
struct pci_dev {int /*<<< orphan*/  msi_cap; } ;
struct intel_gvt_device_info {int max_support_vgpus; int mmio_size; int gtt_start_offset; int gtt_entry_size; int gtt_entry_size_shift; int gmadr_bytes_in_cmd; int max_surface_size; int /*<<< orphan*/  msi_cap_offset; scalar_t__ mmio_bar; int /*<<< orphan*/  cfg_space_size; } ;
struct intel_gvt {TYPE_2__* dev_priv; struct intel_gvt_device_info device_info; } ;
struct TYPE_3__ {struct pci_dev* pdev; } ;
struct TYPE_4__ {TYPE_1__ drm; } ;

/* Variables and functions */
 int /*<<< orphan*/  PCI_CFG_SPACE_EXP_SIZE ; 

__attribute__((used)) static void init_device_info(struct intel_gvt *gvt)
{
	struct intel_gvt_device_info *info = &gvt->device_info;
	struct pci_dev *pdev = gvt->dev_priv->drm.pdev;

	info->max_support_vgpus = 8;
	info->cfg_space_size = PCI_CFG_SPACE_EXP_SIZE;
	info->mmio_size = 2 * 1024 * 1024;
	info->mmio_bar = 0;
	info->gtt_start_offset = 8 * 1024 * 1024;
	info->gtt_entry_size = 8;
	info->gtt_entry_size_shift = 3;
	info->gmadr_bytes_in_cmd = 8;
	info->max_surface_size = 36 * 1024 * 1024;
	info->msi_cap_offset = pdev->msi_cap;
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
          int _len_gvt0 = 1;
          struct intel_gvt * gvt = (struct intel_gvt *) malloc(_len_gvt0*sizeof(struct intel_gvt));
          for(int _i0 = 0; _i0 < _len_gvt0; _i0++) {
              int _len_gvt__i0__dev_priv0 = 1;
          gvt[_i0].dev_priv = (struct TYPE_4__ *) malloc(_len_gvt__i0__dev_priv0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_gvt__i0__dev_priv0; _j0++) {
              int _len_gvt__i0__dev_priv_drm_pdev0 = 1;
          gvt[_i0].dev_priv->drm.pdev = (struct pci_dev *) malloc(_len_gvt__i0__dev_priv_drm_pdev0*sizeof(struct pci_dev));
          for(int _j0 = 0; _j0 < _len_gvt__i0__dev_priv_drm_pdev0; _j0++) {
            gvt[_i0].dev_priv->drm.pdev->msi_cap = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        gvt[_i0].device_info.max_support_vgpus = ((-2 * (next_i()%2)) + 1) * next_i();
        gvt[_i0].device_info.mmio_size = ((-2 * (next_i()%2)) + 1) * next_i();
        gvt[_i0].device_info.gtt_start_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        gvt[_i0].device_info.gtt_entry_size = ((-2 * (next_i()%2)) + 1) * next_i();
        gvt[_i0].device_info.gtt_entry_size_shift = ((-2 * (next_i()%2)) + 1) * next_i();
        gvt[_i0].device_info.gmadr_bytes_in_cmd = ((-2 * (next_i()%2)) + 1) * next_i();
        gvt[_i0].device_info.max_surface_size = ((-2 * (next_i()%2)) + 1) * next_i();
        gvt[_i0].device_info.msi_cap_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        gvt[_i0].device_info.mmio_bar = ((-2 * (next_i()%2)) + 1) * next_i();
        gvt[_i0].device_info.cfg_space_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_device_info(gvt);
          for(int _aux = 0; _aux < _len_gvt0; _aux++) {
          free(gvt[_aux].dev_priv);
          }
          free(gvt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_gvt0 = 65025;
          struct intel_gvt * gvt = (struct intel_gvt *) malloc(_len_gvt0*sizeof(struct intel_gvt));
          for(int _i0 = 0; _i0 < _len_gvt0; _i0++) {
              int _len_gvt__i0__dev_priv0 = 1;
          gvt[_i0].dev_priv = (struct TYPE_4__ *) malloc(_len_gvt__i0__dev_priv0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_gvt__i0__dev_priv0; _j0++) {
              int _len_gvt__i0__dev_priv_drm_pdev0 = 1;
          gvt[_i0].dev_priv->drm.pdev = (struct pci_dev *) malloc(_len_gvt__i0__dev_priv_drm_pdev0*sizeof(struct pci_dev));
          for(int _j0 = 0; _j0 < _len_gvt__i0__dev_priv_drm_pdev0; _j0++) {
            gvt[_i0].dev_priv->drm.pdev->msi_cap = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        gvt[_i0].device_info.max_support_vgpus = ((-2 * (next_i()%2)) + 1) * next_i();
        gvt[_i0].device_info.mmio_size = ((-2 * (next_i()%2)) + 1) * next_i();
        gvt[_i0].device_info.gtt_start_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        gvt[_i0].device_info.gtt_entry_size = ((-2 * (next_i()%2)) + 1) * next_i();
        gvt[_i0].device_info.gtt_entry_size_shift = ((-2 * (next_i()%2)) + 1) * next_i();
        gvt[_i0].device_info.gmadr_bytes_in_cmd = ((-2 * (next_i()%2)) + 1) * next_i();
        gvt[_i0].device_info.max_surface_size = ((-2 * (next_i()%2)) + 1) * next_i();
        gvt[_i0].device_info.msi_cap_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        gvt[_i0].device_info.mmio_bar = ((-2 * (next_i()%2)) + 1) * next_i();
        gvt[_i0].device_info.cfg_space_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_device_info(gvt);
          for(int _aux = 0; _aux < _len_gvt0; _aux++) {
          free(gvt[_aux].dev_priv);
          }
          free(gvt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_gvt0 = 100;
          struct intel_gvt * gvt = (struct intel_gvt *) malloc(_len_gvt0*sizeof(struct intel_gvt));
          for(int _i0 = 0; _i0 < _len_gvt0; _i0++) {
              int _len_gvt__i0__dev_priv0 = 1;
          gvt[_i0].dev_priv = (struct TYPE_4__ *) malloc(_len_gvt__i0__dev_priv0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_gvt__i0__dev_priv0; _j0++) {
              int _len_gvt__i0__dev_priv_drm_pdev0 = 1;
          gvt[_i0].dev_priv->drm.pdev = (struct pci_dev *) malloc(_len_gvt__i0__dev_priv_drm_pdev0*sizeof(struct pci_dev));
          for(int _j0 = 0; _j0 < _len_gvt__i0__dev_priv_drm_pdev0; _j0++) {
            gvt[_i0].dev_priv->drm.pdev->msi_cap = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        gvt[_i0].device_info.max_support_vgpus = ((-2 * (next_i()%2)) + 1) * next_i();
        gvt[_i0].device_info.mmio_size = ((-2 * (next_i()%2)) + 1) * next_i();
        gvt[_i0].device_info.gtt_start_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        gvt[_i0].device_info.gtt_entry_size = ((-2 * (next_i()%2)) + 1) * next_i();
        gvt[_i0].device_info.gtt_entry_size_shift = ((-2 * (next_i()%2)) + 1) * next_i();
        gvt[_i0].device_info.gmadr_bytes_in_cmd = ((-2 * (next_i()%2)) + 1) * next_i();
        gvt[_i0].device_info.max_surface_size = ((-2 * (next_i()%2)) + 1) * next_i();
        gvt[_i0].device_info.msi_cap_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        gvt[_i0].device_info.mmio_bar = ((-2 * (next_i()%2)) + 1) * next_i();
        gvt[_i0].device_info.cfg_space_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_device_info(gvt);
          for(int _aux = 0; _aux < _len_gvt0; _aux++) {
          free(gvt[_aux].dev_priv);
          }
          free(gvt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

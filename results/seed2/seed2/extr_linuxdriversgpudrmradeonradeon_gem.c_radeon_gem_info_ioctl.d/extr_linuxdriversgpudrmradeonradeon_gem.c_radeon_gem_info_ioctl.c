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
typedef  int u64 ;
struct ttm_mem_type_manager {scalar_t__ size; } ;
struct TYPE_6__ {int /*<<< orphan*/  gtt_size; int /*<<< orphan*/  visible_vram_size; } ;
struct TYPE_4__ {struct ttm_mem_type_manager* man; } ;
struct TYPE_5__ {TYPE_1__ bdev; } ;
struct radeon_device {scalar_t__ gart_pin_size; TYPE_3__ mc; scalar_t__ vram_pin_size; TYPE_2__ mman; } ;
struct drm_radeon_gem_info {int vram_size; int /*<<< orphan*/  gart_size; int /*<<< orphan*/  vram_visible; } ;
struct drm_file {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;

/* Variables and functions */
 int PAGE_SHIFT ; 
 size_t TTM_PL_VRAM ; 

int radeon_gem_info_ioctl(struct drm_device *dev, void *data,
			  struct drm_file *filp)
{
	struct radeon_device *rdev = dev->dev_private;
	struct drm_radeon_gem_info *args = data;
	struct ttm_mem_type_manager *man;

	man = &rdev->mman.bdev.man[TTM_PL_VRAM];

	args->vram_size = (u64)man->size << PAGE_SHIFT;
	args->vram_visible = rdev->mc.visible_vram_size;
	args->vram_visible -= rdev->vram_pin_size;
	args->gart_size = rdev->mc.gtt_size;
	args->gart_size -= rdev->gart_pin_size;

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
          int _len_dev0 = 1;
          struct drm_device * dev = (struct drm_device *) malloc(_len_dev0*sizeof(struct drm_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__dev_private0 = 1;
          dev[_i0].dev_private = (struct radeon_device *) malloc(_len_dev__i0__dev_private0*sizeof(struct radeon_device));
          for(int _j0 = 0; _j0 < _len_dev__i0__dev_private0; _j0++) {
            dev[_i0].dev_private->gart_pin_size = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].dev_private->mc.gtt_size = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].dev_private->mc.visible_vram_size = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].dev_private->vram_pin_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__dev_private_mman_bdev_man0 = 1;
          dev[_i0].dev_private->mman.bdev.man = (struct ttm_mem_type_manager *) malloc(_len_dev__i0__dev_private_mman_bdev_man0*sizeof(struct ttm_mem_type_manager));
          for(int _j0 = 0; _j0 < _len_dev__i0__dev_private_mman_bdev_man0; _j0++) {
            dev[_i0].dev_private->mman.bdev.man->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          void * data;
          int _len_filp0 = 1;
          struct drm_file * filp = (struct drm_file *) malloc(_len_filp0*sizeof(struct drm_file));
          for(int _i0 = 0; _i0 < _len_filp0; _i0++) {
            filp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = radeon_gem_info_ioctl(dev,data,filp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].dev_private);
          }
          free(dev);
          free(filp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dev0 = 65025;
          struct drm_device * dev = (struct drm_device *) malloc(_len_dev0*sizeof(struct drm_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__dev_private0 = 1;
          dev[_i0].dev_private = (struct radeon_device *) malloc(_len_dev__i0__dev_private0*sizeof(struct radeon_device));
          for(int _j0 = 0; _j0 < _len_dev__i0__dev_private0; _j0++) {
            dev[_i0].dev_private->gart_pin_size = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].dev_private->mc.gtt_size = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].dev_private->mc.visible_vram_size = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].dev_private->vram_pin_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__dev_private_mman_bdev_man0 = 1;
          dev[_i0].dev_private->mman.bdev.man = (struct ttm_mem_type_manager *) malloc(_len_dev__i0__dev_private_mman_bdev_man0*sizeof(struct ttm_mem_type_manager));
          for(int _j0 = 0; _j0 < _len_dev__i0__dev_private_mman_bdev_man0; _j0++) {
            dev[_i0].dev_private->mman.bdev.man->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          void * data;
          int _len_filp0 = 65025;
          struct drm_file * filp = (struct drm_file *) malloc(_len_filp0*sizeof(struct drm_file));
          for(int _i0 = 0; _i0 < _len_filp0; _i0++) {
            filp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = radeon_gem_info_ioctl(dev,data,filp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].dev_private);
          }
          free(dev);
          free(filp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dev0 = 100;
          struct drm_device * dev = (struct drm_device *) malloc(_len_dev0*sizeof(struct drm_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__dev_private0 = 1;
          dev[_i0].dev_private = (struct radeon_device *) malloc(_len_dev__i0__dev_private0*sizeof(struct radeon_device));
          for(int _j0 = 0; _j0 < _len_dev__i0__dev_private0; _j0++) {
            dev[_i0].dev_private->gart_pin_size = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].dev_private->mc.gtt_size = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].dev_private->mc.visible_vram_size = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].dev_private->vram_pin_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__dev_private_mman_bdev_man0 = 1;
          dev[_i0].dev_private->mman.bdev.man = (struct ttm_mem_type_manager *) malloc(_len_dev__i0__dev_private_mman_bdev_man0*sizeof(struct ttm_mem_type_manager));
          for(int _j0 = 0; _j0 < _len_dev__i0__dev_private_mman_bdev_man0; _j0++) {
            dev[_i0].dev_private->mman.bdev.man->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          void * data;
          int _len_filp0 = 100;
          struct drm_file * filp = (struct drm_file *) malloc(_len_filp0*sizeof(struct drm_file));
          for(int _i0 = 0; _i0 < _len_filp0; _i0++) {
            filp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = radeon_gem_info_ioctl(dev,data,filp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].dev_private);
          }
          free(dev);
          free(filp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct TYPE_2__ {int child_dev_num; struct child_device_config* child_dev; int /*<<< orphan*/  int_tv_support; } ;
struct drm_i915_private {TYPE_1__ vbt; } ;
struct child_device_config {int device_type; scalar_t__ addin_offset; } ;

/* Variables and functions */
#define  DEVICE_TYPE_INT_TV 130 
#define  DEVICE_TYPE_TV 129 
#define  DEVICE_TYPE_TV_SVIDEO_COMPOSITE 128 

bool intel_bios_is_tv_present(struct drm_i915_private *dev_priv)
{
	const struct child_device_config *child;
	int i;

	if (!dev_priv->vbt.int_tv_support)
		return false;

	if (!dev_priv->vbt.child_dev_num)
		return true;

	for (i = 0; i < dev_priv->vbt.child_dev_num; i++) {
		child = dev_priv->vbt.child_dev + i;
		/*
		 * If the device type is not TV, continue.
		 */
		switch (child->device_type) {
		case DEVICE_TYPE_INT_TV:
		case DEVICE_TYPE_TV:
		case DEVICE_TYPE_TV_SVIDEO_COMPOSITE:
			break;
		default:
			continue;
		}
		/* Only when the addin_offset is non-zero, it is regarded
		 * as present.
		 */
		if (child->addin_offset)
			return true;
	}

	return false;
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
          int _len_dev_priv0 = 1;
          struct drm_i915_private * dev_priv = (struct drm_i915_private *) malloc(_len_dev_priv0*sizeof(struct drm_i915_private));
          for(int _i0 = 0; _i0 < _len_dev_priv0; _i0++) {
            dev_priv[_i0].vbt.child_dev_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev_priv__i0__vbt_child_dev0 = 1;
          dev_priv[_i0].vbt.child_dev = (struct child_device_config *) malloc(_len_dev_priv__i0__vbt_child_dev0*sizeof(struct child_device_config));
          for(int _j0 = 0; _j0 < _len_dev_priv__i0__vbt_child_dev0; _j0++) {
            dev_priv[_i0].vbt.child_dev->device_type = ((-2 * (next_i()%2)) + 1) * next_i();
        dev_priv[_i0].vbt.child_dev->addin_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dev_priv[_i0].vbt.int_tv_support = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = intel_bios_is_tv_present(dev_priv);
          printf("%d\n", benchRet); 
          free(dev_priv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dev_priv0 = 65025;
          struct drm_i915_private * dev_priv = (struct drm_i915_private *) malloc(_len_dev_priv0*sizeof(struct drm_i915_private));
          for(int _i0 = 0; _i0 < _len_dev_priv0; _i0++) {
            dev_priv[_i0].vbt.child_dev_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev_priv__i0__vbt_child_dev0 = 1;
          dev_priv[_i0].vbt.child_dev = (struct child_device_config *) malloc(_len_dev_priv__i0__vbt_child_dev0*sizeof(struct child_device_config));
          for(int _j0 = 0; _j0 < _len_dev_priv__i0__vbt_child_dev0; _j0++) {
            dev_priv[_i0].vbt.child_dev->device_type = ((-2 * (next_i()%2)) + 1) * next_i();
        dev_priv[_i0].vbt.child_dev->addin_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dev_priv[_i0].vbt.int_tv_support = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = intel_bios_is_tv_present(dev_priv);
          printf("%d\n", benchRet); 
          free(dev_priv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dev_priv0 = 100;
          struct drm_i915_private * dev_priv = (struct drm_i915_private *) malloc(_len_dev_priv0*sizeof(struct drm_i915_private));
          for(int _i0 = 0; _i0 < _len_dev_priv0; _i0++) {
            dev_priv[_i0].vbt.child_dev_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev_priv__i0__vbt_child_dev0 = 1;
          dev_priv[_i0].vbt.child_dev = (struct child_device_config *) malloc(_len_dev_priv__i0__vbt_child_dev0*sizeof(struct child_device_config));
          for(int _j0 = 0; _j0 < _len_dev_priv__i0__vbt_child_dev0; _j0++) {
            dev_priv[_i0].vbt.child_dev->device_type = ((-2 * (next_i()%2)) + 1) * next_i();
        dev_priv[_i0].vbt.child_dev->addin_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dev_priv[_i0].vbt.int_tv_support = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = intel_bios_is_tv_present(dev_priv);
          printf("%d\n", benchRet); 
          free(dev_priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

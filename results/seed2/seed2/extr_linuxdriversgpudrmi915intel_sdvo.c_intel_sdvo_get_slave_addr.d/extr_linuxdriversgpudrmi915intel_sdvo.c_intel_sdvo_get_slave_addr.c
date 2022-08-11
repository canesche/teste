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
struct sdvo_device_mapping {int slave_addr; } ;
struct intel_sdvo {scalar_t__ port; } ;
struct TYPE_2__ {struct sdvo_device_mapping* sdvo_mappings; } ;
struct drm_i915_private {TYPE_1__ vbt; } ;

/* Variables and functions */
 scalar_t__ PORT_B ; 

__attribute__((used)) static u8
intel_sdvo_get_slave_addr(struct drm_i915_private *dev_priv,
			  struct intel_sdvo *sdvo)
{
	struct sdvo_device_mapping *my_mapping, *other_mapping;

	if (sdvo->port == PORT_B) {
		my_mapping = &dev_priv->vbt.sdvo_mappings[0];
		other_mapping = &dev_priv->vbt.sdvo_mappings[1];
	} else {
		my_mapping = &dev_priv->vbt.sdvo_mappings[1];
		other_mapping = &dev_priv->vbt.sdvo_mappings[0];
	}

	/* If the BIOS described our SDVO device, take advantage of it. */
	if (my_mapping->slave_addr)
		return my_mapping->slave_addr;

	/*
	 * If the BIOS only described a different SDVO device, use the
	 * address that it isn't using.
	 */
	if (other_mapping->slave_addr) {
		if (other_mapping->slave_addr == 0x70)
			return 0x72;
		else
			return 0x70;
	}

	/*
	 * No SDVO device info is found for another DVO port,
	 * so use mapping assumption we had before BIOS parsing.
	 */
	if (sdvo->port == PORT_B)
		return 0x70;
	else
		return 0x72;
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
              int _len_dev_priv__i0__vbt_sdvo_mappings0 = 1;
          dev_priv[_i0].vbt.sdvo_mappings = (struct sdvo_device_mapping *) malloc(_len_dev_priv__i0__vbt_sdvo_mappings0*sizeof(struct sdvo_device_mapping));
          for(int _j0 = 0; _j0 < _len_dev_priv__i0__vbt_sdvo_mappings0; _j0++) {
            dev_priv[_i0].vbt.sdvo_mappings->slave_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_sdvo0 = 1;
          struct intel_sdvo * sdvo = (struct intel_sdvo *) malloc(_len_sdvo0*sizeof(struct intel_sdvo));
          for(int _i0 = 0; _i0 < _len_sdvo0; _i0++) {
            sdvo[_i0].port = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = intel_sdvo_get_slave_addr(dev_priv,sdvo);
          printf("%d\n", benchRet); 
          free(dev_priv);
          free(sdvo);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dev_priv0 = 65025;
          struct drm_i915_private * dev_priv = (struct drm_i915_private *) malloc(_len_dev_priv0*sizeof(struct drm_i915_private));
          for(int _i0 = 0; _i0 < _len_dev_priv0; _i0++) {
              int _len_dev_priv__i0__vbt_sdvo_mappings0 = 1;
          dev_priv[_i0].vbt.sdvo_mappings = (struct sdvo_device_mapping *) malloc(_len_dev_priv__i0__vbt_sdvo_mappings0*sizeof(struct sdvo_device_mapping));
          for(int _j0 = 0; _j0 < _len_dev_priv__i0__vbt_sdvo_mappings0; _j0++) {
            dev_priv[_i0].vbt.sdvo_mappings->slave_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_sdvo0 = 65025;
          struct intel_sdvo * sdvo = (struct intel_sdvo *) malloc(_len_sdvo0*sizeof(struct intel_sdvo));
          for(int _i0 = 0; _i0 < _len_sdvo0; _i0++) {
            sdvo[_i0].port = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = intel_sdvo_get_slave_addr(dev_priv,sdvo);
          printf("%d\n", benchRet); 
          free(dev_priv);
          free(sdvo);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dev_priv0 = 100;
          struct drm_i915_private * dev_priv = (struct drm_i915_private *) malloc(_len_dev_priv0*sizeof(struct drm_i915_private));
          for(int _i0 = 0; _i0 < _len_dev_priv0; _i0++) {
              int _len_dev_priv__i0__vbt_sdvo_mappings0 = 1;
          dev_priv[_i0].vbt.sdvo_mappings = (struct sdvo_device_mapping *) malloc(_len_dev_priv__i0__vbt_sdvo_mappings0*sizeof(struct sdvo_device_mapping));
          for(int _j0 = 0; _j0 < _len_dev_priv__i0__vbt_sdvo_mappings0; _j0++) {
            dev_priv[_i0].vbt.sdvo_mappings->slave_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_sdvo0 = 100;
          struct intel_sdvo * sdvo = (struct intel_sdvo *) malloc(_len_sdvo0*sizeof(struct intel_sdvo));
          for(int _i0 = 0; _i0 < _len_sdvo0; _i0++) {
            sdvo[_i0].port = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = intel_sdvo_get_slave_addr(dev_priv,sdvo);
          printf("%d\n", benchRet); 
          free(dev_priv);
          free(sdvo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct TYPE_2__ {struct ddi_vbt_port_info* ddi_port_info; } ;
struct drm_i915_private {TYPE_1__ vbt; } ;
struct ddi_vbt_port_info {int supports_dvi; int supports_hdmi; int supports_dp; } ;
typedef  enum port { ____Placeholder_port } port ;

/* Variables and functions */
 int I915_MAX_PORTS ; 
 int PORT_A ; 
 int PORT_E ; 

__attribute__((used)) static void
init_vbt_missing_defaults(struct drm_i915_private *dev_priv)
{
	enum port port;

	for (port = PORT_A; port < I915_MAX_PORTS; port++) {
		struct ddi_vbt_port_info *info =
			&dev_priv->vbt.ddi_port_info[port];

		info->supports_dvi = (port != PORT_A && port != PORT_E);
		info->supports_hdmi = info->supports_dvi;
		info->supports_dp = (port != PORT_E);
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
          int _len_dev_priv0 = 1;
          struct drm_i915_private * dev_priv = (struct drm_i915_private *) malloc(_len_dev_priv0*sizeof(struct drm_i915_private));
          for(int _i0 = 0; _i0 < _len_dev_priv0; _i0++) {
              int _len_dev_priv__i0__vbt_ddi_port_info0 = 1;
          dev_priv[_i0].vbt.ddi_port_info = (struct ddi_vbt_port_info *) malloc(_len_dev_priv__i0__vbt_ddi_port_info0*sizeof(struct ddi_vbt_port_info));
          for(int _j0 = 0; _j0 < _len_dev_priv__i0__vbt_ddi_port_info0; _j0++) {
            dev_priv[_i0].vbt.ddi_port_info->supports_dvi = ((-2 * (next_i()%2)) + 1) * next_i();
        dev_priv[_i0].vbt.ddi_port_info->supports_hdmi = ((-2 * (next_i()%2)) + 1) * next_i();
        dev_priv[_i0].vbt.ddi_port_info->supports_dp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          init_vbt_missing_defaults(dev_priv);
          free(dev_priv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dev_priv0 = 65025;
          struct drm_i915_private * dev_priv = (struct drm_i915_private *) malloc(_len_dev_priv0*sizeof(struct drm_i915_private));
          for(int _i0 = 0; _i0 < _len_dev_priv0; _i0++) {
              int _len_dev_priv__i0__vbt_ddi_port_info0 = 1;
          dev_priv[_i0].vbt.ddi_port_info = (struct ddi_vbt_port_info *) malloc(_len_dev_priv__i0__vbt_ddi_port_info0*sizeof(struct ddi_vbt_port_info));
          for(int _j0 = 0; _j0 < _len_dev_priv__i0__vbt_ddi_port_info0; _j0++) {
            dev_priv[_i0].vbt.ddi_port_info->supports_dvi = ((-2 * (next_i()%2)) + 1) * next_i();
        dev_priv[_i0].vbt.ddi_port_info->supports_hdmi = ((-2 * (next_i()%2)) + 1) * next_i();
        dev_priv[_i0].vbt.ddi_port_info->supports_dp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          init_vbt_missing_defaults(dev_priv);
          free(dev_priv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dev_priv0 = 100;
          struct drm_i915_private * dev_priv = (struct drm_i915_private *) malloc(_len_dev_priv0*sizeof(struct drm_i915_private));
          for(int _i0 = 0; _i0 < _len_dev_priv0; _i0++) {
              int _len_dev_priv__i0__vbt_ddi_port_info0 = 1;
          dev_priv[_i0].vbt.ddi_port_info = (struct ddi_vbt_port_info *) malloc(_len_dev_priv__i0__vbt_ddi_port_info0*sizeof(struct ddi_vbt_port_info));
          for(int _j0 = 0; _j0 < _len_dev_priv__i0__vbt_ddi_port_info0; _j0++) {
            dev_priv[_i0].vbt.ddi_port_info->supports_dvi = ((-2 * (next_i()%2)) + 1) * next_i();
        dev_priv[_i0].vbt.ddi_port_info->supports_hdmi = ((-2 * (next_i()%2)) + 1) * next_i();
        dev_priv[_i0].vbt.ddi_port_info->supports_dp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          init_vbt_missing_defaults(dev_priv);
          free(dev_priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

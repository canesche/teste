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

/* Type definitions */
struct intel_shared_dpll {int dummy; } ;
struct drm_i915_private {struct intel_shared_dpll* shared_dplls; } ;
typedef  enum intel_dpll_id { ____Placeholder_intel_dpll_id } intel_dpll_id ;

/* Variables and functions */

struct intel_shared_dpll *
intel_get_shared_dpll_by_id(struct drm_i915_private *dev_priv,
			    enum intel_dpll_id id)
{
	return &dev_priv->shared_dplls[id];
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
          enum intel_dpll_id id = 100;
          int _len_dev_priv0 = 1;
          struct drm_i915_private * dev_priv = (struct drm_i915_private *) malloc(_len_dev_priv0*sizeof(struct drm_i915_private));
          for(int _i0 = 0; _i0 < _len_dev_priv0; _i0++) {
              int _len_dev_priv__i0__shared_dplls0 = 1;
          dev_priv[_i0].shared_dplls = (struct intel_shared_dpll *) malloc(_len_dev_priv__i0__shared_dplls0*sizeof(struct intel_shared_dpll));
          for(int _j0 = 0; _j0 < _len_dev_priv__i0__shared_dplls0; _j0++) {
            dev_priv[_i0].shared_dplls->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct intel_shared_dpll * benchRet = intel_get_shared_dpll_by_id(dev_priv,id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_dev_priv0; _aux++) {
          free(dev_priv[_aux].shared_dplls);
          }
          free(dev_priv);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum intel_dpll_id id = 255;
          int _len_dev_priv0 = 65025;
          struct drm_i915_private * dev_priv = (struct drm_i915_private *) malloc(_len_dev_priv0*sizeof(struct drm_i915_private));
          for(int _i0 = 0; _i0 < _len_dev_priv0; _i0++) {
              int _len_dev_priv__i0__shared_dplls0 = 1;
          dev_priv[_i0].shared_dplls = (struct intel_shared_dpll *) malloc(_len_dev_priv__i0__shared_dplls0*sizeof(struct intel_shared_dpll));
          for(int _j0 = 0; _j0 < _len_dev_priv__i0__shared_dplls0; _j0++) {
            dev_priv[_i0].shared_dplls->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct intel_shared_dpll * benchRet = intel_get_shared_dpll_by_id(dev_priv,id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_dev_priv0; _aux++) {
          free(dev_priv[_aux].shared_dplls);
          }
          free(dev_priv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum intel_dpll_id id = 10;
          int _len_dev_priv0 = 100;
          struct drm_i915_private * dev_priv = (struct drm_i915_private *) malloc(_len_dev_priv0*sizeof(struct drm_i915_private));
          for(int _i0 = 0; _i0 < _len_dev_priv0; _i0++) {
              int _len_dev_priv__i0__shared_dplls0 = 1;
          dev_priv[_i0].shared_dplls = (struct intel_shared_dpll *) malloc(_len_dev_priv__i0__shared_dplls0*sizeof(struct intel_shared_dpll));
          for(int _j0 = 0; _j0 < _len_dev_priv__i0__shared_dplls0; _j0++) {
            dev_priv[_i0].shared_dplls->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct intel_shared_dpll * benchRet = intel_get_shared_dpll_by_id(dev_priv,id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_dev_priv0; _aux++) {
          free(dev_priv[_aux].shared_dplls);
          }
          free(dev_priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

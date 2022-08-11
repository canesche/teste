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
struct drm_psb_private {int child_dev_num; struct child_device_config* child_dev; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;
struct child_device_config {scalar_t__ dvo_port; scalar_t__ device_type; } ;

/* Variables and functions */
 scalar_t__ DEVICE_TYPE_eDP ; 
 scalar_t__ PORT_IDPC ; 

__attribute__((used)) static bool cdv_intel_dpc_is_edp(struct drm_device *dev)
{
	struct drm_psb_private *dev_priv = dev->dev_private;
	struct child_device_config *p_child;
	int i;

	if (!dev_priv->child_dev_num)
		return false;

	for (i = 0; i < dev_priv->child_dev_num; i++) {
		p_child = dev_priv->child_dev + i;

		if (p_child->dvo_port == PORT_IDPC &&
		    p_child->device_type == DEVICE_TYPE_eDP)
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
          int _len_dev0 = 1;
          struct drm_device * dev = (struct drm_device *) malloc(_len_dev0*sizeof(struct drm_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__dev_private0 = 1;
          dev[_i0].dev_private = (struct drm_psb_private *) malloc(_len_dev__i0__dev_private0*sizeof(struct drm_psb_private));
          for(int _j0 = 0; _j0 < _len_dev__i0__dev_private0; _j0++) {
            dev[_i0].dev_private->child_dev_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__dev_private_child_dev0 = 1;
          dev[_i0].dev_private->child_dev = (struct child_device_config *) malloc(_len_dev__i0__dev_private_child_dev0*sizeof(struct child_device_config));
          for(int _j0 = 0; _j0 < _len_dev__i0__dev_private_child_dev0; _j0++) {
            dev[_i0].dev_private->child_dev->dvo_port = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].dev_private->child_dev->device_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = cdv_intel_dpc_is_edp(dev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].dev_private);
          }
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dev0 = 65025;
          struct drm_device * dev = (struct drm_device *) malloc(_len_dev0*sizeof(struct drm_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__dev_private0 = 1;
          dev[_i0].dev_private = (struct drm_psb_private *) malloc(_len_dev__i0__dev_private0*sizeof(struct drm_psb_private));
          for(int _j0 = 0; _j0 < _len_dev__i0__dev_private0; _j0++) {
            dev[_i0].dev_private->child_dev_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__dev_private_child_dev0 = 1;
          dev[_i0].dev_private->child_dev = (struct child_device_config *) malloc(_len_dev__i0__dev_private_child_dev0*sizeof(struct child_device_config));
          for(int _j0 = 0; _j0 < _len_dev__i0__dev_private_child_dev0; _j0++) {
            dev[_i0].dev_private->child_dev->dvo_port = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].dev_private->child_dev->device_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = cdv_intel_dpc_is_edp(dev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].dev_private);
          }
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dev0 = 100;
          struct drm_device * dev = (struct drm_device *) malloc(_len_dev0*sizeof(struct drm_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__dev_private0 = 1;
          dev[_i0].dev_private = (struct drm_psb_private *) malloc(_len_dev__i0__dev_private0*sizeof(struct drm_psb_private));
          for(int _j0 = 0; _j0 < _len_dev__i0__dev_private0; _j0++) {
            dev[_i0].dev_private->child_dev_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__dev_private_child_dev0 = 1;
          dev[_i0].dev_private->child_dev = (struct child_device_config *) malloc(_len_dev__i0__dev_private_child_dev0*sizeof(struct child_device_config));
          for(int _j0 = 0; _j0 < _len_dev__i0__dev_private_child_dev0; _j0++) {
            dev[_i0].dev_private->child_dev->dvo_port = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].dev_private->child_dev->device_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = cdv_intel_dpc_is_edp(dev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].dev_private);
          }
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

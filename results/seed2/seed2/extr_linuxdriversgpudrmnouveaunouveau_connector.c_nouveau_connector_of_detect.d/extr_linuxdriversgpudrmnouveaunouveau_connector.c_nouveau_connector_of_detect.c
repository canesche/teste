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
struct nouveau_encoder {int dummy; } ;
struct drm_connector {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static struct nouveau_encoder *
nouveau_connector_of_detect(struct drm_connector *connector)
{
#ifdef __powerpc__
	struct drm_device *dev = connector->dev;
	struct nouveau_connector *nv_connector = nouveau_connector(connector);
	struct nouveau_encoder *nv_encoder;
	struct device_node *cn, *dn = pci_device_to_OF_node(dev->pdev);

	if (!dn ||
	    !((nv_encoder = find_encoder(connector, DCB_OUTPUT_TMDS)) ||
	      (nv_encoder = find_encoder(connector, DCB_OUTPUT_ANALOG))))
		return NULL;

	for_each_child_of_node(dn, cn) {
		const char *name = of_get_property(cn, "name", NULL);
		const void *edid = of_get_property(cn, "EDID", NULL);
		int idx = name ? name[strlen(name) - 1] - 'A' : 0;

		if (nv_encoder->dcb->i2c_index == idx && edid) {
			nv_connector->edid =
				kmemdup(edid, EDID_LENGTH, GFP_KERNEL);
			of_node_put(cn);
			return nv_encoder;
		}
	}
#endif
	return NULL;
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
          int _len_connector0 = 1;
          struct drm_connector * connector = (struct drm_connector *) malloc(_len_connector0*sizeof(struct drm_connector));
          for(int _i0 = 0; _i0 < _len_connector0; _i0++) {
            connector[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct nouveau_encoder * benchRet = nouveau_connector_of_detect(connector);
          printf("%d\n", (*benchRet).dummy);
          free(connector);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_connector0 = 65025;
          struct drm_connector * connector = (struct drm_connector *) malloc(_len_connector0*sizeof(struct drm_connector));
          for(int _i0 = 0; _i0 < _len_connector0; _i0++) {
            connector[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct nouveau_encoder * benchRet = nouveau_connector_of_detect(connector);
          printf("%d\n", (*benchRet).dummy);
          free(connector);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_connector0 = 100;
          struct drm_connector * connector = (struct drm_connector *) malloc(_len_connector0*sizeof(struct drm_connector));
          for(int _i0 = 0; _i0 < _len_connector0; _i0++) {
            connector[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct nouveau_encoder * benchRet = nouveau_connector_of_detect(connector);
          printf("%d\n", (*benchRet).dummy);
          free(connector);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

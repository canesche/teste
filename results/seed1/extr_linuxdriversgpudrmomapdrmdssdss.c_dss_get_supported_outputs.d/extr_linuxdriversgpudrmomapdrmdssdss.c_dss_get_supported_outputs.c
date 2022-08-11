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
struct dss_device {TYPE_1__* feat; } ;
typedef  enum omap_dss_output_id { ____Placeholder_omap_dss_output_id } omap_dss_output_id ;
typedef  enum omap_channel { ____Placeholder_omap_channel } omap_channel ;
struct TYPE_2__ {int* outputs; } ;

/* Variables and functions */

enum omap_dss_output_id dss_get_supported_outputs(struct dss_device *dss,
						  enum omap_channel channel)
{
	return dss->feat->outputs[channel];
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
          enum omap_channel channel = 0;
          int _len_dss0 = 1;
          struct dss_device * dss = (struct dss_device *) malloc(_len_dss0*sizeof(struct dss_device));
          for(int _i0 = 0; _i0 < _len_dss0; _i0++) {
              int _len_dss__i0__feat0 = 1;
          dss[_i0].feat = (struct TYPE_2__ *) malloc(_len_dss__i0__feat0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dss__i0__feat0; _j0++) {
              int _len_dss__i0__feat_outputs0 = 1;
          dss[_i0].feat->outputs = (int *) malloc(_len_dss__i0__feat_outputs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dss__i0__feat_outputs0; _j0++) {
            dss[_i0].feat->outputs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          enum omap_dss_output_id benchRet = dss_get_supported_outputs(dss,channel);
          for(int _aux = 0; _aux < _len_dss0; _aux++) {
          free(dss[_aux].feat);
          }
          free(dss);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum omap_channel channel = 0;
          int _len_dss0 = 65025;
          struct dss_device * dss = (struct dss_device *) malloc(_len_dss0*sizeof(struct dss_device));
          for(int _i0 = 0; _i0 < _len_dss0; _i0++) {
              int _len_dss__i0__feat0 = 1;
          dss[_i0].feat = (struct TYPE_2__ *) malloc(_len_dss__i0__feat0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dss__i0__feat0; _j0++) {
              int _len_dss__i0__feat_outputs0 = 1;
          dss[_i0].feat->outputs = (int *) malloc(_len_dss__i0__feat_outputs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dss__i0__feat_outputs0; _j0++) {
            dss[_i0].feat->outputs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          enum omap_dss_output_id benchRet = dss_get_supported_outputs(dss,channel);
          for(int _aux = 0; _aux < _len_dss0; _aux++) {
          free(dss[_aux].feat);
          }
          free(dss);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum omap_channel channel = 0;
          int _len_dss0 = 100;
          struct dss_device * dss = (struct dss_device *) malloc(_len_dss0*sizeof(struct dss_device));
          for(int _i0 = 0; _i0 < _len_dss0; _i0++) {
              int _len_dss__i0__feat0 = 1;
          dss[_i0].feat = (struct TYPE_2__ *) malloc(_len_dss__i0__feat0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dss__i0__feat0; _j0++) {
              int _len_dss__i0__feat_outputs0 = 1;
          dss[_i0].feat->outputs = (int *) malloc(_len_dss__i0__feat_outputs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dss__i0__feat_outputs0; _j0++) {
            dss[_i0].feat->outputs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          enum omap_dss_output_id benchRet = dss_get_supported_outputs(dss,channel);
          for(int _aux = 0; _aux < _len_dss0; _aux++) {
          free(dss[_aux].feat);
          }
          free(dss);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

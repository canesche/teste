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
struct vpbe_layer {int device_id; } ;
struct vpbe_display {struct vpbe_layer** dev; } ;
typedef  enum vpbe_display_device_id { ____Placeholder_vpbe_display_device_id } vpbe_display_device_id ;

/* Variables and functions */
 int VPBE_DISPLAY_DEVICE_0 ; 
 int VPBE_DISPLAY_DEVICE_1 ; 

__attribute__((used)) static
struct vpbe_layer*
_vpbe_display_get_other_win_layer(struct vpbe_display *disp_dev,
			struct vpbe_layer *layer)
{
	enum vpbe_display_device_id thiswin, otherwin;
	thiswin = layer->device_id;

	otherwin = (thiswin == VPBE_DISPLAY_DEVICE_0) ?
	VPBE_DISPLAY_DEVICE_1 : VPBE_DISPLAY_DEVICE_0;
	return disp_dev->dev[otherwin];
}


// ------------------------------------------------------------------------- //




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
          int _len_disp_dev0 = 1;
          struct vpbe_display * disp_dev = (struct vpbe_display *) malloc(_len_disp_dev0*sizeof(struct vpbe_display));
          for(int _i0 = 0; _i0 < _len_disp_dev0; _i0++) {
              int _len_disp_dev__i0__dev0 = 1;
          disp_dev[_i0].dev = (struct vpbe_layer **) malloc(_len_disp_dev__i0__dev0*sizeof(struct vpbe_layer *));
          for(int _j0 = 0; _j0 < _len_disp_dev__i0__dev0; _j0++) {
            int _len_disp_dev__i0__dev1 = 1;
            disp_dev[_i0].dev[_j0] = (struct vpbe_layer *) malloc(_len_disp_dev__i0__dev1*sizeof(struct vpbe_layer));
            for(int _j1 = 0; _j1 < _len_disp_dev__i0__dev1; _j1++) {
              disp_dev[_i0].dev[_j0]->device_id = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_layer0 = 1;
          struct vpbe_layer * layer = (struct vpbe_layer *) malloc(_len_layer0*sizeof(struct vpbe_layer));
          for(int _i0 = 0; _i0 < _len_layer0; _i0++) {
            layer[_i0].device_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct vpbe_layer * benchRet = _vpbe_display_get_other_win_layer(disp_dev,layer);
          printf("%d\n", (*benchRet).device_id);
          for(int _aux = 0; _aux < _len_disp_dev0; _aux++) {
          free(*(disp_dev[_aux].dev));
        free(disp_dev[_aux].dev);
          }
          free(disp_dev);
          free(layer);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_disp_dev0 = 65025;
          struct vpbe_display * disp_dev = (struct vpbe_display *) malloc(_len_disp_dev0*sizeof(struct vpbe_display));
          for(int _i0 = 0; _i0 < _len_disp_dev0; _i0++) {
              int _len_disp_dev__i0__dev0 = 1;
          disp_dev[_i0].dev = (struct vpbe_layer **) malloc(_len_disp_dev__i0__dev0*sizeof(struct vpbe_layer *));
          for(int _j0 = 0; _j0 < _len_disp_dev__i0__dev0; _j0++) {
            int _len_disp_dev__i0__dev1 = 1;
            disp_dev[_i0].dev[_j0] = (struct vpbe_layer *) malloc(_len_disp_dev__i0__dev1*sizeof(struct vpbe_layer));
            for(int _j1 = 0; _j1 < _len_disp_dev__i0__dev1; _j1++) {
              disp_dev[_i0].dev[_j0]->device_id = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_layer0 = 65025;
          struct vpbe_layer * layer = (struct vpbe_layer *) malloc(_len_layer0*sizeof(struct vpbe_layer));
          for(int _i0 = 0; _i0 < _len_layer0; _i0++) {
            layer[_i0].device_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct vpbe_layer * benchRet = _vpbe_display_get_other_win_layer(disp_dev,layer);
          printf("%d\n", (*benchRet).device_id);
          for(int _aux = 0; _aux < _len_disp_dev0; _aux++) {
          free(*(disp_dev[_aux].dev));
        free(disp_dev[_aux].dev);
          }
          free(disp_dev);
          free(layer);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_disp_dev0 = 100;
          struct vpbe_display * disp_dev = (struct vpbe_display *) malloc(_len_disp_dev0*sizeof(struct vpbe_display));
          for(int _i0 = 0; _i0 < _len_disp_dev0; _i0++) {
              int _len_disp_dev__i0__dev0 = 1;
          disp_dev[_i0].dev = (struct vpbe_layer **) malloc(_len_disp_dev__i0__dev0*sizeof(struct vpbe_layer *));
          for(int _j0 = 0; _j0 < _len_disp_dev__i0__dev0; _j0++) {
            int _len_disp_dev__i0__dev1 = 1;
            disp_dev[_i0].dev[_j0] = (struct vpbe_layer *) malloc(_len_disp_dev__i0__dev1*sizeof(struct vpbe_layer));
            for(int _j1 = 0; _j1 < _len_disp_dev__i0__dev1; _j1++) {
              disp_dev[_i0].dev[_j0]->device_id = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_layer0 = 100;
          struct vpbe_layer * layer = (struct vpbe_layer *) malloc(_len_layer0*sizeof(struct vpbe_layer));
          for(int _i0 = 0; _i0 < _len_layer0; _i0++) {
            layer[_i0].device_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct vpbe_layer * benchRet = _vpbe_display_get_other_win_layer(disp_dev,layer);
          printf("%d\n", (*benchRet).device_id);
          for(int _aux = 0; _aux < _len_disp_dev0; _aux++) {
          free(*(disp_dev[_aux].dev));
        free(disp_dev[_aux].dev);
          }
          free(disp_dev);
          free(layer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

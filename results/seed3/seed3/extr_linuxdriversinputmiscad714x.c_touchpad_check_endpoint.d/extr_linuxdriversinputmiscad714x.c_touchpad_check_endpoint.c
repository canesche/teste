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
struct ad714x_touchpad_plat {size_t x_start_stage; size_t x_end_stage; size_t y_start_stage; size_t y_end_stage; } ;
struct ad714x_touchpad_drv {int left_ep; int left_ep_val; int right_ep; int right_ep_val; int top_ep; int top_ep_val; int bottom_ep; int bottom_ep_val; } ;
struct ad714x_chip {int* sensor_val; TYPE_2__* sw; TYPE_1__* hw; } ;
struct TYPE_4__ {struct ad714x_touchpad_drv* touchpad; } ;
struct TYPE_3__ {struct ad714x_touchpad_plat* touchpad; } ;

/* Variables and functions */
 int BOTTOM_END_POINT_DETECTION_LEVEL ; 
 int LEFT_END_POINT_DETECTION_LEVEL ; 
 int LEFT_RIGHT_END_POINT_DEAVTIVALION_LEVEL ; 
 int RIGHT_END_POINT_DETECTION_LEVEL ; 
 int TOP_BOTTOM_END_POINT_DEAVTIVALION_LEVEL ; 
 int TOP_END_POINT_DETECTION_LEVEL ; 

__attribute__((used)) static int touchpad_check_endpoint(struct ad714x_chip *ad714x, int idx)
{
	struct ad714x_touchpad_plat *hw = &ad714x->hw->touchpad[idx];
	struct ad714x_touchpad_drv *sw  = &ad714x->sw->touchpad[idx];
	int percent_sensor_diff;

	/* left endpoint detect */
	percent_sensor_diff = (ad714x->sensor_val[hw->x_start_stage] -
			ad714x->sensor_val[hw->x_start_stage + 1]) * 100 /
			ad714x->sensor_val[hw->x_start_stage + 1];
	if (!sw->left_ep) {
		if (percent_sensor_diff >= LEFT_END_POINT_DETECTION_LEVEL)  {
			sw->left_ep = 1;
			sw->left_ep_val =
				ad714x->sensor_val[hw->x_start_stage + 1];
		}
	} else {
		if ((percent_sensor_diff < LEFT_END_POINT_DETECTION_LEVEL) &&
		    (ad714x->sensor_val[hw->x_start_stage + 1] >
		     LEFT_RIGHT_END_POINT_DEAVTIVALION_LEVEL + sw->left_ep_val))
			sw->left_ep = 0;
	}

	/* right endpoint detect */
	percent_sensor_diff = (ad714x->sensor_val[hw->x_end_stage] -
			ad714x->sensor_val[hw->x_end_stage - 1]) * 100 /
			ad714x->sensor_val[hw->x_end_stage - 1];
	if (!sw->right_ep) {
		if (percent_sensor_diff >= RIGHT_END_POINT_DETECTION_LEVEL)  {
			sw->right_ep = 1;
			sw->right_ep_val =
				ad714x->sensor_val[hw->x_end_stage - 1];
		}
	} else {
		if ((percent_sensor_diff < RIGHT_END_POINT_DETECTION_LEVEL) &&
		(ad714x->sensor_val[hw->x_end_stage - 1] >
		LEFT_RIGHT_END_POINT_DEAVTIVALION_LEVEL + sw->right_ep_val))
			sw->right_ep = 0;
	}

	/* top endpoint detect */
	percent_sensor_diff = (ad714x->sensor_val[hw->y_start_stage] -
			ad714x->sensor_val[hw->y_start_stage + 1]) * 100 /
			ad714x->sensor_val[hw->y_start_stage + 1];
	if (!sw->top_ep) {
		if (percent_sensor_diff >= TOP_END_POINT_DETECTION_LEVEL)  {
			sw->top_ep = 1;
			sw->top_ep_val =
				ad714x->sensor_val[hw->y_start_stage + 1];
		}
	} else {
		if ((percent_sensor_diff < TOP_END_POINT_DETECTION_LEVEL) &&
		(ad714x->sensor_val[hw->y_start_stage + 1] >
		TOP_BOTTOM_END_POINT_DEAVTIVALION_LEVEL + sw->top_ep_val))
			sw->top_ep = 0;
	}

	/* bottom endpoint detect */
	percent_sensor_diff = (ad714x->sensor_val[hw->y_end_stage] -
		ad714x->sensor_val[hw->y_end_stage - 1]) * 100 /
		ad714x->sensor_val[hw->y_end_stage - 1];
	if (!sw->bottom_ep) {
		if (percent_sensor_diff >= BOTTOM_END_POINT_DETECTION_LEVEL)  {
			sw->bottom_ep = 1;
			sw->bottom_ep_val =
				ad714x->sensor_val[hw->y_end_stage - 1];
		}
	} else {
		if ((percent_sensor_diff < BOTTOM_END_POINT_DETECTION_LEVEL) &&
		(ad714x->sensor_val[hw->y_end_stage - 1] >
		 TOP_BOTTOM_END_POINT_DEAVTIVALION_LEVEL + sw->bottom_ep_val))
			sw->bottom_ep = 0;
	}

	return sw->left_ep || sw->right_ep || sw->top_ep || sw->bottom_ep;
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
          int idx = 100;
          int _len_ad714x0 = 1;
          struct ad714x_chip * ad714x = (struct ad714x_chip *) malloc(_len_ad714x0*sizeof(struct ad714x_chip));
          for(int _i0 = 0; _i0 < _len_ad714x0; _i0++) {
              int _len_ad714x__i0__sensor_val0 = 1;
          ad714x[_i0].sensor_val = (int *) malloc(_len_ad714x__i0__sensor_val0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ad714x__i0__sensor_val0; _j0++) {
            ad714x[_i0].sensor_val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ad714x__i0__sw0 = 1;
          ad714x[_i0].sw = (struct TYPE_4__ *) malloc(_len_ad714x__i0__sw0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ad714x__i0__sw0; _j0++) {
              int _len_ad714x__i0__sw_touchpad0 = 1;
          ad714x[_i0].sw->touchpad = (struct ad714x_touchpad_drv *) malloc(_len_ad714x__i0__sw_touchpad0*sizeof(struct ad714x_touchpad_drv));
          for(int _j0 = 0; _j0 < _len_ad714x__i0__sw_touchpad0; _j0++) {
            ad714x[_i0].sw->touchpad->left_ep = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].sw->touchpad->left_ep_val = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].sw->touchpad->right_ep = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].sw->touchpad->right_ep_val = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].sw->touchpad->top_ep = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].sw->touchpad->top_ep_val = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].sw->touchpad->bottom_ep = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].sw->touchpad->bottom_ep_val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ad714x__i0__hw0 = 1;
          ad714x[_i0].hw = (struct TYPE_3__ *) malloc(_len_ad714x__i0__hw0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_ad714x__i0__hw0; _j0++) {
              int _len_ad714x__i0__hw_touchpad0 = 1;
          ad714x[_i0].hw->touchpad = (struct ad714x_touchpad_plat *) malloc(_len_ad714x__i0__hw_touchpad0*sizeof(struct ad714x_touchpad_plat));
          for(int _j0 = 0; _j0 < _len_ad714x__i0__hw_touchpad0; _j0++) {
            ad714x[_i0].hw->touchpad->x_start_stage = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].hw->touchpad->x_end_stage = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].hw->touchpad->y_start_stage = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].hw->touchpad->y_end_stage = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = touchpad_check_endpoint(ad714x,idx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ad714x0; _aux++) {
          free(ad714x[_aux].sensor_val);
          }
          for(int _aux = 0; _aux < _len_ad714x0; _aux++) {
          free(ad714x[_aux].sw);
          }
          for(int _aux = 0; _aux < _len_ad714x0; _aux++) {
          free(ad714x[_aux].hw);
          }
          free(ad714x);
        
        break;
    }
    // big-arr
    case 1:
    {
          int idx = 255;
          int _len_ad714x0 = 65025;
          struct ad714x_chip * ad714x = (struct ad714x_chip *) malloc(_len_ad714x0*sizeof(struct ad714x_chip));
          for(int _i0 = 0; _i0 < _len_ad714x0; _i0++) {
              int _len_ad714x__i0__sensor_val0 = 1;
          ad714x[_i0].sensor_val = (int *) malloc(_len_ad714x__i0__sensor_val0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ad714x__i0__sensor_val0; _j0++) {
            ad714x[_i0].sensor_val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ad714x__i0__sw0 = 1;
          ad714x[_i0].sw = (struct TYPE_4__ *) malloc(_len_ad714x__i0__sw0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ad714x__i0__sw0; _j0++) {
              int _len_ad714x__i0__sw_touchpad0 = 1;
          ad714x[_i0].sw->touchpad = (struct ad714x_touchpad_drv *) malloc(_len_ad714x__i0__sw_touchpad0*sizeof(struct ad714x_touchpad_drv));
          for(int _j0 = 0; _j0 < _len_ad714x__i0__sw_touchpad0; _j0++) {
            ad714x[_i0].sw->touchpad->left_ep = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].sw->touchpad->left_ep_val = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].sw->touchpad->right_ep = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].sw->touchpad->right_ep_val = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].sw->touchpad->top_ep = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].sw->touchpad->top_ep_val = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].sw->touchpad->bottom_ep = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].sw->touchpad->bottom_ep_val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ad714x__i0__hw0 = 1;
          ad714x[_i0].hw = (struct TYPE_3__ *) malloc(_len_ad714x__i0__hw0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_ad714x__i0__hw0; _j0++) {
              int _len_ad714x__i0__hw_touchpad0 = 1;
          ad714x[_i0].hw->touchpad = (struct ad714x_touchpad_plat *) malloc(_len_ad714x__i0__hw_touchpad0*sizeof(struct ad714x_touchpad_plat));
          for(int _j0 = 0; _j0 < _len_ad714x__i0__hw_touchpad0; _j0++) {
            ad714x[_i0].hw->touchpad->x_start_stage = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].hw->touchpad->x_end_stage = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].hw->touchpad->y_start_stage = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].hw->touchpad->y_end_stage = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = touchpad_check_endpoint(ad714x,idx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ad714x0; _aux++) {
          free(ad714x[_aux].sensor_val);
          }
          for(int _aux = 0; _aux < _len_ad714x0; _aux++) {
          free(ad714x[_aux].sw);
          }
          for(int _aux = 0; _aux < _len_ad714x0; _aux++) {
          free(ad714x[_aux].hw);
          }
          free(ad714x);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int idx = 10;
          int _len_ad714x0 = 100;
          struct ad714x_chip * ad714x = (struct ad714x_chip *) malloc(_len_ad714x0*sizeof(struct ad714x_chip));
          for(int _i0 = 0; _i0 < _len_ad714x0; _i0++) {
              int _len_ad714x__i0__sensor_val0 = 1;
          ad714x[_i0].sensor_val = (int *) malloc(_len_ad714x__i0__sensor_val0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ad714x__i0__sensor_val0; _j0++) {
            ad714x[_i0].sensor_val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ad714x__i0__sw0 = 1;
          ad714x[_i0].sw = (struct TYPE_4__ *) malloc(_len_ad714x__i0__sw0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ad714x__i0__sw0; _j0++) {
              int _len_ad714x__i0__sw_touchpad0 = 1;
          ad714x[_i0].sw->touchpad = (struct ad714x_touchpad_drv *) malloc(_len_ad714x__i0__sw_touchpad0*sizeof(struct ad714x_touchpad_drv));
          for(int _j0 = 0; _j0 < _len_ad714x__i0__sw_touchpad0; _j0++) {
            ad714x[_i0].sw->touchpad->left_ep = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].sw->touchpad->left_ep_val = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].sw->touchpad->right_ep = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].sw->touchpad->right_ep_val = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].sw->touchpad->top_ep = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].sw->touchpad->top_ep_val = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].sw->touchpad->bottom_ep = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].sw->touchpad->bottom_ep_val = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ad714x__i0__hw0 = 1;
          ad714x[_i0].hw = (struct TYPE_3__ *) malloc(_len_ad714x__i0__hw0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_ad714x__i0__hw0; _j0++) {
              int _len_ad714x__i0__hw_touchpad0 = 1;
          ad714x[_i0].hw->touchpad = (struct ad714x_touchpad_plat *) malloc(_len_ad714x__i0__hw_touchpad0*sizeof(struct ad714x_touchpad_plat));
          for(int _j0 = 0; _j0 < _len_ad714x__i0__hw_touchpad0; _j0++) {
            ad714x[_i0].hw->touchpad->x_start_stage = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].hw->touchpad->x_end_stage = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].hw->touchpad->y_start_stage = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].hw->touchpad->y_end_stage = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = touchpad_check_endpoint(ad714x,idx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ad714x0; _aux++) {
          free(ad714x[_aux].sensor_val);
          }
          for(int _aux = 0; _aux < _len_ad714x0; _aux++) {
          free(ad714x[_aux].sw);
          }
          for(int _aux = 0; _aux < _len_ad714x0; _aux++) {
          free(ad714x[_aux].hw);
          }
          free(ad714x);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

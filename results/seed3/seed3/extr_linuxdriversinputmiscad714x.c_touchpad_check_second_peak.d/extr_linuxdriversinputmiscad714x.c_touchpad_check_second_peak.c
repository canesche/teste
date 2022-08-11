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
struct ad714x_touchpad_plat {int x_start_stage; int x_end_stage; int y_start_stage; int y_end_stage; } ;
struct ad714x_touchpad_drv {int x_highest_stage; int y_highest_stage; } ;
struct ad714x_chip {int* sensor_val; TYPE_2__* sw; TYPE_1__* hw; } ;
struct TYPE_4__ {struct ad714x_touchpad_drv* touchpad; } ;
struct TYPE_3__ {struct ad714x_touchpad_plat* touchpad; } ;

/* Variables and functions */

__attribute__((used)) static int touchpad_check_second_peak(struct ad714x_chip *ad714x, int idx)
{
	struct ad714x_touchpad_plat *hw = &ad714x->hw->touchpad[idx];
	struct ad714x_touchpad_drv *sw = &ad714x->sw->touchpad[idx];
	int i;

	for (i = hw->x_start_stage; i < sw->x_highest_stage; i++) {
		if ((ad714x->sensor_val[i] - ad714x->sensor_val[i + 1])
			> (ad714x->sensor_val[i + 1] / 10))
			return 1;
	}

	for (i = sw->x_highest_stage; i < hw->x_end_stage; i++) {
		if ((ad714x->sensor_val[i + 1] - ad714x->sensor_val[i])
			> (ad714x->sensor_val[i] / 10))
			return 1;
	}

	for (i = hw->y_start_stage; i < sw->y_highest_stage; i++) {
		if ((ad714x->sensor_val[i] - ad714x->sensor_val[i + 1])
			> (ad714x->sensor_val[i + 1] / 10))
			return 1;
	}

	for (i = sw->y_highest_stage; i < hw->y_end_stage; i++) {
		if ((ad714x->sensor_val[i + 1] - ad714x->sensor_val[i])
			> (ad714x->sensor_val[i] / 10))
			return 1;
	}

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
            ad714x[_i0].sw->touchpad->x_highest_stage = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].sw->touchpad->y_highest_stage = ((-2 * (next_i()%2)) + 1) * next_i();
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
          int benchRet = touchpad_check_second_peak(ad714x,idx);
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
            ad714x[_i0].sw->touchpad->x_highest_stage = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].sw->touchpad->y_highest_stage = ((-2 * (next_i()%2)) + 1) * next_i();
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
          int benchRet = touchpad_check_second_peak(ad714x,idx);
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
            ad714x[_i0].sw->touchpad->x_highest_stage = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].sw->touchpad->y_highest_stage = ((-2 * (next_i()%2)) + 1) * next_i();
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
          int benchRet = touchpad_check_second_peak(ad714x,idx);
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

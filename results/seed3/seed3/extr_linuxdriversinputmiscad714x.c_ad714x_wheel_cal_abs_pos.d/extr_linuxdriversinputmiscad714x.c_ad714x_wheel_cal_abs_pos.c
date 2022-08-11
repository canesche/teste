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
struct ad714x_wheel_plat {int end_stage; int start_stage; int max_coord; } ;
struct ad714x_wheel_drv {int highest_stage; int abs_pos; } ;
struct ad714x_chip {int* sensor_val; TYPE_2__* sw; TYPE_1__* hw; } ;
struct TYPE_4__ {struct ad714x_wheel_drv* wheel; } ;
struct TYPE_3__ {struct ad714x_wheel_plat* wheel; } ;

/* Variables and functions */

__attribute__((used)) static void ad714x_wheel_cal_abs_pos(struct ad714x_chip *ad714x, int idx)
{
	struct ad714x_wheel_plat *hw = &ad714x->hw->wheel[idx];
	struct ad714x_wheel_drv *sw = &ad714x->sw->wheel[idx];
	int stage_num = hw->end_stage - hw->start_stage + 1;
	int first_before, highest, first_after;
	int a_param, b_param;

	first_before = (sw->highest_stage + stage_num - 1) % stage_num;
	highest = sw->highest_stage;
	first_after = (sw->highest_stage + stage_num + 1) % stage_num;

	a_param = ad714x->sensor_val[highest] *
		(highest - hw->start_stage) +
		ad714x->sensor_val[first_before] *
		(highest - hw->start_stage - 1) +
		ad714x->sensor_val[first_after] *
		(highest - hw->start_stage + 1);
	b_param = ad714x->sensor_val[highest] +
		ad714x->sensor_val[first_before] +
		ad714x->sensor_val[first_after];

	sw->abs_pos = ((hw->max_coord / (hw->end_stage - hw->start_stage)) *
			a_param) / b_param;

	if (sw->abs_pos > hw->max_coord)
		sw->abs_pos = hw->max_coord;
	else if (sw->abs_pos < 0)
		sw->abs_pos = 0;
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
              int _len_ad714x__i0__sw_wheel0 = 1;
          ad714x[_i0].sw->wheel = (struct ad714x_wheel_drv *) malloc(_len_ad714x__i0__sw_wheel0*sizeof(struct ad714x_wheel_drv));
          for(int _j0 = 0; _j0 < _len_ad714x__i0__sw_wheel0; _j0++) {
            ad714x[_i0].sw->wheel->highest_stage = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].sw->wheel->abs_pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ad714x__i0__hw0 = 1;
          ad714x[_i0].hw = (struct TYPE_3__ *) malloc(_len_ad714x__i0__hw0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_ad714x__i0__hw0; _j0++) {
              int _len_ad714x__i0__hw_wheel0 = 1;
          ad714x[_i0].hw->wheel = (struct ad714x_wheel_plat *) malloc(_len_ad714x__i0__hw_wheel0*sizeof(struct ad714x_wheel_plat));
          for(int _j0 = 0; _j0 < _len_ad714x__i0__hw_wheel0; _j0++) {
            ad714x[_i0].hw->wheel->end_stage = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].hw->wheel->start_stage = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].hw->wheel->max_coord = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          ad714x_wheel_cal_abs_pos(ad714x,idx);
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
              int _len_ad714x__i0__sw_wheel0 = 1;
          ad714x[_i0].sw->wheel = (struct ad714x_wheel_drv *) malloc(_len_ad714x__i0__sw_wheel0*sizeof(struct ad714x_wheel_drv));
          for(int _j0 = 0; _j0 < _len_ad714x__i0__sw_wheel0; _j0++) {
            ad714x[_i0].sw->wheel->highest_stage = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].sw->wheel->abs_pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ad714x__i0__hw0 = 1;
          ad714x[_i0].hw = (struct TYPE_3__ *) malloc(_len_ad714x__i0__hw0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_ad714x__i0__hw0; _j0++) {
              int _len_ad714x__i0__hw_wheel0 = 1;
          ad714x[_i0].hw->wheel = (struct ad714x_wheel_plat *) malloc(_len_ad714x__i0__hw_wheel0*sizeof(struct ad714x_wheel_plat));
          for(int _j0 = 0; _j0 < _len_ad714x__i0__hw_wheel0; _j0++) {
            ad714x[_i0].hw->wheel->end_stage = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].hw->wheel->start_stage = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].hw->wheel->max_coord = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          ad714x_wheel_cal_abs_pos(ad714x,idx);
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
              int _len_ad714x__i0__sw_wheel0 = 1;
          ad714x[_i0].sw->wheel = (struct ad714x_wheel_drv *) malloc(_len_ad714x__i0__sw_wheel0*sizeof(struct ad714x_wheel_drv));
          for(int _j0 = 0; _j0 < _len_ad714x__i0__sw_wheel0; _j0++) {
            ad714x[_i0].sw->wheel->highest_stage = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].sw->wheel->abs_pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ad714x__i0__hw0 = 1;
          ad714x[_i0].hw = (struct TYPE_3__ *) malloc(_len_ad714x__i0__hw0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_ad714x__i0__hw0; _j0++) {
              int _len_ad714x__i0__hw_wheel0 = 1;
          ad714x[_i0].hw->wheel = (struct ad714x_wheel_plat *) malloc(_len_ad714x__i0__hw_wheel0*sizeof(struct ad714x_wheel_plat));
          for(int _j0 = 0; _j0 < _len_ad714x__i0__hw_wheel0; _j0++) {
            ad714x[_i0].hw->wheel->end_stage = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].hw->wheel->start_stage = ((-2 * (next_i()%2)) + 1) * next_i();
        ad714x[_i0].hw->wheel->max_coord = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          ad714x_wheel_cal_abs_pos(ad714x,idx);
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

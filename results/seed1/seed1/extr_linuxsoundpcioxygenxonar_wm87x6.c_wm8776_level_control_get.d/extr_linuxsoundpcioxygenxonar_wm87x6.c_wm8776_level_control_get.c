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
struct xonar_wm87x6 {int* wm8776_regs; } ;
struct snd_kcontrol {struct oxygen* private_data; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct oxygen {struct xonar_wm87x6* model_data; } ;

/* Variables and functions */
 size_t WM8776_ALCCTRL1 ; 
 size_t WM8776_ALCCTRL2 ; 
 int WM8776_LCEN ; 
 int WM8776_LCSEL_LIMITER ; 
 int WM8776_LCSEL_MASK ; 

__attribute__((used)) static int wm8776_level_control_get(struct snd_kcontrol *ctl,
				    struct snd_ctl_elem_value *value)
{
	struct oxygen *chip = ctl->private_data;
	struct xonar_wm87x6 *data = chip->model_data;

	if (!(data->wm8776_regs[WM8776_ALCCTRL2] & WM8776_LCEN))
		value->value.enumerated.item[0] = 0;
	else if ((data->wm8776_regs[WM8776_ALCCTRL1] & WM8776_LCSEL_MASK) ==
		 WM8776_LCSEL_LIMITER)
		value->value.enumerated.item[0] = 1;
	else
		value->value.enumerated.item[0] = 2;
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
          int _len_ctl0 = 1;
          struct snd_kcontrol * ctl = (struct snd_kcontrol *) malloc(_len_ctl0*sizeof(struct snd_kcontrol));
          for(int _i0 = 0; _i0 < _len_ctl0; _i0++) {
              int _len_ctl__i0__private_data0 = 1;
          ctl[_i0].private_data = (struct oxygen *) malloc(_len_ctl__i0__private_data0*sizeof(struct oxygen));
          for(int _j0 = 0; _j0 < _len_ctl__i0__private_data0; _j0++) {
              int _len_ctl__i0__private_data_model_data0 = 1;
          ctl[_i0].private_data->model_data = (struct xonar_wm87x6 *) malloc(_len_ctl__i0__private_data_model_data0*sizeof(struct xonar_wm87x6));
          for(int _j0 = 0; _j0 < _len_ctl__i0__private_data_model_data0; _j0++) {
              int _len_ctl__i0__private_data_model_data_wm8776_regs0 = 1;
          ctl[_i0].private_data->model_data->wm8776_regs = (int *) malloc(_len_ctl__i0__private_data_model_data_wm8776_regs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctl__i0__private_data_model_data_wm8776_regs0; _j0++) {
            ctl[_i0].private_data->model_data->wm8776_regs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_value0 = 1;
          struct snd_ctl_elem_value * value = (struct snd_ctl_elem_value *) malloc(_len_value0*sizeof(struct snd_ctl_elem_value));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
              int _len_value__i0__value_enumerated_item0 = 1;
          value[_i0].value.enumerated.item = (int *) malloc(_len_value__i0__value_enumerated_item0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_value__i0__value_enumerated_item0; _j0++) {
            value[_i0].value.enumerated.item[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = wm8776_level_control_get(ctl,value);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctl0; _aux++) {
          free(ctl[_aux].private_data);
          }
          free(ctl);
          free(value);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ctl0 = 65025;
          struct snd_kcontrol * ctl = (struct snd_kcontrol *) malloc(_len_ctl0*sizeof(struct snd_kcontrol));
          for(int _i0 = 0; _i0 < _len_ctl0; _i0++) {
              int _len_ctl__i0__private_data0 = 1;
          ctl[_i0].private_data = (struct oxygen *) malloc(_len_ctl__i0__private_data0*sizeof(struct oxygen));
          for(int _j0 = 0; _j0 < _len_ctl__i0__private_data0; _j0++) {
              int _len_ctl__i0__private_data_model_data0 = 1;
          ctl[_i0].private_data->model_data = (struct xonar_wm87x6 *) malloc(_len_ctl__i0__private_data_model_data0*sizeof(struct xonar_wm87x6));
          for(int _j0 = 0; _j0 < _len_ctl__i0__private_data_model_data0; _j0++) {
              int _len_ctl__i0__private_data_model_data_wm8776_regs0 = 1;
          ctl[_i0].private_data->model_data->wm8776_regs = (int *) malloc(_len_ctl__i0__private_data_model_data_wm8776_regs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctl__i0__private_data_model_data_wm8776_regs0; _j0++) {
            ctl[_i0].private_data->model_data->wm8776_regs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_value0 = 65025;
          struct snd_ctl_elem_value * value = (struct snd_ctl_elem_value *) malloc(_len_value0*sizeof(struct snd_ctl_elem_value));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
              int _len_value__i0__value_enumerated_item0 = 1;
          value[_i0].value.enumerated.item = (int *) malloc(_len_value__i0__value_enumerated_item0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_value__i0__value_enumerated_item0; _j0++) {
            value[_i0].value.enumerated.item[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = wm8776_level_control_get(ctl,value);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctl0; _aux++) {
          free(ctl[_aux].private_data);
          }
          free(ctl);
          free(value);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ctl0 = 100;
          struct snd_kcontrol * ctl = (struct snd_kcontrol *) malloc(_len_ctl0*sizeof(struct snd_kcontrol));
          for(int _i0 = 0; _i0 < _len_ctl0; _i0++) {
              int _len_ctl__i0__private_data0 = 1;
          ctl[_i0].private_data = (struct oxygen *) malloc(_len_ctl__i0__private_data0*sizeof(struct oxygen));
          for(int _j0 = 0; _j0 < _len_ctl__i0__private_data0; _j0++) {
              int _len_ctl__i0__private_data_model_data0 = 1;
          ctl[_i0].private_data->model_data = (struct xonar_wm87x6 *) malloc(_len_ctl__i0__private_data_model_data0*sizeof(struct xonar_wm87x6));
          for(int _j0 = 0; _j0 < _len_ctl__i0__private_data_model_data0; _j0++) {
              int _len_ctl__i0__private_data_model_data_wm8776_regs0 = 1;
          ctl[_i0].private_data->model_data->wm8776_regs = (int *) malloc(_len_ctl__i0__private_data_model_data_wm8776_regs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctl__i0__private_data_model_data_wm8776_regs0; _j0++) {
            ctl[_i0].private_data->model_data->wm8776_regs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_value0 = 100;
          struct snd_ctl_elem_value * value = (struct snd_ctl_elem_value *) malloc(_len_value0*sizeof(struct snd_ctl_elem_value));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
              int _len_value__i0__value_enumerated_item0 = 1;
          value[_i0].value.enumerated.item = (int *) malloc(_len_value__i0__value_enumerated_item0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_value__i0__value_enumerated_item0; _j0++) {
            value[_i0].value.enumerated.item[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = wm8776_level_control_get(ctl,value);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctl0; _aux++) {
          free(ctl[_aux].private_data);
          }
          free(ctl);
          free(value);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

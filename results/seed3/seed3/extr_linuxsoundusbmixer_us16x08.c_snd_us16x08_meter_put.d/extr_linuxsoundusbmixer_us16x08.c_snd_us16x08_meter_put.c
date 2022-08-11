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
struct usb_mixer_elem_info {struct snd_us16x08_meter_store* private_data; } ;
struct snd_us16x08_meter_store {int comp_active_index; int comp_index; } ;
struct snd_kcontrol {struct usb_mixer_elem_info* private_data; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;

/* Variables and functions */
 int EINVAL ; 
 int SND_US16X08_MAX_CHANNELS ; 

__attribute__((used)) static int snd_us16x08_meter_put(struct snd_kcontrol *kcontrol,
	struct snd_ctl_elem_value *ucontrol)
{
	struct usb_mixer_elem_info *elem = kcontrol->private_data;
	struct snd_us16x08_meter_store *store = elem->private_data;
	int val;

	val = ucontrol->value.integer.value[0];

	/* sanity check */
	if (val < 0 || val >= SND_US16X08_MAX_CHANNELS)
		return -EINVAL;

	store->comp_active_index = val;
	store->comp_index = val;

	return 1;
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
          int _len_kcontrol0 = 1;
          struct snd_kcontrol * kcontrol = (struct snd_kcontrol *) malloc(_len_kcontrol0*sizeof(struct snd_kcontrol));
          for(int _i0 = 0; _i0 < _len_kcontrol0; _i0++) {
              int _len_kcontrol__i0__private_data0 = 1;
          kcontrol[_i0].private_data = (struct usb_mixer_elem_info *) malloc(_len_kcontrol__i0__private_data0*sizeof(struct usb_mixer_elem_info));
          for(int _j0 = 0; _j0 < _len_kcontrol__i0__private_data0; _j0++) {
              int _len_kcontrol__i0__private_data_private_data0 = 1;
          kcontrol[_i0].private_data->private_data = (struct snd_us16x08_meter_store *) malloc(_len_kcontrol__i0__private_data_private_data0*sizeof(struct snd_us16x08_meter_store));
          for(int _j0 = 0; _j0 < _len_kcontrol__i0__private_data_private_data0; _j0++) {
            kcontrol[_i0].private_data->private_data->comp_active_index = ((-2 * (next_i()%2)) + 1) * next_i();
        kcontrol[_i0].private_data->private_data->comp_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_ucontrol0 = 1;
          struct snd_ctl_elem_value * ucontrol = (struct snd_ctl_elem_value *) malloc(_len_ucontrol0*sizeof(struct snd_ctl_elem_value));
          for(int _i0 = 0; _i0 < _len_ucontrol0; _i0++) {
              int _len_ucontrol__i0__value_integer_value0 = 1;
          ucontrol[_i0].value.integer.value = (int *) malloc(_len_ucontrol__i0__value_integer_value0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ucontrol__i0__value_integer_value0; _j0++) {
            ucontrol[_i0].value.integer.value[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = snd_us16x08_meter_put(kcontrol,ucontrol);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_kcontrol0; _aux++) {
          free(kcontrol[_aux].private_data);
          }
          free(kcontrol);
          free(ucontrol);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_kcontrol0 = 65025;
          struct snd_kcontrol * kcontrol = (struct snd_kcontrol *) malloc(_len_kcontrol0*sizeof(struct snd_kcontrol));
          for(int _i0 = 0; _i0 < _len_kcontrol0; _i0++) {
              int _len_kcontrol__i0__private_data0 = 1;
          kcontrol[_i0].private_data = (struct usb_mixer_elem_info *) malloc(_len_kcontrol__i0__private_data0*sizeof(struct usb_mixer_elem_info));
          for(int _j0 = 0; _j0 < _len_kcontrol__i0__private_data0; _j0++) {
              int _len_kcontrol__i0__private_data_private_data0 = 1;
          kcontrol[_i0].private_data->private_data = (struct snd_us16x08_meter_store *) malloc(_len_kcontrol__i0__private_data_private_data0*sizeof(struct snd_us16x08_meter_store));
          for(int _j0 = 0; _j0 < _len_kcontrol__i0__private_data_private_data0; _j0++) {
            kcontrol[_i0].private_data->private_data->comp_active_index = ((-2 * (next_i()%2)) + 1) * next_i();
        kcontrol[_i0].private_data->private_data->comp_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_ucontrol0 = 65025;
          struct snd_ctl_elem_value * ucontrol = (struct snd_ctl_elem_value *) malloc(_len_ucontrol0*sizeof(struct snd_ctl_elem_value));
          for(int _i0 = 0; _i0 < _len_ucontrol0; _i0++) {
              int _len_ucontrol__i0__value_integer_value0 = 1;
          ucontrol[_i0].value.integer.value = (int *) malloc(_len_ucontrol__i0__value_integer_value0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ucontrol__i0__value_integer_value0; _j0++) {
            ucontrol[_i0].value.integer.value[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = snd_us16x08_meter_put(kcontrol,ucontrol);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_kcontrol0; _aux++) {
          free(kcontrol[_aux].private_data);
          }
          free(kcontrol);
          free(ucontrol);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_kcontrol0 = 100;
          struct snd_kcontrol * kcontrol = (struct snd_kcontrol *) malloc(_len_kcontrol0*sizeof(struct snd_kcontrol));
          for(int _i0 = 0; _i0 < _len_kcontrol0; _i0++) {
              int _len_kcontrol__i0__private_data0 = 1;
          kcontrol[_i0].private_data = (struct usb_mixer_elem_info *) malloc(_len_kcontrol__i0__private_data0*sizeof(struct usb_mixer_elem_info));
          for(int _j0 = 0; _j0 < _len_kcontrol__i0__private_data0; _j0++) {
              int _len_kcontrol__i0__private_data_private_data0 = 1;
          kcontrol[_i0].private_data->private_data = (struct snd_us16x08_meter_store *) malloc(_len_kcontrol__i0__private_data_private_data0*sizeof(struct snd_us16x08_meter_store));
          for(int _j0 = 0; _j0 < _len_kcontrol__i0__private_data_private_data0; _j0++) {
            kcontrol[_i0].private_data->private_data->comp_active_index = ((-2 * (next_i()%2)) + 1) * next_i();
        kcontrol[_i0].private_data->private_data->comp_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_ucontrol0 = 100;
          struct snd_ctl_elem_value * ucontrol = (struct snd_ctl_elem_value *) malloc(_len_ucontrol0*sizeof(struct snd_ctl_elem_value));
          for(int _i0 = 0; _i0 < _len_ucontrol0; _i0++) {
              int _len_ucontrol__i0__value_integer_value0 = 1;
          ucontrol[_i0].value.integer.value = (int *) malloc(_len_ucontrol__i0__value_integer_value0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ucontrol__i0__value_integer_value0; _j0++) {
            ucontrol[_i0].value.integer.value[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = snd_us16x08_meter_put(kcontrol,ucontrol);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_kcontrol0; _aux++) {
          free(kcontrol[_aux].private_data);
          }
          free(kcontrol);
          free(ucontrol);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

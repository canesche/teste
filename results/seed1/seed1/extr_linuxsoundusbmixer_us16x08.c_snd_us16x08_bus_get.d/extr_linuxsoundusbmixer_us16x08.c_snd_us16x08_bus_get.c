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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int id; } ;
struct usb_mixer_elem_info {int /*<<< orphan*/ * cache_val; TYPE_3__ head; } ;
struct snd_kcontrol {struct usb_mixer_elem_info* private_data; } ;
struct TYPE_4__ {int /*<<< orphan*/ * value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;

/* Variables and functions */
#define  SND_US16X08_ID_BUSS_OUT 130 
#define  SND_US16X08_ID_BYPASS 129 
#define  SND_US16X08_ID_MUTE 128 

__attribute__((used)) static int snd_us16x08_bus_get(struct snd_kcontrol *kcontrol,
	struct snd_ctl_elem_value *ucontrol)
{
	struct usb_mixer_elem_info *elem = kcontrol->private_data;

	switch (elem->head.id) {
	case SND_US16X08_ID_BUSS_OUT:
		ucontrol->value.integer.value[0] = elem->cache_val[0];
		break;
	case SND_US16X08_ID_BYPASS:
		ucontrol->value.integer.value[0] = elem->cache_val[0];
		break;
	case SND_US16X08_ID_MUTE:
		ucontrol->value.integer.value[0] = elem->cache_val[0];
		break;
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
          int _len_kcontrol0 = 1;
          struct snd_kcontrol * kcontrol = (struct snd_kcontrol *) malloc(_len_kcontrol0*sizeof(struct snd_kcontrol));
          for(int _i0 = 0; _i0 < _len_kcontrol0; _i0++) {
              int _len_kcontrol__i0__private_data0 = 1;
          kcontrol[_i0].private_data = (struct usb_mixer_elem_info *) malloc(_len_kcontrol__i0__private_data0*sizeof(struct usb_mixer_elem_info));
          for(int _j0 = 0; _j0 < _len_kcontrol__i0__private_data0; _j0++) {
              int _len_kcontrol__i0__private_data_cache_val0 = 1;
          kcontrol[_i0].private_data->cache_val = (int *) malloc(_len_kcontrol__i0__private_data_cache_val0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_kcontrol__i0__private_data_cache_val0; _j0++) {
            kcontrol[_i0].private_data->cache_val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        kcontrol[_i0].private_data->head.id = ((-2 * (next_i()%2)) + 1) * next_i();
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
          int benchRet = snd_us16x08_bus_get(kcontrol,ucontrol);
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
              int _len_kcontrol__i0__private_data_cache_val0 = 1;
          kcontrol[_i0].private_data->cache_val = (int *) malloc(_len_kcontrol__i0__private_data_cache_val0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_kcontrol__i0__private_data_cache_val0; _j0++) {
            kcontrol[_i0].private_data->cache_val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        kcontrol[_i0].private_data->head.id = ((-2 * (next_i()%2)) + 1) * next_i();
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
          int benchRet = snd_us16x08_bus_get(kcontrol,ucontrol);
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
              int _len_kcontrol__i0__private_data_cache_val0 = 1;
          kcontrol[_i0].private_data->cache_val = (int *) malloc(_len_kcontrol__i0__private_data_cache_val0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_kcontrol__i0__private_data_cache_val0; _j0++) {
            kcontrol[_i0].private_data->cache_val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        kcontrol[_i0].private_data->head.id = ((-2 * (next_i()%2)) + 1) * next_i();
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
          int benchRet = snd_us16x08_bus_get(kcontrol,ucontrol);
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

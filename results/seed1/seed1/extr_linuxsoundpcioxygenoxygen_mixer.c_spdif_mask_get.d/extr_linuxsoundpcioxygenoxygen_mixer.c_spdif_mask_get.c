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
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* status; } ;
struct TYPE_4__ {TYPE_1__ iec958; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;

/* Variables and functions */
 int IEC958_AES0_CON_EMPHASIS ; 
 int IEC958_AES0_CON_NOT_COPYRIGHT ; 
 int IEC958_AES0_NONAUDIO ; 
 int IEC958_AES1_CON_CATEGORY ; 
 int IEC958_AES1_CON_ORIGINAL ; 

__attribute__((used)) static int spdif_mask_get(struct snd_kcontrol *ctl,
			  struct snd_ctl_elem_value *value)
{
	value->value.iec958.status[0] = IEC958_AES0_NONAUDIO |
		IEC958_AES0_CON_NOT_COPYRIGHT | IEC958_AES0_CON_EMPHASIS;
	value->value.iec958.status[1] =
		IEC958_AES1_CON_CATEGORY | IEC958_AES1_CON_ORIGINAL;
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
            ctl[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_value0 = 1;
          struct snd_ctl_elem_value * value = (struct snd_ctl_elem_value *) malloc(_len_value0*sizeof(struct snd_ctl_elem_value));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
              int _len_value__i0__value_iec958_status0 = 1;
          value[_i0].value.iec958.status = (int *) malloc(_len_value__i0__value_iec958_status0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_value__i0__value_iec958_status0; _j0++) {
            value[_i0].value.iec958.status[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = spdif_mask_get(ctl,value);
          printf("%d\n", benchRet); 
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
            ctl[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_value0 = 65025;
          struct snd_ctl_elem_value * value = (struct snd_ctl_elem_value *) malloc(_len_value0*sizeof(struct snd_ctl_elem_value));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
              int _len_value__i0__value_iec958_status0 = 1;
          value[_i0].value.iec958.status = (int *) malloc(_len_value__i0__value_iec958_status0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_value__i0__value_iec958_status0; _j0++) {
            value[_i0].value.iec958.status[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = spdif_mask_get(ctl,value);
          printf("%d\n", benchRet); 
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
            ctl[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_value0 = 100;
          struct snd_ctl_elem_value * value = (struct snd_ctl_elem_value *) malloc(_len_value0*sizeof(struct snd_ctl_elem_value));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
              int _len_value__i0__value_iec958_status0 = 1;
          value[_i0].value.iec958.status = (int *) malloc(_len_value__i0__value_iec958_status0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_value__i0__value_iec958_status0; _j0++) {
            value[_i0].value.iec958.status[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = spdif_mask_get(ctl,value);
          printf("%d\n", benchRet); 
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

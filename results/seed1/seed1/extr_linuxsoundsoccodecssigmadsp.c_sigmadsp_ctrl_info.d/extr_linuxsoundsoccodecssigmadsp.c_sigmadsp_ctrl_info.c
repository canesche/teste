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
struct snd_kcontrol {scalar_t__ private_value; } ;
struct snd_ctl_elem_info {int /*<<< orphan*/  count; int /*<<< orphan*/  type; } ;
struct sigmadsp_control {int /*<<< orphan*/  num_bytes; } ;

/* Variables and functions */
 int /*<<< orphan*/  SNDRV_CTL_ELEM_TYPE_BYTES ; 

__attribute__((used)) static int sigmadsp_ctrl_info(struct snd_kcontrol *kcontrol,
	struct snd_ctl_elem_info *info)
{
	struct sigmadsp_control *ctrl = (void *)kcontrol->private_value;

	info->type = SNDRV_CTL_ELEM_TYPE_BYTES;
	info->count = ctrl->num_bytes;

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
            kcontrol[_i0].private_value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info0 = 1;
          struct snd_ctl_elem_info * info = (struct snd_ctl_elem_info *) malloc(_len_info0*sizeof(struct snd_ctl_elem_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sigmadsp_ctrl_info(kcontrol,info);
          printf("%d\n", benchRet); 
          free(kcontrol);
          free(info);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_kcontrol0 = 65025;
          struct snd_kcontrol * kcontrol = (struct snd_kcontrol *) malloc(_len_kcontrol0*sizeof(struct snd_kcontrol));
          for(int _i0 = 0; _i0 < _len_kcontrol0; _i0++) {
            kcontrol[_i0].private_value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info0 = 65025;
          struct snd_ctl_elem_info * info = (struct snd_ctl_elem_info *) malloc(_len_info0*sizeof(struct snd_ctl_elem_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sigmadsp_ctrl_info(kcontrol,info);
          printf("%d\n", benchRet); 
          free(kcontrol);
          free(info);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_kcontrol0 = 100;
          struct snd_kcontrol * kcontrol = (struct snd_kcontrol *) malloc(_len_kcontrol0*sizeof(struct snd_kcontrol));
          for(int _i0 = 0; _i0 < _len_kcontrol0; _i0++) {
            kcontrol[_i0].private_value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info0 = 100;
          struct snd_ctl_elem_info * info = (struct snd_ctl_elem_info *) malloc(_len_info0*sizeof(struct snd_ctl_elem_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sigmadsp_ctrl_info(kcontrol,info);
          printf("%d\n", benchRet); 
          free(kcontrol);
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

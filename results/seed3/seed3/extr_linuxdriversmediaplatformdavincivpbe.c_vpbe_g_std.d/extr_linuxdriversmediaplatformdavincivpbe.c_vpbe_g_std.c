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
typedef  int /*<<< orphan*/  v4l2_std_id ;
struct vpbe_enc_mode_info {int timings_type; int /*<<< orphan*/  std_id; } ;
struct vpbe_device {int current_out_index; struct vpbe_config* cfg; struct vpbe_enc_mode_info current_timings; } ;
struct vpbe_config {TYPE_2__* outputs; } ;
struct TYPE_3__ {int capabilities; } ;
struct TYPE_4__ {TYPE_1__ output; } ;

/* Variables and functions */
 int EINVAL ; 
 int ENODATA ; 
 int V4L2_OUT_CAP_STD ; 
 int VPBE_ENC_STD ; 

__attribute__((used)) static int vpbe_g_std(struct vpbe_device *vpbe_dev, v4l2_std_id *std_id)
{
	struct vpbe_enc_mode_info *cur_timings = &vpbe_dev->current_timings;
	struct vpbe_config *cfg = vpbe_dev->cfg;
	int out_index = vpbe_dev->current_out_index;

	if (!(cfg->outputs[out_index].output.capabilities & V4L2_OUT_CAP_STD))
		return -ENODATA;

	if (cur_timings->timings_type & VPBE_ENC_STD) {
		*std_id = cur_timings->std_id;
		return 0;
	}

	return -EINVAL;
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
          int _len_vpbe_dev0 = 1;
          struct vpbe_device * vpbe_dev = (struct vpbe_device *) malloc(_len_vpbe_dev0*sizeof(struct vpbe_device));
          for(int _i0 = 0; _i0 < _len_vpbe_dev0; _i0++) {
            vpbe_dev[_i0].current_out_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vpbe_dev__i0__cfg0 = 1;
          vpbe_dev[_i0].cfg = (struct vpbe_config *) malloc(_len_vpbe_dev__i0__cfg0*sizeof(struct vpbe_config));
          for(int _j0 = 0; _j0 < _len_vpbe_dev__i0__cfg0; _j0++) {
              int _len_vpbe_dev__i0__cfg_outputs0 = 1;
          vpbe_dev[_i0].cfg->outputs = (struct TYPE_4__ *) malloc(_len_vpbe_dev__i0__cfg_outputs0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_vpbe_dev__i0__cfg_outputs0; _j0++) {
            vpbe_dev[_i0].cfg->outputs->output.capabilities = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        vpbe_dev[_i0].current_timings.timings_type = ((-2 * (next_i()%2)) + 1) * next_i();
        vpbe_dev[_i0].current_timings.std_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_std_id0 = 1;
          int * std_id = (int *) malloc(_len_std_id0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_std_id0; _i0++) {
            std_id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vpbe_g_std(vpbe_dev,std_id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vpbe_dev0; _aux++) {
          free(vpbe_dev[_aux].cfg);
          }
          free(vpbe_dev);
          free(std_id);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_vpbe_dev0 = 65025;
          struct vpbe_device * vpbe_dev = (struct vpbe_device *) malloc(_len_vpbe_dev0*sizeof(struct vpbe_device));
          for(int _i0 = 0; _i0 < _len_vpbe_dev0; _i0++) {
            vpbe_dev[_i0].current_out_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vpbe_dev__i0__cfg0 = 1;
          vpbe_dev[_i0].cfg = (struct vpbe_config *) malloc(_len_vpbe_dev__i0__cfg0*sizeof(struct vpbe_config));
          for(int _j0 = 0; _j0 < _len_vpbe_dev__i0__cfg0; _j0++) {
              int _len_vpbe_dev__i0__cfg_outputs0 = 1;
          vpbe_dev[_i0].cfg->outputs = (struct TYPE_4__ *) malloc(_len_vpbe_dev__i0__cfg_outputs0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_vpbe_dev__i0__cfg_outputs0; _j0++) {
            vpbe_dev[_i0].cfg->outputs->output.capabilities = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        vpbe_dev[_i0].current_timings.timings_type = ((-2 * (next_i()%2)) + 1) * next_i();
        vpbe_dev[_i0].current_timings.std_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_std_id0 = 65025;
          int * std_id = (int *) malloc(_len_std_id0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_std_id0; _i0++) {
            std_id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vpbe_g_std(vpbe_dev,std_id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vpbe_dev0; _aux++) {
          free(vpbe_dev[_aux].cfg);
          }
          free(vpbe_dev);
          free(std_id);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_vpbe_dev0 = 100;
          struct vpbe_device * vpbe_dev = (struct vpbe_device *) malloc(_len_vpbe_dev0*sizeof(struct vpbe_device));
          for(int _i0 = 0; _i0 < _len_vpbe_dev0; _i0++) {
            vpbe_dev[_i0].current_out_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vpbe_dev__i0__cfg0 = 1;
          vpbe_dev[_i0].cfg = (struct vpbe_config *) malloc(_len_vpbe_dev__i0__cfg0*sizeof(struct vpbe_config));
          for(int _j0 = 0; _j0 < _len_vpbe_dev__i0__cfg0; _j0++) {
              int _len_vpbe_dev__i0__cfg_outputs0 = 1;
          vpbe_dev[_i0].cfg->outputs = (struct TYPE_4__ *) malloc(_len_vpbe_dev__i0__cfg_outputs0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_vpbe_dev__i0__cfg_outputs0; _j0++) {
            vpbe_dev[_i0].cfg->outputs->output.capabilities = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        vpbe_dev[_i0].current_timings.timings_type = ((-2 * (next_i()%2)) + 1) * next_i();
        vpbe_dev[_i0].current_timings.std_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_std_id0 = 100;
          int * std_id = (int *) malloc(_len_std_id0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_std_id0; _i0++) {
            std_id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vpbe_g_std(vpbe_dev,std_id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vpbe_dev0; _aux++) {
          free(vpbe_dev[_aux].cfg);
          }
          free(vpbe_dev);
          free(std_id);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

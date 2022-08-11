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
struct TYPE_3__ {int capabilities; } ;
struct vpbe_output {int num_modes; TYPE_2__* modes; TYPE_1__ output; } ;
struct vpbe_device {int current_out_index; struct vpbe_config* cfg; } ;
struct vpbe_config {struct vpbe_output* outputs; } ;
struct v4l2_enum_dv_timings {int index; int /*<<< orphan*/  timings; } ;
struct TYPE_4__ {scalar_t__ timings_type; int /*<<< orphan*/  dv_timings; } ;

/* Variables and functions */
 int EINVAL ; 
 int ENODATA ; 
 int V4L2_OUT_CAP_DV_TIMINGS ; 
 scalar_t__ VPBE_ENC_DV_TIMINGS ; 

__attribute__((used)) static int vpbe_enum_dv_timings(struct vpbe_device *vpbe_dev,
			 struct v4l2_enum_dv_timings *timings)
{
	struct vpbe_config *cfg = vpbe_dev->cfg;
	int out_index = vpbe_dev->current_out_index;
	struct vpbe_output *output = &cfg->outputs[out_index];
	int j = 0;
	int i;

	if (!(output->output.capabilities & V4L2_OUT_CAP_DV_TIMINGS))
		return -ENODATA;

	for (i = 0; i < output->num_modes; i++) {
		if (output->modes[i].timings_type == VPBE_ENC_DV_TIMINGS) {
			if (j == timings->index)
				break;
			j++;
		}
	}

	if (i == output->num_modes)
		return -EINVAL;
	timings->timings = output->modes[i].dv_timings;
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
          int _len_vpbe_dev0 = 1;
          struct vpbe_device * vpbe_dev = (struct vpbe_device *) malloc(_len_vpbe_dev0*sizeof(struct vpbe_device));
          for(int _i0 = 0; _i0 < _len_vpbe_dev0; _i0++) {
            vpbe_dev[_i0].current_out_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vpbe_dev__i0__cfg0 = 1;
          vpbe_dev[_i0].cfg = (struct vpbe_config *) malloc(_len_vpbe_dev__i0__cfg0*sizeof(struct vpbe_config));
          for(int _j0 = 0; _j0 < _len_vpbe_dev__i0__cfg0; _j0++) {
              int _len_vpbe_dev__i0__cfg_outputs0 = 1;
          vpbe_dev[_i0].cfg->outputs = (struct vpbe_output *) malloc(_len_vpbe_dev__i0__cfg_outputs0*sizeof(struct vpbe_output));
          for(int _j0 = 0; _j0 < _len_vpbe_dev__i0__cfg_outputs0; _j0++) {
            vpbe_dev[_i0].cfg->outputs->num_modes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vpbe_dev__i0__cfg_outputs_modes0 = 1;
          vpbe_dev[_i0].cfg->outputs->modes = (struct TYPE_4__ *) malloc(_len_vpbe_dev__i0__cfg_outputs_modes0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_vpbe_dev__i0__cfg_outputs_modes0; _j0++) {
            vpbe_dev[_i0].cfg->outputs->modes->timings_type = ((-2 * (next_i()%2)) + 1) * next_i();
        vpbe_dev[_i0].cfg->outputs->modes->dv_timings = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        vpbe_dev[_i0].cfg->outputs->output.capabilities = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_timings0 = 1;
          struct v4l2_enum_dv_timings * timings = (struct v4l2_enum_dv_timings *) malloc(_len_timings0*sizeof(struct v4l2_enum_dv_timings));
          for(int _i0 = 0; _i0 < _len_timings0; _i0++) {
            timings[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
        timings[_i0].timings = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vpbe_enum_dv_timings(vpbe_dev,timings);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vpbe_dev0; _aux++) {
          free(vpbe_dev[_aux].cfg);
          }
          free(vpbe_dev);
          free(timings);
        
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
          vpbe_dev[_i0].cfg->outputs = (struct vpbe_output *) malloc(_len_vpbe_dev__i0__cfg_outputs0*sizeof(struct vpbe_output));
          for(int _j0 = 0; _j0 < _len_vpbe_dev__i0__cfg_outputs0; _j0++) {
            vpbe_dev[_i0].cfg->outputs->num_modes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vpbe_dev__i0__cfg_outputs_modes0 = 1;
          vpbe_dev[_i0].cfg->outputs->modes = (struct TYPE_4__ *) malloc(_len_vpbe_dev__i0__cfg_outputs_modes0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_vpbe_dev__i0__cfg_outputs_modes0; _j0++) {
            vpbe_dev[_i0].cfg->outputs->modes->timings_type = ((-2 * (next_i()%2)) + 1) * next_i();
        vpbe_dev[_i0].cfg->outputs->modes->dv_timings = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        vpbe_dev[_i0].cfg->outputs->output.capabilities = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_timings0 = 65025;
          struct v4l2_enum_dv_timings * timings = (struct v4l2_enum_dv_timings *) malloc(_len_timings0*sizeof(struct v4l2_enum_dv_timings));
          for(int _i0 = 0; _i0 < _len_timings0; _i0++) {
            timings[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
        timings[_i0].timings = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vpbe_enum_dv_timings(vpbe_dev,timings);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vpbe_dev0; _aux++) {
          free(vpbe_dev[_aux].cfg);
          }
          free(vpbe_dev);
          free(timings);
        
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
          vpbe_dev[_i0].cfg->outputs = (struct vpbe_output *) malloc(_len_vpbe_dev__i0__cfg_outputs0*sizeof(struct vpbe_output));
          for(int _j0 = 0; _j0 < _len_vpbe_dev__i0__cfg_outputs0; _j0++) {
            vpbe_dev[_i0].cfg->outputs->num_modes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vpbe_dev__i0__cfg_outputs_modes0 = 1;
          vpbe_dev[_i0].cfg->outputs->modes = (struct TYPE_4__ *) malloc(_len_vpbe_dev__i0__cfg_outputs_modes0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_vpbe_dev__i0__cfg_outputs_modes0; _j0++) {
            vpbe_dev[_i0].cfg->outputs->modes->timings_type = ((-2 * (next_i()%2)) + 1) * next_i();
        vpbe_dev[_i0].cfg->outputs->modes->dv_timings = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        vpbe_dev[_i0].cfg->outputs->output.capabilities = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_timings0 = 100;
          struct v4l2_enum_dv_timings * timings = (struct v4l2_enum_dv_timings *) malloc(_len_timings0*sizeof(struct v4l2_enum_dv_timings));
          for(int _i0 = 0; _i0 < _len_timings0; _i0++) {
            timings[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
        timings[_i0].timings = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vpbe_enum_dv_timings(vpbe_dev,timings);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vpbe_dev0; _aux++) {
          free(vpbe_dev[_aux].cfg);
          }
          free(vpbe_dev);
          free(timings);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

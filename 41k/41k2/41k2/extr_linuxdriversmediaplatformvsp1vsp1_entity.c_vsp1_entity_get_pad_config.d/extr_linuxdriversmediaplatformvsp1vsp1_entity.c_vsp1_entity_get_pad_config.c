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
struct vsp1_entity {struct v4l2_subdev_pad_config* config; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
typedef  enum v4l2_subdev_format_whence { ____Placeholder_v4l2_subdev_format_whence } v4l2_subdev_format_whence ;

/* Variables and functions */
#define  V4L2_SUBDEV_FORMAT_ACTIVE 129 
#define  V4L2_SUBDEV_FORMAT_TRY 128 

struct v4l2_subdev_pad_config *
vsp1_entity_get_pad_config(struct vsp1_entity *entity,
			   struct v4l2_subdev_pad_config *cfg,
			   enum v4l2_subdev_format_whence which)
{
	switch (which) {
	case V4L2_SUBDEV_FORMAT_ACTIVE:
		return entity->config;
	case V4L2_SUBDEV_FORMAT_TRY:
	default:
		return cfg;
	}
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
          enum v4l2_subdev_format_whence which = 0;
          int _len_entity0 = 1;
          struct vsp1_entity * entity = (struct vsp1_entity *) malloc(_len_entity0*sizeof(struct vsp1_entity));
          for(int _i0 = 0; _i0 < _len_entity0; _i0++) {
              int _len_entity__i0__config0 = 1;
          entity[_i0].config = (struct v4l2_subdev_pad_config *) malloc(_len_entity__i0__config0*sizeof(struct v4l2_subdev_pad_config));
          for(int _j0 = 0; _j0 < _len_entity__i0__config0; _j0++) {
            entity[_i0].config->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_cfg0 = 1;
          struct v4l2_subdev_pad_config * cfg = (struct v4l2_subdev_pad_config *) malloc(_len_cfg0*sizeof(struct v4l2_subdev_pad_config));
          for(int _i0 = 0; _i0 < _len_cfg0; _i0++) {
            cfg[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct v4l2_subdev_pad_config * benchRet = vsp1_entity_get_pad_config(entity,cfg,which);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_entity0; _aux++) {
          free(entity[_aux].config);
          }
          free(entity);
          free(cfg);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum v4l2_subdev_format_whence which = 0;
          int _len_entity0 = 65025;
          struct vsp1_entity * entity = (struct vsp1_entity *) malloc(_len_entity0*sizeof(struct vsp1_entity));
          for(int _i0 = 0; _i0 < _len_entity0; _i0++) {
              int _len_entity__i0__config0 = 1;
          entity[_i0].config = (struct v4l2_subdev_pad_config *) malloc(_len_entity__i0__config0*sizeof(struct v4l2_subdev_pad_config));
          for(int _j0 = 0; _j0 < _len_entity__i0__config0; _j0++) {
            entity[_i0].config->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_cfg0 = 65025;
          struct v4l2_subdev_pad_config * cfg = (struct v4l2_subdev_pad_config *) malloc(_len_cfg0*sizeof(struct v4l2_subdev_pad_config));
          for(int _i0 = 0; _i0 < _len_cfg0; _i0++) {
            cfg[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct v4l2_subdev_pad_config * benchRet = vsp1_entity_get_pad_config(entity,cfg,which);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_entity0; _aux++) {
          free(entity[_aux].config);
          }
          free(entity);
          free(cfg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum v4l2_subdev_format_whence which = 0;
          int _len_entity0 = 100;
          struct vsp1_entity * entity = (struct vsp1_entity *) malloc(_len_entity0*sizeof(struct vsp1_entity));
          for(int _i0 = 0; _i0 < _len_entity0; _i0++) {
              int _len_entity__i0__config0 = 1;
          entity[_i0].config = (struct v4l2_subdev_pad_config *) malloc(_len_entity__i0__config0*sizeof(struct v4l2_subdev_pad_config));
          for(int _j0 = 0; _j0 < _len_entity__i0__config0; _j0++) {
            entity[_i0].config->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_cfg0 = 100;
          struct v4l2_subdev_pad_config * cfg = (struct v4l2_subdev_pad_config *) malloc(_len_cfg0*sizeof(struct v4l2_subdev_pad_config));
          for(int _i0 = 0; _i0 < _len_cfg0; _i0++) {
            cfg[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct v4l2_subdev_pad_config * benchRet = vsp1_entity_get_pad_config(entity,cfg,which);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_entity0; _aux++) {
          free(entity[_aux].config);
          }
          free(entity);
          free(cfg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

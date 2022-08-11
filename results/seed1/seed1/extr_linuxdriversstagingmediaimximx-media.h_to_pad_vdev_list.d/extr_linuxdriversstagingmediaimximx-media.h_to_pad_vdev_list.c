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
struct v4l2_subdev {struct list_head* host_priv; } ;
struct list_head {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline struct list_head *
to_pad_vdev_list(struct v4l2_subdev *sd, int pad_index)
{
	struct list_head *vdev_list = sd->host_priv;

	return vdev_list ? &vdev_list[pad_index] : NULL;
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
          int pad_index = 100;
          int _len_sd0 = 1;
          struct v4l2_subdev * sd = (struct v4l2_subdev *) malloc(_len_sd0*sizeof(struct v4l2_subdev));
          for(int _i0 = 0; _i0 < _len_sd0; _i0++) {
              int _len_sd__i0__host_priv0 = 1;
          sd[_i0].host_priv = (struct list_head *) malloc(_len_sd__i0__host_priv0*sizeof(struct list_head));
          for(int _j0 = 0; _j0 < _len_sd__i0__host_priv0; _j0++) {
            sd[_i0].host_priv->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct list_head * benchRet = to_pad_vdev_list(sd,pad_index);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_sd0; _aux++) {
          free(sd[_aux].host_priv);
          }
          free(sd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int pad_index = 255;
          int _len_sd0 = 65025;
          struct v4l2_subdev * sd = (struct v4l2_subdev *) malloc(_len_sd0*sizeof(struct v4l2_subdev));
          for(int _i0 = 0; _i0 < _len_sd0; _i0++) {
              int _len_sd__i0__host_priv0 = 1;
          sd[_i0].host_priv = (struct list_head *) malloc(_len_sd__i0__host_priv0*sizeof(struct list_head));
          for(int _j0 = 0; _j0 < _len_sd__i0__host_priv0; _j0++) {
            sd[_i0].host_priv->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct list_head * benchRet = to_pad_vdev_list(sd,pad_index);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_sd0; _aux++) {
          free(sd[_aux].host_priv);
          }
          free(sd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int pad_index = 10;
          int _len_sd0 = 100;
          struct v4l2_subdev * sd = (struct v4l2_subdev *) malloc(_len_sd0*sizeof(struct v4l2_subdev));
          for(int _i0 = 0; _i0 < _len_sd0; _i0++) {
              int _len_sd__i0__host_priv0 = 1;
          sd[_i0].host_priv = (struct list_head *) malloc(_len_sd__i0__host_priv0*sizeof(struct list_head));
          for(int _j0 = 0; _j0 < _len_sd__i0__host_priv0; _j0++) {
            sd[_i0].host_priv->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct list_head * benchRet = to_pad_vdev_list(sd,pad_index);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_sd0; _aux++) {
          free(sd[_aux].host_priv);
          }
          free(sd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct v4l2_rect {scalar_t__ height; scalar_t__ width; scalar_t__ left; scalar_t__ top; } ;
struct smiapp_subdev {TYPE_1__* sensor; } ;
struct TYPE_2__ {scalar_t__* limits; } ;

/* Variables and functions */
 size_t SMIAPP_LIMIT_X_ADDR_MAX ; 
 size_t SMIAPP_LIMIT_Y_ADDR_MAX ; 

__attribute__((used)) static void smiapp_get_native_size(struct smiapp_subdev *ssd,
				    struct v4l2_rect *r)
{
	r->top = 0;
	r->left = 0;
	r->width = ssd->sensor->limits[SMIAPP_LIMIT_X_ADDR_MAX] + 1;
	r->height = ssd->sensor->limits[SMIAPP_LIMIT_Y_ADDR_MAX] + 1;
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
          int _len_ssd0 = 1;
          struct smiapp_subdev * ssd = (struct smiapp_subdev *) malloc(_len_ssd0*sizeof(struct smiapp_subdev));
          for(int _i0 = 0; _i0 < _len_ssd0; _i0++) {
              int _len_ssd__i0__sensor0 = 1;
          ssd[_i0].sensor = (struct TYPE_2__ *) malloc(_len_ssd__i0__sensor0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ssd__i0__sensor0; _j0++) {
              int _len_ssd__i0__sensor_limits0 = 1;
          ssd[_i0].sensor->limits = (long *) malloc(_len_ssd__i0__sensor_limits0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ssd__i0__sensor_limits0; _j0++) {
            ssd[_i0].sensor->limits[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_r0 = 1;
          struct v4l2_rect * r = (struct v4l2_rect *) malloc(_len_r0*sizeof(struct v4l2_rect));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        r[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        r[_i0].left = ((-2 * (next_i()%2)) + 1) * next_i();
        r[_i0].top = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          smiapp_get_native_size(ssd,r);
          for(int _aux = 0; _aux < _len_ssd0; _aux++) {
          free(ssd[_aux].sensor);
          }
          free(ssd);
          free(r);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ssd0 = 65025;
          struct smiapp_subdev * ssd = (struct smiapp_subdev *) malloc(_len_ssd0*sizeof(struct smiapp_subdev));
          for(int _i0 = 0; _i0 < _len_ssd0; _i0++) {
              int _len_ssd__i0__sensor0 = 1;
          ssd[_i0].sensor = (struct TYPE_2__ *) malloc(_len_ssd__i0__sensor0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ssd__i0__sensor0; _j0++) {
              int _len_ssd__i0__sensor_limits0 = 1;
          ssd[_i0].sensor->limits = (long *) malloc(_len_ssd__i0__sensor_limits0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ssd__i0__sensor_limits0; _j0++) {
            ssd[_i0].sensor->limits[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_r0 = 65025;
          struct v4l2_rect * r = (struct v4l2_rect *) malloc(_len_r0*sizeof(struct v4l2_rect));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        r[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        r[_i0].left = ((-2 * (next_i()%2)) + 1) * next_i();
        r[_i0].top = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          smiapp_get_native_size(ssd,r);
          for(int _aux = 0; _aux < _len_ssd0; _aux++) {
          free(ssd[_aux].sensor);
          }
          free(ssd);
          free(r);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ssd0 = 100;
          struct smiapp_subdev * ssd = (struct smiapp_subdev *) malloc(_len_ssd0*sizeof(struct smiapp_subdev));
          for(int _i0 = 0; _i0 < _len_ssd0; _i0++) {
              int _len_ssd__i0__sensor0 = 1;
          ssd[_i0].sensor = (struct TYPE_2__ *) malloc(_len_ssd__i0__sensor0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ssd__i0__sensor0; _j0++) {
              int _len_ssd__i0__sensor_limits0 = 1;
          ssd[_i0].sensor->limits = (long *) malloc(_len_ssd__i0__sensor_limits0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ssd__i0__sensor_limits0; _j0++) {
            ssd[_i0].sensor->limits[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_r0 = 100;
          struct v4l2_rect * r = (struct v4l2_rect *) malloc(_len_r0*sizeof(struct v4l2_rect));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        r[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        r[_i0].left = ((-2 * (next_i()%2)) + 1) * next_i();
        r[_i0].top = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          smiapp_get_native_size(ssd,r);
          for(int _aux = 0; _aux < _len_ssd0; _aux++) {
          free(ssd[_aux].sensor);
          }
          free(ssd);
          free(r);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

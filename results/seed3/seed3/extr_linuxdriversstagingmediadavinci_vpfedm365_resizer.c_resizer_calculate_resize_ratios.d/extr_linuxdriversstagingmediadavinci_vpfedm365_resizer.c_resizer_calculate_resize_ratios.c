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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {struct v4l2_mbus_framefmt* formats; } ;
struct TYPE_6__ {struct v4l2_mbus_framefmt* formats; } ;
struct TYPE_5__ {struct v4l2_mbus_framefmt* formats; } ;
struct resizer_params {TYPE_4__* rsz_rsc_param; } ;
struct vpfe_resizer_device {TYPE_3__ resizer_b; TYPE_2__ resizer_a; TYPE_1__ crop_resizer; struct resizer_params config; } ;
struct v4l2_mbus_framefmt {scalar_t__ field; int height; int width; } ;
struct TYPE_8__ {int v_dif; int h_dif; } ;

/* Variables and functions */
 size_t RESIZER_CROP_PAD_SINK ; 
 size_t RESIZER_PAD_SOURCE ; 
 int RSZ_A ; 
 scalar_t__ V4L2_FIELD_INTERLACED ; 

__attribute__((used)) static void
resizer_calculate_resize_ratios(struct vpfe_resizer_device *resizer, int index)
{
	struct resizer_params *param = &resizer->config;
	struct v4l2_mbus_framefmt *informat, *outformat;

	informat = &resizer->crop_resizer.formats[RESIZER_CROP_PAD_SINK];

	if (index == RSZ_A)
		outformat = &resizer->resizer_a.formats[RESIZER_PAD_SOURCE];
	else
		outformat = &resizer->resizer_b.formats[RESIZER_PAD_SOURCE];

	if (outformat->field != V4L2_FIELD_INTERLACED)
		param->rsz_rsc_param[index].v_dif =
			((informat->height) * 256) / (outformat->height);
	else
		param->rsz_rsc_param[index].v_dif =
			((informat->height >> 1) * 256) / (outformat->height);
	param->rsz_rsc_param[index].h_dif =
			((informat->width) * 256) / (outformat->width);
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
          int index = 100;
          int _len_resizer0 = 1;
          struct vpfe_resizer_device * resizer = (struct vpfe_resizer_device *) malloc(_len_resizer0*sizeof(struct vpfe_resizer_device));
          for(int _i0 = 0; _i0 < _len_resizer0; _i0++) {
              int _len_resizer__i0__resizer_b_formats0 = 1;
          resizer[_i0].resizer_b.formats = (struct v4l2_mbus_framefmt *) malloc(_len_resizer__i0__resizer_b_formats0*sizeof(struct v4l2_mbus_framefmt));
          for(int _j0 = 0; _j0 < _len_resizer__i0__resizer_b_formats0; _j0++) {
            resizer[_i0].resizer_b.formats->field = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].resizer_b.formats->height = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].resizer_b.formats->width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resizer__i0__resizer_a_formats0 = 1;
          resizer[_i0].resizer_a.formats = (struct v4l2_mbus_framefmt *) malloc(_len_resizer__i0__resizer_a_formats0*sizeof(struct v4l2_mbus_framefmt));
          for(int _j0 = 0; _j0 < _len_resizer__i0__resizer_a_formats0; _j0++) {
            resizer[_i0].resizer_a.formats->field = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].resizer_a.formats->height = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].resizer_a.formats->width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resizer__i0__crop_resizer_formats0 = 1;
          resizer[_i0].crop_resizer.formats = (struct v4l2_mbus_framefmt *) malloc(_len_resizer__i0__crop_resizer_formats0*sizeof(struct v4l2_mbus_framefmt));
          for(int _j0 = 0; _j0 < _len_resizer__i0__crop_resizer_formats0; _j0++) {
            resizer[_i0].crop_resizer.formats->field = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].crop_resizer.formats->height = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].crop_resizer.formats->width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resizer__i0__config_rsz_rsc_param0 = 1;
          resizer[_i0].config.rsz_rsc_param = (struct TYPE_8__ *) malloc(_len_resizer__i0__config_rsz_rsc_param0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_resizer__i0__config_rsz_rsc_param0; _j0++) {
            resizer[_i0].config.rsz_rsc_param->v_dif = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->h_dif = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          resizer_calculate_resize_ratios(resizer,index);
          free(resizer);
        
        break;
    }
    // big-arr
    case 1:
    {
          int index = 255;
          int _len_resizer0 = 65025;
          struct vpfe_resizer_device * resizer = (struct vpfe_resizer_device *) malloc(_len_resizer0*sizeof(struct vpfe_resizer_device));
          for(int _i0 = 0; _i0 < _len_resizer0; _i0++) {
              int _len_resizer__i0__resizer_b_formats0 = 1;
          resizer[_i0].resizer_b.formats = (struct v4l2_mbus_framefmt *) malloc(_len_resizer__i0__resizer_b_formats0*sizeof(struct v4l2_mbus_framefmt));
          for(int _j0 = 0; _j0 < _len_resizer__i0__resizer_b_formats0; _j0++) {
            resizer[_i0].resizer_b.formats->field = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].resizer_b.formats->height = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].resizer_b.formats->width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resizer__i0__resizer_a_formats0 = 1;
          resizer[_i0].resizer_a.formats = (struct v4l2_mbus_framefmt *) malloc(_len_resizer__i0__resizer_a_formats0*sizeof(struct v4l2_mbus_framefmt));
          for(int _j0 = 0; _j0 < _len_resizer__i0__resizer_a_formats0; _j0++) {
            resizer[_i0].resizer_a.formats->field = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].resizer_a.formats->height = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].resizer_a.formats->width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resizer__i0__crop_resizer_formats0 = 1;
          resizer[_i0].crop_resizer.formats = (struct v4l2_mbus_framefmt *) malloc(_len_resizer__i0__crop_resizer_formats0*sizeof(struct v4l2_mbus_framefmt));
          for(int _j0 = 0; _j0 < _len_resizer__i0__crop_resizer_formats0; _j0++) {
            resizer[_i0].crop_resizer.formats->field = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].crop_resizer.formats->height = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].crop_resizer.formats->width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resizer__i0__config_rsz_rsc_param0 = 1;
          resizer[_i0].config.rsz_rsc_param = (struct TYPE_8__ *) malloc(_len_resizer__i0__config_rsz_rsc_param0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_resizer__i0__config_rsz_rsc_param0; _j0++) {
            resizer[_i0].config.rsz_rsc_param->v_dif = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->h_dif = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          resizer_calculate_resize_ratios(resizer,index);
          free(resizer);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int index = 10;
          int _len_resizer0 = 100;
          struct vpfe_resizer_device * resizer = (struct vpfe_resizer_device *) malloc(_len_resizer0*sizeof(struct vpfe_resizer_device));
          for(int _i0 = 0; _i0 < _len_resizer0; _i0++) {
              int _len_resizer__i0__resizer_b_formats0 = 1;
          resizer[_i0].resizer_b.formats = (struct v4l2_mbus_framefmt *) malloc(_len_resizer__i0__resizer_b_formats0*sizeof(struct v4l2_mbus_framefmt));
          for(int _j0 = 0; _j0 < _len_resizer__i0__resizer_b_formats0; _j0++) {
            resizer[_i0].resizer_b.formats->field = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].resizer_b.formats->height = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].resizer_b.formats->width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resizer__i0__resizer_a_formats0 = 1;
          resizer[_i0].resizer_a.formats = (struct v4l2_mbus_framefmt *) malloc(_len_resizer__i0__resizer_a_formats0*sizeof(struct v4l2_mbus_framefmt));
          for(int _j0 = 0; _j0 < _len_resizer__i0__resizer_a_formats0; _j0++) {
            resizer[_i0].resizer_a.formats->field = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].resizer_a.formats->height = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].resizer_a.formats->width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resizer__i0__crop_resizer_formats0 = 1;
          resizer[_i0].crop_resizer.formats = (struct v4l2_mbus_framefmt *) malloc(_len_resizer__i0__crop_resizer_formats0*sizeof(struct v4l2_mbus_framefmt));
          for(int _j0 = 0; _j0 < _len_resizer__i0__crop_resizer_formats0; _j0++) {
            resizer[_i0].crop_resizer.formats->field = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].crop_resizer.formats->height = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].crop_resizer.formats->width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resizer__i0__config_rsz_rsc_param0 = 1;
          resizer[_i0].config.rsz_rsc_param = (struct TYPE_8__ *) malloc(_len_resizer__i0__config_rsz_rsc_param0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_resizer__i0__config_rsz_rsc_param0; _j0++) {
            resizer[_i0].config.rsz_rsc_param->v_dif = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->h_dif = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          resizer_calculate_resize_ratios(resizer,index);
          free(resizer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

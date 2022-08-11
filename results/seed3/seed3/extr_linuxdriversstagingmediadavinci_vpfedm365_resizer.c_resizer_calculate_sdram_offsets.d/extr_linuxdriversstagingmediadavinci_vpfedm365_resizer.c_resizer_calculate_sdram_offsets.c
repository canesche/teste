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
struct TYPE_6__ {struct v4l2_mbus_framefmt* formats; } ;
struct TYPE_5__ {struct v4l2_mbus_framefmt* formats; } ;
struct resizer_params {TYPE_4__* ext_mem_param; TYPE_3__* rsz_rsc_param; } ;
struct vpfe_resizer_device {TYPE_2__ resizer_b; TYPE_1__ resizer_a; struct resizer_params config; } ;
struct v4l2_mbus_framefmt {int height; int width; scalar_t__ code; } ;
struct TYPE_8__ {int c_offset; int flip_ofst_y; int flip_ofst_c; int rsz_sdr_oft_y; int rsz_sdr_oft_c; } ;
struct TYPE_7__ {scalar_t__ v_flip; scalar_t__ h_flip; } ;

/* Variables and functions */
 scalar_t__ MEDIA_BUS_FMT_YDYUYDYV8_1X16 ; 
 size_t RESIZER_PAD_SOURCE ; 
 int RSZ_A ; 

__attribute__((used)) static int
resizer_calculate_sdram_offsets(struct vpfe_resizer_device *resizer, int index)
{
	struct resizer_params *param = &resizer->config;
	struct v4l2_mbus_framefmt *outformat;
	int bytesperpixel = 2;
	int image_height;
	int image_width;
	int yuv_420 = 0;
	int offset = 0;

	if (index == RSZ_A)
		outformat = &resizer->resizer_a.formats[RESIZER_PAD_SOURCE];
	else
		outformat = &resizer->resizer_b.formats[RESIZER_PAD_SOURCE];

	image_height = outformat->height + 1;
	image_width = outformat->width + 1;
	param->ext_mem_param[index].c_offset = 0;
	param->ext_mem_param[index].flip_ofst_y = 0;
	param->ext_mem_param[index].flip_ofst_c = 0;
	if (outformat->code == MEDIA_BUS_FMT_YDYUYDYV8_1X16) {
		/* YUV 420 */
		yuv_420 = 1;
		bytesperpixel = 1;
	}

	if (param->rsz_rsc_param[index].h_flip)
		/* width * bytesperpixel - 1 */
		offset = (image_width * bytesperpixel) - 1;
	if (param->rsz_rsc_param[index].v_flip)
		offset += (image_height - 1) *
			param->ext_mem_param[index].rsz_sdr_oft_y;
	param->ext_mem_param[index].flip_ofst_y = offset;
	if (!yuv_420)
		return 0;
	offset = 0;
	/* half height for c-plane */
	if (param->rsz_rsc_param[index].h_flip)
		/* width * bytesperpixel - 1 */
		offset = image_width - 1;
	if (param->rsz_rsc_param[index].v_flip)
		offset += (((image_height >> 1) - 1) *
			   param->ext_mem_param[index].rsz_sdr_oft_c);
	param->ext_mem_param[index].flip_ofst_c = offset;
	param->ext_mem_param[index].c_offset =
		      param->ext_mem_param[index].rsz_sdr_oft_y * image_height;
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
          int index = 100;
          int _len_resizer0 = 1;
          struct vpfe_resizer_device * resizer = (struct vpfe_resizer_device *) malloc(_len_resizer0*sizeof(struct vpfe_resizer_device));
          for(int _i0 = 0; _i0 < _len_resizer0; _i0++) {
              int _len_resizer__i0__resizer_b_formats0 = 1;
          resizer[_i0].resizer_b.formats = (struct v4l2_mbus_framefmt *) malloc(_len_resizer__i0__resizer_b_formats0*sizeof(struct v4l2_mbus_framefmt));
          for(int _j0 = 0; _j0 < _len_resizer__i0__resizer_b_formats0; _j0++) {
            resizer[_i0].resizer_b.formats->height = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].resizer_b.formats->width = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].resizer_b.formats->code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resizer__i0__resizer_a_formats0 = 1;
          resizer[_i0].resizer_a.formats = (struct v4l2_mbus_framefmt *) malloc(_len_resizer__i0__resizer_a_formats0*sizeof(struct v4l2_mbus_framefmt));
          for(int _j0 = 0; _j0 < _len_resizer__i0__resizer_a_formats0; _j0++) {
            resizer[_i0].resizer_a.formats->height = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].resizer_a.formats->width = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].resizer_a.formats->code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resizer__i0__config_ext_mem_param0 = 1;
          resizer[_i0].config.ext_mem_param = (struct TYPE_8__ *) malloc(_len_resizer__i0__config_ext_mem_param0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_resizer__i0__config_ext_mem_param0; _j0++) {
            resizer[_i0].config.ext_mem_param->c_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.ext_mem_param->flip_ofst_y = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.ext_mem_param->flip_ofst_c = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.ext_mem_param->rsz_sdr_oft_y = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.ext_mem_param->rsz_sdr_oft_c = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resizer__i0__config_rsz_rsc_param0 = 1;
          resizer[_i0].config.rsz_rsc_param = (struct TYPE_7__ *) malloc(_len_resizer__i0__config_rsz_rsc_param0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_resizer__i0__config_rsz_rsc_param0; _j0++) {
            resizer[_i0].config.rsz_rsc_param->v_flip = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->h_flip = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = resizer_calculate_sdram_offsets(resizer,index);
          printf("%d\n", benchRet); 
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
            resizer[_i0].resizer_b.formats->height = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].resizer_b.formats->width = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].resizer_b.formats->code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resizer__i0__resizer_a_formats0 = 1;
          resizer[_i0].resizer_a.formats = (struct v4l2_mbus_framefmt *) malloc(_len_resizer__i0__resizer_a_formats0*sizeof(struct v4l2_mbus_framefmt));
          for(int _j0 = 0; _j0 < _len_resizer__i0__resizer_a_formats0; _j0++) {
            resizer[_i0].resizer_a.formats->height = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].resizer_a.formats->width = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].resizer_a.formats->code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resizer__i0__config_ext_mem_param0 = 1;
          resizer[_i0].config.ext_mem_param = (struct TYPE_8__ *) malloc(_len_resizer__i0__config_ext_mem_param0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_resizer__i0__config_ext_mem_param0; _j0++) {
            resizer[_i0].config.ext_mem_param->c_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.ext_mem_param->flip_ofst_y = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.ext_mem_param->flip_ofst_c = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.ext_mem_param->rsz_sdr_oft_y = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.ext_mem_param->rsz_sdr_oft_c = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resizer__i0__config_rsz_rsc_param0 = 1;
          resizer[_i0].config.rsz_rsc_param = (struct TYPE_7__ *) malloc(_len_resizer__i0__config_rsz_rsc_param0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_resizer__i0__config_rsz_rsc_param0; _j0++) {
            resizer[_i0].config.rsz_rsc_param->v_flip = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->h_flip = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = resizer_calculate_sdram_offsets(resizer,index);
          printf("%d\n", benchRet); 
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
            resizer[_i0].resizer_b.formats->height = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].resizer_b.formats->width = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].resizer_b.formats->code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resizer__i0__resizer_a_formats0 = 1;
          resizer[_i0].resizer_a.formats = (struct v4l2_mbus_framefmt *) malloc(_len_resizer__i0__resizer_a_formats0*sizeof(struct v4l2_mbus_framefmt));
          for(int _j0 = 0; _j0 < _len_resizer__i0__resizer_a_formats0; _j0++) {
            resizer[_i0].resizer_a.formats->height = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].resizer_a.formats->width = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].resizer_a.formats->code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resizer__i0__config_ext_mem_param0 = 1;
          resizer[_i0].config.ext_mem_param = (struct TYPE_8__ *) malloc(_len_resizer__i0__config_ext_mem_param0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_resizer__i0__config_ext_mem_param0; _j0++) {
            resizer[_i0].config.ext_mem_param->c_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.ext_mem_param->flip_ofst_y = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.ext_mem_param->flip_ofst_c = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.ext_mem_param->rsz_sdr_oft_y = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.ext_mem_param->rsz_sdr_oft_c = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resizer__i0__config_rsz_rsc_param0 = 1;
          resizer[_i0].config.rsz_rsc_param = (struct TYPE_7__ *) malloc(_len_resizer__i0__config_rsz_rsc_param0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_resizer__i0__config_rsz_rsc_param0; _j0++) {
            resizer[_i0].config.rsz_rsc_param->v_flip = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->h_flip = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = resizer_calculate_sdram_offsets(resizer,index);
          printf("%d\n", benchRet); 
          free(resizer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

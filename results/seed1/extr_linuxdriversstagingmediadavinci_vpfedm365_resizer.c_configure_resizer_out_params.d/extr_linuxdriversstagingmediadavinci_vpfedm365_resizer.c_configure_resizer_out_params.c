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
struct vpfe_rsz_output_spec {int user_y_ofst; int user_c_ofst; int /*<<< orphan*/  h_dscale_ave_sz; int /*<<< orphan*/  en_down_scale; int /*<<< orphan*/  h_lpf_int_c; int /*<<< orphan*/  h_lpf_int_y; int /*<<< orphan*/  h_typ_c; int /*<<< orphan*/  h_typ_y; int /*<<< orphan*/  v_lpf_int_c; int /*<<< orphan*/  v_lpf_int_y; int /*<<< orphan*/  v_typ_c; int /*<<< orphan*/  v_typ_y; int /*<<< orphan*/  v_flip; int /*<<< orphan*/  h_flip; int /*<<< orphan*/  vst_c; int /*<<< orphan*/  vst_y; int /*<<< orphan*/  v_dscale_ave_sz; } ;
struct TYPE_6__ {scalar_t__ output; struct v4l2_mbus_framefmt* formats; } ;
struct TYPE_5__ {scalar_t__ output; struct v4l2_mbus_framefmt* formats; } ;
struct resizer_params {TYPE_4__* ext_mem_param; TYPE_3__* rsz_rsc_param; void** rsz_en; } ;
struct vpfe_resizer_device {TYPE_2__ resizer_b; TYPE_1__ resizer_a; struct resizer_params config; } ;
struct v4l2_mbus_framefmt {scalar_t__ height; scalar_t__ width; } ;
struct TYPE_8__ {int user_y_ofst; int user_c_ofst; scalar_t__ rsz_sdr_ptr_e_c; int /*<<< orphan*/  rsz_sdr_ptr_s_c; scalar_t__ rsz_sdr_ptr_e_y; int /*<<< orphan*/  rsz_sdr_ptr_s_y; } ;
struct TYPE_7__ {int /*<<< orphan*/  v_dscale_ave_sz; int /*<<< orphan*/  h_dscale_ave_sz; int /*<<< orphan*/  dscale_en; int /*<<< orphan*/  h_lpf_int_c; int /*<<< orphan*/  h_lpf_int_y; int /*<<< orphan*/  h_typ_c; int /*<<< orphan*/  h_typ_y; int /*<<< orphan*/  v_lpf_int_c; int /*<<< orphan*/  v_lpf_int_y; int /*<<< orphan*/  v_typ_c; int /*<<< orphan*/  v_typ_y; int /*<<< orphan*/  v_flip; int /*<<< orphan*/  h_flip; scalar_t__ o_hsz; scalar_t__ o_vsz; } ;

/* Variables and functions */
 void* DISABLE ; 
 void* ENABLE ; 
 scalar_t__ RESIZER_OUTPUT_NONE ; 
 size_t RESIZER_PAD_SOURCE ; 
 int RSZ_A ; 
 int RSZ_B ; 

__attribute__((used)) static void
configure_resizer_out_params(struct vpfe_resizer_device *resizer, int index,
			     void *output_spec, unsigned char partial,
			     unsigned int flag)
{
	struct resizer_params *param = &resizer->config;
	struct v4l2_mbus_framefmt *outformat;
	struct vpfe_rsz_output_spec *output;

	if (index == RSZ_A &&
	    resizer->resizer_a.output == RESIZER_OUTPUT_NONE) {
		param->rsz_en[index] = DISABLE;
		return;
	}
	if (index == RSZ_B &&
	    resizer->resizer_b.output == RESIZER_OUTPUT_NONE) {
		param->rsz_en[index] = DISABLE;
		return;
	}
	output = output_spec;
	param->rsz_en[index] = ENABLE;
	if (partial) {
		param->rsz_rsc_param[index].h_flip = output->h_flip;
		param->rsz_rsc_param[index].v_flip = output->v_flip;
		param->rsz_rsc_param[index].v_typ_y = output->v_typ_y;
		param->rsz_rsc_param[index].v_typ_c = output->v_typ_c;
		param->rsz_rsc_param[index].v_lpf_int_y =
						output->v_lpf_int_y;
		param->rsz_rsc_param[index].v_lpf_int_c =
						output->v_lpf_int_c;
		param->rsz_rsc_param[index].h_typ_y = output->h_typ_y;
		param->rsz_rsc_param[index].h_typ_c = output->h_typ_c;
		param->rsz_rsc_param[index].h_lpf_int_y =
						output->h_lpf_int_y;
		param->rsz_rsc_param[index].h_lpf_int_c =
						output->h_lpf_int_c;
		param->rsz_rsc_param[index].dscale_en =
						output->en_down_scale;
		param->rsz_rsc_param[index].h_dscale_ave_sz =
						output->h_dscale_ave_sz;
		param->rsz_rsc_param[index].v_dscale_ave_sz =
						output->v_dscale_ave_sz;
		param->ext_mem_param[index].user_y_ofst =
				    (output->user_y_ofst + 31) & ~0x1f;
		param->ext_mem_param[index].user_c_ofst =
				    (output->user_c_ofst + 31) & ~0x1f;
		return;
	}

	if (index == RSZ_A)
		outformat = &resizer->resizer_a.formats[RESIZER_PAD_SOURCE];
	else
		outformat = &resizer->resizer_b.formats[RESIZER_PAD_SOURCE];
	param->rsz_rsc_param[index].o_vsz = outformat->height - 1;
	param->rsz_rsc_param[index].o_hsz = outformat->width - 1;
	param->ext_mem_param[index].rsz_sdr_ptr_s_y = output->vst_y;
	param->ext_mem_param[index].rsz_sdr_ptr_e_y = outformat->height;
	param->ext_mem_param[index].rsz_sdr_ptr_s_c = output->vst_c;
	param->ext_mem_param[index].rsz_sdr_ptr_e_c = outformat->height;

	if (!flag)
		return;
	/* update common parameters */
	param->rsz_rsc_param[index].h_flip = output->h_flip;
	param->rsz_rsc_param[index].v_flip = output->v_flip;
	param->rsz_rsc_param[index].v_typ_y = output->v_typ_y;
	param->rsz_rsc_param[index].v_typ_c = output->v_typ_c;
	param->rsz_rsc_param[index].v_lpf_int_y = output->v_lpf_int_y;
	param->rsz_rsc_param[index].v_lpf_int_c = output->v_lpf_int_c;
	param->rsz_rsc_param[index].h_typ_y = output->h_typ_y;
	param->rsz_rsc_param[index].h_typ_c = output->h_typ_c;
	param->rsz_rsc_param[index].h_lpf_int_y = output->h_lpf_int_y;
	param->rsz_rsc_param[index].h_lpf_int_c = output->h_lpf_int_c;
	param->rsz_rsc_param[index].dscale_en = output->en_down_scale;
	param->rsz_rsc_param[index].h_dscale_ave_sz = output->h_dscale_ave_sz;
	param->rsz_rsc_param[index].v_dscale_ave_sz = output->h_dscale_ave_sz;
	param->ext_mem_param[index].user_y_ofst =
					(output->user_y_ofst + 31) & ~0x1f;
	param->ext_mem_param[index].user_c_ofst =
					(output->user_c_ofst + 31) & ~0x1f;
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
          unsigned char partial = 100;
          unsigned int flag = 100;
          int _len_resizer0 = 1;
          struct vpfe_resizer_device * resizer = (struct vpfe_resizer_device *) malloc(_len_resizer0*sizeof(struct vpfe_resizer_device));
          for(int _i0 = 0; _i0 < _len_resizer0; _i0++) {
            resizer[_i0].resizer_b.output = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_resizer__i0__resizer_b_formats0 = 1;
          resizer[_i0].resizer_b.formats = (struct v4l2_mbus_framefmt *) malloc(_len_resizer__i0__resizer_b_formats0*sizeof(struct v4l2_mbus_framefmt));
          for(int _j0 = 0; _j0 < _len_resizer__i0__resizer_b_formats0; _j0++) {
            resizer[_i0].resizer_b.formats->height = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].resizer_b.formats->width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        resizer[_i0].resizer_a.output = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_resizer__i0__resizer_a_formats0 = 1;
          resizer[_i0].resizer_a.formats = (struct v4l2_mbus_framefmt *) malloc(_len_resizer__i0__resizer_a_formats0*sizeof(struct v4l2_mbus_framefmt));
          for(int _j0 = 0; _j0 < _len_resizer__i0__resizer_a_formats0; _j0++) {
            resizer[_i0].resizer_a.formats->height = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].resizer_a.formats->width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resizer__i0__config_ext_mem_param0 = 1;
          resizer[_i0].config.ext_mem_param = (struct TYPE_8__ *) malloc(_len_resizer__i0__config_ext_mem_param0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_resizer__i0__config_ext_mem_param0; _j0++) {
            resizer[_i0].config.ext_mem_param->user_y_ofst = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.ext_mem_param->user_c_ofst = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.ext_mem_param->rsz_sdr_ptr_e_c = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.ext_mem_param->rsz_sdr_ptr_s_c = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.ext_mem_param->rsz_sdr_ptr_e_y = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.ext_mem_param->rsz_sdr_ptr_s_y = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resizer__i0__config_rsz_rsc_param0 = 1;
          resizer[_i0].config.rsz_rsc_param = (struct TYPE_7__ *) malloc(_len_resizer__i0__config_rsz_rsc_param0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_resizer__i0__config_rsz_rsc_param0; _j0++) {
            resizer[_i0].config.rsz_rsc_param->v_dscale_ave_sz = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->h_dscale_ave_sz = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->dscale_en = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->h_lpf_int_c = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->h_lpf_int_y = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->h_typ_c = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->h_typ_y = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->v_lpf_int_c = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->v_lpf_int_y = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->v_typ_c = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->v_typ_y = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->v_flip = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->h_flip = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->o_hsz = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->o_vsz = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resizer__i0__config_rsz_en0 = 1;
          resizer[_i0].config.rsz_en = (void **) malloc(_len_resizer__i0__config_rsz_en0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_resizer__i0__config_rsz_en0; _j0++) {
          }
          }
          void * output_spec;
          configure_resizer_out_params(resizer,index,output_spec,partial,flag);
          free(resizer);
        
        break;
    }
    // big-arr
    case 1:
    {
          int index = 255;
          unsigned char partial = 255;
          unsigned int flag = 255;
          int _len_resizer0 = 65025;
          struct vpfe_resizer_device * resizer = (struct vpfe_resizer_device *) malloc(_len_resizer0*sizeof(struct vpfe_resizer_device));
          for(int _i0 = 0; _i0 < _len_resizer0; _i0++) {
            resizer[_i0].resizer_b.output = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_resizer__i0__resizer_b_formats0 = 1;
          resizer[_i0].resizer_b.formats = (struct v4l2_mbus_framefmt *) malloc(_len_resizer__i0__resizer_b_formats0*sizeof(struct v4l2_mbus_framefmt));
          for(int _j0 = 0; _j0 < _len_resizer__i0__resizer_b_formats0; _j0++) {
            resizer[_i0].resizer_b.formats->height = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].resizer_b.formats->width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        resizer[_i0].resizer_a.output = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_resizer__i0__resizer_a_formats0 = 1;
          resizer[_i0].resizer_a.formats = (struct v4l2_mbus_framefmt *) malloc(_len_resizer__i0__resizer_a_formats0*sizeof(struct v4l2_mbus_framefmt));
          for(int _j0 = 0; _j0 < _len_resizer__i0__resizer_a_formats0; _j0++) {
            resizer[_i0].resizer_a.formats->height = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].resizer_a.formats->width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resizer__i0__config_ext_mem_param0 = 1;
          resizer[_i0].config.ext_mem_param = (struct TYPE_8__ *) malloc(_len_resizer__i0__config_ext_mem_param0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_resizer__i0__config_ext_mem_param0; _j0++) {
            resizer[_i0].config.ext_mem_param->user_y_ofst = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.ext_mem_param->user_c_ofst = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.ext_mem_param->rsz_sdr_ptr_e_c = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.ext_mem_param->rsz_sdr_ptr_s_c = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.ext_mem_param->rsz_sdr_ptr_e_y = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.ext_mem_param->rsz_sdr_ptr_s_y = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resizer__i0__config_rsz_rsc_param0 = 1;
          resizer[_i0].config.rsz_rsc_param = (struct TYPE_7__ *) malloc(_len_resizer__i0__config_rsz_rsc_param0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_resizer__i0__config_rsz_rsc_param0; _j0++) {
            resizer[_i0].config.rsz_rsc_param->v_dscale_ave_sz = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->h_dscale_ave_sz = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->dscale_en = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->h_lpf_int_c = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->h_lpf_int_y = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->h_typ_c = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->h_typ_y = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->v_lpf_int_c = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->v_lpf_int_y = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->v_typ_c = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->v_typ_y = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->v_flip = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->h_flip = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->o_hsz = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->o_vsz = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resizer__i0__config_rsz_en0 = 1;
          resizer[_i0].config.rsz_en = (void **) malloc(_len_resizer__i0__config_rsz_en0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_resizer__i0__config_rsz_en0; _j0++) {
          }
          }
          void * output_spec;
          configure_resizer_out_params(resizer,index,output_spec,partial,flag);
          free(resizer);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int index = 10;
          unsigned char partial = 10;
          unsigned int flag = 10;
          int _len_resizer0 = 100;
          struct vpfe_resizer_device * resizer = (struct vpfe_resizer_device *) malloc(_len_resizer0*sizeof(struct vpfe_resizer_device));
          for(int _i0 = 0; _i0 < _len_resizer0; _i0++) {
            resizer[_i0].resizer_b.output = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_resizer__i0__resizer_b_formats0 = 1;
          resizer[_i0].resizer_b.formats = (struct v4l2_mbus_framefmt *) malloc(_len_resizer__i0__resizer_b_formats0*sizeof(struct v4l2_mbus_framefmt));
          for(int _j0 = 0; _j0 < _len_resizer__i0__resizer_b_formats0; _j0++) {
            resizer[_i0].resizer_b.formats->height = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].resizer_b.formats->width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        resizer[_i0].resizer_a.output = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_resizer__i0__resizer_a_formats0 = 1;
          resizer[_i0].resizer_a.formats = (struct v4l2_mbus_framefmt *) malloc(_len_resizer__i0__resizer_a_formats0*sizeof(struct v4l2_mbus_framefmt));
          for(int _j0 = 0; _j0 < _len_resizer__i0__resizer_a_formats0; _j0++) {
            resizer[_i0].resizer_a.formats->height = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].resizer_a.formats->width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resizer__i0__config_ext_mem_param0 = 1;
          resizer[_i0].config.ext_mem_param = (struct TYPE_8__ *) malloc(_len_resizer__i0__config_ext_mem_param0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_resizer__i0__config_ext_mem_param0; _j0++) {
            resizer[_i0].config.ext_mem_param->user_y_ofst = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.ext_mem_param->user_c_ofst = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.ext_mem_param->rsz_sdr_ptr_e_c = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.ext_mem_param->rsz_sdr_ptr_s_c = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.ext_mem_param->rsz_sdr_ptr_e_y = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.ext_mem_param->rsz_sdr_ptr_s_y = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resizer__i0__config_rsz_rsc_param0 = 1;
          resizer[_i0].config.rsz_rsc_param = (struct TYPE_7__ *) malloc(_len_resizer__i0__config_rsz_rsc_param0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_resizer__i0__config_rsz_rsc_param0; _j0++) {
            resizer[_i0].config.rsz_rsc_param->v_dscale_ave_sz = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->h_dscale_ave_sz = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->dscale_en = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->h_lpf_int_c = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->h_lpf_int_y = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->h_typ_c = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->h_typ_y = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->v_lpf_int_c = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->v_lpf_int_y = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->v_typ_c = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->v_typ_y = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->v_flip = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->h_flip = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->o_hsz = ((-2 * (next_i()%2)) + 1) * next_i();
        resizer[_i0].config.rsz_rsc_param->o_vsz = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resizer__i0__config_rsz_en0 = 1;
          resizer[_i0].config.rsz_en = (void **) malloc(_len_resizer__i0__config_rsz_en0*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_resizer__i0__config_rsz_en0; _j0++) {
          }
          }
          void * output_spec;
          configure_resizer_out_params(resizer,index,output_spec,partial,flag);
          free(resizer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

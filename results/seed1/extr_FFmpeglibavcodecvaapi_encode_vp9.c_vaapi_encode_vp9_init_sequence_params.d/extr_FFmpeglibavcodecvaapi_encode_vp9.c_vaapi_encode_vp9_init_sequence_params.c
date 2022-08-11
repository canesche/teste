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
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int /*<<< orphan*/  intra_period; int /*<<< orphan*/  bits_per_second; scalar_t__ kf_auto; int /*<<< orphan*/  max_frame_height; int /*<<< orphan*/  max_frame_width; } ;
typedef  TYPE_1__ VAEncSequenceParameterBufferVP9 ;
struct TYPE_7__ {int /*<<< orphan*/  frame_height_dst; int /*<<< orphan*/  frame_width_dst; int /*<<< orphan*/  frame_height_src; int /*<<< orphan*/  frame_width_src; } ;
typedef  TYPE_2__ VAEncPictureParameterBufferVP9 ;
struct TYPE_8__ {int va_rc_mode; int /*<<< orphan*/  gop_size; int /*<<< orphan*/  va_bit_rate; TYPE_2__* codec_picture_params; TYPE_1__* codec_sequence_params; } ;
typedef  TYPE_3__ VAAPIEncodeContext ;
struct TYPE_9__ {int /*<<< orphan*/  height; int /*<<< orphan*/  width; TYPE_3__* priv_data; } ;
typedef  TYPE_4__ AVCodecContext ;

/* Variables and functions */
 int VA_RC_CQP ; 

__attribute__((used)) static int vaapi_encode_vp9_init_sequence_params(AVCodecContext *avctx)
{
    VAAPIEncodeContext               *ctx = avctx->priv_data;
    VAEncSequenceParameterBufferVP9 *vseq = ctx->codec_sequence_params;
    VAEncPictureParameterBufferVP9  *vpic = ctx->codec_picture_params;

    vseq->max_frame_width  = avctx->width;
    vseq->max_frame_height = avctx->height;

    vseq->kf_auto = 0;

    if (!(ctx->va_rc_mode & VA_RC_CQP)) {
        vseq->bits_per_second = ctx->va_bit_rate;
        vseq->intra_period    = ctx->gop_size;
    }

    vpic->frame_width_src  = avctx->width;
    vpic->frame_height_src = avctx->height;
    vpic->frame_width_dst  = avctx->width;
    vpic->frame_height_dst = avctx->height;

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
          int _len_avctx0 = 1;
          struct TYPE_9__ * avctx = (struct TYPE_9__ *) malloc(_len_avctx0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_avctx0; _i0++) {
            avctx[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_avctx__i0__priv_data0 = 1;
          avctx[_i0].priv_data = (struct TYPE_8__ *) malloc(_len_avctx__i0__priv_data0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_avctx__i0__priv_data0; _j0++) {
            avctx[_i0].priv_data->va_rc_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].priv_data->gop_size = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].priv_data->va_bit_rate = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_avctx__i0__priv_data_codec_picture_params0 = 1;
          avctx[_i0].priv_data->codec_picture_params = (struct TYPE_7__ *) malloc(_len_avctx__i0__priv_data_codec_picture_params0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_avctx__i0__priv_data_codec_picture_params0; _j0++) {
            avctx[_i0].priv_data->codec_picture_params->frame_height_dst = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].priv_data->codec_picture_params->frame_width_dst = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].priv_data->codec_picture_params->frame_height_src = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].priv_data->codec_picture_params->frame_width_src = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_avctx__i0__priv_data_codec_sequence_params0 = 1;
          avctx[_i0].priv_data->codec_sequence_params = (struct TYPE_6__ *) malloc(_len_avctx__i0__priv_data_codec_sequence_params0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_avctx__i0__priv_data_codec_sequence_params0; _j0++) {
            avctx[_i0].priv_data->codec_sequence_params->intra_period = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].priv_data->codec_sequence_params->bits_per_second = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].priv_data->codec_sequence_params->kf_auto = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].priv_data->codec_sequence_params->max_frame_height = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].priv_data->codec_sequence_params->max_frame_width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = vaapi_encode_vp9_init_sequence_params(avctx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_avctx0; _aux++) {
          free(avctx[_aux].priv_data);
          }
          free(avctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_avctx0 = 65025;
          struct TYPE_9__ * avctx = (struct TYPE_9__ *) malloc(_len_avctx0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_avctx0; _i0++) {
            avctx[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_avctx__i0__priv_data0 = 1;
          avctx[_i0].priv_data = (struct TYPE_8__ *) malloc(_len_avctx__i0__priv_data0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_avctx__i0__priv_data0; _j0++) {
            avctx[_i0].priv_data->va_rc_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].priv_data->gop_size = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].priv_data->va_bit_rate = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_avctx__i0__priv_data_codec_picture_params0 = 1;
          avctx[_i0].priv_data->codec_picture_params = (struct TYPE_7__ *) malloc(_len_avctx__i0__priv_data_codec_picture_params0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_avctx__i0__priv_data_codec_picture_params0; _j0++) {
            avctx[_i0].priv_data->codec_picture_params->frame_height_dst = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].priv_data->codec_picture_params->frame_width_dst = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].priv_data->codec_picture_params->frame_height_src = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].priv_data->codec_picture_params->frame_width_src = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_avctx__i0__priv_data_codec_sequence_params0 = 1;
          avctx[_i0].priv_data->codec_sequence_params = (struct TYPE_6__ *) malloc(_len_avctx__i0__priv_data_codec_sequence_params0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_avctx__i0__priv_data_codec_sequence_params0; _j0++) {
            avctx[_i0].priv_data->codec_sequence_params->intra_period = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].priv_data->codec_sequence_params->bits_per_second = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].priv_data->codec_sequence_params->kf_auto = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].priv_data->codec_sequence_params->max_frame_height = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].priv_data->codec_sequence_params->max_frame_width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = vaapi_encode_vp9_init_sequence_params(avctx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_avctx0; _aux++) {
          free(avctx[_aux].priv_data);
          }
          free(avctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_avctx0 = 100;
          struct TYPE_9__ * avctx = (struct TYPE_9__ *) malloc(_len_avctx0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_avctx0; _i0++) {
            avctx[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_avctx__i0__priv_data0 = 1;
          avctx[_i0].priv_data = (struct TYPE_8__ *) malloc(_len_avctx__i0__priv_data0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_avctx__i0__priv_data0; _j0++) {
            avctx[_i0].priv_data->va_rc_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].priv_data->gop_size = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].priv_data->va_bit_rate = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_avctx__i0__priv_data_codec_picture_params0 = 1;
          avctx[_i0].priv_data->codec_picture_params = (struct TYPE_7__ *) malloc(_len_avctx__i0__priv_data_codec_picture_params0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_avctx__i0__priv_data_codec_picture_params0; _j0++) {
            avctx[_i0].priv_data->codec_picture_params->frame_height_dst = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].priv_data->codec_picture_params->frame_width_dst = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].priv_data->codec_picture_params->frame_height_src = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].priv_data->codec_picture_params->frame_width_src = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_avctx__i0__priv_data_codec_sequence_params0 = 1;
          avctx[_i0].priv_data->codec_sequence_params = (struct TYPE_6__ *) malloc(_len_avctx__i0__priv_data_codec_sequence_params0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_avctx__i0__priv_data_codec_sequence_params0; _j0++) {
            avctx[_i0].priv_data->codec_sequence_params->intra_period = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].priv_data->codec_sequence_params->bits_per_second = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].priv_data->codec_sequence_params->kf_auto = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].priv_data->codec_sequence_params->max_frame_height = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].priv_data->codec_sequence_params->max_frame_width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = vaapi_encode_vp9_init_sequence_params(avctx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_avctx0; _aux++) {
          free(avctx[_aux].priv_data);
          }
          free(avctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

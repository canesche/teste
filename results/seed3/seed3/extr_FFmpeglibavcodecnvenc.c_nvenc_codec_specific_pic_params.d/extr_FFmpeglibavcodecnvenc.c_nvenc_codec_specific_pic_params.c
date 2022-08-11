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
typedef  struct TYPE_24__   TYPE_9__ ;
typedef  struct TYPE_23__   TYPE_8__ ;
typedef  struct TYPE_22__   TYPE_7__ ;
typedef  struct TYPE_21__   TYPE_6__ ;
typedef  struct TYPE_20__   TYPE_5__ ;
typedef  struct TYPE_19__   TYPE_4__ ;
typedef  struct TYPE_18__   TYPE_3__ ;
typedef  struct TYPE_17__   TYPE_2__ ;
typedef  struct TYPE_16__   TYPE_1__ ;
typedef  struct TYPE_15__   TYPE_11__ ;
typedef  struct TYPE_14__   TYPE_10__ ;

/* Type definitions */
struct TYPE_19__ {int /*<<< orphan*/  sliceModeData; int /*<<< orphan*/  sliceMode; } ;
struct TYPE_17__ {int /*<<< orphan*/  sliceModeData; int /*<<< orphan*/  sliceMode; } ;
struct TYPE_20__ {TYPE_4__ hevcConfig; TYPE_2__ h264Config; } ;
struct TYPE_21__ {TYPE_5__ encodeCodecConfig; } ;
struct TYPE_24__ {TYPE_6__ encode_config; } ;
struct TYPE_22__ {int seiPayloadArrayCnt; int /*<<< orphan*/ * seiPayloadArray; int /*<<< orphan*/  sliceModeData; int /*<<< orphan*/  sliceMode; } ;
struct TYPE_18__ {int seiPayloadArrayCnt; int /*<<< orphan*/ * seiPayloadArray; int /*<<< orphan*/  sliceModeData; int /*<<< orphan*/  sliceMode; } ;
struct TYPE_23__ {TYPE_7__ hevcPicParams; TYPE_3__ h264PicParams; } ;
struct TYPE_16__ {int id; } ;
struct TYPE_15__ {TYPE_1__* codec; TYPE_9__* priv_data; } ;
struct TYPE_14__ {TYPE_8__ codecPicParams; } ;
typedef  TYPE_9__ NvencContext ;
typedef  int /*<<< orphan*/  NV_ENC_SEI_PAYLOAD ;
typedef  TYPE_10__ NV_ENC_PIC_PARAMS ;
typedef  TYPE_11__ AVCodecContext ;

/* Variables and functions */
#define  AV_CODEC_ID_H264 129 
#define  AV_CODEC_ID_HEVC 128 

__attribute__((used)) static void nvenc_codec_specific_pic_params(AVCodecContext *avctx,
                                            NV_ENC_PIC_PARAMS *params,
                                            NV_ENC_SEI_PAYLOAD *sei_data)
{
    NvencContext *ctx = avctx->priv_data;

    switch (avctx->codec->id) {
    case AV_CODEC_ID_H264:
        params->codecPicParams.h264PicParams.sliceMode =
            ctx->encode_config.encodeCodecConfig.h264Config.sliceMode;
        params->codecPicParams.h264PicParams.sliceModeData =
            ctx->encode_config.encodeCodecConfig.h264Config.sliceModeData;
        if (sei_data) {
            params->codecPicParams.h264PicParams.seiPayloadArray = sei_data;
            params->codecPicParams.h264PicParams.seiPayloadArrayCnt = 1;
        }

      break;
    case AV_CODEC_ID_HEVC:
        params->codecPicParams.hevcPicParams.sliceMode =
            ctx->encode_config.encodeCodecConfig.hevcConfig.sliceMode;
        params->codecPicParams.hevcPicParams.sliceModeData =
            ctx->encode_config.encodeCodecConfig.hevcConfig.sliceModeData;
        if (sei_data) {
            params->codecPicParams.hevcPicParams.seiPayloadArray = sei_data;
            params->codecPicParams.hevcPicParams.seiPayloadArrayCnt = 1;
        }

        break;
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
          int _len_avctx0 = 1;
          struct TYPE_15__ * avctx = (struct TYPE_15__ *) malloc(_len_avctx0*sizeof(struct TYPE_15__));
          for(int _i0 = 0; _i0 < _len_avctx0; _i0++) {
              int _len_avctx__i0__codec0 = 1;
          avctx[_i0].codec = (struct TYPE_16__ *) malloc(_len_avctx__i0__codec0*sizeof(struct TYPE_16__));
          for(int _j0 = 0; _j0 < _len_avctx__i0__codec0; _j0++) {
            avctx[_i0].codec->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_avctx__i0__priv_data0 = 1;
          avctx[_i0].priv_data = (struct TYPE_24__ *) malloc(_len_avctx__i0__priv_data0*sizeof(struct TYPE_24__));
          for(int _j0 = 0; _j0 < _len_avctx__i0__priv_data0; _j0++) {
            avctx[_i0].priv_data->encode_config.encodeCodecConfig.hevcConfig.sliceModeData = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].priv_data->encode_config.encodeCodecConfig.hevcConfig.sliceMode = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].priv_data->encode_config.encodeCodecConfig.h264Config.sliceModeData = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].priv_data->encode_config.encodeCodecConfig.h264Config.sliceMode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_params0 = 1;
          struct TYPE_14__ * params = (struct TYPE_14__ *) malloc(_len_params0*sizeof(struct TYPE_14__));
          for(int _i0 = 0; _i0 < _len_params0; _i0++) {
            params[_i0].codecPicParams.hevcPicParams.seiPayloadArrayCnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_params__i0__codecPicParams_hevcPicParams_seiPayloadArray0 = 1;
          params[_i0].codecPicParams.hevcPicParams.seiPayloadArray = (int *) malloc(_len_params__i0__codecPicParams_hevcPicParams_seiPayloadArray0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_params__i0__codecPicParams_hevcPicParams_seiPayloadArray0; _j0++) {
            params[_i0].codecPicParams.hevcPicParams.seiPayloadArray[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        params[_i0].codecPicParams.hevcPicParams.sliceModeData = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].codecPicParams.hevcPicParams.sliceMode = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].codecPicParams.h264PicParams.seiPayloadArrayCnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_params__i0__codecPicParams_h264PicParams_seiPayloadArray0 = 1;
          params[_i0].codecPicParams.h264PicParams.seiPayloadArray = (int *) malloc(_len_params__i0__codecPicParams_h264PicParams_seiPayloadArray0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_params__i0__codecPicParams_h264PicParams_seiPayloadArray0; _j0++) {
            params[_i0].codecPicParams.h264PicParams.seiPayloadArray[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        params[_i0].codecPicParams.h264PicParams.sliceModeData = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].codecPicParams.h264PicParams.sliceMode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sei_data0 = 1;
          int * sei_data = (int *) malloc(_len_sei_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sei_data0; _i0++) {
            sei_data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nvenc_codec_specific_pic_params(avctx,params,sei_data);
          for(int _aux = 0; _aux < _len_avctx0; _aux++) {
          free(avctx[_aux].codec);
          }
          for(int _aux = 0; _aux < _len_avctx0; _aux++) {
          free(avctx[_aux].priv_data);
          }
          free(avctx);
          free(params);
          free(sei_data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_avctx0 = 65025;
          struct TYPE_15__ * avctx = (struct TYPE_15__ *) malloc(_len_avctx0*sizeof(struct TYPE_15__));
          for(int _i0 = 0; _i0 < _len_avctx0; _i0++) {
              int _len_avctx__i0__codec0 = 1;
          avctx[_i0].codec = (struct TYPE_16__ *) malloc(_len_avctx__i0__codec0*sizeof(struct TYPE_16__));
          for(int _j0 = 0; _j0 < _len_avctx__i0__codec0; _j0++) {
            avctx[_i0].codec->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_avctx__i0__priv_data0 = 1;
          avctx[_i0].priv_data = (struct TYPE_24__ *) malloc(_len_avctx__i0__priv_data0*sizeof(struct TYPE_24__));
          for(int _j0 = 0; _j0 < _len_avctx__i0__priv_data0; _j0++) {
            avctx[_i0].priv_data->encode_config.encodeCodecConfig.hevcConfig.sliceModeData = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].priv_data->encode_config.encodeCodecConfig.hevcConfig.sliceMode = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].priv_data->encode_config.encodeCodecConfig.h264Config.sliceModeData = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].priv_data->encode_config.encodeCodecConfig.h264Config.sliceMode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_params0 = 65025;
          struct TYPE_14__ * params = (struct TYPE_14__ *) malloc(_len_params0*sizeof(struct TYPE_14__));
          for(int _i0 = 0; _i0 < _len_params0; _i0++) {
            params[_i0].codecPicParams.hevcPicParams.seiPayloadArrayCnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_params__i0__codecPicParams_hevcPicParams_seiPayloadArray0 = 1;
          params[_i0].codecPicParams.hevcPicParams.seiPayloadArray = (int *) malloc(_len_params__i0__codecPicParams_hevcPicParams_seiPayloadArray0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_params__i0__codecPicParams_hevcPicParams_seiPayloadArray0; _j0++) {
            params[_i0].codecPicParams.hevcPicParams.seiPayloadArray[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        params[_i0].codecPicParams.hevcPicParams.sliceModeData = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].codecPicParams.hevcPicParams.sliceMode = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].codecPicParams.h264PicParams.seiPayloadArrayCnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_params__i0__codecPicParams_h264PicParams_seiPayloadArray0 = 1;
          params[_i0].codecPicParams.h264PicParams.seiPayloadArray = (int *) malloc(_len_params__i0__codecPicParams_h264PicParams_seiPayloadArray0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_params__i0__codecPicParams_h264PicParams_seiPayloadArray0; _j0++) {
            params[_i0].codecPicParams.h264PicParams.seiPayloadArray[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        params[_i0].codecPicParams.h264PicParams.sliceModeData = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].codecPicParams.h264PicParams.sliceMode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sei_data0 = 65025;
          int * sei_data = (int *) malloc(_len_sei_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sei_data0; _i0++) {
            sei_data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nvenc_codec_specific_pic_params(avctx,params,sei_data);
          for(int _aux = 0; _aux < _len_avctx0; _aux++) {
          free(avctx[_aux].codec);
          }
          for(int _aux = 0; _aux < _len_avctx0; _aux++) {
          free(avctx[_aux].priv_data);
          }
          free(avctx);
          free(params);
          free(sei_data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_avctx0 = 100;
          struct TYPE_15__ * avctx = (struct TYPE_15__ *) malloc(_len_avctx0*sizeof(struct TYPE_15__));
          for(int _i0 = 0; _i0 < _len_avctx0; _i0++) {
              int _len_avctx__i0__codec0 = 1;
          avctx[_i0].codec = (struct TYPE_16__ *) malloc(_len_avctx__i0__codec0*sizeof(struct TYPE_16__));
          for(int _j0 = 0; _j0 < _len_avctx__i0__codec0; _j0++) {
            avctx[_i0].codec->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_avctx__i0__priv_data0 = 1;
          avctx[_i0].priv_data = (struct TYPE_24__ *) malloc(_len_avctx__i0__priv_data0*sizeof(struct TYPE_24__));
          for(int _j0 = 0; _j0 < _len_avctx__i0__priv_data0; _j0++) {
            avctx[_i0].priv_data->encode_config.encodeCodecConfig.hevcConfig.sliceModeData = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].priv_data->encode_config.encodeCodecConfig.hevcConfig.sliceMode = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].priv_data->encode_config.encodeCodecConfig.h264Config.sliceModeData = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].priv_data->encode_config.encodeCodecConfig.h264Config.sliceMode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_params0 = 100;
          struct TYPE_14__ * params = (struct TYPE_14__ *) malloc(_len_params0*sizeof(struct TYPE_14__));
          for(int _i0 = 0; _i0 < _len_params0; _i0++) {
            params[_i0].codecPicParams.hevcPicParams.seiPayloadArrayCnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_params__i0__codecPicParams_hevcPicParams_seiPayloadArray0 = 1;
          params[_i0].codecPicParams.hevcPicParams.seiPayloadArray = (int *) malloc(_len_params__i0__codecPicParams_hevcPicParams_seiPayloadArray0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_params__i0__codecPicParams_hevcPicParams_seiPayloadArray0; _j0++) {
            params[_i0].codecPicParams.hevcPicParams.seiPayloadArray[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        params[_i0].codecPicParams.hevcPicParams.sliceModeData = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].codecPicParams.hevcPicParams.sliceMode = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].codecPicParams.h264PicParams.seiPayloadArrayCnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_params__i0__codecPicParams_h264PicParams_seiPayloadArray0 = 1;
          params[_i0].codecPicParams.h264PicParams.seiPayloadArray = (int *) malloc(_len_params__i0__codecPicParams_h264PicParams_seiPayloadArray0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_params__i0__codecPicParams_h264PicParams_seiPayloadArray0; _j0++) {
            params[_i0].codecPicParams.h264PicParams.seiPayloadArray[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        params[_i0].codecPicParams.h264PicParams.sliceModeData = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].codecPicParams.h264PicParams.sliceMode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sei_data0 = 100;
          int * sei_data = (int *) malloc(_len_sei_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sei_data0; _i0++) {
            sei_data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nvenc_codec_specific_pic_params(avctx,params,sei_data);
          for(int _aux = 0; _aux < _len_avctx0; _aux++) {
          free(avctx[_aux].codec);
          }
          for(int _aux = 0; _aux < _len_avctx0; _aux++) {
          free(avctx[_aux].priv_data);
          }
          free(avctx);
          free(params);
          free(sei_data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

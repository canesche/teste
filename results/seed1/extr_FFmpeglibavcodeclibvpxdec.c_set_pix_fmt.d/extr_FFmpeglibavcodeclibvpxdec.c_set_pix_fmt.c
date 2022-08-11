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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct vpx_image {size_t cs; int fmt; } ;
typedef  enum AVColorSpace { ____Placeholder_AVColorSpace } AVColorSpace ;
struct TYPE_3__ {int colorspace; scalar_t__ codec_id; int /*<<< orphan*/  pix_fmt; int /*<<< orphan*/  profile; } ;
typedef  TYPE_1__ AVCodecContext ;

/* Variables and functions */
#define  AVCOL_SPC_BT2020_NCL 136 
#define  AVCOL_SPC_BT470BG 135 
#define  AVCOL_SPC_BT709 134 
#define  AVCOL_SPC_RESERVED 133 
#define  AVCOL_SPC_RGB 132 
#define  AVCOL_SPC_SMPTE170M 131 
#define  AVCOL_SPC_SMPTE240M 130 
#define  AVCOL_SPC_UNSPECIFIED 129 
 int AVERROR_INVALIDDATA ; 
 scalar_t__ AV_CODEC_ID_VP8 ; 
 scalar_t__ AV_CODEC_ID_VP9 ; 
 int /*<<< orphan*/  AV_PIX_FMT_YUV420P ; 
 int /*<<< orphan*/  AV_PIX_FMT_YUVA420P ; 
 int /*<<< orphan*/  FF_PROFILE_VP9_0 ; 
#define  VPX_IMG_FMT_I420 128 

__attribute__((used)) static int set_pix_fmt(AVCodecContext *avctx, struct vpx_image *img,
                       int has_alpha_channel)
{
    static const enum AVColorSpace colorspaces[8] = {
        AVCOL_SPC_UNSPECIFIED, AVCOL_SPC_BT470BG, AVCOL_SPC_BT709, AVCOL_SPC_SMPTE170M,
        AVCOL_SPC_SMPTE240M, AVCOL_SPC_BT2020_NCL, AVCOL_SPC_RESERVED, AVCOL_SPC_RGB,
    };
#if VPX_IMAGE_ABI_VERSION >= 4
    static const enum AVColorRange color_ranges[] = {
        AVCOL_RANGE_MPEG, AVCOL_RANGE_JPEG
    };
    avctx->color_range = color_ranges[img->range];
#endif
    avctx->colorspace = colorspaces[img->cs];
    if (avctx->codec_id == AV_CODEC_ID_VP8 && img->fmt != VPX_IMG_FMT_I420)
        return AVERROR_INVALIDDATA;
    switch (img->fmt) {
    case VPX_IMG_FMT_I420:
        if (avctx->codec_id == AV_CODEC_ID_VP9)
            avctx->profile = FF_PROFILE_VP9_0;
        avctx->pix_fmt =
            has_alpha_channel ? AV_PIX_FMT_YUVA420P : AV_PIX_FMT_YUV420P;
        return 0;
#if CONFIG_LIBVPX_VP9_DECODER
    case VPX_IMG_FMT_I422:
        avctx->profile = FF_PROFILE_VP9_1;
        avctx->pix_fmt = AV_PIX_FMT_YUV422P;
        return 0;
    case VPX_IMG_FMT_I440:
        avctx->profile = FF_PROFILE_VP9_1;
        avctx->pix_fmt = AV_PIX_FMT_YUV440P;
        return 0;
    case VPX_IMG_FMT_I444:
        avctx->profile = FF_PROFILE_VP9_1;
        avctx->pix_fmt = avctx->colorspace == AVCOL_SPC_RGB ?
                         AV_PIX_FMT_GBRP : AV_PIX_FMT_YUV444P;
        return 0;
    case VPX_IMG_FMT_I42016:
        avctx->profile = FF_PROFILE_VP9_2;
        if (img->bit_depth == 10) {
            avctx->pix_fmt = AV_PIX_FMT_YUV420P10;
            return 0;
        } else if (img->bit_depth == 12) {
            avctx->pix_fmt = AV_PIX_FMT_YUV420P12;
            return 0;
        } else {
            return AVERROR_INVALIDDATA;
        }
    case VPX_IMG_FMT_I42216:
        avctx->profile = FF_PROFILE_VP9_3;
        if (img->bit_depth == 10) {
            avctx->pix_fmt = AV_PIX_FMT_YUV422P10;
            return 0;
        } else if (img->bit_depth == 12) {
            avctx->pix_fmt = AV_PIX_FMT_YUV422P12;
            return 0;
        } else {
            return AVERROR_INVALIDDATA;
        }
    case VPX_IMG_FMT_I44016:
        avctx->profile = FF_PROFILE_VP9_3;
        if (img->bit_depth == 10) {
            avctx->pix_fmt = AV_PIX_FMT_YUV440P10;
            return 0;
        } else if (img->bit_depth == 12) {
            avctx->pix_fmt = AV_PIX_FMT_YUV440P12;
            return 0;
        } else {
            return AVERROR_INVALIDDATA;
        }
    case VPX_IMG_FMT_I44416:
        avctx->profile = FF_PROFILE_VP9_3;
        if (img->bit_depth == 10) {
            avctx->pix_fmt = avctx->colorspace == AVCOL_SPC_RGB ?
                             AV_PIX_FMT_GBRP10 : AV_PIX_FMT_YUV444P10;
            return 0;
        } else if (img->bit_depth == 12) {
            avctx->pix_fmt = avctx->colorspace == AVCOL_SPC_RGB ?
                             AV_PIX_FMT_GBRP12 : AV_PIX_FMT_YUV444P12;
            return 0;
        } else {
            return AVERROR_INVALIDDATA;
        }
#endif
    default:
        return AVERROR_INVALIDDATA;
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
          int has_alpha_channel = 100;
          int _len_avctx0 = 1;
          struct TYPE_3__ * avctx = (struct TYPE_3__ *) malloc(_len_avctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_avctx0; _i0++) {
            avctx[_i0].colorspace = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].codec_id = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].pix_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].profile = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_img0 = 1;
          struct vpx_image * img = (struct vpx_image *) malloc(_len_img0*sizeof(struct vpx_image));
          for(int _i0 = 0; _i0 < _len_img0; _i0++) {
            img[_i0].cs = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].fmt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = set_pix_fmt(avctx,img,has_alpha_channel);
          printf("%d\n", benchRet); 
          free(avctx);
          free(img);
        
        break;
    }
    // big-arr
    case 1:
    {
          int has_alpha_channel = 255;
          int _len_avctx0 = 65025;
          struct TYPE_3__ * avctx = (struct TYPE_3__ *) malloc(_len_avctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_avctx0; _i0++) {
            avctx[_i0].colorspace = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].codec_id = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].pix_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].profile = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_img0 = 65025;
          struct vpx_image * img = (struct vpx_image *) malloc(_len_img0*sizeof(struct vpx_image));
          for(int _i0 = 0; _i0 < _len_img0; _i0++) {
            img[_i0].cs = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].fmt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = set_pix_fmt(avctx,img,has_alpha_channel);
          printf("%d\n", benchRet); 
          free(avctx);
          free(img);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int has_alpha_channel = 10;
          int _len_avctx0 = 100;
          struct TYPE_3__ * avctx = (struct TYPE_3__ *) malloc(_len_avctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_avctx0; _i0++) {
            avctx[_i0].colorspace = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].codec_id = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].pix_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].profile = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_img0 = 100;
          struct vpx_image * img = (struct vpx_image *) malloc(_len_img0*sizeof(struct vpx_image));
          for(int _i0 = 0; _i0 < _len_img0; _i0++) {
            img[_i0].cs = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].fmt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = set_pix_fmt(avctx,img,has_alpha_channel);
          printf("%d\n", benchRet); 
          free(avctx);
          free(img);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct aom_image {size_t range; int fmt; int bit_depth; int /*<<< orphan*/  monochrome; int /*<<< orphan*/  tc; int /*<<< orphan*/  mc; int /*<<< orphan*/  cp; } ;
typedef  enum AVColorRange { ____Placeholder_AVColorRange } AVColorRange ;
struct TYPE_3__ {int color_range; void* profile; int /*<<< orphan*/  pix_fmt; int /*<<< orphan*/  color_trc; int /*<<< orphan*/  colorspace; int /*<<< orphan*/  color_primaries; } ;
typedef  TYPE_1__ AVCodecContext ;

/* Variables and functions */
#define  AOM_IMG_FMT_I420 135 
#define  AOM_IMG_FMT_I42016 134 
#define  AOM_IMG_FMT_I422 133 
#define  AOM_IMG_FMT_I42216 132 
#define  AOM_IMG_FMT_I444 131 
#define  AOM_IMG_FMT_I44416 130 
#define  AVCOL_RANGE_JPEG 129 
#define  AVCOL_RANGE_MPEG 128 
 int AVERROR_INVALIDDATA ; 
 int /*<<< orphan*/  AV_PIX_FMT_GRAY10 ; 
 int /*<<< orphan*/  AV_PIX_FMT_GRAY12 ; 
 int /*<<< orphan*/  AV_PIX_FMT_GRAY8 ; 
 int /*<<< orphan*/  AV_PIX_FMT_YUV420P ; 
 int /*<<< orphan*/  AV_PIX_FMT_YUV420P10 ; 
 int /*<<< orphan*/  AV_PIX_FMT_YUV420P12 ; 
 int /*<<< orphan*/  AV_PIX_FMT_YUV422P ; 
 int /*<<< orphan*/  AV_PIX_FMT_YUV422P10 ; 
 int /*<<< orphan*/  AV_PIX_FMT_YUV422P12 ; 
 int /*<<< orphan*/  AV_PIX_FMT_YUV444P ; 
 int /*<<< orphan*/  AV_PIX_FMT_YUV444P10 ; 
 int /*<<< orphan*/  AV_PIX_FMT_YUV444P12 ; 
 void* FF_PROFILE_AV1_HIGH ; 
 void* FF_PROFILE_AV1_MAIN ; 
 void* FF_PROFILE_AV1_PROFESSIONAL ; 

__attribute__((used)) static int set_pix_fmt(AVCodecContext *avctx, struct aom_image *img)
{
    static const enum AVColorRange color_ranges[] = {
        AVCOL_RANGE_MPEG, AVCOL_RANGE_JPEG
    };
    avctx->color_range = color_ranges[img->range];
    avctx->color_primaries = img->cp;
    avctx->colorspace  = img->mc;
    avctx->color_trc   = img->tc;

    switch (img->fmt) {
    case AOM_IMG_FMT_I420:
    case AOM_IMG_FMT_I42016:
        if (img->bit_depth == 8) {
            avctx->pix_fmt = img->monochrome ?
                             AV_PIX_FMT_GRAY8 : AV_PIX_FMT_YUV420P;
            avctx->profile = FF_PROFILE_AV1_MAIN;
            return 0;
        } else if (img->bit_depth == 10) {
            avctx->pix_fmt = img->monochrome ?
                             AV_PIX_FMT_GRAY10 : AV_PIX_FMT_YUV420P10;
            avctx->profile = FF_PROFILE_AV1_MAIN;
            return 0;
        } else if (img->bit_depth == 12) {
            avctx->pix_fmt = img->monochrome ?
                             AV_PIX_FMT_GRAY12 : AV_PIX_FMT_YUV420P12;
            avctx->profile = FF_PROFILE_AV1_PROFESSIONAL;
            return 0;
        } else {
            return AVERROR_INVALIDDATA;
        }
    case AOM_IMG_FMT_I422:
    case AOM_IMG_FMT_I42216:
        if (img->bit_depth == 8) {
            avctx->pix_fmt = AV_PIX_FMT_YUV422P;
            avctx->profile = FF_PROFILE_AV1_PROFESSIONAL;
            return 0;
        } else if (img->bit_depth == 10) {
            avctx->pix_fmt = AV_PIX_FMT_YUV422P10;
            avctx->profile = FF_PROFILE_AV1_PROFESSIONAL;
            return 0;
        } else if (img->bit_depth == 12) {
            avctx->pix_fmt = AV_PIX_FMT_YUV422P12;
            avctx->profile = FF_PROFILE_AV1_PROFESSIONAL;
            return 0;
        } else {
            return AVERROR_INVALIDDATA;
        }
    case AOM_IMG_FMT_I444:
    case AOM_IMG_FMT_I44416:
        if (img->bit_depth == 8) {
            avctx->pix_fmt = AV_PIX_FMT_YUV444P;
            avctx->profile = FF_PROFILE_AV1_HIGH;
            return 0;
        } else if (img->bit_depth == 10) {
            avctx->pix_fmt = AV_PIX_FMT_YUV444P10;
            avctx->profile = FF_PROFILE_AV1_HIGH;
            return 0;
        } else if (img->bit_depth == 12) {
            avctx->pix_fmt = AV_PIX_FMT_YUV444P12;
            avctx->profile = FF_PROFILE_AV1_PROFESSIONAL;
            return 0;
        } else {
            return AVERROR_INVALIDDATA;
        }

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
          int _len_avctx0 = 1;
          struct TYPE_3__ * avctx = (struct TYPE_3__ *) malloc(_len_avctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_avctx0; _i0++) {
            avctx[_i0].color_range = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].pix_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].color_trc = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].colorspace = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].color_primaries = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_img0 = 1;
          struct aom_image * img = (struct aom_image *) malloc(_len_img0*sizeof(struct aom_image));
          for(int _i0 = 0; _i0 < _len_img0; _i0++) {
            img[_i0].range = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].fmt = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].bit_depth = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].monochrome = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].tc = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].mc = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].cp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = set_pix_fmt(avctx,img);
          printf("%d\n", benchRet); 
          free(avctx);
          free(img);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_avctx0 = 65025;
          struct TYPE_3__ * avctx = (struct TYPE_3__ *) malloc(_len_avctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_avctx0; _i0++) {
            avctx[_i0].color_range = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].pix_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].color_trc = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].colorspace = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].color_primaries = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_img0 = 65025;
          struct aom_image * img = (struct aom_image *) malloc(_len_img0*sizeof(struct aom_image));
          for(int _i0 = 0; _i0 < _len_img0; _i0++) {
            img[_i0].range = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].fmt = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].bit_depth = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].monochrome = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].tc = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].mc = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].cp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = set_pix_fmt(avctx,img);
          printf("%d\n", benchRet); 
          free(avctx);
          free(img);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_avctx0 = 100;
          struct TYPE_3__ * avctx = (struct TYPE_3__ *) malloc(_len_avctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_avctx0; _i0++) {
            avctx[_i0].color_range = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].pix_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].color_trc = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].colorspace = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].color_primaries = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_img0 = 100;
          struct aom_image * img = (struct aom_image *) malloc(_len_img0*sizeof(struct aom_image));
          for(int _i0 = 0; _i0 < _len_img0; _i0++) {
            img[_i0].range = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].fmt = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].bit_depth = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].monochrome = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].tc = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].mc = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].cp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = set_pix_fmt(avctx,img);
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

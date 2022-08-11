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
typedef  enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
typedef  enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;

/* Variables and functions */
 int AV_CODEC_ID_LJPEG ; 
 int AV_CODEC_ID_MJPEG ; 
#define  AV_PIX_FMT_BGR0 137 
#define  AV_PIX_FMT_BGR24 136 
#define  AV_PIX_FMT_BGRA 135 
#define  AV_PIX_FMT_NONE 134 
#define  AV_PIX_FMT_YUV420P 133 
#define  AV_PIX_FMT_YUV422P 132 
#define  AV_PIX_FMT_YUV444P 131 
#define  AV_PIX_FMT_YUVJ420P 130 
#define  AV_PIX_FMT_YUVJ422P 129 
#define  AV_PIX_FMT_YUVJ444P 128 

__attribute__((used)) static const enum AVPixelFormat *get_compliance_unofficial_pix_fmts(enum AVCodecID codec_id, const enum AVPixelFormat default_formats[])
{
    static const enum AVPixelFormat mjpeg_formats[] =
        { AV_PIX_FMT_YUVJ420P, AV_PIX_FMT_YUVJ422P, AV_PIX_FMT_YUVJ444P,
          AV_PIX_FMT_YUV420P,  AV_PIX_FMT_YUV422P,  AV_PIX_FMT_YUV444P,
          AV_PIX_FMT_NONE };
    static const enum AVPixelFormat ljpeg_formats[] =
        { AV_PIX_FMT_BGR24   , AV_PIX_FMT_BGRA    , AV_PIX_FMT_BGR0,
          AV_PIX_FMT_YUVJ420P, AV_PIX_FMT_YUVJ444P, AV_PIX_FMT_YUVJ422P,
          AV_PIX_FMT_YUV420P , AV_PIX_FMT_YUV444P , AV_PIX_FMT_YUV422P,
          AV_PIX_FMT_NONE};

    if (codec_id == AV_CODEC_ID_MJPEG) {
        return mjpeg_formats;
    } else if (codec_id == AV_CODEC_ID_LJPEG) {
        return ljpeg_formats;
    } else {
        return default_formats;
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
          enum AVCodecID codec_id = 0;
          int _len_default_formats0 = 1;
          enum AVPixelFormat const* default_formats = (enum AVPixelFormat const*) malloc(_len_default_formats0*sizeof(enum AVPixelFormat const));
          for(int _i0 = 0; _i0 < _len_default_formats0; _i0++) {
            default_formats[_i0] = 0;
          }
          const enum AVPixelFormat * benchRet = get_compliance_unofficial_pix_fmts(codec_id,default_formats);
          free(default_formats);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum AVCodecID codec_id = 0;
          int _len_default_formats0 = 65025;
          enum AVPixelFormat const* default_formats = (enum AVPixelFormat const*) malloc(_len_default_formats0*sizeof(enum AVPixelFormat const));
          for(int _i0 = 0; _i0 < _len_default_formats0; _i0++) {
            default_formats[_i0] = 0;
          }
          const enum AVPixelFormat * benchRet = get_compliance_unofficial_pix_fmts(codec_id,default_formats);
          free(default_formats);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum AVCodecID codec_id = 0;
          int _len_default_formats0 = 100;
          enum AVPixelFormat const* default_formats = (enum AVPixelFormat const*) malloc(_len_default_formats0*sizeof(enum AVPixelFormat const));
          for(int _i0 = 0; _i0 < _len_default_formats0; _i0++) {
            default_formats[_i0] = 0;
          }
          const enum AVPixelFormat * benchRet = get_compliance_unofficial_pix_fmts(codec_id,default_formats);
          free(default_formats);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

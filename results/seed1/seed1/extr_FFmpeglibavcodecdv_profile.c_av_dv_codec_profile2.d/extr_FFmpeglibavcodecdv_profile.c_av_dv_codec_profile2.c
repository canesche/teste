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
typedef  int /*<<< orphan*/  AVRational ;
typedef  int /*<<< orphan*/  AVDVProfile ;

/* Variables and functions */

const AVDVProfile *av_dv_codec_profile2(int width, int height,
                                       enum AVPixelFormat pix_fmt,
                                       AVRational frame_rate)
{
    const AVDVProfile *p = NULL;
#if CONFIG_DVPROFILE
    int i;
    /* frame rate is necessary to select between 720p50 and 720p60 profiles */
    int invalid_framerate = frame_rate.num == 0 || frame_rate.den == 0;

    for (i = 0; i < FF_ARRAY_ELEMS(dv_profiles); i++)
        if (height  == dv_profiles[i].height  &&
            pix_fmt == dv_profiles[i].pix_fmt &&
            width   == dv_profiles[i].width)
        {
            if( invalid_framerate || av_div_q(dv_profiles[i].time_base, frame_rate).num == 1 )
                return &dv_profiles[i];

            if(!p)
                p = &dv_profiles[i];
        }
#endif

    return p;
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
          int width = 100;
          int height = 100;
          enum AVPixelFormat pix_fmt = 0;
          int frame_rate = 100;
          const int * benchRet = av_dv_codec_profile2(width,height,pix_fmt,frame_rate);
          printf("%d\n", (*benchRet)); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int width = 255;
          int height = 255;
          enum AVPixelFormat pix_fmt = 0;
          int frame_rate = 255;
          const int * benchRet = av_dv_codec_profile2(width,height,pix_fmt,frame_rate);
          printf("%d\n", (*benchRet)); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int width = 10;
          int height = 10;
          enum AVPixelFormat pix_fmt = 0;
          int frame_rate = 10;
          const int * benchRet = av_dv_codec_profile2(width,height,pix_fmt,frame_rate);
          printf("%d\n", (*benchRet)); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

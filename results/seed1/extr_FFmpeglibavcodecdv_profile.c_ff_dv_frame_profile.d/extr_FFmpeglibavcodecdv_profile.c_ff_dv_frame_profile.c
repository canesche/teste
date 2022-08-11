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
typedef  int /*<<< orphan*/  uint8_t ;
typedef  int /*<<< orphan*/  AVDVProfile ;
typedef  int /*<<< orphan*/  AVCodecContext ;

/* Variables and functions */

const AVDVProfile* ff_dv_frame_profile(AVCodecContext* codec, const AVDVProfile *sys,
                                       const uint8_t *frame, unsigned buf_size)
{
#if CONFIG_DVPROFILE
    int i, dsf, stype;

    if(buf_size < DV_PROFILE_BYTES)
        return NULL;

    dsf   = (frame[3] & 0x80) >> 7;
    stype = frame[80 * 5 + 48 + 3] & 0x1f;

    /* 576i50 25Mbps 4:1:1 is a special case */
    if ((dsf == 1 && stype == 0 && frame[4] & 0x07 /* the APT field */) ||
        (stype == 31 && codec && codec->codec_tag==AV_RL32("SL25") && codec->coded_width==720 && codec->coded_height==576))
        return &dv_profiles[2];

    if(   stype == 0
       && codec
       && (codec->codec_tag==AV_RL32("dvsd") || codec->codec_tag==AV_RL32("CDVC"))
       && codec->coded_width ==720
       && codec->coded_height==576)
        return &dv_profiles[1];

    for (i = 0; i < FF_ARRAY_ELEMS(dv_profiles); i++)
        if (dsf == dv_profiles[i].dsf && stype == dv_profiles[i].video_stype)
            return &dv_profiles[i];

    /* check if old sys matches and assumes corrupted input */
    if (sys && buf_size == sys->frame_size)
        return sys;

    /* hack for trac issue #217, dv files created with QuickTime 3 */
    if ((frame[3] & 0x7f) == 0x3f && frame[80 * 5 + 48 + 3] == 0xff)
        return &dv_profiles[dsf];
#endif

    return NULL;
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
          unsigned int buf_size = 100;
          int _len_codec0 = 1;
          int * codec = (int *) malloc(_len_codec0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_codec0; _i0++) {
            codec[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sys0 = 1;
          const int * sys = (const int *) malloc(_len_sys0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_sys0; _i0++) {
            sys[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_frame0 = 1;
          const int * frame = (const int *) malloc(_len_frame0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_frame0; _i0++) {
            frame[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = ff_dv_frame_profile(codec,sys,frame,buf_size);
          printf("%d\n", (*benchRet)); 
          free(codec);
          free(sys);
          free(frame);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int buf_size = 255;
          int _len_codec0 = 65025;
          int * codec = (int *) malloc(_len_codec0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_codec0; _i0++) {
            codec[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sys0 = 65025;
          const int * sys = (const int *) malloc(_len_sys0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_sys0; _i0++) {
            sys[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_frame0 = 65025;
          const int * frame = (const int *) malloc(_len_frame0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_frame0; _i0++) {
            frame[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = ff_dv_frame_profile(codec,sys,frame,buf_size);
          printf("%d\n", (*benchRet)); 
          free(codec);
          free(sys);
          free(frame);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int buf_size = 10;
          int _len_codec0 = 100;
          int * codec = (int *) malloc(_len_codec0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_codec0; _i0++) {
            codec[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sys0 = 100;
          const int * sys = (const int *) malloc(_len_sys0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_sys0; _i0++) {
            sys[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_frame0 = 100;
          const int * frame = (const int *) malloc(_len_frame0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_frame0; _i0++) {
            frame[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = ff_dv_frame_profile(codec,sys,frame,buf_size);
          printf("%d\n", (*benchRet)); 
          free(codec);
          free(sys);
          free(frame);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

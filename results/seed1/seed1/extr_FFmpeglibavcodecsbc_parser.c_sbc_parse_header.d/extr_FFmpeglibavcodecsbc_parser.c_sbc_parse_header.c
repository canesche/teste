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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int uint8_t ;
struct TYPE_6__ {int channels; int sample_rate; int frame_size; void* sample_fmt; } ;
struct TYPE_5__ {int duration; } ;
typedef  TYPE_1__ AVCodecParserContext ;
typedef  TYPE_2__ AVCodecContext ;

/* Variables and functions */
 void* AV_SAMPLE_FMT_S16 ; 
 int const MSBC_SYNCWORD ; 
 int SBC_MODE_DUAL_CHANNEL ; 
 int SBC_MODE_JOINT_STEREO ; 
 int SBC_MODE_MONO ; 
 int const SBC_SYNCWORD ; 

__attribute__((used)) static int sbc_parse_header(AVCodecParserContext *s, AVCodecContext *avctx,
                            const uint8_t *data, size_t len)
{
    static const int sample_rates[4] = { 16000, 32000, 44100, 48000 };
    int sr, blocks, mode, subbands, bitpool, channels, joint;
    int length;

    if (len < 3)
        return -1;

    if (data[0] == MSBC_SYNCWORD && data[1] == 0 && data[2] == 0) {
        avctx->channels = 1;
        avctx->sample_fmt = AV_SAMPLE_FMT_S16;
        avctx->sample_rate = 16000;
        avctx->frame_size = 120;
        s->duration = avctx->frame_size;
        return 57;
    }

    if (data[0] != SBC_SYNCWORD)
        return -2;

    sr       =   (data[1] >> 6) & 0x03;
    blocks   = (((data[1] >> 4) & 0x03) + 1) << 2;
    mode     =   (data[1] >> 2) & 0x03;
    subbands = (((data[1] >> 0) & 0x01) + 1) << 2;
    bitpool  = data[2];

    channels = mode == SBC_MODE_MONO ? 1 : 2;
    joint    = mode == SBC_MODE_JOINT_STEREO;

    length = 4 + (subbands * channels) / 2
             + ((((mode == SBC_MODE_DUAL_CHANNEL) + 1) * blocks * bitpool
                 + (joint * subbands)) + 7) / 8;

    avctx->channels = channels;
    avctx->sample_fmt = AV_SAMPLE_FMT_S16;
    avctx->sample_rate = sample_rates[sr];
    avctx->frame_size = subbands * blocks;
    s->duration = avctx->frame_size;
    return length;
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
          unsigned long len = 100;
          int _len_s0 = 1;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].duration = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_avctx0 = 1;
          struct TYPE_6__ * avctx = (struct TYPE_6__ *) malloc(_len_avctx0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_avctx0; _i0++) {
            avctx[_i0].channels = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].sample_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].frame_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 1;
          const int * data = (const int *) malloc(_len_data0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sbc_parse_header(s,avctx,data,len);
          printf("%d\n", benchRet); 
          free(s);
          free(avctx);
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long len = 255;
          int _len_s0 = 65025;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].duration = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_avctx0 = 65025;
          struct TYPE_6__ * avctx = (struct TYPE_6__ *) malloc(_len_avctx0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_avctx0; _i0++) {
            avctx[_i0].channels = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].sample_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].frame_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 65025;
          const int * data = (const int *) malloc(_len_data0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sbc_parse_header(s,avctx,data,len);
          printf("%d\n", benchRet); 
          free(s);
          free(avctx);
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long len = 10;
          int _len_s0 = 100;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].duration = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_avctx0 = 100;
          struct TYPE_6__ * avctx = (struct TYPE_6__ *) malloc(_len_avctx0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_avctx0; _i0++) {
            avctx[_i0].channels = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].sample_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].frame_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 100;
          const int * data = (const int *) malloc(_len_data0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sbc_parse_header(s,avctx,data,len);
          printf("%d\n", benchRet); 
          free(s);
          free(avctx);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

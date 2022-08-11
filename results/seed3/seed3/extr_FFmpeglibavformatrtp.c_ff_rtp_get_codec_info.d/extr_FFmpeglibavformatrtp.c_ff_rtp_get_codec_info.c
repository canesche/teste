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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int pt; scalar_t__ codec_id; scalar_t__ audio_channels; scalar_t__ clock_rate; int /*<<< orphan*/  codec_type; } ;
struct TYPE_4__ {scalar_t__ codec_id; scalar_t__ channels; scalar_t__ sample_rate; int /*<<< orphan*/  codec_type; } ;
typedef  TYPE_1__ AVCodecParameters ;

/* Variables and functions */
 scalar_t__ AV_CODEC_ID_NONE ; 
 TYPE_2__* rtp_payload_types ; 

int ff_rtp_get_codec_info(AVCodecParameters *par, int payload_type)
{
    int i = 0;

    for (i = 0; rtp_payload_types[i].pt >= 0; i++)
        if (rtp_payload_types[i].pt == payload_type) {
            if (rtp_payload_types[i].codec_id != AV_CODEC_ID_NONE) {
                par->codec_type = rtp_payload_types[i].codec_type;
                par->codec_id = rtp_payload_types[i].codec_id;
                if (rtp_payload_types[i].audio_channels > 0)
                    par->channels = rtp_payload_types[i].audio_channels;
                if (rtp_payload_types[i].clock_rate > 0)
                    par->sample_rate = rtp_payload_types[i].clock_rate;
                return 0;
            }
        }
    return -1;
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
          int payload_type = 100;
          int _len_par0 = 1;
          struct TYPE_4__ * par = (struct TYPE_4__ *) malloc(_len_par0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
            par[_i0].codec_id = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].channels = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].sample_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].codec_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ff_rtp_get_codec_info(par,payload_type);
          printf("%d\n", benchRet); 
          free(par);
        
        break;
    }
    // big-arr
    case 1:
    {
          int payload_type = 255;
          int _len_par0 = 65025;
          struct TYPE_4__ * par = (struct TYPE_4__ *) malloc(_len_par0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
            par[_i0].codec_id = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].channels = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].sample_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].codec_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ff_rtp_get_codec_info(par,payload_type);
          printf("%d\n", benchRet); 
          free(par);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int payload_type = 10;
          int _len_par0 = 100;
          struct TYPE_4__ * par = (struct TYPE_4__ *) malloc(_len_par0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
            par[_i0].codec_id = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].channels = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].sample_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].codec_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ff_rtp_get_codec_info(par,payload_type);
          printf("%d\n", benchRet); 
          free(par);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

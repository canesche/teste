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
struct cx2341x_mpeg_params {int audio_properties; int audio_sampling_freq; int audio_mode; int audio_mode_extension; int audio_emphasis; int audio_crc; int capabilities; int audio_encoding; int audio_ac3_bitrate; int audio_l2_bitrate; } ;

/* Variables and functions */
 int CX2341X_AUDIO_ENCODING_METHOD_AC3 ; 
 int CX2341X_CAP_HAS_AC3 ; 
 int V4L2_MPEG_AUDIO_EMPHASIS_CCITT_J17 ; 
 int V4L2_MPEG_AUDIO_ENCODING_AC3 ; 
 int V4L2_MPEG_AUDIO_ENCODING_LAYER_2 ; 

__attribute__((used)) static void cx2341x_calc_audio_properties(struct cx2341x_mpeg_params *params)
{
	params->audio_properties =
		(params->audio_sampling_freq << 0) |
		(params->audio_mode << 8) |
		(params->audio_mode_extension << 10) |
		(((params->audio_emphasis == V4L2_MPEG_AUDIO_EMPHASIS_CCITT_J17)
		  ? 3 : params->audio_emphasis) << 12) |
		(params->audio_crc << 14);

	if ((params->capabilities & CX2341X_CAP_HAS_AC3) &&
	    params->audio_encoding == V4L2_MPEG_AUDIO_ENCODING_AC3) {
		params->audio_properties |=
			/* Not sure if this MPEG Layer II setting is required */
			((3 - V4L2_MPEG_AUDIO_ENCODING_LAYER_2) << 2) |
			(params->audio_ac3_bitrate << 4) |
			(CX2341X_AUDIO_ENCODING_METHOD_AC3 << 28);
	} else {
		/* Assuming MPEG Layer II */
		params->audio_properties |=
			((3 - params->audio_encoding) << 2) |
			((1 + params->audio_l2_bitrate) << 4);
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
          int _len_params0 = 1;
          struct cx2341x_mpeg_params * params = (struct cx2341x_mpeg_params *) malloc(_len_params0*sizeof(struct cx2341x_mpeg_params));
          for(int _i0 = 0; _i0 < _len_params0; _i0++) {
            params[_i0].audio_properties = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].audio_sampling_freq = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].audio_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].audio_mode_extension = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].audio_emphasis = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].audio_crc = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].capabilities = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].audio_encoding = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].audio_ac3_bitrate = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].audio_l2_bitrate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cx2341x_calc_audio_properties(params);
          free(params);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_params0 = 65025;
          struct cx2341x_mpeg_params * params = (struct cx2341x_mpeg_params *) malloc(_len_params0*sizeof(struct cx2341x_mpeg_params));
          for(int _i0 = 0; _i0 < _len_params0; _i0++) {
            params[_i0].audio_properties = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].audio_sampling_freq = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].audio_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].audio_mode_extension = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].audio_emphasis = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].audio_crc = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].capabilities = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].audio_encoding = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].audio_ac3_bitrate = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].audio_l2_bitrate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cx2341x_calc_audio_properties(params);
          free(params);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_params0 = 100;
          struct cx2341x_mpeg_params * params = (struct cx2341x_mpeg_params *) malloc(_len_params0*sizeof(struct cx2341x_mpeg_params));
          for(int _i0 = 0; _i0 < _len_params0; _i0++) {
            params[_i0].audio_properties = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].audio_sampling_freq = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].audio_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].audio_mode_extension = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].audio_emphasis = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].audio_crc = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].capabilities = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].audio_encoding = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].audio_ac3_bitrate = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].audio_l2_bitrate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cx2341x_calc_audio_properties(params);
          free(params);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct obs_encoder {int /*<<< orphan*/  paired_encoder; int /*<<< orphan*/  active; } ;
struct TYPE_3__ {struct obs_encoder** audio_encoders; } ;
typedef  TYPE_1__ obs_output_t ;
typedef  struct obs_encoder obs_encoder_t ;

/* Variables and functions */

__attribute__((used)) static inline obs_encoder_t *find_inactive_audio_encoder(obs_output_t *output,
		size_t num_mixes)
{
	for (size_t i = 0; i < num_mixes; i++) {
		struct obs_encoder *audio = output->audio_encoders[i];

		if (!audio->active && !audio->paired_encoder)
			return audio;
	}

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
          unsigned long num_mixes = 100;
          int _len_output0 = 1;
          struct TYPE_3__ * output = (struct TYPE_3__ *) malloc(_len_output0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
              int _len_output__i0__audio_encoders0 = 1;
          output[_i0].audio_encoders = (struct obs_encoder **) malloc(_len_output__i0__audio_encoders0*sizeof(struct obs_encoder *));
          for(int _j0 = 0; _j0 < _len_output__i0__audio_encoders0; _j0++) {
            int _len_output__i0__audio_encoders1 = 1;
            output[_i0].audio_encoders[_j0] = (struct obs_encoder *) malloc(_len_output__i0__audio_encoders1*sizeof(struct obs_encoder));
            for(int _j1 = 0; _j1 < _len_output__i0__audio_encoders1; _j1++) {
              output[_i0].audio_encoders[_j0]->paired_encoder = ((-2 * (next_i()%2)) + 1) * next_i();
        output[_i0].audio_encoders[_j0]->active = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct obs_encoder * benchRet = find_inactive_audio_encoder(output,num_mixes);
          printf("%d\n", (*benchRet).paired_encoder);
          printf("%d\n", (*benchRet).active);
          for(int _aux = 0; _aux < _len_output0; _aux++) {
          free(*(output[_aux].audio_encoders));
        free(output[_aux].audio_encoders);
          }
          free(output);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long num_mixes = 255;
          int _len_output0 = 65025;
          struct TYPE_3__ * output = (struct TYPE_3__ *) malloc(_len_output0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
              int _len_output__i0__audio_encoders0 = 1;
          output[_i0].audio_encoders = (struct obs_encoder **) malloc(_len_output__i0__audio_encoders0*sizeof(struct obs_encoder *));
          for(int _j0 = 0; _j0 < _len_output__i0__audio_encoders0; _j0++) {
            int _len_output__i0__audio_encoders1 = 1;
            output[_i0].audio_encoders[_j0] = (struct obs_encoder *) malloc(_len_output__i0__audio_encoders1*sizeof(struct obs_encoder));
            for(int _j1 = 0; _j1 < _len_output__i0__audio_encoders1; _j1++) {
              output[_i0].audio_encoders[_j0]->paired_encoder = ((-2 * (next_i()%2)) + 1) * next_i();
        output[_i0].audio_encoders[_j0]->active = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct obs_encoder * benchRet = find_inactive_audio_encoder(output,num_mixes);
          printf("%d\n", (*benchRet).paired_encoder);
          printf("%d\n", (*benchRet).active);
          for(int _aux = 0; _aux < _len_output0; _aux++) {
          free(*(output[_aux].audio_encoders));
        free(output[_aux].audio_encoders);
          }
          free(output);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long num_mixes = 10;
          int _len_output0 = 100;
          struct TYPE_3__ * output = (struct TYPE_3__ *) malloc(_len_output0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
              int _len_output__i0__audio_encoders0 = 1;
          output[_i0].audio_encoders = (struct obs_encoder **) malloc(_len_output__i0__audio_encoders0*sizeof(struct obs_encoder *));
          for(int _j0 = 0; _j0 < _len_output__i0__audio_encoders0; _j0++) {
            int _len_output__i0__audio_encoders1 = 1;
            output[_i0].audio_encoders[_j0] = (struct obs_encoder *) malloc(_len_output__i0__audio_encoders1*sizeof(struct obs_encoder));
            for(int _j1 = 0; _j1 < _len_output__i0__audio_encoders1; _j1++) {
              output[_i0].audio_encoders[_j0]->paired_encoder = ((-2 * (next_i()%2)) + 1) * next_i();
        output[_i0].audio_encoders[_j0]->active = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct obs_encoder * benchRet = find_inactive_audio_encoder(output,num_mixes);
          printf("%d\n", (*benchRet).paired_encoder);
          printf("%d\n", (*benchRet).active);
          for(int _aux = 0; _aux < _len_output0; _aux++) {
          free(*(output[_aux].audio_encoders));
        free(output[_aux].audio_encoders);
          }
          free(output);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

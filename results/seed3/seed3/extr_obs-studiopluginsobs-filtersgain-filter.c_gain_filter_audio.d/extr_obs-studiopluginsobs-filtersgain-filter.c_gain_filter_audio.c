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
struct obs_audio_data {size_t frames; scalar_t__* data; } ;
struct gain_data {size_t channels; float multiple; } ;

/* Variables and functions */

__attribute__((used)) static struct obs_audio_data *gain_filter_audio(void *data,
		struct obs_audio_data *audio)
{
	struct gain_data *gf = data;
	const size_t channels = gf->channels;
	float **adata = (float**)audio->data;
	const float multiple = gf->multiple;

	for (size_t c = 0; c < channels; c++) {
		if (audio->data[c]) {
			for (size_t i = 0; i < audio->frames; i++) {
				adata[c][i] *= multiple;
			}
		}
	}

	return audio;
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
          void * data;
          int _len_audio0 = 1;
          struct obs_audio_data * audio = (struct obs_audio_data *) malloc(_len_audio0*sizeof(struct obs_audio_data));
          for(int _i0 = 0; _i0 < _len_audio0; _i0++) {
            audio[_i0].frames = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_audio__i0__data0 = 1;
          audio[_i0].data = (long *) malloc(_len_audio__i0__data0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_audio__i0__data0; _j0++) {
            audio[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct obs_audio_data * benchRet = gain_filter_audio(data,audio);
          printf("%lu\n", (*benchRet).frames);
          for(int _aux = 0; _aux < _len_audio0; _aux++) {
          free(audio[_aux].data);
          }
          free(audio);
        
        break;
    }
    // big-arr
    case 1:
    {
          void * data;
          int _len_audio0 = 65025;
          struct obs_audio_data * audio = (struct obs_audio_data *) malloc(_len_audio0*sizeof(struct obs_audio_data));
          for(int _i0 = 0; _i0 < _len_audio0; _i0++) {
            audio[_i0].frames = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_audio__i0__data0 = 1;
          audio[_i0].data = (long *) malloc(_len_audio__i0__data0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_audio__i0__data0; _j0++) {
            audio[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct obs_audio_data * benchRet = gain_filter_audio(data,audio);
          printf("%lu\n", (*benchRet).frames);
          for(int _aux = 0; _aux < _len_audio0; _aux++) {
          free(audio[_aux].data);
          }
          free(audio);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          void * data;
          int _len_audio0 = 100;
          struct obs_audio_data * audio = (struct obs_audio_data *) malloc(_len_audio0*sizeof(struct obs_audio_data));
          for(int _i0 = 0; _i0 < _len_audio0; _i0++) {
            audio[_i0].frames = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_audio__i0__data0 = 1;
          audio[_i0].data = (long *) malloc(_len_audio__i0__data0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_audio__i0__data0; _j0++) {
            audio[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct obs_audio_data * benchRet = gain_filter_audio(data,audio);
          printf("%lu\n", (*benchRet).frames);
          for(int _aux = 0; _aux < _len_audio0; _aux++) {
          free(audio[_aux].data);
          }
          free(audio);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

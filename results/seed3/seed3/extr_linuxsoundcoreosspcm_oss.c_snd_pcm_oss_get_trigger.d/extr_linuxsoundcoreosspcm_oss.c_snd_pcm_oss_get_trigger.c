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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct snd_pcm_substream {TYPE_2__* runtime; } ;
struct snd_pcm_oss_file {struct snd_pcm_substream** streams; } ;
struct TYPE_3__ {scalar_t__ trigger; } ;
struct TYPE_4__ {TYPE_1__ oss; } ;

/* Variables and functions */
 int PCM_ENABLE_INPUT ; 
 int PCM_ENABLE_OUTPUT ; 
 size_t SNDRV_PCM_STREAM_CAPTURE ; 
 size_t SNDRV_PCM_STREAM_PLAYBACK ; 

__attribute__((used)) static int snd_pcm_oss_get_trigger(struct snd_pcm_oss_file *pcm_oss_file)
{
	struct snd_pcm_substream *psubstream = NULL, *csubstream = NULL;
	int result = 0;

	psubstream = pcm_oss_file->streams[SNDRV_PCM_STREAM_PLAYBACK];
	csubstream = pcm_oss_file->streams[SNDRV_PCM_STREAM_CAPTURE];
	if (psubstream && psubstream->runtime && psubstream->runtime->oss.trigger)
		result |= PCM_ENABLE_OUTPUT;
	if (csubstream && csubstream->runtime && csubstream->runtime->oss.trigger)
		result |= PCM_ENABLE_INPUT;
	return result;
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
          int _len_pcm_oss_file0 = 1;
          struct snd_pcm_oss_file * pcm_oss_file = (struct snd_pcm_oss_file *) malloc(_len_pcm_oss_file0*sizeof(struct snd_pcm_oss_file));
          for(int _i0 = 0; _i0 < _len_pcm_oss_file0; _i0++) {
              int _len_pcm_oss_file__i0__streams0 = 1;
          pcm_oss_file[_i0].streams = (struct snd_pcm_substream **) malloc(_len_pcm_oss_file__i0__streams0*sizeof(struct snd_pcm_substream *));
          for(int _j0 = 0; _j0 < _len_pcm_oss_file__i0__streams0; _j0++) {
            int _len_pcm_oss_file__i0__streams1 = 1;
            pcm_oss_file[_i0].streams[_j0] = (struct snd_pcm_substream *) malloc(_len_pcm_oss_file__i0__streams1*sizeof(struct snd_pcm_substream));
            for(int _j1 = 0; _j1 < _len_pcm_oss_file__i0__streams1; _j1++) {
                int _len_pcm_oss_file__i0__streams__j0__runtime0 = 1;
          pcm_oss_file[_i0].streams[_j0]->runtime = (struct TYPE_4__ *) malloc(_len_pcm_oss_file__i0__streams__j0__runtime0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_pcm_oss_file__i0__streams__j0__runtime0; _j0++) {
            pcm_oss_file[_i0].streams[_j0]->runtime->oss.trigger = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int benchRet = snd_pcm_oss_get_trigger(pcm_oss_file);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pcm_oss_file0; _aux++) {
          free(*(pcm_oss_file[_aux].streams));
        free(pcm_oss_file[_aux].streams);
          }
          free(pcm_oss_file);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pcm_oss_file0 = 65025;
          struct snd_pcm_oss_file * pcm_oss_file = (struct snd_pcm_oss_file *) malloc(_len_pcm_oss_file0*sizeof(struct snd_pcm_oss_file));
          for(int _i0 = 0; _i0 < _len_pcm_oss_file0; _i0++) {
              int _len_pcm_oss_file__i0__streams0 = 1;
          pcm_oss_file[_i0].streams = (struct snd_pcm_substream **) malloc(_len_pcm_oss_file__i0__streams0*sizeof(struct snd_pcm_substream *));
          for(int _j0 = 0; _j0 < _len_pcm_oss_file__i0__streams0; _j0++) {
            int _len_pcm_oss_file__i0__streams1 = 1;
            pcm_oss_file[_i0].streams[_j0] = (struct snd_pcm_substream *) malloc(_len_pcm_oss_file__i0__streams1*sizeof(struct snd_pcm_substream));
            for(int _j1 = 0; _j1 < _len_pcm_oss_file__i0__streams1; _j1++) {
                int _len_pcm_oss_file__i0__streams__j0__runtime0 = 1;
          pcm_oss_file[_i0].streams[_j0]->runtime = (struct TYPE_4__ *) malloc(_len_pcm_oss_file__i0__streams__j0__runtime0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_pcm_oss_file__i0__streams__j0__runtime0; _j0++) {
            pcm_oss_file[_i0].streams[_j0]->runtime->oss.trigger = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int benchRet = snd_pcm_oss_get_trigger(pcm_oss_file);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pcm_oss_file0; _aux++) {
          free(*(pcm_oss_file[_aux].streams));
        free(pcm_oss_file[_aux].streams);
          }
          free(pcm_oss_file);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pcm_oss_file0 = 100;
          struct snd_pcm_oss_file * pcm_oss_file = (struct snd_pcm_oss_file *) malloc(_len_pcm_oss_file0*sizeof(struct snd_pcm_oss_file));
          for(int _i0 = 0; _i0 < _len_pcm_oss_file0; _i0++) {
              int _len_pcm_oss_file__i0__streams0 = 1;
          pcm_oss_file[_i0].streams = (struct snd_pcm_substream **) malloc(_len_pcm_oss_file__i0__streams0*sizeof(struct snd_pcm_substream *));
          for(int _j0 = 0; _j0 < _len_pcm_oss_file__i0__streams0; _j0++) {
            int _len_pcm_oss_file__i0__streams1 = 1;
            pcm_oss_file[_i0].streams[_j0] = (struct snd_pcm_substream *) malloc(_len_pcm_oss_file__i0__streams1*sizeof(struct snd_pcm_substream));
            for(int _j1 = 0; _j1 < _len_pcm_oss_file__i0__streams1; _j1++) {
                int _len_pcm_oss_file__i0__streams__j0__runtime0 = 1;
          pcm_oss_file[_i0].streams[_j0]->runtime = (struct TYPE_4__ *) malloc(_len_pcm_oss_file__i0__streams__j0__runtime0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_pcm_oss_file__i0__streams__j0__runtime0; _j0++) {
            pcm_oss_file[_i0].streams[_j0]->runtime->oss.trigger = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int benchRet = snd_pcm_oss_get_trigger(pcm_oss_file);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pcm_oss_file0; _aux++) {
          free(*(pcm_oss_file[_aux].streams));
        free(pcm_oss_file[_aux].streams);
          }
          free(pcm_oss_file);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

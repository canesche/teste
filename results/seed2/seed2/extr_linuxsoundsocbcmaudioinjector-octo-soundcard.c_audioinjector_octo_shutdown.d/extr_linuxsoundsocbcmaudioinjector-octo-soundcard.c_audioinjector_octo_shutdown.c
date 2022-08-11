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
typedef  struct TYPE_14__   TYPE_7__ ;
typedef  struct TYPE_13__   TYPE_6__ ;
typedef  struct TYPE_12__   TYPE_5__ ;
typedef  struct TYPE_11__   TYPE_4__ ;
typedef  struct TYPE_10__   TYPE_3__ ;
typedef  struct TYPE_9__   TYPE_2__ ;
typedef  struct TYPE_8__   TYPE_1__ ;

/* Type definitions */
struct snd_soc_pcm_runtime {TYPE_4__* codec_dai; TYPE_6__* cpu_dai; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_8__ {int channels_min; int channels_max; } ;
struct TYPE_12__ {int channels_min; int channels_max; } ;
struct TYPE_14__ {TYPE_1__ capture; TYPE_5__ playback; } ;
struct TYPE_13__ {TYPE_7__* driver; } ;
struct TYPE_11__ {TYPE_3__* driver; } ;
struct TYPE_9__ {int channels_max; } ;
struct TYPE_10__ {TYPE_2__ capture; } ;

/* Variables and functions */

__attribute__((used)) static void audioinjector_octo_shutdown(struct snd_pcm_substream *substream)
{
	struct snd_soc_pcm_runtime *rtd = substream->private_data;
	rtd->cpu_dai->driver->playback.channels_min = 2;
	rtd->cpu_dai->driver->playback.channels_max = 2;
	rtd->cpu_dai->driver->capture.channels_min = 2;
	rtd->cpu_dai->driver->capture.channels_max = 2;
	rtd->codec_dai->driver->capture.channels_max = 6;
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
          int _len_substream0 = 1;
          struct snd_pcm_substream * substream = (struct snd_pcm_substream *) malloc(_len_substream0*sizeof(struct snd_pcm_substream));
          for(int _i0 = 0; _i0 < _len_substream0; _i0++) {
              int _len_substream__i0__private_data0 = 1;
          substream[_i0].private_data = (struct snd_soc_pcm_runtime *) malloc(_len_substream__i0__private_data0*sizeof(struct snd_soc_pcm_runtime));
          for(int _j0 = 0; _j0 < _len_substream__i0__private_data0; _j0++) {
              int _len_substream__i0__private_data_codec_dai0 = 1;
          substream[_i0].private_data->codec_dai = (struct TYPE_11__ *) malloc(_len_substream__i0__private_data_codec_dai0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_substream__i0__private_data_codec_dai0; _j0++) {
              int _len_substream__i0__private_data_codec_dai_driver0 = 1;
          substream[_i0].private_data->codec_dai->driver = (struct TYPE_10__ *) malloc(_len_substream__i0__private_data_codec_dai_driver0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_substream__i0__private_data_codec_dai_driver0; _j0++) {
            substream[_i0].private_data->codec_dai->driver->capture.channels_max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_substream__i0__private_data_cpu_dai0 = 1;
          substream[_i0].private_data->cpu_dai = (struct TYPE_13__ *) malloc(_len_substream__i0__private_data_cpu_dai0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_substream__i0__private_data_cpu_dai0; _j0++) {
              int _len_substream__i0__private_data_cpu_dai_driver0 = 1;
          substream[_i0].private_data->cpu_dai->driver = (struct TYPE_14__ *) malloc(_len_substream__i0__private_data_cpu_dai_driver0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_substream__i0__private_data_cpu_dai_driver0; _j0++) {
            substream[_i0].private_data->cpu_dai->driver->capture.channels_min = ((-2 * (next_i()%2)) + 1) * next_i();
        substream[_i0].private_data->cpu_dai->driver->capture.channels_max = ((-2 * (next_i()%2)) + 1) * next_i();
        substream[_i0].private_data->cpu_dai->driver->playback.channels_min = ((-2 * (next_i()%2)) + 1) * next_i();
        substream[_i0].private_data->cpu_dai->driver->playback.channels_max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          audioinjector_octo_shutdown(substream);
          for(int _aux = 0; _aux < _len_substream0; _aux++) {
          free(substream[_aux].private_data);
          }
          free(substream);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_substream0 = 65025;
          struct snd_pcm_substream * substream = (struct snd_pcm_substream *) malloc(_len_substream0*sizeof(struct snd_pcm_substream));
          for(int _i0 = 0; _i0 < _len_substream0; _i0++) {
              int _len_substream__i0__private_data0 = 1;
          substream[_i0].private_data = (struct snd_soc_pcm_runtime *) malloc(_len_substream__i0__private_data0*sizeof(struct snd_soc_pcm_runtime));
          for(int _j0 = 0; _j0 < _len_substream__i0__private_data0; _j0++) {
              int _len_substream__i0__private_data_codec_dai0 = 1;
          substream[_i0].private_data->codec_dai = (struct TYPE_11__ *) malloc(_len_substream__i0__private_data_codec_dai0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_substream__i0__private_data_codec_dai0; _j0++) {
              int _len_substream__i0__private_data_codec_dai_driver0 = 1;
          substream[_i0].private_data->codec_dai->driver = (struct TYPE_10__ *) malloc(_len_substream__i0__private_data_codec_dai_driver0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_substream__i0__private_data_codec_dai_driver0; _j0++) {
            substream[_i0].private_data->codec_dai->driver->capture.channels_max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_substream__i0__private_data_cpu_dai0 = 1;
          substream[_i0].private_data->cpu_dai = (struct TYPE_13__ *) malloc(_len_substream__i0__private_data_cpu_dai0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_substream__i0__private_data_cpu_dai0; _j0++) {
              int _len_substream__i0__private_data_cpu_dai_driver0 = 1;
          substream[_i0].private_data->cpu_dai->driver = (struct TYPE_14__ *) malloc(_len_substream__i0__private_data_cpu_dai_driver0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_substream__i0__private_data_cpu_dai_driver0; _j0++) {
            substream[_i0].private_data->cpu_dai->driver->capture.channels_min = ((-2 * (next_i()%2)) + 1) * next_i();
        substream[_i0].private_data->cpu_dai->driver->capture.channels_max = ((-2 * (next_i()%2)) + 1) * next_i();
        substream[_i0].private_data->cpu_dai->driver->playback.channels_min = ((-2 * (next_i()%2)) + 1) * next_i();
        substream[_i0].private_data->cpu_dai->driver->playback.channels_max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          audioinjector_octo_shutdown(substream);
          for(int _aux = 0; _aux < _len_substream0; _aux++) {
          free(substream[_aux].private_data);
          }
          free(substream);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_substream0 = 100;
          struct snd_pcm_substream * substream = (struct snd_pcm_substream *) malloc(_len_substream0*sizeof(struct snd_pcm_substream));
          for(int _i0 = 0; _i0 < _len_substream0; _i0++) {
              int _len_substream__i0__private_data0 = 1;
          substream[_i0].private_data = (struct snd_soc_pcm_runtime *) malloc(_len_substream__i0__private_data0*sizeof(struct snd_soc_pcm_runtime));
          for(int _j0 = 0; _j0 < _len_substream__i0__private_data0; _j0++) {
              int _len_substream__i0__private_data_codec_dai0 = 1;
          substream[_i0].private_data->codec_dai = (struct TYPE_11__ *) malloc(_len_substream__i0__private_data_codec_dai0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_substream__i0__private_data_codec_dai0; _j0++) {
              int _len_substream__i0__private_data_codec_dai_driver0 = 1;
          substream[_i0].private_data->codec_dai->driver = (struct TYPE_10__ *) malloc(_len_substream__i0__private_data_codec_dai_driver0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_substream__i0__private_data_codec_dai_driver0; _j0++) {
            substream[_i0].private_data->codec_dai->driver->capture.channels_max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_substream__i0__private_data_cpu_dai0 = 1;
          substream[_i0].private_data->cpu_dai = (struct TYPE_13__ *) malloc(_len_substream__i0__private_data_cpu_dai0*sizeof(struct TYPE_13__));
          for(int _j0 = 0; _j0 < _len_substream__i0__private_data_cpu_dai0; _j0++) {
              int _len_substream__i0__private_data_cpu_dai_driver0 = 1;
          substream[_i0].private_data->cpu_dai->driver = (struct TYPE_14__ *) malloc(_len_substream__i0__private_data_cpu_dai_driver0*sizeof(struct TYPE_14__));
          for(int _j0 = 0; _j0 < _len_substream__i0__private_data_cpu_dai_driver0; _j0++) {
            substream[_i0].private_data->cpu_dai->driver->capture.channels_min = ((-2 * (next_i()%2)) + 1) * next_i();
        substream[_i0].private_data->cpu_dai->driver->capture.channels_max = ((-2 * (next_i()%2)) + 1) * next_i();
        substream[_i0].private_data->cpu_dai->driver->playback.channels_min = ((-2 * (next_i()%2)) + 1) * next_i();
        substream[_i0].private_data->cpu_dai->driver->playback.channels_max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          audioinjector_octo_shutdown(substream);
          for(int _aux = 0; _aux < _len_substream0; _aux++) {
          free(substream[_aux].private_data);
          }
          free(substream);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

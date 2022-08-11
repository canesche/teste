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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct snd_soc_pcm_runtime {unsigned int num_codecs; TYPE_3__** codec_dais; struct snd_soc_dai_link* dai_link; TYPE_1__* cpu_dai; } ;
struct snd_soc_dai_link {scalar_t__ symmetric_samplebits; scalar_t__ symmetric_channels; scalar_t__ symmetric_rates; } ;
struct snd_soc_dai_driver {scalar_t__ symmetric_samplebits; scalar_t__ symmetric_channels; scalar_t__ symmetric_rates; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_6__ {TYPE_2__* driver; } ;
struct TYPE_5__ {scalar_t__ symmetric_samplebits; scalar_t__ symmetric_channels; scalar_t__ symmetric_rates; } ;
struct TYPE_4__ {struct snd_soc_dai_driver* driver; } ;

/* Variables and functions */

__attribute__((used)) static bool soc_pcm_has_symmetry(struct snd_pcm_substream *substream)
{
	struct snd_soc_pcm_runtime *rtd = substream->private_data;
	struct snd_soc_dai_driver *cpu_driver = rtd->cpu_dai->driver;
	struct snd_soc_dai_link *link = rtd->dai_link;
	unsigned int symmetry, i;

	symmetry = cpu_driver->symmetric_rates || link->symmetric_rates ||
		cpu_driver->symmetric_channels || link->symmetric_channels ||
		cpu_driver->symmetric_samplebits || link->symmetric_samplebits;

	for (i = 0; i < rtd->num_codecs; i++)
		symmetry = symmetry ||
			rtd->codec_dais[i]->driver->symmetric_rates ||
			rtd->codec_dais[i]->driver->symmetric_channels ||
			rtd->codec_dais[i]->driver->symmetric_samplebits;

	return symmetry;
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
            substream[_i0].private_data->num_codecs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_substream__i0__private_data_codec_dais0 = 1;
          substream[_i0].private_data->codec_dais = (struct TYPE_6__ **) malloc(_len_substream__i0__private_data_codec_dais0*sizeof(struct TYPE_6__ *));
          for(int _j0 = 0; _j0 < _len_substream__i0__private_data_codec_dais0; _j0++) {
            int _len_substream__i0__private_data_codec_dais1 = 1;
            substream[_i0].private_data->codec_dais[_j0] = (struct TYPE_6__ *) malloc(_len_substream__i0__private_data_codec_dais1*sizeof(struct TYPE_6__));
            for(int _j1 = 0; _j1 < _len_substream__i0__private_data_codec_dais1; _j1++) {
                int _len_substream__i0__private_data_codec_dais__j0__driver0 = 1;
          substream[_i0].private_data->codec_dais[_j0]->driver = (struct TYPE_5__ *) malloc(_len_substream__i0__private_data_codec_dais__j0__driver0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_substream__i0__private_data_codec_dais__j0__driver0; _j0++) {
            substream[_i0].private_data->codec_dais[_j0]->driver->symmetric_samplebits = ((-2 * (next_i()%2)) + 1) * next_i();
        substream[_i0].private_data->codec_dais[_j0]->driver->symmetric_channels = ((-2 * (next_i()%2)) + 1) * next_i();
        substream[_i0].private_data->codec_dais[_j0]->driver->symmetric_rates = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          int _len_substream__i0__private_data_dai_link0 = 1;
          substream[_i0].private_data->dai_link = (struct snd_soc_dai_link *) malloc(_len_substream__i0__private_data_dai_link0*sizeof(struct snd_soc_dai_link));
          for(int _j0 = 0; _j0 < _len_substream__i0__private_data_dai_link0; _j0++) {
            substream[_i0].private_data->dai_link->symmetric_samplebits = ((-2 * (next_i()%2)) + 1) * next_i();
        substream[_i0].private_data->dai_link->symmetric_channels = ((-2 * (next_i()%2)) + 1) * next_i();
        substream[_i0].private_data->dai_link->symmetric_rates = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_substream__i0__private_data_cpu_dai0 = 1;
          substream[_i0].private_data->cpu_dai = (struct TYPE_4__ *) malloc(_len_substream__i0__private_data_cpu_dai0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_substream__i0__private_data_cpu_dai0; _j0++) {
              int _len_substream__i0__private_data_cpu_dai_driver0 = 1;
          substream[_i0].private_data->cpu_dai->driver = (struct snd_soc_dai_driver *) malloc(_len_substream__i0__private_data_cpu_dai_driver0*sizeof(struct snd_soc_dai_driver));
          for(int _j0 = 0; _j0 < _len_substream__i0__private_data_cpu_dai_driver0; _j0++) {
            substream[_i0].private_data->cpu_dai->driver->symmetric_samplebits = ((-2 * (next_i()%2)) + 1) * next_i();
        substream[_i0].private_data->cpu_dai->driver->symmetric_channels = ((-2 * (next_i()%2)) + 1) * next_i();
        substream[_i0].private_data->cpu_dai->driver->symmetric_rates = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = soc_pcm_has_symmetry(substream);
          printf("%d\n", benchRet); 
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
            substream[_i0].private_data->num_codecs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_substream__i0__private_data_codec_dais0 = 1;
          substream[_i0].private_data->codec_dais = (struct TYPE_6__ **) malloc(_len_substream__i0__private_data_codec_dais0*sizeof(struct TYPE_6__ *));
          for(int _j0 = 0; _j0 < _len_substream__i0__private_data_codec_dais0; _j0++) {
            int _len_substream__i0__private_data_codec_dais1 = 1;
            substream[_i0].private_data->codec_dais[_j0] = (struct TYPE_6__ *) malloc(_len_substream__i0__private_data_codec_dais1*sizeof(struct TYPE_6__));
            for(int _j1 = 0; _j1 < _len_substream__i0__private_data_codec_dais1; _j1++) {
                int _len_substream__i0__private_data_codec_dais__j0__driver0 = 1;
          substream[_i0].private_data->codec_dais[_j0]->driver = (struct TYPE_5__ *) malloc(_len_substream__i0__private_data_codec_dais__j0__driver0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_substream__i0__private_data_codec_dais__j0__driver0; _j0++) {
            substream[_i0].private_data->codec_dais[_j0]->driver->symmetric_samplebits = ((-2 * (next_i()%2)) + 1) * next_i();
        substream[_i0].private_data->codec_dais[_j0]->driver->symmetric_channels = ((-2 * (next_i()%2)) + 1) * next_i();
        substream[_i0].private_data->codec_dais[_j0]->driver->symmetric_rates = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          int _len_substream__i0__private_data_dai_link0 = 1;
          substream[_i0].private_data->dai_link = (struct snd_soc_dai_link *) malloc(_len_substream__i0__private_data_dai_link0*sizeof(struct snd_soc_dai_link));
          for(int _j0 = 0; _j0 < _len_substream__i0__private_data_dai_link0; _j0++) {
            substream[_i0].private_data->dai_link->symmetric_samplebits = ((-2 * (next_i()%2)) + 1) * next_i();
        substream[_i0].private_data->dai_link->symmetric_channels = ((-2 * (next_i()%2)) + 1) * next_i();
        substream[_i0].private_data->dai_link->symmetric_rates = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_substream__i0__private_data_cpu_dai0 = 1;
          substream[_i0].private_data->cpu_dai = (struct TYPE_4__ *) malloc(_len_substream__i0__private_data_cpu_dai0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_substream__i0__private_data_cpu_dai0; _j0++) {
              int _len_substream__i0__private_data_cpu_dai_driver0 = 1;
          substream[_i0].private_data->cpu_dai->driver = (struct snd_soc_dai_driver *) malloc(_len_substream__i0__private_data_cpu_dai_driver0*sizeof(struct snd_soc_dai_driver));
          for(int _j0 = 0; _j0 < _len_substream__i0__private_data_cpu_dai_driver0; _j0++) {
            substream[_i0].private_data->cpu_dai->driver->symmetric_samplebits = ((-2 * (next_i()%2)) + 1) * next_i();
        substream[_i0].private_data->cpu_dai->driver->symmetric_channels = ((-2 * (next_i()%2)) + 1) * next_i();
        substream[_i0].private_data->cpu_dai->driver->symmetric_rates = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = soc_pcm_has_symmetry(substream);
          printf("%d\n", benchRet); 
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
            substream[_i0].private_data->num_codecs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_substream__i0__private_data_codec_dais0 = 1;
          substream[_i0].private_data->codec_dais = (struct TYPE_6__ **) malloc(_len_substream__i0__private_data_codec_dais0*sizeof(struct TYPE_6__ *));
          for(int _j0 = 0; _j0 < _len_substream__i0__private_data_codec_dais0; _j0++) {
            int _len_substream__i0__private_data_codec_dais1 = 1;
            substream[_i0].private_data->codec_dais[_j0] = (struct TYPE_6__ *) malloc(_len_substream__i0__private_data_codec_dais1*sizeof(struct TYPE_6__));
            for(int _j1 = 0; _j1 < _len_substream__i0__private_data_codec_dais1; _j1++) {
                int _len_substream__i0__private_data_codec_dais__j0__driver0 = 1;
          substream[_i0].private_data->codec_dais[_j0]->driver = (struct TYPE_5__ *) malloc(_len_substream__i0__private_data_codec_dais__j0__driver0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_substream__i0__private_data_codec_dais__j0__driver0; _j0++) {
            substream[_i0].private_data->codec_dais[_j0]->driver->symmetric_samplebits = ((-2 * (next_i()%2)) + 1) * next_i();
        substream[_i0].private_data->codec_dais[_j0]->driver->symmetric_channels = ((-2 * (next_i()%2)) + 1) * next_i();
        substream[_i0].private_data->codec_dais[_j0]->driver->symmetric_rates = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          int _len_substream__i0__private_data_dai_link0 = 1;
          substream[_i0].private_data->dai_link = (struct snd_soc_dai_link *) malloc(_len_substream__i0__private_data_dai_link0*sizeof(struct snd_soc_dai_link));
          for(int _j0 = 0; _j0 < _len_substream__i0__private_data_dai_link0; _j0++) {
            substream[_i0].private_data->dai_link->symmetric_samplebits = ((-2 * (next_i()%2)) + 1) * next_i();
        substream[_i0].private_data->dai_link->symmetric_channels = ((-2 * (next_i()%2)) + 1) * next_i();
        substream[_i0].private_data->dai_link->symmetric_rates = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_substream__i0__private_data_cpu_dai0 = 1;
          substream[_i0].private_data->cpu_dai = (struct TYPE_4__ *) malloc(_len_substream__i0__private_data_cpu_dai0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_substream__i0__private_data_cpu_dai0; _j0++) {
              int _len_substream__i0__private_data_cpu_dai_driver0 = 1;
          substream[_i0].private_data->cpu_dai->driver = (struct snd_soc_dai_driver *) malloc(_len_substream__i0__private_data_cpu_dai_driver0*sizeof(struct snd_soc_dai_driver));
          for(int _j0 = 0; _j0 < _len_substream__i0__private_data_cpu_dai_driver0; _j0++) {
            substream[_i0].private_data->cpu_dai->driver->symmetric_samplebits = ((-2 * (next_i()%2)) + 1) * next_i();
        substream[_i0].private_data->cpu_dai->driver->symmetric_channels = ((-2 * (next_i()%2)) + 1) * next_i();
        substream[_i0].private_data->cpu_dai->driver->symmetric_rates = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = soc_pcm_has_symmetry(substream);
          printf("%d\n", benchRet); 
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

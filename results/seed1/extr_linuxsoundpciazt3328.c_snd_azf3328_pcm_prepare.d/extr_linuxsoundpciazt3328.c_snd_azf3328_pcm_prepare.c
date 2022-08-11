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
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int /*<<< orphan*/  dma_addr; struct snd_azf3328_codec_data* private_data; } ;
struct snd_azf3328_codec_data {int /*<<< orphan*/  dma_base; } ;

/* Variables and functions */

__attribute__((used)) static int
snd_azf3328_pcm_prepare(struct snd_pcm_substream *substream)
{
	struct snd_pcm_runtime *runtime = substream->runtime;
	struct snd_azf3328_codec_data *codec = runtime->private_data;
#if 0
        unsigned int size = snd_pcm_lib_buffer_bytes(substream);
	unsigned int count = snd_pcm_lib_period_bytes(substream);
#endif

	codec->dma_base = runtime->dma_addr;

#if 0
	snd_azf3328_codec_setfmt(codec,
		runtime->rate,
		snd_pcm_format_width(runtime->format),
		runtime->channels);
	snd_azf3328_codec_setdmaa(chip, codec,
					runtime->dma_addr, count, size);
#endif
	return 0;
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
              int _len_substream__i0__runtime0 = 1;
          substream[_i0].runtime = (struct snd_pcm_runtime *) malloc(_len_substream__i0__runtime0*sizeof(struct snd_pcm_runtime));
          for(int _j0 = 0; _j0 < _len_substream__i0__runtime0; _j0++) {
            substream[_i0].runtime->dma_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_substream__i0__runtime_private_data0 = 1;
          substream[_i0].runtime->private_data = (struct snd_azf3328_codec_data *) malloc(_len_substream__i0__runtime_private_data0*sizeof(struct snd_azf3328_codec_data));
          for(int _j0 = 0; _j0 < _len_substream__i0__runtime_private_data0; _j0++) {
            substream[_i0].runtime->private_data->dma_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = snd_azf3328_pcm_prepare(substream);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_substream0; _aux++) {
          free(substream[_aux].runtime);
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
              int _len_substream__i0__runtime0 = 1;
          substream[_i0].runtime = (struct snd_pcm_runtime *) malloc(_len_substream__i0__runtime0*sizeof(struct snd_pcm_runtime));
          for(int _j0 = 0; _j0 < _len_substream__i0__runtime0; _j0++) {
            substream[_i0].runtime->dma_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_substream__i0__runtime_private_data0 = 1;
          substream[_i0].runtime->private_data = (struct snd_azf3328_codec_data *) malloc(_len_substream__i0__runtime_private_data0*sizeof(struct snd_azf3328_codec_data));
          for(int _j0 = 0; _j0 < _len_substream__i0__runtime_private_data0; _j0++) {
            substream[_i0].runtime->private_data->dma_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = snd_azf3328_pcm_prepare(substream);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_substream0; _aux++) {
          free(substream[_aux].runtime);
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
              int _len_substream__i0__runtime0 = 1;
          substream[_i0].runtime = (struct snd_pcm_runtime *) malloc(_len_substream__i0__runtime0*sizeof(struct snd_pcm_runtime));
          for(int _j0 = 0; _j0 < _len_substream__i0__runtime0; _j0++) {
            substream[_i0].runtime->dma_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_substream__i0__runtime_private_data0 = 1;
          substream[_i0].runtime->private_data = (struct snd_azf3328_codec_data *) malloc(_len_substream__i0__runtime_private_data0*sizeof(struct snd_azf3328_codec_data));
          for(int _j0 = 0; _j0 < _len_substream__i0__runtime_private_data0; _j0++) {
            substream[_i0].runtime->private_data->dma_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = snd_azf3328_pcm_prepare(substream);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_substream0; _aux++) {
          free(substream[_aux].runtime);
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

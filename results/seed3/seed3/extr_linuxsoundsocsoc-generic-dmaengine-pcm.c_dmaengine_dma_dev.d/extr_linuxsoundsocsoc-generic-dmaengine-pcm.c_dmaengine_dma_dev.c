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
struct snd_pcm_substream {size_t stream; } ;
struct dmaengine_pcm {TYPE_2__** chan; } ;
struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct TYPE_3__ {struct device* dev; } ;

/* Variables and functions */

__attribute__((used)) static struct device *dmaengine_dma_dev(struct dmaengine_pcm *pcm,
	struct snd_pcm_substream *substream)
{
	if (!pcm->chan[substream->stream])
		return NULL;

	return pcm->chan[substream->stream]->device->dev;
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
          int _len_pcm0 = 1;
          struct dmaengine_pcm * pcm = (struct dmaengine_pcm *) malloc(_len_pcm0*sizeof(struct dmaengine_pcm));
          for(int _i0 = 0; _i0 < _len_pcm0; _i0++) {
              int _len_pcm__i0__chan0 = 1;
          pcm[_i0].chan = (struct TYPE_4__ **) malloc(_len_pcm__i0__chan0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_pcm__i0__chan0; _j0++) {
            int _len_pcm__i0__chan1 = 1;
            pcm[_i0].chan[_j0] = (struct TYPE_4__ *) malloc(_len_pcm__i0__chan1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_pcm__i0__chan1; _j1++) {
                int _len_pcm__i0__chan__j0__device0 = 1;
          pcm[_i0].chan[_j0]->device = (struct TYPE_3__ *) malloc(_len_pcm__i0__chan__j0__device0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_pcm__i0__chan__j0__device0; _j0++) {
              int _len_pcm__i0__chan__j0__device_dev0 = 1;
          pcm[_i0].chan[_j0]->device->dev = (struct device *) malloc(_len_pcm__i0__chan__j0__device_dev0*sizeof(struct device));
          for(int _j0 = 0; _j0 < _len_pcm__i0__chan__j0__device_dev0; _j0++) {
            pcm[_i0].chan[_j0]->device->dev->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
            }
          }
          }
          int _len_substream0 = 1;
          struct snd_pcm_substream * substream = (struct snd_pcm_substream *) malloc(_len_substream0*sizeof(struct snd_pcm_substream));
          for(int _i0 = 0; _i0 < _len_substream0; _i0++) {
            substream[_i0].stream = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct device * benchRet = dmaengine_dma_dev(pcm,substream);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_pcm0; _aux++) {
          free(*(pcm[_aux].chan));
        free(pcm[_aux].chan);
          }
          free(pcm);
          free(substream);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pcm0 = 65025;
          struct dmaengine_pcm * pcm = (struct dmaengine_pcm *) malloc(_len_pcm0*sizeof(struct dmaengine_pcm));
          for(int _i0 = 0; _i0 < _len_pcm0; _i0++) {
              int _len_pcm__i0__chan0 = 1;
          pcm[_i0].chan = (struct TYPE_4__ **) malloc(_len_pcm__i0__chan0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_pcm__i0__chan0; _j0++) {
            int _len_pcm__i0__chan1 = 1;
            pcm[_i0].chan[_j0] = (struct TYPE_4__ *) malloc(_len_pcm__i0__chan1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_pcm__i0__chan1; _j1++) {
                int _len_pcm__i0__chan__j0__device0 = 1;
          pcm[_i0].chan[_j0]->device = (struct TYPE_3__ *) malloc(_len_pcm__i0__chan__j0__device0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_pcm__i0__chan__j0__device0; _j0++) {
              int _len_pcm__i0__chan__j0__device_dev0 = 1;
          pcm[_i0].chan[_j0]->device->dev = (struct device *) malloc(_len_pcm__i0__chan__j0__device_dev0*sizeof(struct device));
          for(int _j0 = 0; _j0 < _len_pcm__i0__chan__j0__device_dev0; _j0++) {
            pcm[_i0].chan[_j0]->device->dev->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
            }
          }
          }
          int _len_substream0 = 65025;
          struct snd_pcm_substream * substream = (struct snd_pcm_substream *) malloc(_len_substream0*sizeof(struct snd_pcm_substream));
          for(int _i0 = 0; _i0 < _len_substream0; _i0++) {
            substream[_i0].stream = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct device * benchRet = dmaengine_dma_dev(pcm,substream);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_pcm0; _aux++) {
          free(*(pcm[_aux].chan));
        free(pcm[_aux].chan);
          }
          free(pcm);
          free(substream);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pcm0 = 100;
          struct dmaengine_pcm * pcm = (struct dmaengine_pcm *) malloc(_len_pcm0*sizeof(struct dmaengine_pcm));
          for(int _i0 = 0; _i0 < _len_pcm0; _i0++) {
              int _len_pcm__i0__chan0 = 1;
          pcm[_i0].chan = (struct TYPE_4__ **) malloc(_len_pcm__i0__chan0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_pcm__i0__chan0; _j0++) {
            int _len_pcm__i0__chan1 = 1;
            pcm[_i0].chan[_j0] = (struct TYPE_4__ *) malloc(_len_pcm__i0__chan1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_pcm__i0__chan1; _j1++) {
                int _len_pcm__i0__chan__j0__device0 = 1;
          pcm[_i0].chan[_j0]->device = (struct TYPE_3__ *) malloc(_len_pcm__i0__chan__j0__device0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_pcm__i0__chan__j0__device0; _j0++) {
              int _len_pcm__i0__chan__j0__device_dev0 = 1;
          pcm[_i0].chan[_j0]->device->dev = (struct device *) malloc(_len_pcm__i0__chan__j0__device_dev0*sizeof(struct device));
          for(int _j0 = 0; _j0 < _len_pcm__i0__chan__j0__device_dev0; _j0++) {
            pcm[_i0].chan[_j0]->device->dev->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
            }
          }
          }
          int _len_substream0 = 100;
          struct snd_pcm_substream * substream = (struct snd_pcm_substream *) malloc(_len_substream0*sizeof(struct snd_pcm_substream));
          for(int _i0 = 0; _i0 < _len_substream0; _i0++) {
            substream[_i0].stream = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct device * benchRet = dmaengine_dma_dev(pcm,substream);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_pcm0; _aux++) {
          free(*(pcm[_aux].chan));
        free(pcm[_aux].chan);
          }
          free(pcm);
          free(substream);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

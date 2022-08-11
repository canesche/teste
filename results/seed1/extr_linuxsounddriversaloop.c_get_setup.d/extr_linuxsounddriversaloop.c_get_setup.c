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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct loopback_setup {int dummy; } ;
struct loopback_pcm {TYPE_4__* substream; TYPE_3__* loopback; } ;
struct TYPE_8__ {scalar_t__ stream; size_t number; TYPE_2__* pstr; } ;
struct TYPE_7__ {struct loopback_setup** setup; } ;
struct TYPE_6__ {TYPE_1__* pcm; } ;
struct TYPE_5__ {int device; } ;

/* Variables and functions */
 scalar_t__ SNDRV_PCM_STREAM_PLAYBACK ; 

__attribute__((used)) static inline struct loopback_setup *get_setup(struct loopback_pcm *dpcm)
{
	int device = dpcm->substream->pstr->pcm->device;
	
	if (dpcm->substream->stream == SNDRV_PCM_STREAM_PLAYBACK)
		device ^= 1;
	return &dpcm->loopback->setup[dpcm->substream->number][device];
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
          int _len_dpcm0 = 1;
          struct loopback_pcm * dpcm = (struct loopback_pcm *) malloc(_len_dpcm0*sizeof(struct loopback_pcm));
          for(int _i0 = 0; _i0 < _len_dpcm0; _i0++) {
              int _len_dpcm__i0__substream0 = 1;
          dpcm[_i0].substream = (struct TYPE_8__ *) malloc(_len_dpcm__i0__substream0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_dpcm__i0__substream0; _j0++) {
            dpcm[_i0].substream->stream = ((-2 * (next_i()%2)) + 1) * next_i();
        dpcm[_i0].substream->number = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dpcm__i0__substream_pstr0 = 1;
          dpcm[_i0].substream->pstr = (struct TYPE_6__ *) malloc(_len_dpcm__i0__substream_pstr0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_dpcm__i0__substream_pstr0; _j0++) {
              int _len_dpcm__i0__substream_pstr_pcm0 = 1;
          dpcm[_i0].substream->pstr->pcm = (struct TYPE_5__ *) malloc(_len_dpcm__i0__substream_pstr_pcm0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_dpcm__i0__substream_pstr_pcm0; _j0++) {
            dpcm[_i0].substream->pstr->pcm->device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_dpcm__i0__loopback0 = 1;
          dpcm[_i0].loopback = (struct TYPE_7__ *) malloc(_len_dpcm__i0__loopback0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_dpcm__i0__loopback0; _j0++) {
              int _len_dpcm__i0__loopback_setup0 = 1;
          dpcm[_i0].loopback->setup = (struct loopback_setup **) malloc(_len_dpcm__i0__loopback_setup0*sizeof(struct loopback_setup *));
          for(int _j0 = 0; _j0 < _len_dpcm__i0__loopback_setup0; _j0++) {
            int _len_dpcm__i0__loopback_setup1 = 1;
            dpcm[_i0].loopback->setup[_j0] = (struct loopback_setup *) malloc(_len_dpcm__i0__loopback_setup1*sizeof(struct loopback_setup));
            for(int _j1 = 0; _j1 < _len_dpcm__i0__loopback_setup1; _j1++) {
              dpcm[_i0].loopback->setup[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          struct loopback_setup * benchRet = get_setup(dpcm);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_dpcm0; _aux++) {
          free(dpcm[_aux].substream);
          }
          for(int _aux = 0; _aux < _len_dpcm0; _aux++) {
          free(dpcm[_aux].loopback);
          }
          free(dpcm);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dpcm0 = 65025;
          struct loopback_pcm * dpcm = (struct loopback_pcm *) malloc(_len_dpcm0*sizeof(struct loopback_pcm));
          for(int _i0 = 0; _i0 < _len_dpcm0; _i0++) {
              int _len_dpcm__i0__substream0 = 1;
          dpcm[_i0].substream = (struct TYPE_8__ *) malloc(_len_dpcm__i0__substream0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_dpcm__i0__substream0; _j0++) {
            dpcm[_i0].substream->stream = ((-2 * (next_i()%2)) + 1) * next_i();
        dpcm[_i0].substream->number = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dpcm__i0__substream_pstr0 = 1;
          dpcm[_i0].substream->pstr = (struct TYPE_6__ *) malloc(_len_dpcm__i0__substream_pstr0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_dpcm__i0__substream_pstr0; _j0++) {
              int _len_dpcm__i0__substream_pstr_pcm0 = 1;
          dpcm[_i0].substream->pstr->pcm = (struct TYPE_5__ *) malloc(_len_dpcm__i0__substream_pstr_pcm0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_dpcm__i0__substream_pstr_pcm0; _j0++) {
            dpcm[_i0].substream->pstr->pcm->device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_dpcm__i0__loopback0 = 1;
          dpcm[_i0].loopback = (struct TYPE_7__ *) malloc(_len_dpcm__i0__loopback0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_dpcm__i0__loopback0; _j0++) {
              int _len_dpcm__i0__loopback_setup0 = 1;
          dpcm[_i0].loopback->setup = (struct loopback_setup **) malloc(_len_dpcm__i0__loopback_setup0*sizeof(struct loopback_setup *));
          for(int _j0 = 0; _j0 < _len_dpcm__i0__loopback_setup0; _j0++) {
            int _len_dpcm__i0__loopback_setup1 = 1;
            dpcm[_i0].loopback->setup[_j0] = (struct loopback_setup *) malloc(_len_dpcm__i0__loopback_setup1*sizeof(struct loopback_setup));
            for(int _j1 = 0; _j1 < _len_dpcm__i0__loopback_setup1; _j1++) {
              dpcm[_i0].loopback->setup[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          struct loopback_setup * benchRet = get_setup(dpcm);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_dpcm0; _aux++) {
          free(dpcm[_aux].substream);
          }
          for(int _aux = 0; _aux < _len_dpcm0; _aux++) {
          free(dpcm[_aux].loopback);
          }
          free(dpcm);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dpcm0 = 100;
          struct loopback_pcm * dpcm = (struct loopback_pcm *) malloc(_len_dpcm0*sizeof(struct loopback_pcm));
          for(int _i0 = 0; _i0 < _len_dpcm0; _i0++) {
              int _len_dpcm__i0__substream0 = 1;
          dpcm[_i0].substream = (struct TYPE_8__ *) malloc(_len_dpcm__i0__substream0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_dpcm__i0__substream0; _j0++) {
            dpcm[_i0].substream->stream = ((-2 * (next_i()%2)) + 1) * next_i();
        dpcm[_i0].substream->number = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dpcm__i0__substream_pstr0 = 1;
          dpcm[_i0].substream->pstr = (struct TYPE_6__ *) malloc(_len_dpcm__i0__substream_pstr0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_dpcm__i0__substream_pstr0; _j0++) {
              int _len_dpcm__i0__substream_pstr_pcm0 = 1;
          dpcm[_i0].substream->pstr->pcm = (struct TYPE_5__ *) malloc(_len_dpcm__i0__substream_pstr_pcm0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_dpcm__i0__substream_pstr_pcm0; _j0++) {
            dpcm[_i0].substream->pstr->pcm->device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_dpcm__i0__loopback0 = 1;
          dpcm[_i0].loopback = (struct TYPE_7__ *) malloc(_len_dpcm__i0__loopback0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_dpcm__i0__loopback0; _j0++) {
              int _len_dpcm__i0__loopback_setup0 = 1;
          dpcm[_i0].loopback->setup = (struct loopback_setup **) malloc(_len_dpcm__i0__loopback_setup0*sizeof(struct loopback_setup *));
          for(int _j0 = 0; _j0 < _len_dpcm__i0__loopback_setup0; _j0++) {
            int _len_dpcm__i0__loopback_setup1 = 1;
            dpcm[_i0].loopback->setup[_j0] = (struct loopback_setup *) malloc(_len_dpcm__i0__loopback_setup1*sizeof(struct loopback_setup));
            for(int _j1 = 0; _j1 < _len_dpcm__i0__loopback_setup1; _j1++) {
              dpcm[_i0].loopback->setup[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          struct loopback_setup * benchRet = get_setup(dpcm);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_dpcm0; _aux++) {
          free(dpcm[_aux].substream);
          }
          for(int _aux = 0; _aux < _len_dpcm0; _aux++) {
          free(dpcm[_aux].loopback);
          }
          free(dpcm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

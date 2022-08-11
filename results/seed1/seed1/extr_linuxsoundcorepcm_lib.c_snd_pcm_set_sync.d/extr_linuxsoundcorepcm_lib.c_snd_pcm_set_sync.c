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
struct snd_pcm_substream {TYPE_3__* pcm; struct snd_pcm_runtime* runtime; } ;
struct TYPE_4__ {int* id32; } ;
struct snd_pcm_runtime {TYPE_1__ sync; } ;
struct TYPE_6__ {TYPE_2__* card; } ;
struct TYPE_5__ {int number; } ;

/* Variables and functions */

void snd_pcm_set_sync(struct snd_pcm_substream *substream)
{
	struct snd_pcm_runtime *runtime = substream->runtime;
	
	runtime->sync.id32[0] = substream->pcm->card->number;
	runtime->sync.id32[1] = -1;
	runtime->sync.id32[2] = -1;
	runtime->sync.id32[3] = -1;
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
              int _len_substream__i0__pcm0 = 1;
          substream[_i0].pcm = (struct TYPE_6__ *) malloc(_len_substream__i0__pcm0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_substream__i0__pcm0; _j0++) {
              int _len_substream__i0__pcm_card0 = 1;
          substream[_i0].pcm->card = (struct TYPE_5__ *) malloc(_len_substream__i0__pcm_card0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_substream__i0__pcm_card0; _j0++) {
            substream[_i0].pcm->card->number = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_substream__i0__runtime0 = 1;
          substream[_i0].runtime = (struct snd_pcm_runtime *) malloc(_len_substream__i0__runtime0*sizeof(struct snd_pcm_runtime));
          for(int _j0 = 0; _j0 < _len_substream__i0__runtime0; _j0++) {
              int _len_substream__i0__runtime_sync_id320 = 1;
          substream[_i0].runtime->sync.id32 = (int *) malloc(_len_substream__i0__runtime_sync_id320*sizeof(int));
          for(int _j0 = 0; _j0 < _len_substream__i0__runtime_sync_id320; _j0++) {
            substream[_i0].runtime->sync.id32[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          snd_pcm_set_sync(substream);
          for(int _aux = 0; _aux < _len_substream0; _aux++) {
          free(substream[_aux].pcm);
          }
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
              int _len_substream__i0__pcm0 = 1;
          substream[_i0].pcm = (struct TYPE_6__ *) malloc(_len_substream__i0__pcm0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_substream__i0__pcm0; _j0++) {
              int _len_substream__i0__pcm_card0 = 1;
          substream[_i0].pcm->card = (struct TYPE_5__ *) malloc(_len_substream__i0__pcm_card0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_substream__i0__pcm_card0; _j0++) {
            substream[_i0].pcm->card->number = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_substream__i0__runtime0 = 1;
          substream[_i0].runtime = (struct snd_pcm_runtime *) malloc(_len_substream__i0__runtime0*sizeof(struct snd_pcm_runtime));
          for(int _j0 = 0; _j0 < _len_substream__i0__runtime0; _j0++) {
              int _len_substream__i0__runtime_sync_id320 = 1;
          substream[_i0].runtime->sync.id32 = (int *) malloc(_len_substream__i0__runtime_sync_id320*sizeof(int));
          for(int _j0 = 0; _j0 < _len_substream__i0__runtime_sync_id320; _j0++) {
            substream[_i0].runtime->sync.id32[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          snd_pcm_set_sync(substream);
          for(int _aux = 0; _aux < _len_substream0; _aux++) {
          free(substream[_aux].pcm);
          }
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
              int _len_substream__i0__pcm0 = 1;
          substream[_i0].pcm = (struct TYPE_6__ *) malloc(_len_substream__i0__pcm0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_substream__i0__pcm0; _j0++) {
              int _len_substream__i0__pcm_card0 = 1;
          substream[_i0].pcm->card = (struct TYPE_5__ *) malloc(_len_substream__i0__pcm_card0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_substream__i0__pcm_card0; _j0++) {
            substream[_i0].pcm->card->number = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_substream__i0__runtime0 = 1;
          substream[_i0].runtime = (struct snd_pcm_runtime *) malloc(_len_substream__i0__runtime0*sizeof(struct snd_pcm_runtime));
          for(int _j0 = 0; _j0 < _len_substream__i0__runtime0; _j0++) {
              int _len_substream__i0__runtime_sync_id320 = 1;
          substream[_i0].runtime->sync.id32 = (int *) malloc(_len_substream__i0__runtime_sync_id320*sizeof(int));
          for(int _j0 = 0; _j0 < _len_substream__i0__runtime_sync_id320; _j0++) {
            substream[_i0].runtime->sync.id32[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          snd_pcm_set_sync(substream);
          for(int _aux = 0; _aux < _len_substream0; _aux++) {
          free(substream[_aux].pcm);
          }
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

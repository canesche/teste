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
struct snd_soc_pcm_runtime {TYPE_2__* pcm; } ;
struct snd_pcm_substream {int dummy; } ;
struct TYPE_4__ {TYPE_1__* streams; } ;
struct TYPE_3__ {struct snd_pcm_substream* substream; } ;

/* Variables and functions */

struct snd_pcm_substream *
	snd_soc_dpcm_get_substream(struct snd_soc_pcm_runtime *be, int stream)
{
	return be->pcm->streams[stream].substream;
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
          int stream = 100;
          int _len_be0 = 1;
          struct snd_soc_pcm_runtime * be = (struct snd_soc_pcm_runtime *) malloc(_len_be0*sizeof(struct snd_soc_pcm_runtime));
          for(int _i0 = 0; _i0 < _len_be0; _i0++) {
              int _len_be__i0__pcm0 = 1;
          be[_i0].pcm = (struct TYPE_4__ *) malloc(_len_be__i0__pcm0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_be__i0__pcm0; _j0++) {
              int _len_be__i0__pcm_streams0 = 1;
          be[_i0].pcm->streams = (struct TYPE_3__ *) malloc(_len_be__i0__pcm_streams0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_be__i0__pcm_streams0; _j0++) {
              int _len_be__i0__pcm_streams_substream0 = 1;
          be[_i0].pcm->streams->substream = (struct snd_pcm_substream *) malloc(_len_be__i0__pcm_streams_substream0*sizeof(struct snd_pcm_substream));
          for(int _j0 = 0; _j0 < _len_be__i0__pcm_streams_substream0; _j0++) {
            be[_i0].pcm->streams->substream->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          struct snd_pcm_substream * benchRet = snd_soc_dpcm_get_substream(be,stream);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_be0; _aux++) {
          free(be[_aux].pcm);
          }
          free(be);
        
        break;
    }
    // big-arr
    case 1:
    {
          int stream = 255;
          int _len_be0 = 65025;
          struct snd_soc_pcm_runtime * be = (struct snd_soc_pcm_runtime *) malloc(_len_be0*sizeof(struct snd_soc_pcm_runtime));
          for(int _i0 = 0; _i0 < _len_be0; _i0++) {
              int _len_be__i0__pcm0 = 1;
          be[_i0].pcm = (struct TYPE_4__ *) malloc(_len_be__i0__pcm0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_be__i0__pcm0; _j0++) {
              int _len_be__i0__pcm_streams0 = 1;
          be[_i0].pcm->streams = (struct TYPE_3__ *) malloc(_len_be__i0__pcm_streams0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_be__i0__pcm_streams0; _j0++) {
              int _len_be__i0__pcm_streams_substream0 = 1;
          be[_i0].pcm->streams->substream = (struct snd_pcm_substream *) malloc(_len_be__i0__pcm_streams_substream0*sizeof(struct snd_pcm_substream));
          for(int _j0 = 0; _j0 < _len_be__i0__pcm_streams_substream0; _j0++) {
            be[_i0].pcm->streams->substream->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          struct snd_pcm_substream * benchRet = snd_soc_dpcm_get_substream(be,stream);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_be0; _aux++) {
          free(be[_aux].pcm);
          }
          free(be);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int stream = 10;
          int _len_be0 = 100;
          struct snd_soc_pcm_runtime * be = (struct snd_soc_pcm_runtime *) malloc(_len_be0*sizeof(struct snd_soc_pcm_runtime));
          for(int _i0 = 0; _i0 < _len_be0; _i0++) {
              int _len_be__i0__pcm0 = 1;
          be[_i0].pcm = (struct TYPE_4__ *) malloc(_len_be__i0__pcm0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_be__i0__pcm0; _j0++) {
              int _len_be__i0__pcm_streams0 = 1;
          be[_i0].pcm->streams = (struct TYPE_3__ *) malloc(_len_be__i0__pcm_streams0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_be__i0__pcm_streams0; _j0++) {
              int _len_be__i0__pcm_streams_substream0 = 1;
          be[_i0].pcm->streams->substream = (struct snd_pcm_substream *) malloc(_len_be__i0__pcm_streams_substream0*sizeof(struct snd_pcm_substream));
          for(int _j0 = 0; _j0 < _len_be__i0__pcm_streams_substream0; _j0++) {
            be[_i0].pcm->streams->substream->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          struct snd_pcm_substream * benchRet = snd_soc_dpcm_get_substream(be,stream);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_be0; _aux++) {
          free(be[_aux].pcm);
          }
          free(be);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

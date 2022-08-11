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
struct wm_adsp_compr {TYPE_2__* dsp; } ;
struct snd_compr_stream {TYPE_1__* runtime; } ;
struct snd_compr_caps {int num_codecs; int /*<<< orphan*/  max_fragments; int /*<<< orphan*/  min_fragments; int /*<<< orphan*/  max_fragment_size; int /*<<< orphan*/  min_fragment_size; int /*<<< orphan*/  direction; int /*<<< orphan*/ * codecs; } ;
struct TYPE_8__ {int num_caps; int /*<<< orphan*/  compr_direction; TYPE_3__* caps; } ;
struct TYPE_7__ {int /*<<< orphan*/  id; } ;
struct TYPE_6__ {int fw; } ;
struct TYPE_5__ {struct wm_adsp_compr* private_data; } ;

/* Variables and functions */
 int /*<<< orphan*/  WM_ADSP_MAX_FRAGMENTS ; 
 int /*<<< orphan*/  WM_ADSP_MAX_FRAGMENT_SIZE ; 
 int /*<<< orphan*/  WM_ADSP_MIN_FRAGMENTS ; 
 int /*<<< orphan*/  WM_ADSP_MIN_FRAGMENT_SIZE ; 
 TYPE_4__* wm_adsp_fw ; 

int wm_adsp_compr_get_caps(struct snd_compr_stream *stream,
			   struct snd_compr_caps *caps)
{
	struct wm_adsp_compr *compr = stream->runtime->private_data;
	int fw = compr->dsp->fw;
	int i;

	if (wm_adsp_fw[fw].caps) {
		for (i = 0; i < wm_adsp_fw[fw].num_caps; i++)
			caps->codecs[i] = wm_adsp_fw[fw].caps[i].id;

		caps->num_codecs = i;
		caps->direction = wm_adsp_fw[fw].compr_direction;

		caps->min_fragment_size = WM_ADSP_MIN_FRAGMENT_SIZE;
		caps->max_fragment_size = WM_ADSP_MAX_FRAGMENT_SIZE;
		caps->min_fragments = WM_ADSP_MIN_FRAGMENTS;
		caps->max_fragments = WM_ADSP_MAX_FRAGMENTS;
	}

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
          int _len_stream0 = 1;
          struct snd_compr_stream * stream = (struct snd_compr_stream *) malloc(_len_stream0*sizeof(struct snd_compr_stream));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
              int _len_stream__i0__runtime0 = 1;
          stream[_i0].runtime = (struct TYPE_5__ *) malloc(_len_stream__i0__runtime0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_stream__i0__runtime0; _j0++) {
              int _len_stream__i0__runtime_private_data0 = 1;
          stream[_i0].runtime->private_data = (struct wm_adsp_compr *) malloc(_len_stream__i0__runtime_private_data0*sizeof(struct wm_adsp_compr));
          for(int _j0 = 0; _j0 < _len_stream__i0__runtime_private_data0; _j0++) {
              int _len_stream__i0__runtime_private_data_dsp0 = 1;
          stream[_i0].runtime->private_data->dsp = (struct TYPE_6__ *) malloc(_len_stream__i0__runtime_private_data_dsp0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_stream__i0__runtime_private_data_dsp0; _j0++) {
            stream[_i0].runtime->private_data->dsp->fw = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_caps0 = 1;
          struct snd_compr_caps * caps = (struct snd_compr_caps *) malloc(_len_caps0*sizeof(struct snd_compr_caps));
          for(int _i0 = 0; _i0 < _len_caps0; _i0++) {
            caps[_i0].num_codecs = ((-2 * (next_i()%2)) + 1) * next_i();
        caps[_i0].max_fragments = ((-2 * (next_i()%2)) + 1) * next_i();
        caps[_i0].min_fragments = ((-2 * (next_i()%2)) + 1) * next_i();
        caps[_i0].max_fragment_size = ((-2 * (next_i()%2)) + 1) * next_i();
        caps[_i0].min_fragment_size = ((-2 * (next_i()%2)) + 1) * next_i();
        caps[_i0].direction = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_caps__i0__codecs0 = 1;
          caps[_i0].codecs = (int *) malloc(_len_caps__i0__codecs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_caps__i0__codecs0; _j0++) {
            caps[_i0].codecs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = wm_adsp_compr_get_caps(stream,caps);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_stream0; _aux++) {
          free(stream[_aux].runtime);
          }
          free(stream);
          for(int _aux = 0; _aux < _len_caps0; _aux++) {
          free(caps[_aux].codecs);
          }
          free(caps);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_stream0 = 65025;
          struct snd_compr_stream * stream = (struct snd_compr_stream *) malloc(_len_stream0*sizeof(struct snd_compr_stream));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
              int _len_stream__i0__runtime0 = 1;
          stream[_i0].runtime = (struct TYPE_5__ *) malloc(_len_stream__i0__runtime0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_stream__i0__runtime0; _j0++) {
              int _len_stream__i0__runtime_private_data0 = 1;
          stream[_i0].runtime->private_data = (struct wm_adsp_compr *) malloc(_len_stream__i0__runtime_private_data0*sizeof(struct wm_adsp_compr));
          for(int _j0 = 0; _j0 < _len_stream__i0__runtime_private_data0; _j0++) {
              int _len_stream__i0__runtime_private_data_dsp0 = 1;
          stream[_i0].runtime->private_data->dsp = (struct TYPE_6__ *) malloc(_len_stream__i0__runtime_private_data_dsp0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_stream__i0__runtime_private_data_dsp0; _j0++) {
            stream[_i0].runtime->private_data->dsp->fw = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_caps0 = 65025;
          struct snd_compr_caps * caps = (struct snd_compr_caps *) malloc(_len_caps0*sizeof(struct snd_compr_caps));
          for(int _i0 = 0; _i0 < _len_caps0; _i0++) {
            caps[_i0].num_codecs = ((-2 * (next_i()%2)) + 1) * next_i();
        caps[_i0].max_fragments = ((-2 * (next_i()%2)) + 1) * next_i();
        caps[_i0].min_fragments = ((-2 * (next_i()%2)) + 1) * next_i();
        caps[_i0].max_fragment_size = ((-2 * (next_i()%2)) + 1) * next_i();
        caps[_i0].min_fragment_size = ((-2 * (next_i()%2)) + 1) * next_i();
        caps[_i0].direction = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_caps__i0__codecs0 = 1;
          caps[_i0].codecs = (int *) malloc(_len_caps__i0__codecs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_caps__i0__codecs0; _j0++) {
            caps[_i0].codecs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = wm_adsp_compr_get_caps(stream,caps);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_stream0; _aux++) {
          free(stream[_aux].runtime);
          }
          free(stream);
          for(int _aux = 0; _aux < _len_caps0; _aux++) {
          free(caps[_aux].codecs);
          }
          free(caps);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_stream0 = 100;
          struct snd_compr_stream * stream = (struct snd_compr_stream *) malloc(_len_stream0*sizeof(struct snd_compr_stream));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
              int _len_stream__i0__runtime0 = 1;
          stream[_i0].runtime = (struct TYPE_5__ *) malloc(_len_stream__i0__runtime0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_stream__i0__runtime0; _j0++) {
              int _len_stream__i0__runtime_private_data0 = 1;
          stream[_i0].runtime->private_data = (struct wm_adsp_compr *) malloc(_len_stream__i0__runtime_private_data0*sizeof(struct wm_adsp_compr));
          for(int _j0 = 0; _j0 < _len_stream__i0__runtime_private_data0; _j0++) {
              int _len_stream__i0__runtime_private_data_dsp0 = 1;
          stream[_i0].runtime->private_data->dsp = (struct TYPE_6__ *) malloc(_len_stream__i0__runtime_private_data_dsp0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_stream__i0__runtime_private_data_dsp0; _j0++) {
            stream[_i0].runtime->private_data->dsp->fw = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_caps0 = 100;
          struct snd_compr_caps * caps = (struct snd_compr_caps *) malloc(_len_caps0*sizeof(struct snd_compr_caps));
          for(int _i0 = 0; _i0 < _len_caps0; _i0++) {
            caps[_i0].num_codecs = ((-2 * (next_i()%2)) + 1) * next_i();
        caps[_i0].max_fragments = ((-2 * (next_i()%2)) + 1) * next_i();
        caps[_i0].min_fragments = ((-2 * (next_i()%2)) + 1) * next_i();
        caps[_i0].max_fragment_size = ((-2 * (next_i()%2)) + 1) * next_i();
        caps[_i0].min_fragment_size = ((-2 * (next_i()%2)) + 1) * next_i();
        caps[_i0].direction = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_caps__i0__codecs0 = 1;
          caps[_i0].codecs = (int *) malloc(_len_caps__i0__codecs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_caps__i0__codecs0; _j0++) {
            caps[_i0].codecs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = wm_adsp_compr_get_caps(stream,caps);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_stream0; _aux++) {
          free(stream[_aux].runtime);
          }
          free(stream);
          for(int _aux = 0; _aux < _len_caps0; _aux++) {
          free(caps[_aux].codecs);
          }
          free(caps);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

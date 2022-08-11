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
struct TYPE_6__ {int sliced_size; } ;
struct ivtv {int nof_inputs; int nof_audio_inputs; int active_input; TYPE_4__* card; int /*<<< orphan*/  audio_input; TYPE_2__ vbi; } ;
struct TYPE_8__ {int hw_all; TYPE_3__* video_inputs; TYPE_1__* audio_inputs; } ;
struct TYPE_7__ {scalar_t__ video_type; int /*<<< orphan*/  audio_index; } ;
struct TYPE_5__ {scalar_t__ audio_type; } ;

/* Variables and functions */
 scalar_t__ IVTV_CARD_INPUT_VID_TUNER ; 
 int IVTV_CARD_MAX_AUDIO_INPUTS ; 
 int IVTV_CARD_MAX_VIDEO_INPUTS ; 
 int IVTV_HW_CX25840 ; 

__attribute__((used)) static void ivtv_init_struct2(struct ivtv *itv)
{
	int i;

	for (i = 0; i < IVTV_CARD_MAX_VIDEO_INPUTS; i++)
		if (itv->card->video_inputs[i].video_type == 0)
			break;
	itv->nof_inputs = i;
	for (i = 0; i < IVTV_CARD_MAX_AUDIO_INPUTS; i++)
		if (itv->card->audio_inputs[i].audio_type == 0)
			break;
	itv->nof_audio_inputs = i;

	if (itv->card->hw_all & IVTV_HW_CX25840) {
		itv->vbi.sliced_size = 288;  /* multiple of 16, real size = 284 */
	} else {
		itv->vbi.sliced_size = 64;   /* multiple of 16, real size = 52 */
	}

	/* Find tuner input */
	for (i = 0; i < itv->nof_inputs; i++) {
		if (itv->card->video_inputs[i].video_type ==
				IVTV_CARD_INPUT_VID_TUNER)
			break;
	}
	if (i >= itv->nof_inputs)
		i = 0;
	itv->active_input = i;
	itv->audio_input = itv->card->video_inputs[i].audio_index;
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
          int _len_itv0 = 1;
          struct ivtv * itv = (struct ivtv *) malloc(_len_itv0*sizeof(struct ivtv));
          for(int _i0 = 0; _i0 < _len_itv0; _i0++) {
            itv[_i0].nof_inputs = ((-2 * (next_i()%2)) + 1) * next_i();
        itv[_i0].nof_audio_inputs = ((-2 * (next_i()%2)) + 1) * next_i();
        itv[_i0].active_input = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_itv__i0__card0 = 1;
          itv[_i0].card = (struct TYPE_8__ *) malloc(_len_itv__i0__card0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_itv__i0__card0; _j0++) {
            itv[_i0].card->hw_all = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_itv__i0__card_video_inputs0 = 1;
          itv[_i0].card->video_inputs = (struct TYPE_7__ *) malloc(_len_itv__i0__card_video_inputs0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_itv__i0__card_video_inputs0; _j0++) {
            itv[_i0].card->video_inputs->video_type = ((-2 * (next_i()%2)) + 1) * next_i();
        itv[_i0].card->video_inputs->audio_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_itv__i0__card_audio_inputs0 = 1;
          itv[_i0].card->audio_inputs = (struct TYPE_5__ *) malloc(_len_itv__i0__card_audio_inputs0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_itv__i0__card_audio_inputs0; _j0++) {
            itv[_i0].card->audio_inputs->audio_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        itv[_i0].audio_input = ((-2 * (next_i()%2)) + 1) * next_i();
        itv[_i0].vbi.sliced_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ivtv_init_struct2(itv);
          for(int _aux = 0; _aux < _len_itv0; _aux++) {
          free(itv[_aux].card);
          }
          free(itv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_itv0 = 65025;
          struct ivtv * itv = (struct ivtv *) malloc(_len_itv0*sizeof(struct ivtv));
          for(int _i0 = 0; _i0 < _len_itv0; _i0++) {
            itv[_i0].nof_inputs = ((-2 * (next_i()%2)) + 1) * next_i();
        itv[_i0].nof_audio_inputs = ((-2 * (next_i()%2)) + 1) * next_i();
        itv[_i0].active_input = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_itv__i0__card0 = 1;
          itv[_i0].card = (struct TYPE_8__ *) malloc(_len_itv__i0__card0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_itv__i0__card0; _j0++) {
            itv[_i0].card->hw_all = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_itv__i0__card_video_inputs0 = 1;
          itv[_i0].card->video_inputs = (struct TYPE_7__ *) malloc(_len_itv__i0__card_video_inputs0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_itv__i0__card_video_inputs0; _j0++) {
            itv[_i0].card->video_inputs->video_type = ((-2 * (next_i()%2)) + 1) * next_i();
        itv[_i0].card->video_inputs->audio_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_itv__i0__card_audio_inputs0 = 1;
          itv[_i0].card->audio_inputs = (struct TYPE_5__ *) malloc(_len_itv__i0__card_audio_inputs0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_itv__i0__card_audio_inputs0; _j0++) {
            itv[_i0].card->audio_inputs->audio_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        itv[_i0].audio_input = ((-2 * (next_i()%2)) + 1) * next_i();
        itv[_i0].vbi.sliced_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ivtv_init_struct2(itv);
          for(int _aux = 0; _aux < _len_itv0; _aux++) {
          free(itv[_aux].card);
          }
          free(itv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_itv0 = 100;
          struct ivtv * itv = (struct ivtv *) malloc(_len_itv0*sizeof(struct ivtv));
          for(int _i0 = 0; _i0 < _len_itv0; _i0++) {
            itv[_i0].nof_inputs = ((-2 * (next_i()%2)) + 1) * next_i();
        itv[_i0].nof_audio_inputs = ((-2 * (next_i()%2)) + 1) * next_i();
        itv[_i0].active_input = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_itv__i0__card0 = 1;
          itv[_i0].card = (struct TYPE_8__ *) malloc(_len_itv__i0__card0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_itv__i0__card0; _j0++) {
            itv[_i0].card->hw_all = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_itv__i0__card_video_inputs0 = 1;
          itv[_i0].card->video_inputs = (struct TYPE_7__ *) malloc(_len_itv__i0__card_video_inputs0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_itv__i0__card_video_inputs0; _j0++) {
            itv[_i0].card->video_inputs->video_type = ((-2 * (next_i()%2)) + 1) * next_i();
        itv[_i0].card->video_inputs->audio_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_itv__i0__card_audio_inputs0 = 1;
          itv[_i0].card->audio_inputs = (struct TYPE_5__ *) malloc(_len_itv__i0__card_audio_inputs0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_itv__i0__card_audio_inputs0; _j0++) {
            itv[_i0].card->audio_inputs->audio_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        itv[_i0].audio_input = ((-2 * (next_i()%2)) + 1) * next_i();
        itv[_i0].vbi.sliced_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ivtv_init_struct2(itv);
          for(int _aux = 0; _aux < _len_itv0; _aux++) {
          free(itv[_aux].card);
          }
          free(itv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

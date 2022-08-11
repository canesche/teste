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
struct cx18 {int nof_inputs; int nof_audio_inputs; int active_input; TYPE_3__* card; int /*<<< orphan*/  audio_input; } ;
struct TYPE_6__ {TYPE_2__* video_inputs; TYPE_1__* audio_inputs; } ;
struct TYPE_5__ {scalar_t__ video_type; int /*<<< orphan*/  audio_index; } ;
struct TYPE_4__ {scalar_t__ audio_type; } ;

/* Variables and functions */
 scalar_t__ CX18_CARD_INPUT_VID_TUNER ; 
 int CX18_CARD_MAX_AUDIO_INPUTS ; 
 int CX18_CARD_MAX_VIDEO_INPUTS ; 

__attribute__((used)) static void cx18_init_struct2(struct cx18 *cx)
{
	int i;

	for (i = 0; i < CX18_CARD_MAX_VIDEO_INPUTS - 1; i++)
		if (cx->card->video_inputs[i].video_type == 0)
			break;
	cx->nof_inputs = i;
	for (i = 0; i < CX18_CARD_MAX_AUDIO_INPUTS - 1; i++)
		if (cx->card->audio_inputs[i].audio_type == 0)
			break;
	cx->nof_audio_inputs = i;

	/* Find tuner input */
	for (i = 0; i < cx->nof_inputs; i++) {
		if (cx->card->video_inputs[i].video_type ==
				CX18_CARD_INPUT_VID_TUNER)
			break;
	}
	if (i == cx->nof_inputs)
		i = 0;
	cx->active_input = i;
	cx->audio_input = cx->card->video_inputs[i].audio_index;
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
          int _len_cx0 = 1;
          struct cx18 * cx = (struct cx18 *) malloc(_len_cx0*sizeof(struct cx18));
          for(int _i0 = 0; _i0 < _len_cx0; _i0++) {
            cx[_i0].nof_inputs = ((-2 * (next_i()%2)) + 1) * next_i();
        cx[_i0].nof_audio_inputs = ((-2 * (next_i()%2)) + 1) * next_i();
        cx[_i0].active_input = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cx__i0__card0 = 1;
          cx[_i0].card = (struct TYPE_6__ *) malloc(_len_cx__i0__card0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_cx__i0__card0; _j0++) {
              int _len_cx__i0__card_video_inputs0 = 1;
          cx[_i0].card->video_inputs = (struct TYPE_5__ *) malloc(_len_cx__i0__card_video_inputs0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_cx__i0__card_video_inputs0; _j0++) {
            cx[_i0].card->video_inputs->video_type = ((-2 * (next_i()%2)) + 1) * next_i();
        cx[_i0].card->video_inputs->audio_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cx__i0__card_audio_inputs0 = 1;
          cx[_i0].card->audio_inputs = (struct TYPE_4__ *) malloc(_len_cx__i0__card_audio_inputs0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_cx__i0__card_audio_inputs0; _j0++) {
            cx[_i0].card->audio_inputs->audio_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        cx[_i0].audio_input = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cx18_init_struct2(cx);
          for(int _aux = 0; _aux < _len_cx0; _aux++) {
          free(cx[_aux].card);
          }
          free(cx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cx0 = 65025;
          struct cx18 * cx = (struct cx18 *) malloc(_len_cx0*sizeof(struct cx18));
          for(int _i0 = 0; _i0 < _len_cx0; _i0++) {
            cx[_i0].nof_inputs = ((-2 * (next_i()%2)) + 1) * next_i();
        cx[_i0].nof_audio_inputs = ((-2 * (next_i()%2)) + 1) * next_i();
        cx[_i0].active_input = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cx__i0__card0 = 1;
          cx[_i0].card = (struct TYPE_6__ *) malloc(_len_cx__i0__card0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_cx__i0__card0; _j0++) {
              int _len_cx__i0__card_video_inputs0 = 1;
          cx[_i0].card->video_inputs = (struct TYPE_5__ *) malloc(_len_cx__i0__card_video_inputs0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_cx__i0__card_video_inputs0; _j0++) {
            cx[_i0].card->video_inputs->video_type = ((-2 * (next_i()%2)) + 1) * next_i();
        cx[_i0].card->video_inputs->audio_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cx__i0__card_audio_inputs0 = 1;
          cx[_i0].card->audio_inputs = (struct TYPE_4__ *) malloc(_len_cx__i0__card_audio_inputs0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_cx__i0__card_audio_inputs0; _j0++) {
            cx[_i0].card->audio_inputs->audio_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        cx[_i0].audio_input = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cx18_init_struct2(cx);
          for(int _aux = 0; _aux < _len_cx0; _aux++) {
          free(cx[_aux].card);
          }
          free(cx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cx0 = 100;
          struct cx18 * cx = (struct cx18 *) malloc(_len_cx0*sizeof(struct cx18));
          for(int _i0 = 0; _i0 < _len_cx0; _i0++) {
            cx[_i0].nof_inputs = ((-2 * (next_i()%2)) + 1) * next_i();
        cx[_i0].nof_audio_inputs = ((-2 * (next_i()%2)) + 1) * next_i();
        cx[_i0].active_input = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cx__i0__card0 = 1;
          cx[_i0].card = (struct TYPE_6__ *) malloc(_len_cx__i0__card0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_cx__i0__card0; _j0++) {
              int _len_cx__i0__card_video_inputs0 = 1;
          cx[_i0].card->video_inputs = (struct TYPE_5__ *) malloc(_len_cx__i0__card_video_inputs0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_cx__i0__card_video_inputs0; _j0++) {
            cx[_i0].card->video_inputs->video_type = ((-2 * (next_i()%2)) + 1) * next_i();
        cx[_i0].card->video_inputs->audio_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cx__i0__card_audio_inputs0 = 1;
          cx[_i0].card->audio_inputs = (struct TYPE_4__ *) malloc(_len_cx__i0__card_audio_inputs0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_cx__i0__card_audio_inputs0; _j0++) {
            cx[_i0].card->audio_inputs->audio_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        cx[_i0].audio_input = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cx18_init_struct2(cx);
          for(int _aux = 0; _aux < _len_cx0; _aux++) {
          free(cx[_aux].card);
          }
          free(cx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

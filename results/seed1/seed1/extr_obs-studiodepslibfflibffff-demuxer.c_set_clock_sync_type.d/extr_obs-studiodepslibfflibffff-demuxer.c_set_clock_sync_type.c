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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int sync_type; int /*<<< orphan*/ * opaque; void* sync_clock; } ;
struct ff_demuxer {TYPE_1__ clock; int /*<<< orphan*/ * video_decoder; int /*<<< orphan*/ * audio_decoder; } ;

/* Variables and functions */
#define  AV_SYNC_AUDIO_MASTER 130 
#define  AV_SYNC_EXTERNAL_MASTER 129 
#define  AV_SYNC_VIDEO_MASTER 128 
 void* ff_decoder_clock ; 
 void* ff_external_clock ; 

__attribute__((used)) static bool set_clock_sync_type(struct ff_demuxer *demuxer)
{
	if (demuxer->video_decoder == NULL) {
		if (demuxer->clock.sync_type == AV_SYNC_VIDEO_MASTER)
			demuxer->clock.sync_type = AV_SYNC_AUDIO_MASTER;
	}

	if (demuxer->audio_decoder == NULL) {
		if (demuxer->clock.sync_type == AV_SYNC_AUDIO_MASTER)
			demuxer->clock.sync_type = AV_SYNC_VIDEO_MASTER;
	}

	switch (demuxer->clock.sync_type) {
	case AV_SYNC_AUDIO_MASTER:
		demuxer->clock.sync_clock = ff_decoder_clock;
		demuxer->clock.opaque = demuxer->audio_decoder;
		break;
	case AV_SYNC_VIDEO_MASTER:
		demuxer->clock.sync_clock = ff_decoder_clock;
		demuxer->clock.opaque = demuxer->video_decoder;
		break;
	case AV_SYNC_EXTERNAL_MASTER:
		demuxer->clock.sync_clock = ff_external_clock;
		demuxer->clock.opaque = NULL;
		break;
	default:
		return false;
	}

	return true;
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
          int _len_demuxer0 = 1;
          struct ff_demuxer * demuxer = (struct ff_demuxer *) malloc(_len_demuxer0*sizeof(struct ff_demuxer));
          for(int _i0 = 0; _i0 < _len_demuxer0; _i0++) {
            demuxer[_i0].clock.sync_type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_demuxer__i0__clock_opaque0 = 1;
          demuxer[_i0].clock.opaque = (int *) malloc(_len_demuxer__i0__clock_opaque0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_demuxer__i0__clock_opaque0; _j0++) {
            demuxer[_i0].clock.opaque[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_demuxer__i0__video_decoder0 = 1;
          demuxer[_i0].video_decoder = (int *) malloc(_len_demuxer__i0__video_decoder0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_demuxer__i0__video_decoder0; _j0++) {
            demuxer[_i0].video_decoder[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_demuxer__i0__audio_decoder0 = 1;
          demuxer[_i0].audio_decoder = (int *) malloc(_len_demuxer__i0__audio_decoder0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_demuxer__i0__audio_decoder0; _j0++) {
            demuxer[_i0].audio_decoder[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = set_clock_sync_type(demuxer);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_demuxer0; _aux++) {
          free(demuxer[_aux].video_decoder);
          }
          for(int _aux = 0; _aux < _len_demuxer0; _aux++) {
          free(demuxer[_aux].audio_decoder);
          }
          free(demuxer);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_demuxer0 = 65025;
          struct ff_demuxer * demuxer = (struct ff_demuxer *) malloc(_len_demuxer0*sizeof(struct ff_demuxer));
          for(int _i0 = 0; _i0 < _len_demuxer0; _i0++) {
            demuxer[_i0].clock.sync_type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_demuxer__i0__clock_opaque0 = 1;
          demuxer[_i0].clock.opaque = (int *) malloc(_len_demuxer__i0__clock_opaque0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_demuxer__i0__clock_opaque0; _j0++) {
            demuxer[_i0].clock.opaque[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_demuxer__i0__video_decoder0 = 1;
          demuxer[_i0].video_decoder = (int *) malloc(_len_demuxer__i0__video_decoder0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_demuxer__i0__video_decoder0; _j0++) {
            demuxer[_i0].video_decoder[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_demuxer__i0__audio_decoder0 = 1;
          demuxer[_i0].audio_decoder = (int *) malloc(_len_demuxer__i0__audio_decoder0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_demuxer__i0__audio_decoder0; _j0++) {
            demuxer[_i0].audio_decoder[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = set_clock_sync_type(demuxer);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_demuxer0; _aux++) {
          free(demuxer[_aux].video_decoder);
          }
          for(int _aux = 0; _aux < _len_demuxer0; _aux++) {
          free(demuxer[_aux].audio_decoder);
          }
          free(demuxer);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_demuxer0 = 100;
          struct ff_demuxer * demuxer = (struct ff_demuxer *) malloc(_len_demuxer0*sizeof(struct ff_demuxer));
          for(int _i0 = 0; _i0 < _len_demuxer0; _i0++) {
            demuxer[_i0].clock.sync_type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_demuxer__i0__clock_opaque0 = 1;
          demuxer[_i0].clock.opaque = (int *) malloc(_len_demuxer__i0__clock_opaque0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_demuxer__i0__clock_opaque0; _j0++) {
            demuxer[_i0].clock.opaque[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_demuxer__i0__video_decoder0 = 1;
          demuxer[_i0].video_decoder = (int *) malloc(_len_demuxer__i0__video_decoder0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_demuxer__i0__video_decoder0; _j0++) {
            demuxer[_i0].video_decoder[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_demuxer__i0__audio_decoder0 = 1;
          demuxer[_i0].audio_decoder = (int *) malloc(_len_demuxer__i0__audio_decoder0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_demuxer__i0__audio_decoder0; _j0++) {
            demuxer[_i0].audio_decoder[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = set_clock_sync_type(demuxer);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_demuxer0; _aux++) {
          free(demuxer[_aux].video_decoder);
          }
          for(int _aux = 0; _aux < _len_demuxer0; _aux++) {
          free(demuxer[_aux].audio_decoder);
          }
          free(demuxer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

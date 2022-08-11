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
struct track {TYPE_3__* stream; } ;
struct TYPE_6__ {TYPE_2__* codec; } ;
struct TYPE_4__ {int num; } ;
struct TYPE_5__ {TYPE_1__ channels; } ;

/* Variables and functions */

__attribute__((used)) static int track_channels(struct track *track)
{
    return track->stream ? track->stream->codec->channels.num : 0;
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
          int _len_track0 = 1;
          struct track * track = (struct track *) malloc(_len_track0*sizeof(struct track));
          for(int _i0 = 0; _i0 < _len_track0; _i0++) {
              int _len_track__i0__stream0 = 1;
          track[_i0].stream = (struct TYPE_6__ *) malloc(_len_track__i0__stream0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_track__i0__stream0; _j0++) {
              int _len_track__i0__stream_codec0 = 1;
          track[_i0].stream->codec = (struct TYPE_5__ *) malloc(_len_track__i0__stream_codec0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_track__i0__stream_codec0; _j0++) {
            track[_i0].stream->codec->channels.num = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = track_channels(track);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].stream);
          }
          free(track);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_track0 = 65025;
          struct track * track = (struct track *) malloc(_len_track0*sizeof(struct track));
          for(int _i0 = 0; _i0 < _len_track0; _i0++) {
              int _len_track__i0__stream0 = 1;
          track[_i0].stream = (struct TYPE_6__ *) malloc(_len_track__i0__stream0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_track__i0__stream0; _j0++) {
              int _len_track__i0__stream_codec0 = 1;
          track[_i0].stream->codec = (struct TYPE_5__ *) malloc(_len_track__i0__stream_codec0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_track__i0__stream_codec0; _j0++) {
            track[_i0].stream->codec->channels.num = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = track_channels(track);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].stream);
          }
          free(track);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_track0 = 100;
          struct track * track = (struct track *) malloc(_len_track0*sizeof(struct track));
          for(int _i0 = 0; _i0 < _len_track0; _i0++) {
              int _len_track__i0__stream0 = 1;
          track[_i0].stream = (struct TYPE_6__ *) malloc(_len_track__i0__stream0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_track__i0__stream0; _j0++) {
              int _len_track__i0__stream_codec0 = 1;
          track[_i0].stream->codec = (struct TYPE_5__ *) malloc(_len_track__i0__stream_codec0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_track__i0__stream_codec0; _j0++) {
            track[_i0].stream->codec->channels.num = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = track_channels(track);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_track0; _aux++) {
          free(track[_aux].stream);
          }
          free(track);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

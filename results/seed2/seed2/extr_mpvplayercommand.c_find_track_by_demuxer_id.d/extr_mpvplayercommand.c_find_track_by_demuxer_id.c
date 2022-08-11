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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct track {int type; int demuxer_id; } ;
typedef  enum stream_type { ____Placeholder_stream_type } stream_type ;
struct TYPE_3__ {int num_tracks; struct track** tracks; } ;
typedef  TYPE_1__ MPContext ;

/* Variables and functions */

__attribute__((used)) static struct track *find_track_by_demuxer_id(MPContext *mpctx,
                                              enum stream_type type,
                                              int demuxer_id)
{
    for (int n = 0; n < mpctx->num_tracks; n++) {
        struct track *track = mpctx->tracks[n];
        if (track->type == type && track->demuxer_id == demuxer_id)
            return track;
    }
    return NULL;
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
          enum stream_type type = 0;
          int demuxer_id = 100;
          int _len_mpctx0 = 1;
          struct TYPE_3__ * mpctx = (struct TYPE_3__ *) malloc(_len_mpctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_mpctx0; _i0++) {
            mpctx[_i0].num_tracks = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mpctx__i0__tracks0 = 1;
          mpctx[_i0].tracks = (struct track **) malloc(_len_mpctx__i0__tracks0*sizeof(struct track *));
          for(int _j0 = 0; _j0 < _len_mpctx__i0__tracks0; _j0++) {
            int _len_mpctx__i0__tracks1 = 1;
            mpctx[_i0].tracks[_j0] = (struct track *) malloc(_len_mpctx__i0__tracks1*sizeof(struct track));
            for(int _j1 = 0; _j1 < _len_mpctx__i0__tracks1; _j1++) {
              mpctx[_i0].tracks[_j0]->type = ((-2 * (next_i()%2)) + 1) * next_i();
        mpctx[_i0].tracks[_j0]->demuxer_id = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct track * benchRet = find_track_by_demuxer_id(mpctx,type,demuxer_id);
          printf("%d\n", (*benchRet).type);
          printf("%d\n", (*benchRet).demuxer_id);
          for(int _aux = 0; _aux < _len_mpctx0; _aux++) {
          free(*(mpctx[_aux].tracks));
        free(mpctx[_aux].tracks);
          }
          free(mpctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum stream_type type = 0;
          int demuxer_id = 255;
          int _len_mpctx0 = 65025;
          struct TYPE_3__ * mpctx = (struct TYPE_3__ *) malloc(_len_mpctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_mpctx0; _i0++) {
            mpctx[_i0].num_tracks = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mpctx__i0__tracks0 = 1;
          mpctx[_i0].tracks = (struct track **) malloc(_len_mpctx__i0__tracks0*sizeof(struct track *));
          for(int _j0 = 0; _j0 < _len_mpctx__i0__tracks0; _j0++) {
            int _len_mpctx__i0__tracks1 = 1;
            mpctx[_i0].tracks[_j0] = (struct track *) malloc(_len_mpctx__i0__tracks1*sizeof(struct track));
            for(int _j1 = 0; _j1 < _len_mpctx__i0__tracks1; _j1++) {
              mpctx[_i0].tracks[_j0]->type = ((-2 * (next_i()%2)) + 1) * next_i();
        mpctx[_i0].tracks[_j0]->demuxer_id = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct track * benchRet = find_track_by_demuxer_id(mpctx,type,demuxer_id);
          printf("%d\n", (*benchRet).type);
          printf("%d\n", (*benchRet).demuxer_id);
          for(int _aux = 0; _aux < _len_mpctx0; _aux++) {
          free(*(mpctx[_aux].tracks));
        free(mpctx[_aux].tracks);
          }
          free(mpctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum stream_type type = 0;
          int demuxer_id = 10;
          int _len_mpctx0 = 100;
          struct TYPE_3__ * mpctx = (struct TYPE_3__ *) malloc(_len_mpctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_mpctx0; _i0++) {
            mpctx[_i0].num_tracks = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mpctx__i0__tracks0 = 1;
          mpctx[_i0].tracks = (struct track **) malloc(_len_mpctx__i0__tracks0*sizeof(struct track *));
          for(int _j0 = 0; _j0 < _len_mpctx__i0__tracks0; _j0++) {
            int _len_mpctx__i0__tracks1 = 1;
            mpctx[_i0].tracks[_j0] = (struct track *) malloc(_len_mpctx__i0__tracks1*sizeof(struct track));
            for(int _j1 = 0; _j1 < _len_mpctx__i0__tracks1; _j1++) {
              mpctx[_i0].tracks[_j0]->type = ((-2 * (next_i()%2)) + 1) * next_i();
        mpctx[_i0].tracks[_j0]->demuxer_id = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct track * benchRet = find_track_by_demuxer_id(mpctx,type,demuxer_id);
          printf("%d\n", (*benchRet).type);
          printf("%d\n", (*benchRet).demuxer_id);
          for(int _aux = 0; _aux < _len_mpctx0; _aux++) {
          free(*(mpctx[_aux].tracks));
        free(mpctx[_aux].tracks);
          }
          free(mpctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

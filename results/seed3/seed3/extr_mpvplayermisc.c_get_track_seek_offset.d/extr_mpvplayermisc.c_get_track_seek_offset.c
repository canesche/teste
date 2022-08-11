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
struct track {scalar_t__ type; scalar_t__ selected; } ;
struct MPOpts {double audio_delay; TYPE_1__* subs_rend; } ;
struct MPContext {struct MPOpts* opts; } ;
struct TYPE_2__ {double sub_delay; } ;

/* Variables and functions */
 scalar_t__ STREAM_AUDIO ; 
 scalar_t__ STREAM_SUB ; 

double get_track_seek_offset(struct MPContext *mpctx, struct track *track)
{
    struct MPOpts *opts = mpctx->opts;
    if (track->selected) {
        if (track->type == STREAM_AUDIO)
            return -opts->audio_delay;
        if (track->type == STREAM_SUB)
            return -opts->subs_rend->sub_delay;
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
          int _len_mpctx0 = 1;
          struct MPContext * mpctx = (struct MPContext *) malloc(_len_mpctx0*sizeof(struct MPContext));
          for(int _i0 = 0; _i0 < _len_mpctx0; _i0++) {
              int _len_mpctx__i0__opts0 = 1;
          mpctx[_i0].opts = (struct MPOpts *) malloc(_len_mpctx__i0__opts0*sizeof(struct MPOpts));
          for(int _j0 = 0; _j0 < _len_mpctx__i0__opts0; _j0++) {
            mpctx[_i0].opts->audio_delay = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_mpctx__i0__opts_subs_rend0 = 1;
          mpctx[_i0].opts->subs_rend = (struct TYPE_2__ *) malloc(_len_mpctx__i0__opts_subs_rend0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mpctx__i0__opts_subs_rend0; _j0++) {
            mpctx[_i0].opts->subs_rend->sub_delay = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          }
          int _len_track0 = 1;
          struct track * track = (struct track *) malloc(_len_track0*sizeof(struct track));
          for(int _i0 = 0; _i0 < _len_track0; _i0++) {
            track[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].selected = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          double benchRet = get_track_seek_offset(mpctx,track);
          printf("%lf\n", benchRet); 
          for(int _aux = 0; _aux < _len_mpctx0; _aux++) {
          free(mpctx[_aux].opts);
          }
          free(mpctx);
          free(track);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_mpctx0 = 65025;
          struct MPContext * mpctx = (struct MPContext *) malloc(_len_mpctx0*sizeof(struct MPContext));
          for(int _i0 = 0; _i0 < _len_mpctx0; _i0++) {
              int _len_mpctx__i0__opts0 = 1;
          mpctx[_i0].opts = (struct MPOpts *) malloc(_len_mpctx__i0__opts0*sizeof(struct MPOpts));
          for(int _j0 = 0; _j0 < _len_mpctx__i0__opts0; _j0++) {
            mpctx[_i0].opts->audio_delay = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_mpctx__i0__opts_subs_rend0 = 1;
          mpctx[_i0].opts->subs_rend = (struct TYPE_2__ *) malloc(_len_mpctx__i0__opts_subs_rend0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mpctx__i0__opts_subs_rend0; _j0++) {
            mpctx[_i0].opts->subs_rend->sub_delay = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          }
          int _len_track0 = 65025;
          struct track * track = (struct track *) malloc(_len_track0*sizeof(struct track));
          for(int _i0 = 0; _i0 < _len_track0; _i0++) {
            track[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].selected = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          double benchRet = get_track_seek_offset(mpctx,track);
          printf("%lf\n", benchRet); 
          for(int _aux = 0; _aux < _len_mpctx0; _aux++) {
          free(mpctx[_aux].opts);
          }
          free(mpctx);
          free(track);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_mpctx0 = 100;
          struct MPContext * mpctx = (struct MPContext *) malloc(_len_mpctx0*sizeof(struct MPContext));
          for(int _i0 = 0; _i0 < _len_mpctx0; _i0++) {
              int _len_mpctx__i0__opts0 = 1;
          mpctx[_i0].opts = (struct MPOpts *) malloc(_len_mpctx__i0__opts0*sizeof(struct MPOpts));
          for(int _j0 = 0; _j0 < _len_mpctx__i0__opts0; _j0++) {
            mpctx[_i0].opts->audio_delay = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_mpctx__i0__opts_subs_rend0 = 1;
          mpctx[_i0].opts->subs_rend = (struct TYPE_2__ *) malloc(_len_mpctx__i0__opts_subs_rend0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mpctx__i0__opts_subs_rend0; _j0++) {
            mpctx[_i0].opts->subs_rend->sub_delay = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          }
          int _len_track0 = 100;
          struct track * track = (struct track *) malloc(_len_track0*sizeof(struct track));
          for(int _i0 = 0; _i0 < _len_track0; _i0++) {
            track[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        track[_i0].selected = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          double benchRet = get_track_seek_offset(mpctx,track);
          printf("%lf\n", benchRet); 
          for(int _aux = 0; _aux < _len_mpctx0; _aux++) {
          free(mpctx[_aux].opts);
          }
          free(mpctx);
          free(track);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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

/* Type definitions */
struct track {int dummy; } ;
struct MPContext {struct track*** current_track; } ;

/* Variables and functions */
 int NUM_PTRACKS ; 
 size_t STREAM_SUB ; 

__attribute__((used)) static int get_order(struct MPContext *mpctx, struct track *track)
{
    for (int n = 0; n < NUM_PTRACKS; n++) {
        if (mpctx->current_track[n][STREAM_SUB] == track)
            return n;
    }
    return -1;
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
              int _len_mpctx__i0__current_track0 = 1;
          mpctx[_i0].current_track = (struct track ***) malloc(_len_mpctx__i0__current_track0*sizeof(struct track **));
          for(int _j0 = 0; _j0 < _len_mpctx__i0__current_track0; _j0++) {
            int _len_mpctx__i0__current_track1 = 1;
            mpctx[_i0].current_track[_j0] = (struct track **) malloc(_len_mpctx__i0__current_track1*sizeof(struct track *));
            for(int _j1 = 0; _j1 < _len_mpctx__i0__current_track1; _j1++) {
              int _len_mpctx__i0__current_track2 = 1;
              mpctx[_i0].current_track[_j0][_j1] = (struct track *) malloc(_len_mpctx__i0__current_track2*sizeof(struct track));
              for(int _j2 = 0; _j2 < _len_mpctx__i0__current_track2; _j2++) {
                mpctx[_i0].current_track[_j0][_j1]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          }
          int _len_track0 = 1;
          struct track * track = (struct track *) malloc(_len_track0*sizeof(struct track));
          for(int _i0 = 0; _i0 < _len_track0; _i0++) {
            track[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_order(mpctx,track);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mpctx0; _aux++) {
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
              int _len_mpctx__i0__current_track0 = 1;
          mpctx[_i0].current_track = (struct track ***) malloc(_len_mpctx__i0__current_track0*sizeof(struct track **));
          for(int _j0 = 0; _j0 < _len_mpctx__i0__current_track0; _j0++) {
            int _len_mpctx__i0__current_track1 = 1;
            mpctx[_i0].current_track[_j0] = (struct track **) malloc(_len_mpctx__i0__current_track1*sizeof(struct track *));
            for(int _j1 = 0; _j1 < _len_mpctx__i0__current_track1; _j1++) {
              int _len_mpctx__i0__current_track2 = 1;
              mpctx[_i0].current_track[_j0][_j1] = (struct track *) malloc(_len_mpctx__i0__current_track2*sizeof(struct track));
              for(int _j2 = 0; _j2 < _len_mpctx__i0__current_track2; _j2++) {
                mpctx[_i0].current_track[_j0][_j1]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          }
          int _len_track0 = 65025;
          struct track * track = (struct track *) malloc(_len_track0*sizeof(struct track));
          for(int _i0 = 0; _i0 < _len_track0; _i0++) {
            track[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_order(mpctx,track);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mpctx0; _aux++) {
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
              int _len_mpctx__i0__current_track0 = 1;
          mpctx[_i0].current_track = (struct track ***) malloc(_len_mpctx__i0__current_track0*sizeof(struct track **));
          for(int _j0 = 0; _j0 < _len_mpctx__i0__current_track0; _j0++) {
            int _len_mpctx__i0__current_track1 = 1;
            mpctx[_i0].current_track[_j0] = (struct track **) malloc(_len_mpctx__i0__current_track1*sizeof(struct track *));
            for(int _j1 = 0; _j1 < _len_mpctx__i0__current_track1; _j1++) {
              int _len_mpctx__i0__current_track2 = 1;
              mpctx[_i0].current_track[_j0][_j1] = (struct track *) malloc(_len_mpctx__i0__current_track2*sizeof(struct track));
              for(int _j2 = 0; _j2 < _len_mpctx__i0__current_track2; _j2++) {
                mpctx[_i0].current_track[_j0][_j1]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          }
          int _len_track0 = 100;
          struct track * track = (struct track *) malloc(_len_track0*sizeof(struct track));
          for(int _i0 = 0; _i0 < _len_track0; _i0++) {
            track[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_order(mpctx,track);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mpctx0; _aux++) {
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

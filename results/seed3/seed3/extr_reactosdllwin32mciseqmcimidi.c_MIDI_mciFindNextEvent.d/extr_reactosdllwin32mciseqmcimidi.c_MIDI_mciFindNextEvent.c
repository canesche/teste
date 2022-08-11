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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  size_t WORD ;
struct TYPE_5__ {size_t nTracks; TYPE_2__* tracks; } ;
typedef  TYPE_1__ WINE_MCIMIDI ;
struct TYPE_6__ {scalar_t__ wStatus; int dwEventPulse; } ;
typedef  TYPE_2__ MCI_MIDITRACK ;
typedef  int* LPDWORD ;

/* Variables and functions */

__attribute__((used)) static MCI_MIDITRACK*	MIDI_mciFindNextEvent(WINE_MCIMIDI* wmm, LPDWORD hiPulse)
{
    WORD		cnt, nt;
    MCI_MIDITRACK*	mmt;

    *hiPulse = 0xFFFFFFFFul;
    cnt = 0xFFFFu;
    for (nt = 0; nt < wmm->nTracks; nt++) {
	mmt = &wmm->tracks[nt];

	if (mmt->wStatus == 0)
	    continue;
	if (mmt->dwEventPulse < *hiPulse) {
	    *hiPulse = mmt->dwEventPulse;
	    cnt = nt;
	}
    }
    return (cnt == 0xFFFFu) ? 0 /* no more event on all tracks */
	: &wmm->tracks[cnt];
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
          int _len_wmm0 = 1;
          struct TYPE_5__ * wmm = (struct TYPE_5__ *) malloc(_len_wmm0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_wmm0; _i0++) {
            wmm[_i0].nTracks = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_wmm__i0__tracks0 = 1;
          wmm[_i0].tracks = (struct TYPE_6__ *) malloc(_len_wmm__i0__tracks0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_wmm__i0__tracks0; _j0++) {
            wmm[_i0].tracks->wStatus = ((-2 * (next_i()%2)) + 1) * next_i();
        wmm[_i0].tracks->dwEventPulse = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_hiPulse0 = 1;
          int * hiPulse = (int *) malloc(_len_hiPulse0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_hiPulse0; _i0++) {
            hiPulse[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_6__ * benchRet = MIDI_mciFindNextEvent(wmm,hiPulse);
          printf("%ld\n", (*benchRet).wStatus);
          printf("%d\n", (*benchRet).dwEventPulse);
          for(int _aux = 0; _aux < _len_wmm0; _aux++) {
          free(wmm[_aux].tracks);
          }
          free(wmm);
          free(hiPulse);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_wmm0 = 65025;
          struct TYPE_5__ * wmm = (struct TYPE_5__ *) malloc(_len_wmm0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_wmm0; _i0++) {
            wmm[_i0].nTracks = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_wmm__i0__tracks0 = 1;
          wmm[_i0].tracks = (struct TYPE_6__ *) malloc(_len_wmm__i0__tracks0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_wmm__i0__tracks0; _j0++) {
            wmm[_i0].tracks->wStatus = ((-2 * (next_i()%2)) + 1) * next_i();
        wmm[_i0].tracks->dwEventPulse = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_hiPulse0 = 65025;
          int * hiPulse = (int *) malloc(_len_hiPulse0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_hiPulse0; _i0++) {
            hiPulse[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_6__ * benchRet = MIDI_mciFindNextEvent(wmm,hiPulse);
          printf("%ld\n", (*benchRet).wStatus);
          printf("%d\n", (*benchRet).dwEventPulse);
          for(int _aux = 0; _aux < _len_wmm0; _aux++) {
          free(wmm[_aux].tracks);
          }
          free(wmm);
          free(hiPulse);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_wmm0 = 100;
          struct TYPE_5__ * wmm = (struct TYPE_5__ *) malloc(_len_wmm0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_wmm0; _i0++) {
            wmm[_i0].nTracks = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_wmm__i0__tracks0 = 1;
          wmm[_i0].tracks = (struct TYPE_6__ *) malloc(_len_wmm__i0__tracks0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_wmm__i0__tracks0; _j0++) {
            wmm[_i0].tracks->wStatus = ((-2 * (next_i()%2)) + 1) * next_i();
        wmm[_i0].tracks->dwEventPulse = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_hiPulse0 = 100;
          int * hiPulse = (int *) malloc(_len_hiPulse0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_hiPulse0; _i0++) {
            hiPulse[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_6__ * benchRet = MIDI_mciFindNextEvent(wmm,hiPulse);
          printf("%ld\n", (*benchRet).wStatus);
          printf("%d\n", (*benchRet).dwEventPulse);
          for(int _aux = 0; _aux < _len_wmm0; _aux++) {
          free(wmm[_aux].tracks);
          }
          free(wmm);
          free(hiPulse);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

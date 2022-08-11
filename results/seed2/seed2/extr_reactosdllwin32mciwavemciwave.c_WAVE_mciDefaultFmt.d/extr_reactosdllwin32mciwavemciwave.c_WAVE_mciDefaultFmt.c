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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int nChannels; int nSamplesPerSec; int nAvgBytesPerSec; int nBlockAlign; int wBitsPerSample; scalar_t__ cbSize; int /*<<< orphan*/  wFormatTag; } ;
struct TYPE_5__ {TYPE_1__* lpWaveFormat; TYPE_1__ wfxRef; } ;
typedef  TYPE_2__ WINE_MCIWAVE ;

/* Variables and functions */
 int /*<<< orphan*/  WAVE_FORMAT_PCM ; 

__attribute__((used)) static void WAVE_mciDefaultFmt(WINE_MCIWAVE* wmw)
{
    wmw->lpWaveFormat = &wmw->wfxRef;
    wmw->lpWaveFormat->wFormatTag = WAVE_FORMAT_PCM;
    wmw->lpWaveFormat->nChannels = 1;
    wmw->lpWaveFormat->nSamplesPerSec = 11025;
    wmw->lpWaveFormat->nAvgBytesPerSec = 11025;
    wmw->lpWaveFormat->nBlockAlign = 1;
    wmw->lpWaveFormat->wBitsPerSample = 8;
    wmw->lpWaveFormat->cbSize = 0;
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
          int _len_wmw0 = 1;
          struct TYPE_5__ * wmw = (struct TYPE_5__ *) malloc(_len_wmw0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_wmw0; _i0++) {
              int _len_wmw__i0__lpWaveFormat0 = 1;
          wmw[_i0].lpWaveFormat = (struct TYPE_4__ *) malloc(_len_wmw__i0__lpWaveFormat0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_wmw__i0__lpWaveFormat0; _j0++) {
            wmw[_i0].lpWaveFormat->nChannels = ((-2 * (next_i()%2)) + 1) * next_i();
        wmw[_i0].lpWaveFormat->nSamplesPerSec = ((-2 * (next_i()%2)) + 1) * next_i();
        wmw[_i0].lpWaveFormat->nAvgBytesPerSec = ((-2 * (next_i()%2)) + 1) * next_i();
        wmw[_i0].lpWaveFormat->nBlockAlign = ((-2 * (next_i()%2)) + 1) * next_i();
        wmw[_i0].lpWaveFormat->wBitsPerSample = ((-2 * (next_i()%2)) + 1) * next_i();
        wmw[_i0].lpWaveFormat->cbSize = ((-2 * (next_i()%2)) + 1) * next_i();
        wmw[_i0].lpWaveFormat->wFormatTag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        wmw[_i0].wfxRef.nChannels = ((-2 * (next_i()%2)) + 1) * next_i();
        wmw[_i0].wfxRef.nSamplesPerSec = ((-2 * (next_i()%2)) + 1) * next_i();
        wmw[_i0].wfxRef.nAvgBytesPerSec = ((-2 * (next_i()%2)) + 1) * next_i();
        wmw[_i0].wfxRef.nBlockAlign = ((-2 * (next_i()%2)) + 1) * next_i();
        wmw[_i0].wfxRef.wBitsPerSample = ((-2 * (next_i()%2)) + 1) * next_i();
        wmw[_i0].wfxRef.cbSize = ((-2 * (next_i()%2)) + 1) * next_i();
        wmw[_i0].wfxRef.wFormatTag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          WAVE_mciDefaultFmt(wmw);
          for(int _aux = 0; _aux < _len_wmw0; _aux++) {
          free(wmw[_aux].lpWaveFormat);
          }
          free(wmw);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_wmw0 = 65025;
          struct TYPE_5__ * wmw = (struct TYPE_5__ *) malloc(_len_wmw0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_wmw0; _i0++) {
              int _len_wmw__i0__lpWaveFormat0 = 1;
          wmw[_i0].lpWaveFormat = (struct TYPE_4__ *) malloc(_len_wmw__i0__lpWaveFormat0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_wmw__i0__lpWaveFormat0; _j0++) {
            wmw[_i0].lpWaveFormat->nChannels = ((-2 * (next_i()%2)) + 1) * next_i();
        wmw[_i0].lpWaveFormat->nSamplesPerSec = ((-2 * (next_i()%2)) + 1) * next_i();
        wmw[_i0].lpWaveFormat->nAvgBytesPerSec = ((-2 * (next_i()%2)) + 1) * next_i();
        wmw[_i0].lpWaveFormat->nBlockAlign = ((-2 * (next_i()%2)) + 1) * next_i();
        wmw[_i0].lpWaveFormat->wBitsPerSample = ((-2 * (next_i()%2)) + 1) * next_i();
        wmw[_i0].lpWaveFormat->cbSize = ((-2 * (next_i()%2)) + 1) * next_i();
        wmw[_i0].lpWaveFormat->wFormatTag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        wmw[_i0].wfxRef.nChannels = ((-2 * (next_i()%2)) + 1) * next_i();
        wmw[_i0].wfxRef.nSamplesPerSec = ((-2 * (next_i()%2)) + 1) * next_i();
        wmw[_i0].wfxRef.nAvgBytesPerSec = ((-2 * (next_i()%2)) + 1) * next_i();
        wmw[_i0].wfxRef.nBlockAlign = ((-2 * (next_i()%2)) + 1) * next_i();
        wmw[_i0].wfxRef.wBitsPerSample = ((-2 * (next_i()%2)) + 1) * next_i();
        wmw[_i0].wfxRef.cbSize = ((-2 * (next_i()%2)) + 1) * next_i();
        wmw[_i0].wfxRef.wFormatTag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          WAVE_mciDefaultFmt(wmw);
          for(int _aux = 0; _aux < _len_wmw0; _aux++) {
          free(wmw[_aux].lpWaveFormat);
          }
          free(wmw);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_wmw0 = 100;
          struct TYPE_5__ * wmw = (struct TYPE_5__ *) malloc(_len_wmw0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_wmw0; _i0++) {
              int _len_wmw__i0__lpWaveFormat0 = 1;
          wmw[_i0].lpWaveFormat = (struct TYPE_4__ *) malloc(_len_wmw__i0__lpWaveFormat0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_wmw__i0__lpWaveFormat0; _j0++) {
            wmw[_i0].lpWaveFormat->nChannels = ((-2 * (next_i()%2)) + 1) * next_i();
        wmw[_i0].lpWaveFormat->nSamplesPerSec = ((-2 * (next_i()%2)) + 1) * next_i();
        wmw[_i0].lpWaveFormat->nAvgBytesPerSec = ((-2 * (next_i()%2)) + 1) * next_i();
        wmw[_i0].lpWaveFormat->nBlockAlign = ((-2 * (next_i()%2)) + 1) * next_i();
        wmw[_i0].lpWaveFormat->wBitsPerSample = ((-2 * (next_i()%2)) + 1) * next_i();
        wmw[_i0].lpWaveFormat->cbSize = ((-2 * (next_i()%2)) + 1) * next_i();
        wmw[_i0].lpWaveFormat->wFormatTag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        wmw[_i0].wfxRef.nChannels = ((-2 * (next_i()%2)) + 1) * next_i();
        wmw[_i0].wfxRef.nSamplesPerSec = ((-2 * (next_i()%2)) + 1) * next_i();
        wmw[_i0].wfxRef.nAvgBytesPerSec = ((-2 * (next_i()%2)) + 1) * next_i();
        wmw[_i0].wfxRef.nBlockAlign = ((-2 * (next_i()%2)) + 1) * next_i();
        wmw[_i0].wfxRef.wBitsPerSample = ((-2 * (next_i()%2)) + 1) * next_i();
        wmw[_i0].wfxRef.cbSize = ((-2 * (next_i()%2)) + 1) * next_i();
        wmw[_i0].wfxRef.wFormatTag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          WAVE_mciDefaultFmt(wmw);
          for(int _aux = 0; _aux < _len_wmw0; _aux++) {
          free(wmw[_aux].lpWaveFormat);
          }
          free(wmw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

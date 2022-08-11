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
typedef  struct TYPE_13__   TYPE_6__ ;
typedef  struct TYPE_12__   TYPE_5__ ;
typedef  struct TYPE_11__   TYPE_4__ ;
typedef  struct TYPE_10__   TYPE_3__ ;
typedef  struct TYPE_9__   TYPE_2__ ;
typedef  struct TYPE_8__   TYPE_1__ ;

/* Type definitions */
struct TYPE_12__ {int nAvgBytesPerSec; int nBlockAlign; } ;
typedef  TYPE_5__ WAVEFORMATEX ;
struct TYPE_11__ {TYPE_3__* pInputPin; } ;
struct TYPE_13__ {TYPE_4__ renderer; } ;
struct TYPE_8__ {scalar_t__ pbFormat; } ;
struct TYPE_9__ {TYPE_1__ mtCurrent; } ;
struct TYPE_10__ {TYPE_2__ pin; } ;
typedef  int REFERENCE_TIME ;
typedef  int DWORD ;
typedef  TYPE_6__ DSoundRenderImpl ;

/* Variables and functions */

__attribute__((used)) static DWORD pos_from_time(DSoundRenderImpl *This, REFERENCE_TIME time) {
    WAVEFORMATEX *wfx = (WAVEFORMATEX*)This->renderer.pInputPin->pin.mtCurrent.pbFormat;
    REFERENCE_TIME ret = time;
    ret *= wfx->nAvgBytesPerSec;
    ret /= 10000000;
    ret -= ret % wfx->nBlockAlign;
    return ret;
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
          int time = 100;
          int _len_This0 = 1;
          struct TYPE_13__ * This = (struct TYPE_13__ *) malloc(_len_This0*sizeof(struct TYPE_13__));
          for(int _i0 = 0; _i0 < _len_This0; _i0++) {
              int _len_This__i0__renderer_pInputPin0 = 1;
          This[_i0].renderer.pInputPin = (struct TYPE_10__ *) malloc(_len_This__i0__renderer_pInputPin0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_This__i0__renderer_pInputPin0; _j0++) {
            This[_i0].renderer.pInputPin->pin.mtCurrent.pbFormat = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = pos_from_time(This,time);
          printf("%d\n", benchRet); 
          free(This);
        
        break;
    }
    // big-arr
    case 1:
    {
          int time = 255;
          int _len_This0 = 65025;
          struct TYPE_13__ * This = (struct TYPE_13__ *) malloc(_len_This0*sizeof(struct TYPE_13__));
          for(int _i0 = 0; _i0 < _len_This0; _i0++) {
              int _len_This__i0__renderer_pInputPin0 = 1;
          This[_i0].renderer.pInputPin = (struct TYPE_10__ *) malloc(_len_This__i0__renderer_pInputPin0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_This__i0__renderer_pInputPin0; _j0++) {
            This[_i0].renderer.pInputPin->pin.mtCurrent.pbFormat = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = pos_from_time(This,time);
          printf("%d\n", benchRet); 
          free(This);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int time = 10;
          int _len_This0 = 100;
          struct TYPE_13__ * This = (struct TYPE_13__ *) malloc(_len_This0*sizeof(struct TYPE_13__));
          for(int _i0 = 0; _i0 < _len_This0; _i0++) {
              int _len_This__i0__renderer_pInputPin0 = 1;
          This[_i0].renderer.pInputPin = (struct TYPE_10__ *) malloc(_len_This__i0__renderer_pInputPin0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_This__i0__renderer_pInputPin0; _j0++) {
            This[_i0].renderer.pInputPin->pin.mtCurrent.pbFormat = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = pos_from_time(This,time);
          printf("%d\n", benchRet); 
          free(This);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

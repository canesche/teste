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
typedef  scalar_t__ u32 ;
struct uvc_frame {int bFrameIntervalType; scalar_t__* dwFrameInterval; } ;

/* Variables and functions */

__attribute__((used)) static u32 uvc_try_frame_interval(struct uvc_frame *frame, u32 interval)
{
	unsigned int i;

	if (frame->bFrameIntervalType) {
		u32 best = -1, dist;

		for (i = 0; i < frame->bFrameIntervalType; ++i) {
			dist = interval > frame->dwFrameInterval[i]
			     ? interval - frame->dwFrameInterval[i]
			     : frame->dwFrameInterval[i] - interval;

			if (dist > best)
				break;

			best = dist;
		}

		interval = frame->dwFrameInterval[i-1];
	} else {
		const u32 min = frame->dwFrameInterval[0];
		const u32 max = frame->dwFrameInterval[1];
		const u32 step = frame->dwFrameInterval[2];

		interval = min + (interval - min + step/2) / step * step;
		if (interval > max)
			interval = max;
	}

	return interval;
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
          long interval = 100;
          int _len_frame0 = 1;
          struct uvc_frame * frame = (struct uvc_frame *) malloc(_len_frame0*sizeof(struct uvc_frame));
          for(int _i0 = 0; _i0 < _len_frame0; _i0++) {
            frame[_i0].bFrameIntervalType = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_frame__i0__dwFrameInterval0 = 1;
          frame[_i0].dwFrameInterval = (long *) malloc(_len_frame__i0__dwFrameInterval0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_frame__i0__dwFrameInterval0; _j0++) {
            frame[_i0].dwFrameInterval[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long benchRet = uvc_try_frame_interval(frame,interval);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_frame0; _aux++) {
          free(frame[_aux].dwFrameInterval);
          }
          free(frame);
        
        break;
    }
    // big-arr
    case 1:
    {
          long interval = 255;
          int _len_frame0 = 65025;
          struct uvc_frame * frame = (struct uvc_frame *) malloc(_len_frame0*sizeof(struct uvc_frame));
          for(int _i0 = 0; _i0 < _len_frame0; _i0++) {
            frame[_i0].bFrameIntervalType = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_frame__i0__dwFrameInterval0 = 1;
          frame[_i0].dwFrameInterval = (long *) malloc(_len_frame__i0__dwFrameInterval0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_frame__i0__dwFrameInterval0; _j0++) {
            frame[_i0].dwFrameInterval[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long benchRet = uvc_try_frame_interval(frame,interval);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_frame0; _aux++) {
          free(frame[_aux].dwFrameInterval);
          }
          free(frame);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long interval = 10;
          int _len_frame0 = 100;
          struct uvc_frame * frame = (struct uvc_frame *) malloc(_len_frame0*sizeof(struct uvc_frame));
          for(int _i0 = 0; _i0 < _len_frame0; _i0++) {
            frame[_i0].bFrameIntervalType = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_frame__i0__dwFrameInterval0 = 1;
          frame[_i0].dwFrameInterval = (long *) malloc(_len_frame__i0__dwFrameInterval0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_frame__i0__dwFrameInterval0; _j0++) {
            frame[_i0].dwFrameInterval[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long benchRet = uvc_try_frame_interval(frame,interval);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_frame0; _aux++) {
          free(frame[_aux].dwFrameInterval);
          }
          free(frame);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

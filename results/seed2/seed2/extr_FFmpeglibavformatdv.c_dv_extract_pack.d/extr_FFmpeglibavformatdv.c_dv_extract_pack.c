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
typedef  int uint8_t ;
typedef  enum dv_pack_type { ____Placeholder_dv_pack_type } dv_pack_type ;

/* Variables and functions */
#define  dv_audio_control 131 
#define  dv_audio_source 130 
#define  dv_timecode 129 
#define  dv_video_control 128 

__attribute__((used)) static const uint8_t *dv_extract_pack(const uint8_t *frame, enum dv_pack_type t)
{
    int offs;
    int c;

    for (c = 0; c < 10; c++) {
        switch (t) {
        case dv_audio_source:
            if (c&1)    offs = (80 * 6 + 80 * 16 * 0 + 3 + c*12000);
            else        offs = (80 * 6 + 80 * 16 * 3 + 3 + c*12000);
            break;
        case dv_audio_control:
            if (c&1)    offs = (80 * 6 + 80 * 16 * 1 + 3 + c*12000);
            else        offs = (80 * 6 + 80 * 16 * 4 + 3 + c*12000);
            break;
        case dv_video_control:
            if (c&1)    offs = (80 * 3 + 8      + c*12000);
            else        offs = (80 * 5 + 48 + 5 + c*12000);
            break;
        case dv_timecode:
            offs = (80*1 + 3 + 3);
            break;
        default:
            return NULL;
        }
        if (frame[offs] == t)
            break;
    }

    return frame[offs] == t ? &frame[offs] : NULL;
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
          enum dv_pack_type t = 0;
          int _len_frame0 = 1;
          const int * frame = (const int *) malloc(_len_frame0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_frame0; _i0++) {
            frame[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = dv_extract_pack(frame,t);
          printf("%d\n", (*benchRet)); 
          free(frame);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum dv_pack_type t = 0;
          int _len_frame0 = 65025;
          const int * frame = (const int *) malloc(_len_frame0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_frame0; _i0++) {
            frame[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = dv_extract_pack(frame,t);
          printf("%d\n", (*benchRet)); 
          free(frame);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum dv_pack_type t = 0;
          int _len_frame0 = 100;
          const int * frame = (const int *) malloc(_len_frame0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_frame0; _i0++) {
            frame[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = dv_extract_pack(frame,t);
          printf("%d\n", (*benchRet)); 
          free(frame);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

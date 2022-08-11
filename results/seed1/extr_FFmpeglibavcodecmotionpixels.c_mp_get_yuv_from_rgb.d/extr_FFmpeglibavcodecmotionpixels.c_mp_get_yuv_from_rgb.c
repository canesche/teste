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
typedef  int uint16_t ;
typedef  int /*<<< orphan*/  YuvPixel ;
struct TYPE_5__ {TYPE_1__* frame; } ;
struct TYPE_4__ {int* linesize; int /*<<< orphan*/ ** data; } ;
typedef  TYPE_2__ MotionPixelsContext ;

/* Variables and functions */
 int /*<<< orphan*/ * mp_rgb_yuv_table ; 

__attribute__((used)) static YuvPixel mp_get_yuv_from_rgb(MotionPixelsContext *mp, int x, int y)
{
    int color;

    color = *(uint16_t *)&mp->frame->data[0][y * mp->frame->linesize[0] + x * 2];
    return mp_rgb_yuv_table[color];
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
          int x = 100;
          int y = 100;
          int _len_mp0 = 1;
          struct TYPE_5__ * mp = (struct TYPE_5__ *) malloc(_len_mp0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_mp0; _i0++) {
              int _len_mp__i0__frame0 = 1;
          mp[_i0].frame = (struct TYPE_4__ *) malloc(_len_mp__i0__frame0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_mp__i0__frame0; _j0++) {
              int _len_mp__i0__frame_linesize0 = 1;
          mp[_i0].frame->linesize = (int *) malloc(_len_mp__i0__frame_linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mp__i0__frame_linesize0; _j0++) {
            mp[_i0].frame->linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mp__i0__frame_data0 = 1;
          mp[_i0].frame->data = (int **) malloc(_len_mp__i0__frame_data0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_mp__i0__frame_data0; _j0++) {
            int _len_mp__i0__frame_data1 = 1;
            mp[_i0].frame->data[_j0] = (int *) malloc(_len_mp__i0__frame_data1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_mp__i0__frame_data1; _j1++) {
              mp[_i0].frame->data[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          int benchRet = mp_get_yuv_from_rgb(mp,x,y);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mp0; _aux++) {
          free(mp[_aux].frame);
          }
          free(mp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int x = 255;
          int y = 255;
          int _len_mp0 = 65025;
          struct TYPE_5__ * mp = (struct TYPE_5__ *) malloc(_len_mp0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_mp0; _i0++) {
              int _len_mp__i0__frame0 = 1;
          mp[_i0].frame = (struct TYPE_4__ *) malloc(_len_mp__i0__frame0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_mp__i0__frame0; _j0++) {
              int _len_mp__i0__frame_linesize0 = 1;
          mp[_i0].frame->linesize = (int *) malloc(_len_mp__i0__frame_linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mp__i0__frame_linesize0; _j0++) {
            mp[_i0].frame->linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mp__i0__frame_data0 = 1;
          mp[_i0].frame->data = (int **) malloc(_len_mp__i0__frame_data0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_mp__i0__frame_data0; _j0++) {
            int _len_mp__i0__frame_data1 = 1;
            mp[_i0].frame->data[_j0] = (int *) malloc(_len_mp__i0__frame_data1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_mp__i0__frame_data1; _j1++) {
              mp[_i0].frame->data[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          int benchRet = mp_get_yuv_from_rgb(mp,x,y);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mp0; _aux++) {
          free(mp[_aux].frame);
          }
          free(mp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int x = 10;
          int y = 10;
          int _len_mp0 = 100;
          struct TYPE_5__ * mp = (struct TYPE_5__ *) malloc(_len_mp0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_mp0; _i0++) {
              int _len_mp__i0__frame0 = 1;
          mp[_i0].frame = (struct TYPE_4__ *) malloc(_len_mp__i0__frame0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_mp__i0__frame0; _j0++) {
              int _len_mp__i0__frame_linesize0 = 1;
          mp[_i0].frame->linesize = (int *) malloc(_len_mp__i0__frame_linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mp__i0__frame_linesize0; _j0++) {
            mp[_i0].frame->linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mp__i0__frame_data0 = 1;
          mp[_i0].frame->data = (int **) malloc(_len_mp__i0__frame_data0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_mp__i0__frame_data0; _j0++) {
            int _len_mp__i0__frame_data1 = 1;
            mp[_i0].frame->data[_j0] = (int *) malloc(_len_mp__i0__frame_data1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_mp__i0__frame_data1; _j1++) {
              mp[_i0].frame->data[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          int benchRet = mp_get_yuv_from_rgb(mp,x,y);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mp0; _aux++) {
          free(mp[_aux].frame);
          }
          free(mp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

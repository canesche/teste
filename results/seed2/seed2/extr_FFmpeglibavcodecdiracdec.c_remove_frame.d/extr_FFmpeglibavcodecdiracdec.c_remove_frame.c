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
struct TYPE_6__ {TYPE_1__* avframe; } ;
struct TYPE_5__ {int display_picture_number; } ;
typedef  TYPE_2__ DiracFrame ;

/* Variables and functions */

__attribute__((used)) static DiracFrame *remove_frame(DiracFrame *framelist[], int picnum)
{
    DiracFrame *remove_pic = NULL;
    int i, remove_idx = -1;

    for (i = 0; framelist[i]; i++)
        if (framelist[i]->avframe->display_picture_number == picnum) {
            remove_pic = framelist[i];
            remove_idx = i;
        }

    if (remove_pic)
        for (i = remove_idx; framelist[i]; i++)
            framelist[i] = framelist[i+1];

    return remove_pic;
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
          int picnum = 100;
          int _len_framelist0 = 1;
          struct TYPE_6__ ** framelist = (struct TYPE_6__ **) malloc(_len_framelist0*sizeof(struct TYPE_6__ *));
          for(int _i0 = 0; _i0 < _len_framelist0; _i0++) {
            int _len_framelist1 = 1;
            framelist[_i0] = (struct TYPE_6__ *) malloc(_len_framelist1*sizeof(struct TYPE_6__));
            for(int _i1 = 0; _i1 < _len_framelist1; _i1++) {
                int _len_framelist__i0___i1__avframe0 = 1;
          framelist[_i0][_i1].avframe = (struct TYPE_5__ *) malloc(_len_framelist__i0___i1__avframe0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_framelist__i0___i1__avframe0; _j0++) {
            framelist[_i0][_i1].avframe->display_picture_number = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          struct TYPE_6__ * benchRet = remove_frame(framelist,picnum);
          for(int i1 = 0; i1 < _len_framelist0; i1++) {
            int _len_framelist1 = 1;
              for(int _aux = 0; _aux < _len_framelist1; _aux++) {
          free(framelist[_aux].avframe);
          }
          free(framelist[i1]);
          }
          free(framelist);
        
        break;
    }
    // big-arr
    case 1:
    {
          int picnum = 255;
          int _len_framelist0 = 65025;
          struct TYPE_6__ ** framelist = (struct TYPE_6__ **) malloc(_len_framelist0*sizeof(struct TYPE_6__ *));
          for(int _i0 = 0; _i0 < _len_framelist0; _i0++) {
            int _len_framelist1 = 1;
            framelist[_i0] = (struct TYPE_6__ *) malloc(_len_framelist1*sizeof(struct TYPE_6__));
            for(int _i1 = 0; _i1 < _len_framelist1; _i1++) {
                int _len_framelist__i0___i1__avframe0 = 1;
          framelist[_i0][_i1].avframe = (struct TYPE_5__ *) malloc(_len_framelist__i0___i1__avframe0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_framelist__i0___i1__avframe0; _j0++) {
            framelist[_i0][_i1].avframe->display_picture_number = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          struct TYPE_6__ * benchRet = remove_frame(framelist,picnum);
          for(int i1 = 0; i1 < _len_framelist0; i1++) {
            int _len_framelist1 = 1;
              for(int _aux = 0; _aux < _len_framelist1; _aux++) {
          free(framelist[_aux].avframe);
          }
          free(framelist[i1]);
          }
          free(framelist);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int picnum = 10;
          int _len_framelist0 = 100;
          struct TYPE_6__ ** framelist = (struct TYPE_6__ **) malloc(_len_framelist0*sizeof(struct TYPE_6__ *));
          for(int _i0 = 0; _i0 < _len_framelist0; _i0++) {
            int _len_framelist1 = 1;
            framelist[_i0] = (struct TYPE_6__ *) malloc(_len_framelist1*sizeof(struct TYPE_6__));
            for(int _i1 = 0; _i1 < _len_framelist1; _i1++) {
                int _len_framelist__i0___i1__avframe0 = 1;
          framelist[_i0][_i1].avframe = (struct TYPE_5__ *) malloc(_len_framelist__i0___i1__avframe0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_framelist__i0___i1__avframe0; _j0++) {
            framelist[_i0][_i1].avframe->display_picture_number = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          struct TYPE_6__ * benchRet = remove_frame(framelist,picnum);
          for(int i1 = 0; i1 < _len_framelist0; i1++) {
            int _len_framelist1 = 1;
              for(int _aux = 0; _aux < _len_framelist1; _aux++) {
          free(framelist[_aux].avframe);
          }
          free(framelist[i1]);
          }
          free(framelist);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

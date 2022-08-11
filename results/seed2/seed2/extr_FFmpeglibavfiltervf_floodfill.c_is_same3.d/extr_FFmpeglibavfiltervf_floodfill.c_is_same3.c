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
struct TYPE_3__ {unsigned int** data; int* linesize; } ;
typedef  TYPE_1__ AVFrame ;

/* Variables and functions */

__attribute__((used)) static int is_same3(AVFrame *frame, int x, int y,
                    unsigned s0, unsigned s1, unsigned s2, unsigned s3)
{
    unsigned c0 = frame->data[0][y * frame->linesize[0] + x];
    unsigned c1 = frame->data[1][y * frame->linesize[1] + x];
    unsigned c2 = frame->data[2][y * frame->linesize[2] + x];

    if (s0 == c0 && s1 == c1 && s2 == c2)
        return 1;
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
          int x = 100;
          int y = 100;
          unsigned int s0 = 100;
          unsigned int s1 = 100;
          unsigned int s2 = 100;
          unsigned int s3 = 100;
          int _len_frame0 = 1;
          struct TYPE_3__ * frame = (struct TYPE_3__ *) malloc(_len_frame0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_frame0; _i0++) {
              int _len_frame__i0__data0 = 1;
          frame[_i0].data = (unsigned int **) malloc(_len_frame__i0__data0*sizeof(unsigned int *));
          for(int _j0 = 0; _j0 < _len_frame__i0__data0; _j0++) {
            int _len_frame__i0__data1 = 1;
            frame[_i0].data[_j0] = (unsigned int *) malloc(_len_frame__i0__data1*sizeof(unsigned int));
            for(int _j1 = 0; _j1 < _len_frame__i0__data1; _j1++) {
              frame[_i0].data[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_frame__i0__linesize0 = 1;
          frame[_i0].linesize = (int *) malloc(_len_frame__i0__linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_frame__i0__linesize0; _j0++) {
            frame[_i0].linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = is_same3(frame,x,y,s0,s1,s2,s3);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_frame0; _aux++) {
          free(*(frame[_aux].data));
        free(frame[_aux].data);
          }
          for(int _aux = 0; _aux < _len_frame0; _aux++) {
          free(frame[_aux].linesize);
          }
          free(frame);
        
        break;
    }
    // big-arr
    case 1:
    {
          int x = 255;
          int y = 255;
          unsigned int s0 = 255;
          unsigned int s1 = 255;
          unsigned int s2 = 255;
          unsigned int s3 = 255;
          int _len_frame0 = 65025;
          struct TYPE_3__ * frame = (struct TYPE_3__ *) malloc(_len_frame0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_frame0; _i0++) {
              int _len_frame__i0__data0 = 1;
          frame[_i0].data = (unsigned int **) malloc(_len_frame__i0__data0*sizeof(unsigned int *));
          for(int _j0 = 0; _j0 < _len_frame__i0__data0; _j0++) {
            int _len_frame__i0__data1 = 1;
            frame[_i0].data[_j0] = (unsigned int *) malloc(_len_frame__i0__data1*sizeof(unsigned int));
            for(int _j1 = 0; _j1 < _len_frame__i0__data1; _j1++) {
              frame[_i0].data[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_frame__i0__linesize0 = 1;
          frame[_i0].linesize = (int *) malloc(_len_frame__i0__linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_frame__i0__linesize0; _j0++) {
            frame[_i0].linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = is_same3(frame,x,y,s0,s1,s2,s3);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_frame0; _aux++) {
          free(*(frame[_aux].data));
        free(frame[_aux].data);
          }
          for(int _aux = 0; _aux < _len_frame0; _aux++) {
          free(frame[_aux].linesize);
          }
          free(frame);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int x = 10;
          int y = 10;
          unsigned int s0 = 10;
          unsigned int s1 = 10;
          unsigned int s2 = 10;
          unsigned int s3 = 10;
          int _len_frame0 = 100;
          struct TYPE_3__ * frame = (struct TYPE_3__ *) malloc(_len_frame0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_frame0; _i0++) {
              int _len_frame__i0__data0 = 1;
          frame[_i0].data = (unsigned int **) malloc(_len_frame__i0__data0*sizeof(unsigned int *));
          for(int _j0 = 0; _j0 < _len_frame__i0__data0; _j0++) {
            int _len_frame__i0__data1 = 1;
            frame[_i0].data[_j0] = (unsigned int *) malloc(_len_frame__i0__data1*sizeof(unsigned int));
            for(int _j1 = 0; _j1 < _len_frame__i0__data1; _j1++) {
              frame[_i0].data[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_frame__i0__linesize0 = 1;
          frame[_i0].linesize = (int *) malloc(_len_frame__i0__linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_frame__i0__linesize0; _j0++) {
            frame[_i0].linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = is_same3(frame,x,y,s0,s1,s2,s3);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_frame0; _aux++) {
          free(*(frame[_aux].data));
        free(frame[_aux].data);
          }
          for(int _aux = 0; _aux < _len_frame0; _aux++) {
          free(frame[_aux].linesize);
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

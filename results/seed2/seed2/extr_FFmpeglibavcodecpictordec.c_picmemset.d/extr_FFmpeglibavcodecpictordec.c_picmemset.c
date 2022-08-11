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
typedef  unsigned int uint8_t ;
struct TYPE_6__ {unsigned int** data; int* linesize; } ;
struct TYPE_5__ {int width; int height; int nb_planes; } ;
typedef  TYPE_1__ PicContext ;
typedef  TYPE_2__ AVFrame ;

/* Variables and functions */

__attribute__((used)) static void picmemset(PicContext *s, AVFrame *frame, unsigned value, int run,
                      int *x, int *y, int *plane, int bits_per_plane)
{
    uint8_t *d;
    int shift = *plane * bits_per_plane;
    unsigned mask  = ((1U << bits_per_plane) - 1) << shift;
    int xl = *x;
    int yl = *y;
    int planel = *plane;
    value   <<= shift;

    d = frame->data[0] + yl * frame->linesize[0];
    while (run > 0) {
        int j;
        for (j = 8-bits_per_plane; j >= 0; j -= bits_per_plane) {
            d[xl] |= (value >> j) & mask;
            xl += 1;
            if (xl == s->width) {
                yl -= 1;
                xl = 0;
                if (yl < 0) {
                   yl = s->height - 1;
                   planel += 1;
                   if (planel >= s->nb_planes)
                       goto end;
                   value <<= bits_per_plane;
                   mask  <<= bits_per_plane;
                }
                d = frame->data[0] + yl * frame->linesize[0];
            }
        }
        run--;
    }
end:
    *x = xl;
    *y = yl;
    *plane = planel;
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
          unsigned int value = 100;
          int run = 100;
          int bits_per_plane = 100;
          int _len_s0 = 1;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].nb_planes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_frame0 = 1;
          struct TYPE_6__ * frame = (struct TYPE_6__ *) malloc(_len_frame0*sizeof(struct TYPE_6__));
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
          int _len_x0 = 1;
          int * x = (int *) malloc(_len_x0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_y0 = 1;
          int * y = (int *) malloc(_len_y0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_plane0 = 1;
          int * plane = (int *) malloc(_len_plane0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_plane0; _i0++) {
            plane[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          picmemset(s,frame,value,run,x,y,plane,bits_per_plane);
          free(s);
          for(int _aux = 0; _aux < _len_frame0; _aux++) {
          free(*(frame[_aux].data));
        free(frame[_aux].data);
          }
          for(int _aux = 0; _aux < _len_frame0; _aux++) {
          free(frame[_aux].linesize);
          }
          free(frame);
          free(x);
          free(y);
          free(plane);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int value = 255;
          int run = 255;
          int bits_per_plane = 255;
          int _len_s0 = 65025;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].nb_planes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_frame0 = 65025;
          struct TYPE_6__ * frame = (struct TYPE_6__ *) malloc(_len_frame0*sizeof(struct TYPE_6__));
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
          int _len_x0 = 65025;
          int * x = (int *) malloc(_len_x0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_y0 = 65025;
          int * y = (int *) malloc(_len_y0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_plane0 = 65025;
          int * plane = (int *) malloc(_len_plane0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_plane0; _i0++) {
            plane[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          picmemset(s,frame,value,run,x,y,plane,bits_per_plane);
          free(s);
          for(int _aux = 0; _aux < _len_frame0; _aux++) {
          free(*(frame[_aux].data));
        free(frame[_aux].data);
          }
          for(int _aux = 0; _aux < _len_frame0; _aux++) {
          free(frame[_aux].linesize);
          }
          free(frame);
          free(x);
          free(y);
          free(plane);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int value = 10;
          int run = 10;
          int bits_per_plane = 10;
          int _len_s0 = 100;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].nb_planes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_frame0 = 100;
          struct TYPE_6__ * frame = (struct TYPE_6__ *) malloc(_len_frame0*sizeof(struct TYPE_6__));
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
          int _len_x0 = 100;
          int * x = (int *) malloc(_len_x0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_y0 = 100;
          int * y = (int *) malloc(_len_y0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_plane0 = 100;
          int * plane = (int *) malloc(_len_plane0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_plane0; _i0++) {
            plane[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          picmemset(s,frame,value,run,x,y,plane,bits_per_plane);
          free(s);
          for(int _aux = 0; _aux < _len_frame0; _aux++) {
          free(*(frame[_aux].data));
        free(frame[_aux].data);
          }
          for(int _aux = 0; _aux < _len_frame0; _aux++) {
          free(frame[_aux].linesize);
          }
          free(frame);
          free(x);
          free(y);
          free(plane);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

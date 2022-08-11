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
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {unsigned char* y; unsigned char u; unsigned char v; } ;
typedef  TYPE_2__ roq_cell ;
struct TYPE_8__ {TYPE_1__* current_frame; } ;
struct TYPE_6__ {int* linesize; unsigned char** data; } ;
typedef  TYPE_3__ RoqContext ;

/* Variables and functions */

void ff_apply_vector_4x4(RoqContext *ri, int x, int y, roq_cell *cell)
{
    unsigned char *bptr;
    int boffs,stride;

    stride = ri->current_frame->linesize[0];
    boffs = y*stride + x;

    bptr = ri->current_frame->data[0] + boffs;
    bptr[         0] = bptr[         1] = bptr[stride    ] = bptr[stride  +1] = cell->y[0];
    bptr[         2] = bptr[         3] = bptr[stride  +2] = bptr[stride  +3] = cell->y[1];
    bptr[stride*2  ] = bptr[stride*2+1] = bptr[stride*3  ] = bptr[stride*3+1] = cell->y[2];
    bptr[stride*2+2] = bptr[stride*2+3] = bptr[stride*3+2] = bptr[stride*3+3] = cell->y[3];

    stride = ri->current_frame->linesize[1];
    boffs = y*stride + x;

    bptr = ri->current_frame->data[1] + boffs;
    bptr[         0] = bptr[         1] = bptr[stride    ] = bptr[stride  +1] =
    bptr[         2] = bptr[         3] = bptr[stride  +2] = bptr[stride  +3] =
    bptr[stride*2  ] = bptr[stride*2+1] = bptr[stride*3  ] = bptr[stride*3+1] =
    bptr[stride*2+2] = bptr[stride*2+3] = bptr[stride*3+2] = bptr[stride*3+3] = cell->u;

    bptr = ri->current_frame->data[2] + boffs;
    bptr[         0] = bptr[         1] = bptr[stride    ] = bptr[stride  +1] =
    bptr[         2] = bptr[         3] = bptr[stride  +2] = bptr[stride  +3] =
    bptr[stride*2  ] = bptr[stride*2+1] = bptr[stride*3  ] = bptr[stride*3+1] =
    bptr[stride*2+2] = bptr[stride*2+3] = bptr[stride*3+2] = bptr[stride*3+3] = cell->v;
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
          int _len_ri0 = 1;
          struct TYPE_8__ * ri = (struct TYPE_8__ *) malloc(_len_ri0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_ri0; _i0++) {
              int _len_ri__i0__current_frame0 = 1;
          ri[_i0].current_frame = (struct TYPE_6__ *) malloc(_len_ri__i0__current_frame0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_ri__i0__current_frame0; _j0++) {
              int _len_ri__i0__current_frame_linesize0 = 1;
          ri[_i0].current_frame->linesize = (int *) malloc(_len_ri__i0__current_frame_linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ri__i0__current_frame_linesize0; _j0++) {
            ri[_i0].current_frame->linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ri__i0__current_frame_data0 = 1;
          ri[_i0].current_frame->data = (unsigned char **) malloc(_len_ri__i0__current_frame_data0*sizeof(unsigned char *));
          for(int _j0 = 0; _j0 < _len_ri__i0__current_frame_data0; _j0++) {
            int _len_ri__i0__current_frame_data1 = 1;
            ri[_i0].current_frame->data[_j0] = (unsigned char *) malloc(_len_ri__i0__current_frame_data1*sizeof(unsigned char));
            for(int _j1 = 0; _j1 < _len_ri__i0__current_frame_data1; _j1++) {
              ri[_i0].current_frame->data[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          int _len_cell0 = 1;
          struct TYPE_7__ * cell = (struct TYPE_7__ *) malloc(_len_cell0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_cell0; _i0++) {
              int _len_cell__i0__y0 = 1;
          cell[_i0].y = (unsigned char *) malloc(_len_cell__i0__y0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_cell__i0__y0; _j0++) {
            cell[_i0].y[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cell[_i0].u = ((-2 * (next_i()%2)) + 1) * next_i();
        cell[_i0].v = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_apply_vector_4x4(ri,x,y,cell);
          for(int _aux = 0; _aux < _len_ri0; _aux++) {
          free(ri[_aux].current_frame);
          }
          free(ri);
          for(int _aux = 0; _aux < _len_cell0; _aux++) {
          free(cell[_aux].y);
          }
          free(cell);
        
        break;
    }
    // big-arr
    case 1:
    {
          int x = 255;
          int y = 255;
          int _len_ri0 = 65025;
          struct TYPE_8__ * ri = (struct TYPE_8__ *) malloc(_len_ri0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_ri0; _i0++) {
              int _len_ri__i0__current_frame0 = 1;
          ri[_i0].current_frame = (struct TYPE_6__ *) malloc(_len_ri__i0__current_frame0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_ri__i0__current_frame0; _j0++) {
              int _len_ri__i0__current_frame_linesize0 = 1;
          ri[_i0].current_frame->linesize = (int *) malloc(_len_ri__i0__current_frame_linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ri__i0__current_frame_linesize0; _j0++) {
            ri[_i0].current_frame->linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ri__i0__current_frame_data0 = 1;
          ri[_i0].current_frame->data = (unsigned char **) malloc(_len_ri__i0__current_frame_data0*sizeof(unsigned char *));
          for(int _j0 = 0; _j0 < _len_ri__i0__current_frame_data0; _j0++) {
            int _len_ri__i0__current_frame_data1 = 1;
            ri[_i0].current_frame->data[_j0] = (unsigned char *) malloc(_len_ri__i0__current_frame_data1*sizeof(unsigned char));
            for(int _j1 = 0; _j1 < _len_ri__i0__current_frame_data1; _j1++) {
              ri[_i0].current_frame->data[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          int _len_cell0 = 65025;
          struct TYPE_7__ * cell = (struct TYPE_7__ *) malloc(_len_cell0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_cell0; _i0++) {
              int _len_cell__i0__y0 = 1;
          cell[_i0].y = (unsigned char *) malloc(_len_cell__i0__y0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_cell__i0__y0; _j0++) {
            cell[_i0].y[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cell[_i0].u = ((-2 * (next_i()%2)) + 1) * next_i();
        cell[_i0].v = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_apply_vector_4x4(ri,x,y,cell);
          for(int _aux = 0; _aux < _len_ri0; _aux++) {
          free(ri[_aux].current_frame);
          }
          free(ri);
          for(int _aux = 0; _aux < _len_cell0; _aux++) {
          free(cell[_aux].y);
          }
          free(cell);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int x = 10;
          int y = 10;
          int _len_ri0 = 100;
          struct TYPE_8__ * ri = (struct TYPE_8__ *) malloc(_len_ri0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_ri0; _i0++) {
              int _len_ri__i0__current_frame0 = 1;
          ri[_i0].current_frame = (struct TYPE_6__ *) malloc(_len_ri__i0__current_frame0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_ri__i0__current_frame0; _j0++) {
              int _len_ri__i0__current_frame_linesize0 = 1;
          ri[_i0].current_frame->linesize = (int *) malloc(_len_ri__i0__current_frame_linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ri__i0__current_frame_linesize0; _j0++) {
            ri[_i0].current_frame->linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ri__i0__current_frame_data0 = 1;
          ri[_i0].current_frame->data = (unsigned char **) malloc(_len_ri__i0__current_frame_data0*sizeof(unsigned char *));
          for(int _j0 = 0; _j0 < _len_ri__i0__current_frame_data0; _j0++) {
            int _len_ri__i0__current_frame_data1 = 1;
            ri[_i0].current_frame->data[_j0] = (unsigned char *) malloc(_len_ri__i0__current_frame_data1*sizeof(unsigned char));
            for(int _j1 = 0; _j1 < _len_ri__i0__current_frame_data1; _j1++) {
              ri[_i0].current_frame->data[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          int _len_cell0 = 100;
          struct TYPE_7__ * cell = (struct TYPE_7__ *) malloc(_len_cell0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_cell0; _i0++) {
              int _len_cell__i0__y0 = 1;
          cell[_i0].y = (unsigned char *) malloc(_len_cell__i0__y0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_cell__i0__y0; _j0++) {
            cell[_i0].y[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cell[_i0].u = ((-2 * (next_i()%2)) + 1) * next_i();
        cell[_i0].v = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_apply_vector_4x4(ri,x,y,cell);
          for(int _aux = 0; _aux < _len_ri0; _aux++) {
          free(ri[_aux].current_frame);
          }
          free(ri);
          for(int _aux = 0; _aux < _len_cell0; _aux++) {
          free(cell[_aux].y);
          }
          free(cell);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  int /*<<< orphan*/  uint8_t ;
struct TYPE_3__ {scalar_t__ pix_fmt; } ;
typedef  TYPE_1__ CinepakEncContext ;

/* Variables and functions */
 scalar_t__ AV_PIX_FMT_RGB24 ; 

__attribute__((used)) static void get_sub_picture(CinepakEncContext *s, int x, int y,
                            uint8_t * in_data[4], int  in_linesize[4],
                            uint8_t *out_data[4], int out_linesize[4])
{
    out_data[0]     = in_data[0] + x + y * in_linesize[0];
    out_linesize[0] = in_linesize[0];

    if (s->pix_fmt == AV_PIX_FMT_RGB24) {
        out_data[1]     = in_data[1] + (x >> 1) + (y >> 1) * in_linesize[1];
        out_linesize[1] = in_linesize[1];

        out_data[2]     = in_data[2] + (x >> 1) + (y >> 1) * in_linesize[2];
        out_linesize[2] = in_linesize[2];
    }
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
          int _len_s0 = 1;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].pix_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_in_data0 = 4;
          int ** in_data = (int **) malloc(_len_in_data0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_in_data0; _i0++) {
            int _len_in_data1 = 1;
            in_data[_i0] = (int *) malloc(_len_in_data1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_in_data1; _i1++) {
              in_data[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_in_linesize0 = 4;
          int * in_linesize = (int *) malloc(_len_in_linesize0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_in_linesize0; _i0++) {
            in_linesize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out_data0 = 4;
          int ** out_data = (int **) malloc(_len_out_data0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_out_data0; _i0++) {
            int _len_out_data1 = 1;
            out_data[_i0] = (int *) malloc(_len_out_data1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_out_data1; _i1++) {
              out_data[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_out_linesize0 = 4;
          int * out_linesize = (int *) malloc(_len_out_linesize0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out_linesize0; _i0++) {
            out_linesize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_sub_picture(s,x,y,in_data,in_linesize,out_data,out_linesize);
          free(s);
          for(int i1 = 0; i1 < _len_in_data0; i1++) {
            int _len_in_data1 = 1;
              free(in_data[i1]);
          }
          free(in_data);
          free(in_linesize);
          for(int i1 = 0; i1 < _len_out_data0; i1++) {
            int _len_out_data1 = 1;
              free(out_data[i1]);
          }
          free(out_data);
          free(out_linesize);
        
        break;
    }
    // big-arr
    case 1:
    {
          int x = 255;
          int y = 255;
          int _len_s0 = 65025;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].pix_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_in_data0 = 65025;
          int ** in_data = (int **) malloc(_len_in_data0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_in_data0; _i0++) {
            int _len_in_data1 = 1;
            in_data[_i0] = (int *) malloc(_len_in_data1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_in_data1; _i1++) {
              in_data[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_in_linesize0 = 65025;
          int * in_linesize = (int *) malloc(_len_in_linesize0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_in_linesize0; _i0++) {
            in_linesize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out_data0 = 65025;
          int ** out_data = (int **) malloc(_len_out_data0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_out_data0; _i0++) {
            int _len_out_data1 = 1;
            out_data[_i0] = (int *) malloc(_len_out_data1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_out_data1; _i1++) {
              out_data[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_out_linesize0 = 65025;
          int * out_linesize = (int *) malloc(_len_out_linesize0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out_linesize0; _i0++) {
            out_linesize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_sub_picture(s,x,y,in_data,in_linesize,out_data,out_linesize);
          free(s);
          for(int i1 = 0; i1 < _len_in_data0; i1++) {
            int _len_in_data1 = 1;
              free(in_data[i1]);
          }
          free(in_data);
          free(in_linesize);
          for(int i1 = 0; i1 < _len_out_data0; i1++) {
            int _len_out_data1 = 1;
              free(out_data[i1]);
          }
          free(out_data);
          free(out_linesize);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int x = 10;
          int y = 10;
          int _len_s0 = 100;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].pix_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_in_data0 = 100;
          int ** in_data = (int **) malloc(_len_in_data0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_in_data0; _i0++) {
            int _len_in_data1 = 1;
            in_data[_i0] = (int *) malloc(_len_in_data1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_in_data1; _i1++) {
              in_data[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_in_linesize0 = 100;
          int * in_linesize = (int *) malloc(_len_in_linesize0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_in_linesize0; _i0++) {
            in_linesize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out_data0 = 100;
          int ** out_data = (int **) malloc(_len_out_data0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_out_data0; _i0++) {
            int _len_out_data1 = 1;
            out_data[_i0] = (int *) malloc(_len_out_data1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_out_data1; _i1++) {
              out_data[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_out_linesize0 = 100;
          int * out_linesize = (int *) malloc(_len_out_linesize0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out_linesize0; _i0++) {
            out_linesize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_sub_picture(s,x,y,in_data,in_linesize,out_data,out_linesize);
          free(s);
          for(int i1 = 0; i1 < _len_in_data0; i1++) {
            int _len_in_data1 = 1;
              free(in_data[i1]);
          }
          free(in_data);
          free(in_linesize);
          for(int i1 = 0; i1 < _len_out_data0; i1++) {
            int _len_out_data1 = 1;
              free(out_data[i1]);
          }
          free(out_data);
          free(out_linesize);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

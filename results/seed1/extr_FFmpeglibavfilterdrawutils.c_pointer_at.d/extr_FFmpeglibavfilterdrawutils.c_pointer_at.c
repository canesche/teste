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
struct TYPE_3__ {int* vsub; int* hsub; int* pixelstep; } ;
typedef  TYPE_1__ FFDrawContext ;

/* Variables and functions */

__attribute__((used)) static uint8_t *pointer_at(FFDrawContext *draw, uint8_t *data[], int linesize[],
                           int plane, int x, int y)
{
    return data[plane] +
           (y >> draw->vsub[plane]) * linesize[plane] +
           (x >> draw->hsub[plane]) * draw->pixelstep[plane];
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
          int plane = 100;
          int x = 100;
          int y = 100;
          int _len_draw0 = 1;
          struct TYPE_3__ * draw = (struct TYPE_3__ *) malloc(_len_draw0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_draw0; _i0++) {
              int _len_draw__i0__vsub0 = 1;
          draw[_i0].vsub = (int *) malloc(_len_draw__i0__vsub0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_draw__i0__vsub0; _j0++) {
            draw[_i0].vsub[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_draw__i0__hsub0 = 1;
          draw[_i0].hsub = (int *) malloc(_len_draw__i0__hsub0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_draw__i0__hsub0; _j0++) {
            draw[_i0].hsub[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_draw__i0__pixelstep0 = 1;
          draw[_i0].pixelstep = (int *) malloc(_len_draw__i0__pixelstep0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_draw__i0__pixelstep0; _j0++) {
            draw[_i0].pixelstep[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_data0 = 1;
          int ** data = (int **) malloc(_len_data0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            int _len_data1 = 1;
            data[_i0] = (int *) malloc(_len_data1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_data1; _i1++) {
              data[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_linesize0 = 1;
          int * linesize = (int *) malloc(_len_linesize0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_linesize0; _i0++) {
            linesize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = pointer_at(draw,data,linesize,plane,x,y);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_draw0; _aux++) {
          free(draw[_aux].vsub);
          }
          for(int _aux = 0; _aux < _len_draw0; _aux++) {
          free(draw[_aux].hsub);
          }
          for(int _aux = 0; _aux < _len_draw0; _aux++) {
          free(draw[_aux].pixelstep);
          }
          free(draw);
          for(int i1 = 0; i1 < _len_data0; i1++) {
            int _len_data1 = 1;
              free(data[i1]);
          }
          free(data);
          free(linesize);
        
        break;
    }
    // big-arr
    case 1:
    {
          int plane = 255;
          int x = 255;
          int y = 255;
          int _len_draw0 = 65025;
          struct TYPE_3__ * draw = (struct TYPE_3__ *) malloc(_len_draw0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_draw0; _i0++) {
              int _len_draw__i0__vsub0 = 1;
          draw[_i0].vsub = (int *) malloc(_len_draw__i0__vsub0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_draw__i0__vsub0; _j0++) {
            draw[_i0].vsub[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_draw__i0__hsub0 = 1;
          draw[_i0].hsub = (int *) malloc(_len_draw__i0__hsub0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_draw__i0__hsub0; _j0++) {
            draw[_i0].hsub[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_draw__i0__pixelstep0 = 1;
          draw[_i0].pixelstep = (int *) malloc(_len_draw__i0__pixelstep0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_draw__i0__pixelstep0; _j0++) {
            draw[_i0].pixelstep[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_data0 = 65025;
          int ** data = (int **) malloc(_len_data0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            int _len_data1 = 1;
            data[_i0] = (int *) malloc(_len_data1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_data1; _i1++) {
              data[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_linesize0 = 65025;
          int * linesize = (int *) malloc(_len_linesize0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_linesize0; _i0++) {
            linesize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = pointer_at(draw,data,linesize,plane,x,y);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_draw0; _aux++) {
          free(draw[_aux].vsub);
          }
          for(int _aux = 0; _aux < _len_draw0; _aux++) {
          free(draw[_aux].hsub);
          }
          for(int _aux = 0; _aux < _len_draw0; _aux++) {
          free(draw[_aux].pixelstep);
          }
          free(draw);
          for(int i1 = 0; i1 < _len_data0; i1++) {
            int _len_data1 = 1;
              free(data[i1]);
          }
          free(data);
          free(linesize);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int plane = 10;
          int x = 10;
          int y = 10;
          int _len_draw0 = 100;
          struct TYPE_3__ * draw = (struct TYPE_3__ *) malloc(_len_draw0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_draw0; _i0++) {
              int _len_draw__i0__vsub0 = 1;
          draw[_i0].vsub = (int *) malloc(_len_draw__i0__vsub0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_draw__i0__vsub0; _j0++) {
            draw[_i0].vsub[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_draw__i0__hsub0 = 1;
          draw[_i0].hsub = (int *) malloc(_len_draw__i0__hsub0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_draw__i0__hsub0; _j0++) {
            draw[_i0].hsub[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_draw__i0__pixelstep0 = 1;
          draw[_i0].pixelstep = (int *) malloc(_len_draw__i0__pixelstep0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_draw__i0__pixelstep0; _j0++) {
            draw[_i0].pixelstep[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_data0 = 100;
          int ** data = (int **) malloc(_len_data0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            int _len_data1 = 1;
            data[_i0] = (int *) malloc(_len_data1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_data1; _i1++) {
              data[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_linesize0 = 100;
          int * linesize = (int *) malloc(_len_linesize0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_linesize0; _i0++) {
            linesize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = pointer_at(draw,data,linesize,plane,x,y);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_draw0; _aux++) {
          free(draw[_aux].vsub);
          }
          for(int _aux = 0; _aux < _len_draw0; _aux++) {
          free(draw[_aux].hsub);
          }
          for(int _aux = 0; _aux < _len_draw0; _aux++) {
          free(draw[_aux].pixelstep);
          }
          free(draw);
          for(int i1 = 0; i1 < _len_data0; i1++) {
            int _len_data1 = 1;
              free(data[i1]);
          }
          free(data);
          free(linesize);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

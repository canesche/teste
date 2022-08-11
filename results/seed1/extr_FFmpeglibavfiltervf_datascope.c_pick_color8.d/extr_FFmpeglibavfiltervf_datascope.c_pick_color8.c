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
typedef  struct TYPE_11__   TYPE_4__ ;
typedef  struct TYPE_10__   TYPE_3__ ;
typedef  struct TYPE_9__   TYPE_2__ ;
typedef  struct TYPE_8__   TYPE_1__ ;

/* Type definitions */
struct TYPE_11__ {int** data; int* linesize; } ;
struct TYPE_10__ {int* rgba; TYPE_1__* comp; } ;
struct TYPE_9__ {int nb_planes; int* pixelstep; int* vsub; int* hsub; } ;
struct TYPE_8__ {int* u8; } ;
typedef  TYPE_2__ FFDrawContext ;
typedef  TYPE_3__ FFDrawColor ;
typedef  TYPE_4__ AVFrame ;

/* Variables and functions */

__attribute__((used)) static void pick_color8(FFDrawContext *draw, FFDrawColor *color, AVFrame *in, int x, int y, int *value)
{
    int p, i;

    color->rgba[3] = 255;
    for (p = 0; p < draw->nb_planes; p++) {
        if (draw->nb_planes == 1) {
            for (i = 0; i < 4; i++) {
                value[i] = in->data[0][y * in->linesize[0] + x * draw->pixelstep[0] + i];
                color->comp[0].u8[i] = value[i];
            }
        } else {
            value[p] = in->data[p][(y >> draw->vsub[p]) * in->linesize[p] + (x >> draw->hsub[p])];
            color->comp[p].u8[0] = value[p];
        }
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
          int _len_draw0 = 1;
          struct TYPE_9__ * draw = (struct TYPE_9__ *) malloc(_len_draw0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_draw0; _i0++) {
            draw[_i0].nb_planes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_draw__i0__pixelstep0 = 1;
          draw[_i0].pixelstep = (int *) malloc(_len_draw__i0__pixelstep0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_draw__i0__pixelstep0; _j0++) {
            draw[_i0].pixelstep[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
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
          }
          int _len_color0 = 1;
          struct TYPE_10__ * color = (struct TYPE_10__ *) malloc(_len_color0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_color0; _i0++) {
              int _len_color__i0__rgba0 = 1;
          color[_i0].rgba = (int *) malloc(_len_color__i0__rgba0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_color__i0__rgba0; _j0++) {
            color[_i0].rgba[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_color__i0__comp0 = 1;
          color[_i0].comp = (struct TYPE_8__ *) malloc(_len_color__i0__comp0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_color__i0__comp0; _j0++) {
              int _len_color__i0__comp_u80 = 1;
          color[_i0].comp->u8 = (int *) malloc(_len_color__i0__comp_u80*sizeof(int));
          for(int _j0 = 0; _j0 < _len_color__i0__comp_u80; _j0++) {
            color[_i0].comp->u8[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_in0 = 1;
          struct TYPE_11__ * in = (struct TYPE_11__ *) malloc(_len_in0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
              int _len_in__i0__data0 = 1;
          in[_i0].data = (int **) malloc(_len_in__i0__data0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_in__i0__data0; _j0++) {
            int _len_in__i0__data1 = 1;
            in[_i0].data[_j0] = (int *) malloc(_len_in__i0__data1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_in__i0__data1; _j1++) {
              in[_i0].data[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_in__i0__linesize0 = 1;
          in[_i0].linesize = (int *) malloc(_len_in__i0__linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_in__i0__linesize0; _j0++) {
            in[_i0].linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_value0 = 1;
          int * value = (int *) malloc(_len_value0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pick_color8(draw,color,in,x,y,value);
          for(int _aux = 0; _aux < _len_draw0; _aux++) {
          free(draw[_aux].pixelstep);
          }
          for(int _aux = 0; _aux < _len_draw0; _aux++) {
          free(draw[_aux].vsub);
          }
          for(int _aux = 0; _aux < _len_draw0; _aux++) {
          free(draw[_aux].hsub);
          }
          free(draw);
          for(int _aux = 0; _aux < _len_color0; _aux++) {
          free(color[_aux].rgba);
          }
          for(int _aux = 0; _aux < _len_color0; _aux++) {
          free(color[_aux].comp);
          }
          free(color);
          for(int _aux = 0; _aux < _len_in0; _aux++) {
          free(*(in[_aux].data));
        free(in[_aux].data);
          }
          for(int _aux = 0; _aux < _len_in0; _aux++) {
          free(in[_aux].linesize);
          }
          free(in);
          free(value);
        
        break;
    }
    // big-arr
    case 1:
    {
          int x = 255;
          int y = 255;
          int _len_draw0 = 65025;
          struct TYPE_9__ * draw = (struct TYPE_9__ *) malloc(_len_draw0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_draw0; _i0++) {
            draw[_i0].nb_planes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_draw__i0__pixelstep0 = 1;
          draw[_i0].pixelstep = (int *) malloc(_len_draw__i0__pixelstep0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_draw__i0__pixelstep0; _j0++) {
            draw[_i0].pixelstep[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
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
          }
          int _len_color0 = 65025;
          struct TYPE_10__ * color = (struct TYPE_10__ *) malloc(_len_color0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_color0; _i0++) {
              int _len_color__i0__rgba0 = 1;
          color[_i0].rgba = (int *) malloc(_len_color__i0__rgba0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_color__i0__rgba0; _j0++) {
            color[_i0].rgba[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_color__i0__comp0 = 1;
          color[_i0].comp = (struct TYPE_8__ *) malloc(_len_color__i0__comp0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_color__i0__comp0; _j0++) {
              int _len_color__i0__comp_u80 = 1;
          color[_i0].comp->u8 = (int *) malloc(_len_color__i0__comp_u80*sizeof(int));
          for(int _j0 = 0; _j0 < _len_color__i0__comp_u80; _j0++) {
            color[_i0].comp->u8[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_in0 = 65025;
          struct TYPE_11__ * in = (struct TYPE_11__ *) malloc(_len_in0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
              int _len_in__i0__data0 = 1;
          in[_i0].data = (int **) malloc(_len_in__i0__data0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_in__i0__data0; _j0++) {
            int _len_in__i0__data1 = 1;
            in[_i0].data[_j0] = (int *) malloc(_len_in__i0__data1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_in__i0__data1; _j1++) {
              in[_i0].data[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_in__i0__linesize0 = 1;
          in[_i0].linesize = (int *) malloc(_len_in__i0__linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_in__i0__linesize0; _j0++) {
            in[_i0].linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_value0 = 65025;
          int * value = (int *) malloc(_len_value0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pick_color8(draw,color,in,x,y,value);
          for(int _aux = 0; _aux < _len_draw0; _aux++) {
          free(draw[_aux].pixelstep);
          }
          for(int _aux = 0; _aux < _len_draw0; _aux++) {
          free(draw[_aux].vsub);
          }
          for(int _aux = 0; _aux < _len_draw0; _aux++) {
          free(draw[_aux].hsub);
          }
          free(draw);
          for(int _aux = 0; _aux < _len_color0; _aux++) {
          free(color[_aux].rgba);
          }
          for(int _aux = 0; _aux < _len_color0; _aux++) {
          free(color[_aux].comp);
          }
          free(color);
          for(int _aux = 0; _aux < _len_in0; _aux++) {
          free(*(in[_aux].data));
        free(in[_aux].data);
          }
          for(int _aux = 0; _aux < _len_in0; _aux++) {
          free(in[_aux].linesize);
          }
          free(in);
          free(value);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int x = 10;
          int y = 10;
          int _len_draw0 = 100;
          struct TYPE_9__ * draw = (struct TYPE_9__ *) malloc(_len_draw0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_draw0; _i0++) {
            draw[_i0].nb_planes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_draw__i0__pixelstep0 = 1;
          draw[_i0].pixelstep = (int *) malloc(_len_draw__i0__pixelstep0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_draw__i0__pixelstep0; _j0++) {
            draw[_i0].pixelstep[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
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
          }
          int _len_color0 = 100;
          struct TYPE_10__ * color = (struct TYPE_10__ *) malloc(_len_color0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_color0; _i0++) {
              int _len_color__i0__rgba0 = 1;
          color[_i0].rgba = (int *) malloc(_len_color__i0__rgba0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_color__i0__rgba0; _j0++) {
            color[_i0].rgba[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_color__i0__comp0 = 1;
          color[_i0].comp = (struct TYPE_8__ *) malloc(_len_color__i0__comp0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_color__i0__comp0; _j0++) {
              int _len_color__i0__comp_u80 = 1;
          color[_i0].comp->u8 = (int *) malloc(_len_color__i0__comp_u80*sizeof(int));
          for(int _j0 = 0; _j0 < _len_color__i0__comp_u80; _j0++) {
            color[_i0].comp->u8[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_in0 = 100;
          struct TYPE_11__ * in = (struct TYPE_11__ *) malloc(_len_in0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
              int _len_in__i0__data0 = 1;
          in[_i0].data = (int **) malloc(_len_in__i0__data0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_in__i0__data0; _j0++) {
            int _len_in__i0__data1 = 1;
            in[_i0].data[_j0] = (int *) malloc(_len_in__i0__data1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_in__i0__data1; _j1++) {
              in[_i0].data[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_in__i0__linesize0 = 1;
          in[_i0].linesize = (int *) malloc(_len_in__i0__linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_in__i0__linesize0; _j0++) {
            in[_i0].linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_value0 = 100;
          int * value = (int *) malloc(_len_value0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pick_color8(draw,color,in,x,y,value);
          for(int _aux = 0; _aux < _len_draw0; _aux++) {
          free(draw[_aux].pixelstep);
          }
          for(int _aux = 0; _aux < _len_draw0; _aux++) {
          free(draw[_aux].vsub);
          }
          for(int _aux = 0; _aux < _len_draw0; _aux++) {
          free(draw[_aux].hsub);
          }
          free(draw);
          for(int _aux = 0; _aux < _len_color0; _aux++) {
          free(color[_aux].rgba);
          }
          for(int _aux = 0; _aux < _len_color0; _aux++) {
          free(color[_aux].comp);
          }
          free(color);
          for(int _aux = 0; _aux < _len_in0; _aux++) {
          free(*(in[_aux].data));
        free(in[_aux].data);
          }
          for(int _aux = 0; _aux < _len_in0; _aux++) {
          free(in[_aux].linesize);
          }
          free(in);
          free(value);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

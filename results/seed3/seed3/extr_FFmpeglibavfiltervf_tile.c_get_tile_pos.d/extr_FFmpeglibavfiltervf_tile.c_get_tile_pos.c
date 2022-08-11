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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {unsigned int w; unsigned int margin; unsigned int const padding; } ;
typedef  TYPE_1__ TileContext ;
struct TYPE_7__ {TYPE_2__** inputs; TYPE_1__* priv; } ;
struct TYPE_6__ {unsigned int const w; unsigned int const h; } ;
typedef  TYPE_2__ AVFilterLink ;
typedef  TYPE_3__ AVFilterContext ;

/* Variables and functions */

__attribute__((used)) static void get_tile_pos(AVFilterContext *ctx, unsigned *x, unsigned *y, unsigned current)
{
    TileContext *tile    = ctx->priv;
    AVFilterLink *inlink = ctx->inputs[0];
    const unsigned tx = current % tile->w;
    const unsigned ty = current / tile->w;

    *x = tile->margin + (inlink->w + tile->padding) * tx;
    *y = tile->margin + (inlink->h + tile->padding) * ty;
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
          unsigned int current = 100;
          int _len_ctx0 = 1;
          struct TYPE_7__ * ctx = (struct TYPE_7__ *) malloc(_len_ctx0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__inputs0 = 1;
          ctx[_i0].inputs = (struct TYPE_6__ **) malloc(_len_ctx__i0__inputs0*sizeof(struct TYPE_6__ *));
          for(int _j0 = 0; _j0 < _len_ctx__i0__inputs0; _j0++) {
            int _len_ctx__i0__inputs1 = 1;
            ctx[_i0].inputs[_j0] = (struct TYPE_6__ *) malloc(_len_ctx__i0__inputs1*sizeof(struct TYPE_6__));
            for(int _j1 = 0; _j1 < _len_ctx__i0__inputs1; _j1++) {
              ctx[_i0].inputs[_j0]->w = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].inputs[_j0]->h = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_ctx__i0__priv0 = 1;
          ctx[_i0].priv = (struct TYPE_5__ *) malloc(_len_ctx__i0__priv0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv0; _j0++) {
            ctx[_i0].priv->w = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv->margin = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv->padding = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_x0 = 1;
          unsigned int * x = (unsigned int *) malloc(_len_x0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_y0 = 1;
          unsigned int * y = (unsigned int *) malloc(_len_y0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_tile_pos(ctx,x,y,current);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(*(ctx[_aux].inputs));
        free(ctx[_aux].inputs);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].priv);
          }
          free(ctx);
          free(x);
          free(y);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int current = 255;
          int _len_ctx0 = 65025;
          struct TYPE_7__ * ctx = (struct TYPE_7__ *) malloc(_len_ctx0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__inputs0 = 1;
          ctx[_i0].inputs = (struct TYPE_6__ **) malloc(_len_ctx__i0__inputs0*sizeof(struct TYPE_6__ *));
          for(int _j0 = 0; _j0 < _len_ctx__i0__inputs0; _j0++) {
            int _len_ctx__i0__inputs1 = 1;
            ctx[_i0].inputs[_j0] = (struct TYPE_6__ *) malloc(_len_ctx__i0__inputs1*sizeof(struct TYPE_6__));
            for(int _j1 = 0; _j1 < _len_ctx__i0__inputs1; _j1++) {
              ctx[_i0].inputs[_j0]->w = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].inputs[_j0]->h = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_ctx__i0__priv0 = 1;
          ctx[_i0].priv = (struct TYPE_5__ *) malloc(_len_ctx__i0__priv0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv0; _j0++) {
            ctx[_i0].priv->w = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv->margin = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv->padding = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_x0 = 65025;
          unsigned int * x = (unsigned int *) malloc(_len_x0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_y0 = 65025;
          unsigned int * y = (unsigned int *) malloc(_len_y0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_tile_pos(ctx,x,y,current);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(*(ctx[_aux].inputs));
        free(ctx[_aux].inputs);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].priv);
          }
          free(ctx);
          free(x);
          free(y);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int current = 10;
          int _len_ctx0 = 100;
          struct TYPE_7__ * ctx = (struct TYPE_7__ *) malloc(_len_ctx0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__inputs0 = 1;
          ctx[_i0].inputs = (struct TYPE_6__ **) malloc(_len_ctx__i0__inputs0*sizeof(struct TYPE_6__ *));
          for(int _j0 = 0; _j0 < _len_ctx__i0__inputs0; _j0++) {
            int _len_ctx__i0__inputs1 = 1;
            ctx[_i0].inputs[_j0] = (struct TYPE_6__ *) malloc(_len_ctx__i0__inputs1*sizeof(struct TYPE_6__));
            for(int _j1 = 0; _j1 < _len_ctx__i0__inputs1; _j1++) {
              ctx[_i0].inputs[_j0]->w = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].inputs[_j0]->h = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_ctx__i0__priv0 = 1;
          ctx[_i0].priv = (struct TYPE_5__ *) malloc(_len_ctx__i0__priv0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv0; _j0++) {
            ctx[_i0].priv->w = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv->margin = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv->padding = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_x0 = 100;
          unsigned int * x = (unsigned int *) malloc(_len_x0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_y0 = 100;
          unsigned int * y = (unsigned int *) malloc(_len_y0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_tile_pos(ctx,x,y,current);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(*(ctx[_aux].inputs));
        free(ctx[_aux].inputs);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].priv);
          }
          free(ctx);
          free(x);
          free(y);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  scalar_t__ uint8_t ;
struct TYPE_8__ {TYPE_1__* priv; } ;
struct TYPE_7__ {int* linesize; scalar_t__** data; } ;
struct TYPE_6__ {size_t buf_idx; int h; int w; scalar_t__** buf; } ;
typedef  TYPE_1__ LifeContext ;
typedef  TYPE_2__ AVFrame ;
typedef  TYPE_3__ AVFilterContext ;

/* Variables and functions */
 scalar_t__ ALIVE_CELL ; 

__attribute__((used)) static void fill_picture_monoblack(AVFilterContext *ctx, AVFrame *picref)
{
    LifeContext *life = ctx->priv;
    uint8_t *buf = life->buf[life->buf_idx];
    int i, j, k;

    /* fill the output picture with the old grid buffer */
    for (i = 0; i < life->h; i++) {
        uint8_t byte = 0;
        uint8_t *p = picref->data[0] + i * picref->linesize[0];
        for (k = 0, j = 0; j < life->w; j++) {
            byte |= (buf[i*life->w+j] == ALIVE_CELL)<<(7-k++);
            if (k==8 || j == life->w-1) {
                k = 0;
                *p++ = byte;
                byte = 0;
            }
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
          int _len_ctx0 = 1;
          struct TYPE_8__ * ctx = (struct TYPE_8__ *) malloc(_len_ctx0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__priv0 = 1;
          ctx[_i0].priv = (struct TYPE_6__ *) malloc(_len_ctx__i0__priv0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv0; _j0++) {
            ctx[_i0].priv->buf_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv->h = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv->w = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__priv_buf0 = 1;
          ctx[_i0].priv->buf = (long **) malloc(_len_ctx__i0__priv_buf0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv_buf0; _j0++) {
            int _len_ctx__i0__priv_buf1 = 1;
            ctx[_i0].priv->buf[_j0] = (long *) malloc(_len_ctx__i0__priv_buf1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_ctx__i0__priv_buf1; _j1++) {
              ctx[_i0].priv->buf[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          int _len_picref0 = 1;
          struct TYPE_7__ * picref = (struct TYPE_7__ *) malloc(_len_picref0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_picref0; _i0++) {
              int _len_picref__i0__linesize0 = 1;
          picref[_i0].linesize = (int *) malloc(_len_picref__i0__linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_picref__i0__linesize0; _j0++) {
            picref[_i0].linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_picref__i0__data0 = 1;
          picref[_i0].data = (long **) malloc(_len_picref__i0__data0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_picref__i0__data0; _j0++) {
            int _len_picref__i0__data1 = 1;
            picref[_i0].data[_j0] = (long *) malloc(_len_picref__i0__data1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_picref__i0__data1; _j1++) {
              picref[_i0].data[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          fill_picture_monoblack(ctx,picref);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].priv);
          }
          free(ctx);
          for(int _aux = 0; _aux < _len_picref0; _aux++) {
          free(picref[_aux].linesize);
          }
          for(int _aux = 0; _aux < _len_picref0; _aux++) {
          free(*(picref[_aux].data));
        free(picref[_aux].data);
          }
          free(picref);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ctx0 = 65025;
          struct TYPE_8__ * ctx = (struct TYPE_8__ *) malloc(_len_ctx0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__priv0 = 1;
          ctx[_i0].priv = (struct TYPE_6__ *) malloc(_len_ctx__i0__priv0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv0; _j0++) {
            ctx[_i0].priv->buf_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv->h = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv->w = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__priv_buf0 = 1;
          ctx[_i0].priv->buf = (long **) malloc(_len_ctx__i0__priv_buf0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv_buf0; _j0++) {
            int _len_ctx__i0__priv_buf1 = 1;
            ctx[_i0].priv->buf[_j0] = (long *) malloc(_len_ctx__i0__priv_buf1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_ctx__i0__priv_buf1; _j1++) {
              ctx[_i0].priv->buf[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          int _len_picref0 = 65025;
          struct TYPE_7__ * picref = (struct TYPE_7__ *) malloc(_len_picref0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_picref0; _i0++) {
              int _len_picref__i0__linesize0 = 1;
          picref[_i0].linesize = (int *) malloc(_len_picref__i0__linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_picref__i0__linesize0; _j0++) {
            picref[_i0].linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_picref__i0__data0 = 1;
          picref[_i0].data = (long **) malloc(_len_picref__i0__data0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_picref__i0__data0; _j0++) {
            int _len_picref__i0__data1 = 1;
            picref[_i0].data[_j0] = (long *) malloc(_len_picref__i0__data1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_picref__i0__data1; _j1++) {
              picref[_i0].data[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          fill_picture_monoblack(ctx,picref);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].priv);
          }
          free(ctx);
          for(int _aux = 0; _aux < _len_picref0; _aux++) {
          free(picref[_aux].linesize);
          }
          for(int _aux = 0; _aux < _len_picref0; _aux++) {
          free(*(picref[_aux].data));
        free(picref[_aux].data);
          }
          free(picref);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ctx0 = 100;
          struct TYPE_8__ * ctx = (struct TYPE_8__ *) malloc(_len_ctx0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__priv0 = 1;
          ctx[_i0].priv = (struct TYPE_6__ *) malloc(_len_ctx__i0__priv0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv0; _j0++) {
            ctx[_i0].priv->buf_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv->h = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv->w = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__priv_buf0 = 1;
          ctx[_i0].priv->buf = (long **) malloc(_len_ctx__i0__priv_buf0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv_buf0; _j0++) {
            int _len_ctx__i0__priv_buf1 = 1;
            ctx[_i0].priv->buf[_j0] = (long *) malloc(_len_ctx__i0__priv_buf1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_ctx__i0__priv_buf1; _j1++) {
              ctx[_i0].priv->buf[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          int _len_picref0 = 100;
          struct TYPE_7__ * picref = (struct TYPE_7__ *) malloc(_len_picref0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_picref0; _i0++) {
              int _len_picref__i0__linesize0 = 1;
          picref[_i0].linesize = (int *) malloc(_len_picref__i0__linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_picref__i0__linesize0; _j0++) {
            picref[_i0].linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_picref__i0__data0 = 1;
          picref[_i0].data = (long **) malloc(_len_picref__i0__data0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_picref__i0__data0; _j0++) {
            int _len_picref__i0__data1 = 1;
            picref[_i0].data[_j0] = (long *) malloc(_len_picref__i0__data1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_picref__i0__data1; _j1++) {
              picref[_i0].data[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          fill_picture_monoblack(ctx,picref);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].priv);
          }
          free(ctx);
          for(int _aux = 0; _aux < _len_picref0; _aux++) {
          free(picref[_aux].linesize);
          }
          for(int _aux = 0; _aux < _len_picref0; _aux++) {
          free(*(picref[_aux].data));
        free(picref[_aux].data);
          }
          free(picref);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
typedef  int uint8_t ;
typedef  size_t uint16_t ;
struct TYPE_6__ {TYPE_3__* out; TYPE_3__* in; } ;
typedef  TYPE_1__ ThreadData ;
struct TYPE_9__ {TYPE_2__* priv; } ;
struct TYPE_8__ {int height; int** data; int* linesize; int const width; } ;
struct TYPE_7__ {int step; int* rgba_map; size_t** graph; scalar_t__ is_16bit; } ;
typedef  TYPE_2__ CurvesContext ;
typedef  TYPE_3__ AVFrame ;
typedef  TYPE_4__ AVFilterContext ;

/* Variables and functions */
 size_t A ; 
 size_t B ; 
 size_t G ; 
 size_t R ; 

__attribute__((used)) static int filter_slice_packed(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
{
    int x, y;
    const CurvesContext *curves = ctx->priv;
    const ThreadData *td = arg;
    const AVFrame *in  = td->in;
    const AVFrame *out = td->out;
    const int direct = out == in;
    const int step = curves->step;
    const uint8_t r = curves->rgba_map[R];
    const uint8_t g = curves->rgba_map[G];
    const uint8_t b = curves->rgba_map[B];
    const uint8_t a = curves->rgba_map[A];
    const int slice_start = (in->height *  jobnr   ) / nb_jobs;
    const int slice_end   = (in->height * (jobnr+1)) / nb_jobs;

    if (curves->is_16bit) {
        for (y = slice_start; y < slice_end; y++) {
            uint16_t       *dstp = (      uint16_t *)(out->data[0] + y * out->linesize[0]);
            const uint16_t *srcp = (const uint16_t *)(in ->data[0] + y *  in->linesize[0]);

            for (x = 0; x < in->width * step; x += step) {
                dstp[x + r] = curves->graph[R][srcp[x + r]];
                dstp[x + g] = curves->graph[G][srcp[x + g]];
                dstp[x + b] = curves->graph[B][srcp[x + b]];
                if (!direct && step == 4)
                    dstp[x + a] = srcp[x + a];
            }
        }
    } else {
        uint8_t       *dst = out->data[0] + slice_start * out->linesize[0];
        const uint8_t *src =  in->data[0] + slice_start *  in->linesize[0];

        for (y = slice_start; y < slice_end; y++) {
            for (x = 0; x < in->width * step; x += step) {
                dst[x + r] = curves->graph[R][src[x + r]];
                dst[x + g] = curves->graph[G][src[x + g]];
                dst[x + b] = curves->graph[B][src[x + b]];
                if (!direct && step == 4)
                    dst[x + a] = src[x + a];
            }
            dst += out->linesize[0];
            src += in ->linesize[0];
        }
    }
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
          int jobnr = 100;
          int nb_jobs = 100;
          int _len_ctx0 = 1;
          struct TYPE_9__ * ctx = (struct TYPE_9__ *) malloc(_len_ctx0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__priv0 = 1;
          ctx[_i0].priv = (struct TYPE_7__ *) malloc(_len_ctx__i0__priv0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv0; _j0++) {
            ctx[_i0].priv->step = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__priv_rgba_map0 = 1;
          ctx[_i0].priv->rgba_map = (int *) malloc(_len_ctx__i0__priv_rgba_map0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv_rgba_map0; _j0++) {
            ctx[_i0].priv->rgba_map[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__priv_graph0 = 1;
          ctx[_i0].priv->graph = (unsigned long **) malloc(_len_ctx__i0__priv_graph0*sizeof(unsigned long *));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv_graph0; _j0++) {
            int _len_ctx__i0__priv_graph1 = 1;
            ctx[_i0].priv->graph[_j0] = (unsigned long *) malloc(_len_ctx__i0__priv_graph1*sizeof(unsigned long));
            for(int _j1 = 0; _j1 < _len_ctx__i0__priv_graph1; _j1++) {
              ctx[_i0].priv->graph[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        ctx[_i0].priv->is_16bit = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * arg;
          int benchRet = filter_slice_packed(ctx,arg,jobnr,nb_jobs);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].priv);
          }
          free(ctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int jobnr = 255;
          int nb_jobs = 255;
          int _len_ctx0 = 65025;
          struct TYPE_9__ * ctx = (struct TYPE_9__ *) malloc(_len_ctx0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__priv0 = 1;
          ctx[_i0].priv = (struct TYPE_7__ *) malloc(_len_ctx__i0__priv0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv0; _j0++) {
            ctx[_i0].priv->step = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__priv_rgba_map0 = 1;
          ctx[_i0].priv->rgba_map = (int *) malloc(_len_ctx__i0__priv_rgba_map0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv_rgba_map0; _j0++) {
            ctx[_i0].priv->rgba_map[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__priv_graph0 = 1;
          ctx[_i0].priv->graph = (unsigned long **) malloc(_len_ctx__i0__priv_graph0*sizeof(unsigned long *));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv_graph0; _j0++) {
            int _len_ctx__i0__priv_graph1 = 1;
            ctx[_i0].priv->graph[_j0] = (unsigned long *) malloc(_len_ctx__i0__priv_graph1*sizeof(unsigned long));
            for(int _j1 = 0; _j1 < _len_ctx__i0__priv_graph1; _j1++) {
              ctx[_i0].priv->graph[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        ctx[_i0].priv->is_16bit = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * arg;
          int benchRet = filter_slice_packed(ctx,arg,jobnr,nb_jobs);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].priv);
          }
          free(ctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int jobnr = 10;
          int nb_jobs = 10;
          int _len_ctx0 = 100;
          struct TYPE_9__ * ctx = (struct TYPE_9__ *) malloc(_len_ctx0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__priv0 = 1;
          ctx[_i0].priv = (struct TYPE_7__ *) malloc(_len_ctx__i0__priv0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv0; _j0++) {
            ctx[_i0].priv->step = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__priv_rgba_map0 = 1;
          ctx[_i0].priv->rgba_map = (int *) malloc(_len_ctx__i0__priv_rgba_map0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv_rgba_map0; _j0++) {
            ctx[_i0].priv->rgba_map[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__priv_graph0 = 1;
          ctx[_i0].priv->graph = (unsigned long **) malloc(_len_ctx__i0__priv_graph0*sizeof(unsigned long *));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv_graph0; _j0++) {
            int _len_ctx__i0__priv_graph1 = 1;
            ctx[_i0].priv->graph[_j0] = (unsigned long *) malloc(_len_ctx__i0__priv_graph1*sizeof(unsigned long));
            for(int _j1 = 0; _j1 < _len_ctx__i0__priv_graph1; _j1++) {
              ctx[_i0].priv->graph[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        ctx[_i0].priv->is_16bit = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * arg;
          int benchRet = filter_slice_packed(ctx,arg,jobnr,nb_jobs);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].priv);
          }
          free(ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

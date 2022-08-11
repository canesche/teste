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
typedef  size_t uint8_t ;
typedef  size_t uint16_t ;
struct TYPE_6__ {TYPE_3__* out; TYPE_3__* in; } ;
typedef  TYPE_1__ ThreadData ;
struct TYPE_9__ {TYPE_2__* priv; } ;
struct TYPE_8__ {int height; size_t** data; int* linesize; int width; } ;
struct TYPE_7__ {int step; size_t* rgba_map; size_t** graph; scalar_t__ is_16bit; } ;
typedef  TYPE_2__ CurvesContext ;
typedef  TYPE_3__ AVFrame ;
typedef  TYPE_4__ AVFilterContext ;

/* Variables and functions */
 size_t A ; 
 size_t B ; 
 size_t G ; 
 size_t R ; 

__attribute__((used)) static int filter_slice_planar(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
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
            uint16_t       *dstrp = (      uint16_t *)(out->data[r] + y * out->linesize[r]);
            uint16_t       *dstgp = (      uint16_t *)(out->data[g] + y * out->linesize[g]);
            uint16_t       *dstbp = (      uint16_t *)(out->data[b] + y * out->linesize[b]);
            uint16_t       *dstap = (      uint16_t *)(out->data[a] + y * out->linesize[a]);
            const uint16_t *srcrp = (const uint16_t *)(in ->data[r] + y *  in->linesize[r]);
            const uint16_t *srcgp = (const uint16_t *)(in ->data[g] + y *  in->linesize[g]);
            const uint16_t *srcbp = (const uint16_t *)(in ->data[b] + y *  in->linesize[b]);
            const uint16_t *srcap = (const uint16_t *)(in ->data[a] + y *  in->linesize[a]);

            for (x = 0; x < in->width; x++) {
                dstrp[x] = curves->graph[R][srcrp[x]];
                dstgp[x] = curves->graph[G][srcgp[x]];
                dstbp[x] = curves->graph[B][srcbp[x]];
                if (!direct && step == 4)
                    dstap[x] = srcap[x];
            }
        }
    } else {
        uint8_t       *dstr = out->data[r] + slice_start * out->linesize[r];
        uint8_t       *dstg = out->data[g] + slice_start * out->linesize[g];
        uint8_t       *dstb = out->data[b] + slice_start * out->linesize[b];
        uint8_t       *dsta = out->data[a] + slice_start * out->linesize[a];
        const uint8_t *srcr =  in->data[r] + slice_start *  in->linesize[r];
        const uint8_t *srcg =  in->data[g] + slice_start *  in->linesize[g];
        const uint8_t *srcb =  in->data[b] + slice_start *  in->linesize[b];
        const uint8_t *srca =  in->data[a] + slice_start *  in->linesize[a];

        for (y = slice_start; y < slice_end; y++) {
            for (x = 0; x < in->width; x++) {
                dstr[x] = curves->graph[R][srcr[x]];
                dstg[x] = curves->graph[G][srcg[x]];
                dstb[x] = curves->graph[B][srcb[x]];
                if (!direct && step == 4)
                    dsta[x] = srca[x];
            }
            dstr += out->linesize[r];
            dstg += out->linesize[g];
            dstb += out->linesize[b];
            dsta += out->linesize[a];
            srcr += in ->linesize[r];
            srcg += in ->linesize[g];
            srcb += in ->linesize[b];
            srca += in ->linesize[a];
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
          ctx[_i0].priv->rgba_map = (unsigned long *) malloc(_len_ctx__i0__priv_rgba_map0*sizeof(unsigned long));
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
          int benchRet = filter_slice_planar(ctx,arg,jobnr,nb_jobs);
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
          ctx[_i0].priv->rgba_map = (unsigned long *) malloc(_len_ctx__i0__priv_rgba_map0*sizeof(unsigned long));
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
          int benchRet = filter_slice_planar(ctx,arg,jobnr,nb_jobs);
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
          ctx[_i0].priv->rgba_map = (unsigned long *) malloc(_len_ctx__i0__priv_rgba_map0*sizeof(unsigned long));
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
          int benchRet = filter_slice_planar(ctx,arg,jobnr,nb_jobs);
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

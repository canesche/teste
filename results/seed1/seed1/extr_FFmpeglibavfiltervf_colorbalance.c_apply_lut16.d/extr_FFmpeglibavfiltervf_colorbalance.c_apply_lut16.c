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
typedef  struct TYPE_11__   TYPE_5__ ;
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
typedef  int uint8_t ;
typedef  size_t uint16_t ;
struct TYPE_7__ {TYPE_3__* out; TYPE_3__* in; } ;
typedef  TYPE_1__ ThreadData ;
struct TYPE_11__ {TYPE_4__** outputs; TYPE_2__* priv; } ;
struct TYPE_10__ {int const w; } ;
struct TYPE_9__ {int height; int const* linesize; scalar_t__* data; } ;
struct TYPE_8__ {int* rgba_map; int step; size_t** lut; } ;
typedef  TYPE_2__ ColorBalanceContext ;
typedef  TYPE_3__ AVFrame ;
typedef  TYPE_4__ AVFilterLink ;
typedef  TYPE_5__ AVFilterContext ;

/* Variables and functions */
 size_t A ; 
 size_t B ; 
 size_t G ; 
 size_t R ; 

__attribute__((used)) static int apply_lut16(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
{
    ColorBalanceContext *s = ctx->priv;
    ThreadData *td = arg;
    AVFrame *in = td->in;
    AVFrame *out = td->out;
    AVFilterLink *outlink = ctx->outputs[0];
    const int slice_start = (out->height * jobnr) / nb_jobs;
    const int slice_end = (out->height * (jobnr+1)) / nb_jobs;
    const uint16_t *srcrow = (const uint16_t *)in->data[0] + slice_start * in->linesize[0] / 2;
    const uint8_t roffset = s->rgba_map[R];
    const uint8_t goffset = s->rgba_map[G];
    const uint8_t boffset = s->rgba_map[B];
    const uint8_t aoffset = s->rgba_map[A];
    const int step = s->step / 2;
    uint16_t *dstrow;
    int i, j;

    dstrow = (uint16_t *)out->data[0] + slice_start * out->linesize[0] / 2;
    for (i = slice_start; i < slice_end; i++) {
        const uint16_t *src = srcrow;
        uint16_t *dst = dstrow;

        for (j = 0; j < outlink->w * step; j += step) {
            dst[j + roffset] = s->lut[R][src[j + roffset]];
            dst[j + goffset] = s->lut[G][src[j + goffset]];
            dst[j + boffset] = s->lut[B][src[j + boffset]];
            if (in != out && step == 4)
                dst[j + aoffset] = src[j + aoffset];
        }

        srcrow += in->linesize[0] / 2;
        dstrow += out->linesize[0] / 2;
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
          struct TYPE_11__ * ctx = (struct TYPE_11__ *) malloc(_len_ctx0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__outputs0 = 1;
          ctx[_i0].outputs = (struct TYPE_10__ **) malloc(_len_ctx__i0__outputs0*sizeof(struct TYPE_10__ *));
          for(int _j0 = 0; _j0 < _len_ctx__i0__outputs0; _j0++) {
            int _len_ctx__i0__outputs1 = 1;
            ctx[_i0].outputs[_j0] = (struct TYPE_10__ *) malloc(_len_ctx__i0__outputs1*sizeof(struct TYPE_10__));
            for(int _j1 = 0; _j1 < _len_ctx__i0__outputs1; _j1++) {
              ctx[_i0].outputs[_j0]->w = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_ctx__i0__priv0 = 1;
          ctx[_i0].priv = (struct TYPE_8__ *) malloc(_len_ctx__i0__priv0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv0; _j0++) {
              int _len_ctx__i0__priv_rgba_map0 = 1;
          ctx[_i0].priv->rgba_map = (int *) malloc(_len_ctx__i0__priv_rgba_map0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv_rgba_map0; _j0++) {
            ctx[_i0].priv->rgba_map[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].priv->step = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__priv_lut0 = 1;
          ctx[_i0].priv->lut = (unsigned long **) malloc(_len_ctx__i0__priv_lut0*sizeof(unsigned long *));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv_lut0; _j0++) {
            int _len_ctx__i0__priv_lut1 = 1;
            ctx[_i0].priv->lut[_j0] = (unsigned long *) malloc(_len_ctx__i0__priv_lut1*sizeof(unsigned long));
            for(int _j1 = 0; _j1 < _len_ctx__i0__priv_lut1; _j1++) {
              ctx[_i0].priv->lut[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          void * arg;
          int benchRet = apply_lut16(ctx,arg,jobnr,nb_jobs);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(*(ctx[_aux].outputs));
        free(ctx[_aux].outputs);
          }
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
          struct TYPE_11__ * ctx = (struct TYPE_11__ *) malloc(_len_ctx0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__outputs0 = 1;
          ctx[_i0].outputs = (struct TYPE_10__ **) malloc(_len_ctx__i0__outputs0*sizeof(struct TYPE_10__ *));
          for(int _j0 = 0; _j0 < _len_ctx__i0__outputs0; _j0++) {
            int _len_ctx__i0__outputs1 = 1;
            ctx[_i0].outputs[_j0] = (struct TYPE_10__ *) malloc(_len_ctx__i0__outputs1*sizeof(struct TYPE_10__));
            for(int _j1 = 0; _j1 < _len_ctx__i0__outputs1; _j1++) {
              ctx[_i0].outputs[_j0]->w = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_ctx__i0__priv0 = 1;
          ctx[_i0].priv = (struct TYPE_8__ *) malloc(_len_ctx__i0__priv0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv0; _j0++) {
              int _len_ctx__i0__priv_rgba_map0 = 1;
          ctx[_i0].priv->rgba_map = (int *) malloc(_len_ctx__i0__priv_rgba_map0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv_rgba_map0; _j0++) {
            ctx[_i0].priv->rgba_map[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].priv->step = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__priv_lut0 = 1;
          ctx[_i0].priv->lut = (unsigned long **) malloc(_len_ctx__i0__priv_lut0*sizeof(unsigned long *));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv_lut0; _j0++) {
            int _len_ctx__i0__priv_lut1 = 1;
            ctx[_i0].priv->lut[_j0] = (unsigned long *) malloc(_len_ctx__i0__priv_lut1*sizeof(unsigned long));
            for(int _j1 = 0; _j1 < _len_ctx__i0__priv_lut1; _j1++) {
              ctx[_i0].priv->lut[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          void * arg;
          int benchRet = apply_lut16(ctx,arg,jobnr,nb_jobs);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(*(ctx[_aux].outputs));
        free(ctx[_aux].outputs);
          }
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
          struct TYPE_11__ * ctx = (struct TYPE_11__ *) malloc(_len_ctx0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__outputs0 = 1;
          ctx[_i0].outputs = (struct TYPE_10__ **) malloc(_len_ctx__i0__outputs0*sizeof(struct TYPE_10__ *));
          for(int _j0 = 0; _j0 < _len_ctx__i0__outputs0; _j0++) {
            int _len_ctx__i0__outputs1 = 1;
            ctx[_i0].outputs[_j0] = (struct TYPE_10__ *) malloc(_len_ctx__i0__outputs1*sizeof(struct TYPE_10__));
            for(int _j1 = 0; _j1 < _len_ctx__i0__outputs1; _j1++) {
              ctx[_i0].outputs[_j0]->w = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_ctx__i0__priv0 = 1;
          ctx[_i0].priv = (struct TYPE_8__ *) malloc(_len_ctx__i0__priv0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv0; _j0++) {
              int _len_ctx__i0__priv_rgba_map0 = 1;
          ctx[_i0].priv->rgba_map = (int *) malloc(_len_ctx__i0__priv_rgba_map0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv_rgba_map0; _j0++) {
            ctx[_i0].priv->rgba_map[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].priv->step = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__priv_lut0 = 1;
          ctx[_i0].priv->lut = (unsigned long **) malloc(_len_ctx__i0__priv_lut0*sizeof(unsigned long *));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv_lut0; _j0++) {
            int _len_ctx__i0__priv_lut1 = 1;
            ctx[_i0].priv->lut[_j0] = (unsigned long *) malloc(_len_ctx__i0__priv_lut1*sizeof(unsigned long));
            for(int _j1 = 0; _j1 < _len_ctx__i0__priv_lut1; _j1++) {
              ctx[_i0].priv->lut[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          void * arg;
          int benchRet = apply_lut16(ctx,arg,jobnr,nb_jobs);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(*(ctx[_aux].outputs));
        free(ctx[_aux].outputs);
          }
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

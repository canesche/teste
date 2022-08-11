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
typedef  size_t uint16_t ;
struct TYPE_6__ {TYPE_3__* out; TYPE_3__* in; } ;
typedef  TYPE_1__ ThreadData ;
struct TYPE_9__ {TYPE_2__* priv; } ;
struct TYPE_8__ {int height; int const* linesize; int width; scalar_t__* data; } ;
struct TYPE_7__ {size_t** lut; } ;
typedef  TYPE_2__ ColorBalanceContext ;
typedef  TYPE_3__ AVFrame ;
typedef  TYPE_4__ AVFilterContext ;

/* Variables and functions */
 size_t B ; 
 size_t G ; 
 size_t R ; 

__attribute__((used)) static int apply_lut16_p(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
{
    ColorBalanceContext *s = ctx->priv;
    ThreadData *td = arg;
    AVFrame *in = td->in;
    AVFrame *out = td->out;
    const int slice_start = (out->height * jobnr) / nb_jobs;
    const int slice_end = (out->height * (jobnr+1)) / nb_jobs;
    const uint16_t *srcg = (const uint16_t *)in->data[0] + slice_start * in->linesize[0] / 2;
    const uint16_t *srcb = (const uint16_t *)in->data[1] + slice_start * in->linesize[1] / 2;
    const uint16_t *srcr = (const uint16_t *)in->data[2] + slice_start * in->linesize[2] / 2;
    const uint16_t *srca = (const uint16_t *)in->data[3] + slice_start * in->linesize[3] / 2;
    uint16_t *dstg = (uint16_t *)out->data[0] + slice_start * out->linesize[0] / 2;
    uint16_t *dstb = (uint16_t *)out->data[1] + slice_start * out->linesize[1] / 2;
    uint16_t *dstr = (uint16_t *)out->data[2] + slice_start * out->linesize[2] / 2;
    uint16_t *dsta = (uint16_t *)out->data[3] + slice_start * out->linesize[3] / 2;
    int i, j;

    for (i = slice_start; i < slice_end; i++) {
        for (j = 0; j < out->width; j++) {
            dstg[j] = s->lut[G][srcg[j]];
            dstb[j] = s->lut[B][srcb[j]];
            dstr[j] = s->lut[R][srcr[j]];
            if (in != out && out->linesize[3])
                dsta[j] = srca[j];
        }

        srcg += in->linesize[0] / 2;
        srcb += in->linesize[1] / 2;
        srcr += in->linesize[2] / 2;
        srca += in->linesize[3] / 2;
        dstg += out->linesize[0] / 2;
        dstb += out->linesize[1] / 2;
        dstr += out->linesize[2] / 2;
        dsta += out->linesize[3] / 2;
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
          int benchRet = apply_lut16_p(ctx,arg,jobnr,nb_jobs);
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
          int benchRet = apply_lut16_p(ctx,arg,jobnr,nb_jobs);
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
          int benchRet = apply_lut16_p(ctx,arg,jobnr,nb_jobs);
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

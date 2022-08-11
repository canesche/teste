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
typedef  int uint16_t ;
struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int height; int const* linesize; int width; scalar_t__* data; } ;
struct TYPE_5__ {int softness; int white; int black; int max; } ;
typedef  TYPE_1__ LumakeyContext ;
typedef  TYPE_2__ AVFrame ;
typedef  TYPE_3__ AVFilterContext ;

/* Variables and functions */

__attribute__((used)) static int do_lumakey_slice16(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
{
    LumakeyContext *s = ctx->priv;
    AVFrame *frame = arg;
    const int slice_start = (frame->height * jobnr) / nb_jobs;
    const int slice_end = (frame->height * (jobnr + 1)) / nb_jobs;
    uint16_t *alpha = (uint16_t *)(frame->data[3] + slice_start * frame->linesize[3]);
    const uint16_t *luma = (const uint16_t *)(frame->data[0] + slice_start * frame->linesize[0]);
    const int so = s->softness;
    const int w = s->white;
    const int b = s->black;
    const int m = s->max;
    int x, y;

    for (y = slice_start; y < slice_end; y++) {
        for (x = 0; x < frame->width; x++) {
            if (luma[x] >= b && luma[x] <= w) {
                alpha[x] = 0;
            } else if (luma[x] > b - so && luma[x] < w + so) {
                if (luma[x] < b) {
                    alpha[x] = m - (luma[x] - b + so) * m / so;
                } else {
                    alpha[x] = (luma[x] - w) * m / so;
                }
            }
        }
        luma += frame->linesize[0] / 2;
        alpha += frame->linesize[3] / 2;
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
          struct TYPE_7__ * ctx = (struct TYPE_7__ *) malloc(_len_ctx0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__priv0 = 1;
          ctx[_i0].priv = (struct TYPE_5__ *) malloc(_len_ctx__i0__priv0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv0; _j0++) {
            ctx[_i0].priv->softness = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv->white = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv->black = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv->max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * arg;
          int benchRet = do_lumakey_slice16(ctx,arg,jobnr,nb_jobs);
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
          struct TYPE_7__ * ctx = (struct TYPE_7__ *) malloc(_len_ctx0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__priv0 = 1;
          ctx[_i0].priv = (struct TYPE_5__ *) malloc(_len_ctx__i0__priv0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv0; _j0++) {
            ctx[_i0].priv->softness = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv->white = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv->black = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv->max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * arg;
          int benchRet = do_lumakey_slice16(ctx,arg,jobnr,nb_jobs);
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
          struct TYPE_7__ * ctx = (struct TYPE_7__ *) malloc(_len_ctx0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__priv0 = 1;
          ctx[_i0].priv = (struct TYPE_5__ *) malloc(_len_ctx__i0__priv0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv0; _j0++) {
            ctx[_i0].priv->softness = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv->white = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv->black = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv->max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * arg;
          int benchRet = do_lumakey_slice16(ctx,arg,jobnr,nb_jobs);
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

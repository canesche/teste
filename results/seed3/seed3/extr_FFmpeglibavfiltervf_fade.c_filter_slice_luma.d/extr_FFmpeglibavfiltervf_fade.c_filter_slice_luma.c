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
typedef  int uint8_t ;
struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int height; int** data; int* linesize; int width; } ;
struct TYPE_5__ {int bpp; int black_level; int factor; int black_level_scaled; } ;
typedef  TYPE_1__ FadeContext ;
typedef  TYPE_2__ AVFrame ;
typedef  TYPE_3__ AVFilterContext ;

/* Variables and functions */

__attribute__((used)) static int filter_slice_luma(AVFilterContext *ctx, void *arg, int jobnr,
                             int nb_jobs)
{
    FadeContext *s = ctx->priv;
    AVFrame *frame = arg;
    int slice_start = (frame->height *  jobnr   ) / nb_jobs;
    int slice_end   = (frame->height * (jobnr+1)) / nb_jobs;
    int i, j;

    for (i = slice_start; i < slice_end; i++) {
        uint8_t *p = frame->data[0] + i * frame->linesize[0];
        for (j = 0; j < frame->width * s->bpp; j++) {
            /* s->factor is using 16 lower-order bits for decimal
             * places. 32768 = 1 << 15, it is an integer representation
             * of 0.5 and is for rounding. */
            *p = ((*p - s->black_level) * s->factor + s->black_level_scaled) >> 16;
            p++;
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
          struct TYPE_7__ * ctx = (struct TYPE_7__ *) malloc(_len_ctx0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__priv0 = 1;
          ctx[_i0].priv = (struct TYPE_5__ *) malloc(_len_ctx__i0__priv0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv0; _j0++) {
            ctx[_i0].priv->bpp = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv->black_level = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv->factor = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv->black_level_scaled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * arg;
          int benchRet = filter_slice_luma(ctx,arg,jobnr,nb_jobs);
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
            ctx[_i0].priv->bpp = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv->black_level = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv->factor = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv->black_level_scaled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * arg;
          int benchRet = filter_slice_luma(ctx,arg,jobnr,nb_jobs);
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
            ctx[_i0].priv->bpp = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv->black_level = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv->factor = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv->black_level_scaled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * arg;
          int benchRet = filter_slice_luma(ctx,arg,jobnr,nb_jobs);
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

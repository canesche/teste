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
struct TYPE_5__ {int height; int width; } ;
typedef  TYPE_1__ ThreadData ;
struct TYPE_7__ {TYPE_2__* priv; } ;
struct TYPE_6__ {float boundaryscaleV; int steps; float nuV; float* buffer; } ;
typedef  TYPE_2__ GBlurContext ;
typedef  TYPE_3__ AVFilterContext ;

/* Variables and functions */

__attribute__((used)) static int filter_vertically(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
{
    GBlurContext *s = ctx->priv;
    ThreadData *td = arg;
    const int height = td->height;
    const int width = td->width;
    const int slice_start = (width *  jobnr   ) / nb_jobs;
    const int slice_end   = (width * (jobnr+1)) / nb_jobs;
    const float boundaryscale = s->boundaryscaleV;
    const int numpixels = width * height;
    const int steps = s->steps;
    const float nu = s->nuV;
    float *buffer = s->buffer;
    int i, x, step;
    float *ptr;

    /* Filter vertically along each column */
    for (x = slice_start; x < slice_end; x++) {
        for (step = 0; step < steps; step++) {
            ptr = buffer + x;
            ptr[0] *= boundaryscale;

            /* Filter downwards */
            for (i = width; i < numpixels; i += width)
                ptr[i] += nu * ptr[i - width];

            ptr[i = numpixels - width] *= boundaryscale;

            /* Filter upwards */
            for (; i > 0; i -= width)
                ptr[i - width] += nu * ptr[i];
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
          ctx[_i0].priv = (struct TYPE_6__ *) malloc(_len_ctx__i0__priv0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv0; _j0++) {
            ctx[_i0].priv->boundaryscaleV = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        ctx[_i0].priv->steps = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv->nuV = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_ctx__i0__priv_buffer0 = 1;
          ctx[_i0].priv->buffer = (float *) malloc(_len_ctx__i0__priv_buffer0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv_buffer0; _j0++) {
            ctx[_i0].priv->buffer[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          }
          void * arg;
          int benchRet = filter_vertically(ctx,arg,jobnr,nb_jobs);
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
          ctx[_i0].priv = (struct TYPE_6__ *) malloc(_len_ctx__i0__priv0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv0; _j0++) {
            ctx[_i0].priv->boundaryscaleV = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        ctx[_i0].priv->steps = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv->nuV = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_ctx__i0__priv_buffer0 = 1;
          ctx[_i0].priv->buffer = (float *) malloc(_len_ctx__i0__priv_buffer0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv_buffer0; _j0++) {
            ctx[_i0].priv->buffer[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          }
          void * arg;
          int benchRet = filter_vertically(ctx,arg,jobnr,nb_jobs);
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
          ctx[_i0].priv = (struct TYPE_6__ *) malloc(_len_ctx__i0__priv0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv0; _j0++) {
            ctx[_i0].priv->boundaryscaleV = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        ctx[_i0].priv->steps = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv->nuV = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_ctx__i0__priv_buffer0 = 1;
          ctx[_i0].priv->buffer = (float *) malloc(_len_ctx__i0__priv_buffer0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv_buffer0; _j0++) {
            ctx[_i0].priv->buffer[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          }
          void * arg;
          int benchRet = filter_vertically(ctx,arg,jobnr,nb_jobs);
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

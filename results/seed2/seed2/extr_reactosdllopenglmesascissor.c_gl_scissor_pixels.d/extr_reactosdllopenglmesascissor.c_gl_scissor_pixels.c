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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {TYPE_1__* Buffer; } ;
struct TYPE_4__ {scalar_t__ Xmin; scalar_t__ Xmax; scalar_t__ Ymin; scalar_t__ Ymax; } ;
typedef  size_t GLuint ;
typedef  int GLubyte ;
typedef  scalar_t__ const GLint ;
typedef  TYPE_2__ GLcontext ;

/* Variables and functions */

GLuint gl_scissor_pixels( GLcontext *ctx,
                          GLuint n, const GLint x[], const GLint y[],
                          GLubyte mask[] )
{
   GLint xmin = ctx->Buffer->Xmin;
   GLint xmax = ctx->Buffer->Xmax;
   GLint ymin = ctx->Buffer->Ymin;
   GLint ymax = ctx->Buffer->Ymax;
   GLuint i;

   for (i=0;i<n;i++) {
      mask[i] &= (x[i]>=xmin) & (x[i]<=xmax) & (y[i]>=ymin) & (y[i]<=ymax);
   }

   return 1;
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
          unsigned long n = 100;
          int _len_ctx0 = 1;
          struct TYPE_5__ * ctx = (struct TYPE_5__ *) malloc(_len_ctx0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__Buffer0 = 1;
          ctx[_i0].Buffer = (struct TYPE_4__ *) malloc(_len_ctx__i0__Buffer0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__Buffer0; _j0++) {
            ctx[_i0].Buffer->Xmin = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Buffer->Xmax = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Buffer->Ymin = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Buffer->Ymax = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_x0 = 1;
          long const* x = (long const*) malloc(_len_x0*sizeof(long const));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_y0 = 1;
          long const* y = (long const*) malloc(_len_y0*sizeof(long const));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mask0 = 1;
          int * mask = (int *) malloc(_len_mask0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mask0; _i0++) {
            mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = gl_scissor_pixels(ctx,n,x,y,mask);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].Buffer);
          }
          free(ctx);
          free(x);
          free(y);
          free(mask);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long n = 255;
          int _len_ctx0 = 65025;
          struct TYPE_5__ * ctx = (struct TYPE_5__ *) malloc(_len_ctx0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__Buffer0 = 1;
          ctx[_i0].Buffer = (struct TYPE_4__ *) malloc(_len_ctx__i0__Buffer0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__Buffer0; _j0++) {
            ctx[_i0].Buffer->Xmin = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Buffer->Xmax = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Buffer->Ymin = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Buffer->Ymax = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_x0 = 65025;
          long const* x = (long const*) malloc(_len_x0*sizeof(long const));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_y0 = 65025;
          long const* y = (long const*) malloc(_len_y0*sizeof(long const));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mask0 = 65025;
          int * mask = (int *) malloc(_len_mask0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mask0; _i0++) {
            mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = gl_scissor_pixels(ctx,n,x,y,mask);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].Buffer);
          }
          free(ctx);
          free(x);
          free(y);
          free(mask);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long n = 10;
          int _len_ctx0 = 100;
          struct TYPE_5__ * ctx = (struct TYPE_5__ *) malloc(_len_ctx0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__Buffer0 = 1;
          ctx[_i0].Buffer = (struct TYPE_4__ *) malloc(_len_ctx__i0__Buffer0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__Buffer0; _j0++) {
            ctx[_i0].Buffer->Xmin = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Buffer->Xmax = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Buffer->Ymin = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Buffer->Ymax = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_x0 = 100;
          long const* x = (long const*) malloc(_len_x0*sizeof(long const));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_y0 = 100;
          long const* y = (long const*) malloc(_len_y0*sizeof(long const));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mask0 = 100;
          int * mask = (int *) malloc(_len_mask0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mask0; _i0++) {
            mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = gl_scissor_pixels(ctx,n,x,y,mask);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].Buffer);
          }
          free(ctx);
          free(x);
          free(y);
          free(mask);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

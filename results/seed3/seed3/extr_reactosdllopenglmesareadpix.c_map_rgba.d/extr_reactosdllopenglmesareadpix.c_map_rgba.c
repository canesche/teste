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
struct TYPE_4__ {int MapRtoRsize; int MapGtoGsize; int MapBtoBsize; int MapAtoAsize; int* MapRtoR; int* MapGtoG; int* MapBtoB; int* MapAtoA; } ;
struct TYPE_5__ {TYPE_1__ Pixel; } ;
typedef  size_t GLint ;
typedef  int GLfloat ;
typedef  TYPE_2__ GLcontext ;

/* Variables and functions */

__attribute__((used)) static void map_rgba( GLcontext *ctx,
                      GLint n,
		      GLfloat red[], GLfloat green[],
		      GLfloat blue[], GLfloat alpha[] )
{
   GLfloat rscale = ctx->Pixel.MapRtoRsize-1;
   GLfloat gscale = ctx->Pixel.MapGtoGsize-1;
   GLfloat bscale = ctx->Pixel.MapBtoBsize-1;
   GLfloat ascale = ctx->Pixel.MapAtoAsize-1;
   GLint i;

   for (i=0;i<n;i++) {
      red[i]   = ctx->Pixel.MapRtoR[ (GLint) (red[i]   * rscale) ];
      green[i] = ctx->Pixel.MapGtoG[ (GLint) (green[i] * gscale) ];
      blue[i]  = ctx->Pixel.MapBtoB[ (GLint) (blue[i]  * bscale) ];
      alpha[i] = ctx->Pixel.MapAtoA[ (GLint) (alpha[i] * ascale) ];
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
          unsigned long n = 100;
          int _len_ctx0 = 1;
          struct TYPE_5__ * ctx = (struct TYPE_5__ *) malloc(_len_ctx0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].Pixel.MapRtoRsize = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Pixel.MapGtoGsize = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Pixel.MapBtoBsize = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Pixel.MapAtoAsize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__Pixel_MapRtoR0 = 1;
          ctx[_i0].Pixel.MapRtoR = (int *) malloc(_len_ctx__i0__Pixel_MapRtoR0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__Pixel_MapRtoR0; _j0++) {
            ctx[_i0].Pixel.MapRtoR[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__Pixel_MapGtoG0 = 1;
          ctx[_i0].Pixel.MapGtoG = (int *) malloc(_len_ctx__i0__Pixel_MapGtoG0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__Pixel_MapGtoG0; _j0++) {
            ctx[_i0].Pixel.MapGtoG[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__Pixel_MapBtoB0 = 1;
          ctx[_i0].Pixel.MapBtoB = (int *) malloc(_len_ctx__i0__Pixel_MapBtoB0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__Pixel_MapBtoB0; _j0++) {
            ctx[_i0].Pixel.MapBtoB[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__Pixel_MapAtoA0 = 1;
          ctx[_i0].Pixel.MapAtoA = (int *) malloc(_len_ctx__i0__Pixel_MapAtoA0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__Pixel_MapAtoA0; _j0++) {
            ctx[_i0].Pixel.MapAtoA[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_red0 = 1;
          int * red = (int *) malloc(_len_red0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_red0; _i0++) {
            red[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_green0 = 1;
          int * green = (int *) malloc(_len_green0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_green0; _i0++) {
            green[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_blue0 = 1;
          int * blue = (int *) malloc(_len_blue0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_blue0; _i0++) {
            blue[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_alpha0 = 1;
          int * alpha = (int *) malloc(_len_alpha0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_alpha0; _i0++) {
            alpha[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          map_rgba(ctx,n,red,green,blue,alpha);
          free(ctx);
          free(red);
          free(green);
          free(blue);
          free(alpha);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long n = 255;
          int _len_ctx0 = 65025;
          struct TYPE_5__ * ctx = (struct TYPE_5__ *) malloc(_len_ctx0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].Pixel.MapRtoRsize = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Pixel.MapGtoGsize = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Pixel.MapBtoBsize = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Pixel.MapAtoAsize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__Pixel_MapRtoR0 = 1;
          ctx[_i0].Pixel.MapRtoR = (int *) malloc(_len_ctx__i0__Pixel_MapRtoR0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__Pixel_MapRtoR0; _j0++) {
            ctx[_i0].Pixel.MapRtoR[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__Pixel_MapGtoG0 = 1;
          ctx[_i0].Pixel.MapGtoG = (int *) malloc(_len_ctx__i0__Pixel_MapGtoG0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__Pixel_MapGtoG0; _j0++) {
            ctx[_i0].Pixel.MapGtoG[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__Pixel_MapBtoB0 = 1;
          ctx[_i0].Pixel.MapBtoB = (int *) malloc(_len_ctx__i0__Pixel_MapBtoB0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__Pixel_MapBtoB0; _j0++) {
            ctx[_i0].Pixel.MapBtoB[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__Pixel_MapAtoA0 = 1;
          ctx[_i0].Pixel.MapAtoA = (int *) malloc(_len_ctx__i0__Pixel_MapAtoA0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__Pixel_MapAtoA0; _j0++) {
            ctx[_i0].Pixel.MapAtoA[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_red0 = 65025;
          int * red = (int *) malloc(_len_red0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_red0; _i0++) {
            red[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_green0 = 65025;
          int * green = (int *) malloc(_len_green0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_green0; _i0++) {
            green[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_blue0 = 65025;
          int * blue = (int *) malloc(_len_blue0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_blue0; _i0++) {
            blue[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_alpha0 = 65025;
          int * alpha = (int *) malloc(_len_alpha0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_alpha0; _i0++) {
            alpha[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          map_rgba(ctx,n,red,green,blue,alpha);
          free(ctx);
          free(red);
          free(green);
          free(blue);
          free(alpha);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long n = 10;
          int _len_ctx0 = 100;
          struct TYPE_5__ * ctx = (struct TYPE_5__ *) malloc(_len_ctx0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].Pixel.MapRtoRsize = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Pixel.MapGtoGsize = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Pixel.MapBtoBsize = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Pixel.MapAtoAsize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__Pixel_MapRtoR0 = 1;
          ctx[_i0].Pixel.MapRtoR = (int *) malloc(_len_ctx__i0__Pixel_MapRtoR0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__Pixel_MapRtoR0; _j0++) {
            ctx[_i0].Pixel.MapRtoR[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__Pixel_MapGtoG0 = 1;
          ctx[_i0].Pixel.MapGtoG = (int *) malloc(_len_ctx__i0__Pixel_MapGtoG0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__Pixel_MapGtoG0; _j0++) {
            ctx[_i0].Pixel.MapGtoG[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__Pixel_MapBtoB0 = 1;
          ctx[_i0].Pixel.MapBtoB = (int *) malloc(_len_ctx__i0__Pixel_MapBtoB0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__Pixel_MapBtoB0; _j0++) {
            ctx[_i0].Pixel.MapBtoB[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__Pixel_MapAtoA0 = 1;
          ctx[_i0].Pixel.MapAtoA = (int *) malloc(_len_ctx__i0__Pixel_MapAtoA0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__Pixel_MapAtoA0; _j0++) {
            ctx[_i0].Pixel.MapAtoA[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_red0 = 100;
          int * red = (int *) malloc(_len_red0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_red0; _i0++) {
            red[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_green0 = 100;
          int * green = (int *) malloc(_len_green0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_green0; _i0++) {
            green[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_blue0 = 100;
          int * blue = (int *) malloc(_len_blue0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_blue0; _i0++) {
            blue[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_alpha0 = 100;
          int * alpha = (int *) malloc(_len_alpha0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_alpha0; _i0++) {
            alpha[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          map_rgba(ctx,n,red,green,blue,alpha);
          free(ctx);
          free(red);
          free(green);
          free(blue);
          free(alpha);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

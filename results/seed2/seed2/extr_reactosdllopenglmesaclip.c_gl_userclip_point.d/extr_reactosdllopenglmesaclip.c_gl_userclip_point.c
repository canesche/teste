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
struct TYPE_4__ {float const** ClipEquation; scalar_t__* ClipEnabled; } ;
struct TYPE_5__ {TYPE_1__ Transform; } ;
typedef  size_t GLuint ;
typedef  float GLfloat ;
typedef  TYPE_2__ GLcontext ;

/* Variables and functions */
 size_t MAX_CLIP_PLANES ; 

GLuint gl_userclip_point( GLcontext* ctx, const GLfloat v[] )
{
   GLuint p;

   for (p=0;p<MAX_CLIP_PLANES;p++) {
      if (ctx->Transform.ClipEnabled[p]) {
	 GLfloat dot = v[0] * ctx->Transform.ClipEquation[p][0]
		     + v[1] * ctx->Transform.ClipEquation[p][1]
		     + v[2] * ctx->Transform.ClipEquation[p][2]
		     + v[3] * ctx->Transform.ClipEquation[p][3];
         if (dot < 0.0F) {
            return 0;
         }
      }
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
          int _len_ctx0 = 1;
          struct TYPE_5__ * ctx = (struct TYPE_5__ *) malloc(_len_ctx0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__Transform_ClipEquation0 = 1;
          ctx[_i0].Transform.ClipEquation = (const float **) malloc(_len_ctx__i0__Transform_ClipEquation0*sizeof(const float *));
          for(int _j0 = 0; _j0 < _len_ctx__i0__Transform_ClipEquation0; _j0++) {
            int _len_ctx__i0__Transform_ClipEquation1 = 1;
            ctx[_i0].Transform.ClipEquation[_j0] = (const float *) malloc(_len_ctx__i0__Transform_ClipEquation1*sizeof(const float));
            for(int _j1 = 0; _j1 < _len_ctx__i0__Transform_ClipEquation1; _j1++) {
              ctx[_i0].Transform.ClipEquation[_j0][_j1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_ctx__i0__Transform_ClipEnabled0 = 1;
          ctx[_i0].Transform.ClipEnabled = (long *) malloc(_len_ctx__i0__Transform_ClipEnabled0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ctx__i0__Transform_ClipEnabled0; _j0++) {
            ctx[_i0].Transform.ClipEnabled[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_v0 = 1;
          float const* v = (float const*) malloc(_len_v0*sizeof(float const));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          unsigned long benchRet = gl_userclip_point(ctx,v);
          printf("%lu\n", benchRet); 
          free(ctx);
          free(v);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ctx0 = 65025;
          struct TYPE_5__ * ctx = (struct TYPE_5__ *) malloc(_len_ctx0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__Transform_ClipEquation0 = 1;
          ctx[_i0].Transform.ClipEquation = (const float **) malloc(_len_ctx__i0__Transform_ClipEquation0*sizeof(const float *));
          for(int _j0 = 0; _j0 < _len_ctx__i0__Transform_ClipEquation0; _j0++) {
            int _len_ctx__i0__Transform_ClipEquation1 = 1;
            ctx[_i0].Transform.ClipEquation[_j0] = (const float *) malloc(_len_ctx__i0__Transform_ClipEquation1*sizeof(const float));
            for(int _j1 = 0; _j1 < _len_ctx__i0__Transform_ClipEquation1; _j1++) {
              ctx[_i0].Transform.ClipEquation[_j0][_j1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_ctx__i0__Transform_ClipEnabled0 = 1;
          ctx[_i0].Transform.ClipEnabled = (long *) malloc(_len_ctx__i0__Transform_ClipEnabled0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ctx__i0__Transform_ClipEnabled0; _j0++) {
            ctx[_i0].Transform.ClipEnabled[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_v0 = 65025;
          float const* v = (float const*) malloc(_len_v0*sizeof(float const));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          unsigned long benchRet = gl_userclip_point(ctx,v);
          printf("%lu\n", benchRet); 
          free(ctx);
          free(v);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ctx0 = 100;
          struct TYPE_5__ * ctx = (struct TYPE_5__ *) malloc(_len_ctx0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__Transform_ClipEquation0 = 1;
          ctx[_i0].Transform.ClipEquation = (const float **) malloc(_len_ctx__i0__Transform_ClipEquation0*sizeof(const float *));
          for(int _j0 = 0; _j0 < _len_ctx__i0__Transform_ClipEquation0; _j0++) {
            int _len_ctx__i0__Transform_ClipEquation1 = 1;
            ctx[_i0].Transform.ClipEquation[_j0] = (const float *) malloc(_len_ctx__i0__Transform_ClipEquation1*sizeof(const float));
            for(int _j1 = 0; _j1 < _len_ctx__i0__Transform_ClipEquation1; _j1++) {
              ctx[_i0].Transform.ClipEquation[_j0][_j1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_ctx__i0__Transform_ClipEnabled0 = 1;
          ctx[_i0].Transform.ClipEnabled = (long *) malloc(_len_ctx__i0__Transform_ClipEnabled0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ctx__i0__Transform_ClipEnabled0; _j0++) {
            ctx[_i0].Transform.ClipEnabled[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_v0 = 100;
          float const* v = (float const*) malloc(_len_v0*sizeof(float const));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          unsigned long benchRet = gl_userclip_point(ctx,v);
          printf("%lu\n", benchRet); 
          free(ctx);
          free(v);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

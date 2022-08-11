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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {char const* dictEnd; char const* previousDstEnd; char const* vBase; void const* base; } ;
typedef  TYPE_1__ ZSTD_DCtx ;

/* Variables and functions */

__attribute__((used)) static void ZSTD_decompress_insertDictionary(ZSTD_DCtx* ctx, const void* dict, size_t dictSize)
{
    ctx->dictEnd = ctx->previousDstEnd;
    ctx->vBase = (const char*)dict - ((const char*)(ctx->previousDstEnd) - (const char*)(ctx->base));
    ctx->base = dict;
    ctx->previousDstEnd = (const char*)dict + dictSize;
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
          unsigned long dictSize = 100;
          int _len_ctx0 = 1;
          struct TYPE_3__ * ctx = (struct TYPE_3__ *) malloc(_len_ctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__dictEnd0 = 1;
          ctx[_i0].dictEnd = (const char *) malloc(_len_ctx__i0__dictEnd0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_ctx__i0__dictEnd0; _j0++) {
            ctx[_i0].dictEnd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__previousDstEnd0 = 1;
          ctx[_i0].previousDstEnd = (const char *) malloc(_len_ctx__i0__previousDstEnd0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_ctx__i0__previousDstEnd0; _j0++) {
            ctx[_i0].previousDstEnd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__vBase0 = 1;
          ctx[_i0].vBase = (const char *) malloc(_len_ctx__i0__vBase0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_ctx__i0__vBase0; _j0++) {
            ctx[_i0].vBase[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__base0 = 1;
          ctx[_i0].base = (const void *) malloc(_len_ctx__i0__base0*sizeof(const void));
          for(int _j0 = 0; _j0 < _len_ctx__i0__base0; _j0++) {
            ctx[_i0].base[_j0] = 0;
          }
          }
          int _len_dict0 = 1;
          const void * dict = (const void *) malloc(_len_dict0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_dict0; _i0++) {
            dict[_i0] = 0;
          }
          ZSTD_decompress_insertDictionary(ctx,dict,dictSize);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].dictEnd);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].previousDstEnd);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].vBase);
          }
          free(ctx);
          free(dict);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long dictSize = 255;
          int _len_ctx0 = 65025;
          struct TYPE_3__ * ctx = (struct TYPE_3__ *) malloc(_len_ctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__dictEnd0 = 1;
          ctx[_i0].dictEnd = (const char *) malloc(_len_ctx__i0__dictEnd0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_ctx__i0__dictEnd0; _j0++) {
            ctx[_i0].dictEnd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__previousDstEnd0 = 1;
          ctx[_i0].previousDstEnd = (const char *) malloc(_len_ctx__i0__previousDstEnd0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_ctx__i0__previousDstEnd0; _j0++) {
            ctx[_i0].previousDstEnd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__vBase0 = 1;
          ctx[_i0].vBase = (const char *) malloc(_len_ctx__i0__vBase0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_ctx__i0__vBase0; _j0++) {
            ctx[_i0].vBase[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__base0 = 1;
          ctx[_i0].base = (const void *) malloc(_len_ctx__i0__base0*sizeof(const void));
          for(int _j0 = 0; _j0 < _len_ctx__i0__base0; _j0++) {
            ctx[_i0].base[_j0] = 0;
          }
          }
          int _len_dict0 = 65025;
          const void * dict = (const void *) malloc(_len_dict0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_dict0; _i0++) {
            dict[_i0] = 0;
          }
          ZSTD_decompress_insertDictionary(ctx,dict,dictSize);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].dictEnd);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].previousDstEnd);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].vBase);
          }
          free(ctx);
          free(dict);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long dictSize = 10;
          int _len_ctx0 = 100;
          struct TYPE_3__ * ctx = (struct TYPE_3__ *) malloc(_len_ctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__dictEnd0 = 1;
          ctx[_i0].dictEnd = (const char *) malloc(_len_ctx__i0__dictEnd0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_ctx__i0__dictEnd0; _j0++) {
            ctx[_i0].dictEnd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__previousDstEnd0 = 1;
          ctx[_i0].previousDstEnd = (const char *) malloc(_len_ctx__i0__previousDstEnd0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_ctx__i0__previousDstEnd0; _j0++) {
            ctx[_i0].previousDstEnd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__vBase0 = 1;
          ctx[_i0].vBase = (const char *) malloc(_len_ctx__i0__vBase0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_ctx__i0__vBase0; _j0++) {
            ctx[_i0].vBase[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__base0 = 1;
          ctx[_i0].base = (const void *) malloc(_len_ctx__i0__base0*sizeof(const void));
          for(int _j0 = 0; _j0 < _len_ctx__i0__base0; _j0++) {
            ctx[_i0].base[_j0] = 0;
          }
          }
          int _len_dict0 = 100;
          const void * dict = (const void *) malloc(_len_dict0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_dict0; _i0++) {
            dict[_i0] = 0;
          }
          ZSTD_decompress_insertDictionary(ctx,dict,dictSize);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].dictEnd);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].previousDstEnd);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].vBase);
          }
          free(ctx);
          free(dict);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

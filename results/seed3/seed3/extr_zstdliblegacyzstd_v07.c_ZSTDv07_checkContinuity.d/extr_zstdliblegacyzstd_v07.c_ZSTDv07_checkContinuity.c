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
struct TYPE_3__ {void const* previousDstEnd; void const* dictEnd; char const* vBase; void const* base; } ;
typedef  TYPE_1__ ZSTDv07_DCtx ;

/* Variables and functions */

__attribute__((used)) static void ZSTDv07_checkContinuity(ZSTDv07_DCtx* dctx, const void* dst)
{
    if (dst != dctx->previousDstEnd) {   /* not contiguous */
        dctx->dictEnd = dctx->previousDstEnd;
        dctx->vBase = (const char*)dst - ((const char*)(dctx->previousDstEnd) - (const char*)(dctx->base));
        dctx->base = dst;
        dctx->previousDstEnd = dst;
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
          int _len_dctx0 = 1;
          struct TYPE_3__ * dctx = (struct TYPE_3__ *) malloc(_len_dctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_dctx0; _i0++) {
              int _len_dctx__i0__previousDstEnd0 = 1;
          dctx[_i0].previousDstEnd = (const void *) malloc(_len_dctx__i0__previousDstEnd0*sizeof(const void));
          for(int _j0 = 0; _j0 < _len_dctx__i0__previousDstEnd0; _j0++) {
            dctx[_i0].previousDstEnd[_j0] = 0;
          }
          int _len_dctx__i0__dictEnd0 = 1;
          dctx[_i0].dictEnd = (const void *) malloc(_len_dctx__i0__dictEnd0*sizeof(const void));
          for(int _j0 = 0; _j0 < _len_dctx__i0__dictEnd0; _j0++) {
            dctx[_i0].dictEnd[_j0] = 0;
          }
          int _len_dctx__i0__vBase0 = 1;
          dctx[_i0].vBase = (const char *) malloc(_len_dctx__i0__vBase0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_dctx__i0__vBase0; _j0++) {
            dctx[_i0].vBase[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dctx__i0__base0 = 1;
          dctx[_i0].base = (const void *) malloc(_len_dctx__i0__base0*sizeof(const void));
          for(int _j0 = 0; _j0 < _len_dctx__i0__base0; _j0++) {
            dctx[_i0].base[_j0] = 0;
          }
          }
          int _len_dst0 = 1;
          const void * dst = (const void *) malloc(_len_dst0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = 0;
          }
          ZSTDv07_checkContinuity(dctx,dst);
          for(int _aux = 0; _aux < _len_dctx0; _aux++) {
          free(dctx[_aux].vBase);
          }
          free(dctx);
          free(dst);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dctx0 = 65025;
          struct TYPE_3__ * dctx = (struct TYPE_3__ *) malloc(_len_dctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_dctx0; _i0++) {
              int _len_dctx__i0__previousDstEnd0 = 1;
          dctx[_i0].previousDstEnd = (const void *) malloc(_len_dctx__i0__previousDstEnd0*sizeof(const void));
          for(int _j0 = 0; _j0 < _len_dctx__i0__previousDstEnd0; _j0++) {
            dctx[_i0].previousDstEnd[_j0] = 0;
          }
          int _len_dctx__i0__dictEnd0 = 1;
          dctx[_i0].dictEnd = (const void *) malloc(_len_dctx__i0__dictEnd0*sizeof(const void));
          for(int _j0 = 0; _j0 < _len_dctx__i0__dictEnd0; _j0++) {
            dctx[_i0].dictEnd[_j0] = 0;
          }
          int _len_dctx__i0__vBase0 = 1;
          dctx[_i0].vBase = (const char *) malloc(_len_dctx__i0__vBase0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_dctx__i0__vBase0; _j0++) {
            dctx[_i0].vBase[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dctx__i0__base0 = 1;
          dctx[_i0].base = (const void *) malloc(_len_dctx__i0__base0*sizeof(const void));
          for(int _j0 = 0; _j0 < _len_dctx__i0__base0; _j0++) {
            dctx[_i0].base[_j0] = 0;
          }
          }
          int _len_dst0 = 65025;
          const void * dst = (const void *) malloc(_len_dst0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = 0;
          }
          ZSTDv07_checkContinuity(dctx,dst);
          for(int _aux = 0; _aux < _len_dctx0; _aux++) {
          free(dctx[_aux].vBase);
          }
          free(dctx);
          free(dst);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dctx0 = 100;
          struct TYPE_3__ * dctx = (struct TYPE_3__ *) malloc(_len_dctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_dctx0; _i0++) {
              int _len_dctx__i0__previousDstEnd0 = 1;
          dctx[_i0].previousDstEnd = (const void *) malloc(_len_dctx__i0__previousDstEnd0*sizeof(const void));
          for(int _j0 = 0; _j0 < _len_dctx__i0__previousDstEnd0; _j0++) {
            dctx[_i0].previousDstEnd[_j0] = 0;
          }
          int _len_dctx__i0__dictEnd0 = 1;
          dctx[_i0].dictEnd = (const void *) malloc(_len_dctx__i0__dictEnd0*sizeof(const void));
          for(int _j0 = 0; _j0 < _len_dctx__i0__dictEnd0; _j0++) {
            dctx[_i0].dictEnd[_j0] = 0;
          }
          int _len_dctx__i0__vBase0 = 1;
          dctx[_i0].vBase = (const char *) malloc(_len_dctx__i0__vBase0*sizeof(const char));
          for(int _j0 = 0; _j0 < _len_dctx__i0__vBase0; _j0++) {
            dctx[_i0].vBase[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dctx__i0__base0 = 1;
          dctx[_i0].base = (const void *) malloc(_len_dctx__i0__base0*sizeof(const void));
          for(int _j0 = 0; _j0 < _len_dctx__i0__base0; _j0++) {
            dctx[_i0].base[_j0] = 0;
          }
          }
          int _len_dst0 = 100;
          const void * dst = (const void *) malloc(_len_dst0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = 0;
          }
          ZSTDv07_checkContinuity(dctx,dst);
          for(int _aux = 0; _aux < _len_dctx0; _aux++) {
          free(dctx[_aux].vBase);
          }
          free(dctx);
          free(dst);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

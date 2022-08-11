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
typedef  int count_int ;
struct TYPE_3__ {int* htab; } ;
typedef  TYPE_1__ GifCtx ;

/* Variables and functions */

__attribute__((used)) static void
cl_hash(register count_int chsize, GifCtx *ctx)          /* reset code table */

{

        register count_int *htab_p = ctx->htab+chsize;

        register long i;
        register long m1 = -1;

        i = chsize - 16;
        do {                            /* might use Sys V memset(3) here */
                *(htab_p-16) = m1;
                *(htab_p-15) = m1;
                *(htab_p-14) = m1;
                *(htab_p-13) = m1;
                *(htab_p-12) = m1;
                *(htab_p-11) = m1;
                *(htab_p-10) = m1;
                *(htab_p-9) = m1;
                *(htab_p-8) = m1;
                *(htab_p-7) = m1;
                *(htab_p-6) = m1;
                *(htab_p-5) = m1;
                *(htab_p-4) = m1;
                *(htab_p-3) = m1;
                *(htab_p-2) = m1;
                *(htab_p-1) = m1;
                htab_p -= 16;
        } while ((i -= 16) >= 0);

        for ( i += 16; i > 0; --i )
                *--htab_p = m1;
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
          int chsize = 100;
          int _len_ctx0 = 1;
          struct TYPE_3__ * ctx = (struct TYPE_3__ *) malloc(_len_ctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__htab0 = 1;
          ctx[_i0].htab = (int *) malloc(_len_ctx__i0__htab0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__htab0; _j0++) {
            ctx[_i0].htab[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          cl_hash(chsize,ctx);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].htab);
          }
          free(ctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int chsize = 255;
          int _len_ctx0 = 65025;
          struct TYPE_3__ * ctx = (struct TYPE_3__ *) malloc(_len_ctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__htab0 = 1;
          ctx[_i0].htab = (int *) malloc(_len_ctx__i0__htab0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__htab0; _j0++) {
            ctx[_i0].htab[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          cl_hash(chsize,ctx);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].htab);
          }
          free(ctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int chsize = 10;
          int _len_ctx0 = 100;
          struct TYPE_3__ * ctx = (struct TYPE_3__ *) malloc(_len_ctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__htab0 = 1;
          ctx[_i0].htab = (int *) malloc(_len_ctx__i0__htab0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__htab0; _j0++) {
            ctx[_i0].htab[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          cl_hash(chsize,ctx);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].htab);
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

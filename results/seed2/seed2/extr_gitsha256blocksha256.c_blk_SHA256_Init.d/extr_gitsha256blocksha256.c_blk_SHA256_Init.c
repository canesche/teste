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
struct TYPE_3__ {int* state; scalar_t__ size; scalar_t__ offset; } ;
typedef  TYPE_1__ blk_SHA256_CTX ;

/* Variables and functions */

void blk_SHA256_Init(blk_SHA256_CTX *ctx)
{
	ctx->offset = 0;
	ctx->size = 0;
	ctx->state[0] = 0x6a09e667ul;
	ctx->state[1] = 0xbb67ae85ul;
	ctx->state[2] = 0x3c6ef372ul;
	ctx->state[3] = 0xa54ff53aul;
	ctx->state[4] = 0x510e527ful;
	ctx->state[5] = 0x9b05688cul;
	ctx->state[6] = 0x1f83d9abul;
	ctx->state[7] = 0x5be0cd19ul;
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
          struct TYPE_3__ * ctx = (struct TYPE_3__ *) malloc(_len_ctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__state0 = 1;
          ctx[_i0].state = (int *) malloc(_len_ctx__i0__state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__state0; _j0++) {
            ctx[_i0].state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          blk_SHA256_Init(ctx);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].state);
          }
          free(ctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ctx0 = 65025;
          struct TYPE_3__ * ctx = (struct TYPE_3__ *) malloc(_len_ctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__state0 = 1;
          ctx[_i0].state = (int *) malloc(_len_ctx__i0__state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__state0; _j0++) {
            ctx[_i0].state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          blk_SHA256_Init(ctx);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].state);
          }
          free(ctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ctx0 = 100;
          struct TYPE_3__ * ctx = (struct TYPE_3__ *) malloc(_len_ctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__state0 = 1;
          ctx[_i0].state = (int *) malloc(_len_ctx__i0__state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__state0; _j0++) {
            ctx[_i0].state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          blk_SHA256_Init(ctx);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].state);
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

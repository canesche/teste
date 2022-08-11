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
struct TYPE_3__ {int* state; scalar_t__ length; scalar_t__ curlen; } ;
typedef  TYPE_1__ _picohash_sha256_ctx_t ;

/* Variables and functions */

inline void _picohash_sha224_init(_picohash_sha256_ctx_t *ctx)
{
    ctx->curlen = 0;
    ctx->length = 0;
    ctx->state[0] = 0xc1059ed8UL;
    ctx->state[1] = 0x367cd507UL;
    ctx->state[2] = 0x3070dd17UL;
    ctx->state[3] = 0xf70e5939UL;
    ctx->state[4] = 0xffc00b31UL;
    ctx->state[5] = 0x68581511UL;
    ctx->state[6] = 0x64f98fa7UL;
    ctx->state[7] = 0xbefa4fa4UL;
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
        ctx[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].curlen = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _picohash_sha224_init(ctx);
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
        ctx[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].curlen = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _picohash_sha224_init(ctx);
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
        ctx[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].curlen = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _picohash_sha224_init(ctx);
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

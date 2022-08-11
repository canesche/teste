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

/* Type definitions */
struct crypto4xx_ctx {scalar_t__ sa_len; int /*<<< orphan*/ * sa_out; int /*<<< orphan*/ * sa_in; int /*<<< orphan*/  dev; } ;
struct crypto4xx_alg {int /*<<< orphan*/  dev; } ;

/* Variables and functions */

__attribute__((used)) static void crypto4xx_ctx_init(struct crypto4xx_alg *amcc_alg,
			       struct crypto4xx_ctx *ctx)
{
	ctx->dev = amcc_alg->dev;
	ctx->sa_in = NULL;
	ctx->sa_out = NULL;
	ctx->sa_len = 0;
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
          int _len_amcc_alg0 = 1;
          struct crypto4xx_alg * amcc_alg = (struct crypto4xx_alg *) malloc(_len_amcc_alg0*sizeof(struct crypto4xx_alg));
          for(int _i0 = 0; _i0 < _len_amcc_alg0; _i0++) {
            amcc_alg[_i0].dev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx0 = 1;
          struct crypto4xx_ctx * ctx = (struct crypto4xx_ctx *) malloc(_len_ctx0*sizeof(struct crypto4xx_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].sa_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__sa_out0 = 1;
          ctx[_i0].sa_out = (int *) malloc(_len_ctx__i0__sa_out0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__sa_out0; _j0++) {
            ctx[_i0].sa_out[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__sa_in0 = 1;
          ctx[_i0].sa_in = (int *) malloc(_len_ctx__i0__sa_in0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__sa_in0; _j0++) {
            ctx[_i0].sa_in[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].dev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          crypto4xx_ctx_init(amcc_alg,ctx);
          free(amcc_alg);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].sa_out);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].sa_in);
          }
          free(ctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_amcc_alg0 = 65025;
          struct crypto4xx_alg * amcc_alg = (struct crypto4xx_alg *) malloc(_len_amcc_alg0*sizeof(struct crypto4xx_alg));
          for(int _i0 = 0; _i0 < _len_amcc_alg0; _i0++) {
            amcc_alg[_i0].dev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx0 = 65025;
          struct crypto4xx_ctx * ctx = (struct crypto4xx_ctx *) malloc(_len_ctx0*sizeof(struct crypto4xx_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].sa_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__sa_out0 = 1;
          ctx[_i0].sa_out = (int *) malloc(_len_ctx__i0__sa_out0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__sa_out0; _j0++) {
            ctx[_i0].sa_out[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__sa_in0 = 1;
          ctx[_i0].sa_in = (int *) malloc(_len_ctx__i0__sa_in0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__sa_in0; _j0++) {
            ctx[_i0].sa_in[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].dev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          crypto4xx_ctx_init(amcc_alg,ctx);
          free(amcc_alg);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].sa_out);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].sa_in);
          }
          free(ctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_amcc_alg0 = 100;
          struct crypto4xx_alg * amcc_alg = (struct crypto4xx_alg *) malloc(_len_amcc_alg0*sizeof(struct crypto4xx_alg));
          for(int _i0 = 0; _i0 < _len_amcc_alg0; _i0++) {
            amcc_alg[_i0].dev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx0 = 100;
          struct crypto4xx_ctx * ctx = (struct crypto4xx_ctx *) malloc(_len_ctx0*sizeof(struct crypto4xx_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].sa_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__sa_out0 = 1;
          ctx[_i0].sa_out = (int *) malloc(_len_ctx__i0__sa_out0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__sa_out0; _j0++) {
            ctx[_i0].sa_out[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__sa_in0 = 1;
          ctx[_i0].sa_in = (int *) malloc(_len_ctx__i0__sa_in0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__sa_in0; _j0++) {
            ctx[_i0].sa_in[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].dev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          crypto4xx_ctx_init(amcc_alg,ctx);
          free(amcc_alg);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].sa_out);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].sa_in);
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

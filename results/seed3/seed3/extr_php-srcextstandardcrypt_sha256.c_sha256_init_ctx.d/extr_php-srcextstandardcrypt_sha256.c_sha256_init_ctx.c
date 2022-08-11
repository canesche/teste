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
struct sha256_ctx {int* H; scalar_t__ buflen; scalar_t__* total; } ;

/* Variables and functions */

__attribute__((used)) static void sha256_init_ctx(struct sha256_ctx *ctx) {
	ctx->H[0] = 0x6a09e667;
	ctx->H[1] = 0xbb67ae85;
	ctx->H[2] = 0x3c6ef372;
	ctx->H[3] = 0xa54ff53a;
	ctx->H[4] = 0x510e527f;
	ctx->H[5] = 0x9b05688c;
	ctx->H[6] = 0x1f83d9ab;
	ctx->H[7] = 0x5be0cd19;

	ctx->total[0] = ctx->total[1] = 0;
	ctx->buflen = 0;
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
          struct sha256_ctx * ctx = (struct sha256_ctx *) malloc(_len_ctx0*sizeof(struct sha256_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__H0 = 1;
          ctx[_i0].H = (int *) malloc(_len_ctx__i0__H0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__H0; _j0++) {
            ctx[_i0].H[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].buflen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__total0 = 1;
          ctx[_i0].total = (long *) malloc(_len_ctx__i0__total0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ctx__i0__total0; _j0++) {
            ctx[_i0].total[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          sha256_init_ctx(ctx);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].H);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].total);
          }
          free(ctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ctx0 = 65025;
          struct sha256_ctx * ctx = (struct sha256_ctx *) malloc(_len_ctx0*sizeof(struct sha256_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__H0 = 1;
          ctx[_i0].H = (int *) malloc(_len_ctx__i0__H0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__H0; _j0++) {
            ctx[_i0].H[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].buflen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__total0 = 1;
          ctx[_i0].total = (long *) malloc(_len_ctx__i0__total0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ctx__i0__total0; _j0++) {
            ctx[_i0].total[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          sha256_init_ctx(ctx);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].H);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].total);
          }
          free(ctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ctx0 = 100;
          struct sha256_ctx * ctx = (struct sha256_ctx *) malloc(_len_ctx0*sizeof(struct sha256_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__H0 = 1;
          ctx[_i0].H = (int *) malloc(_len_ctx__i0__H0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__H0; _j0++) {
            ctx[_i0].H[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].buflen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__total0 = 1;
          ctx[_i0].total = (long *) malloc(_len_ctx__i0__total0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ctx__i0__total0; _j0++) {
            ctx[_i0].total[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          sha256_init_ctx(ctx);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].H);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].total);
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

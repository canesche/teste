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
struct TYPE_3__ {int* ihv; int ubc_check; int detect_coll; int /*<<< orphan*/ * callback; scalar_t__ reduced_round_coll; int /*<<< orphan*/  safe_hash; scalar_t__ found_collision; scalar_t__ total; } ;
typedef  TYPE_1__ SHA1_CTX ;

/* Variables and functions */
 int /*<<< orphan*/  SHA1DC_INIT_SAFE_HASH_DEFAULT ; 

void SHA1DCInit(SHA1_CTX* ctx)
{
	ctx->total = 0;
	ctx->ihv[0] = 0x67452301;
	ctx->ihv[1] = 0xEFCDAB89;
	ctx->ihv[2] = 0x98BADCFE;
	ctx->ihv[3] = 0x10325476;
	ctx->ihv[4] = 0xC3D2E1F0;
	ctx->found_collision = 0;
	ctx->safe_hash = SHA1DC_INIT_SAFE_HASH_DEFAULT;
	ctx->ubc_check = 1;
	ctx->detect_coll = 1;
	ctx->reduced_round_coll = 0;
	ctx->callback = NULL;
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
              int _len_ctx__i0__ihv0 = 1;
          ctx[_i0].ihv = (int *) malloc(_len_ctx__i0__ihv0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__ihv0; _j0++) {
            ctx[_i0].ihv[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].ubc_check = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].detect_coll = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__callback0 = 1;
          ctx[_i0].callback = (int *) malloc(_len_ctx__i0__callback0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__callback0; _j0++) {
            ctx[_i0].callback[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].reduced_round_coll = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].safe_hash = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].found_collision = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].total = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          SHA1DCInit(ctx);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].ihv);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].callback);
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
              int _len_ctx__i0__ihv0 = 1;
          ctx[_i0].ihv = (int *) malloc(_len_ctx__i0__ihv0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__ihv0; _j0++) {
            ctx[_i0].ihv[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].ubc_check = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].detect_coll = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__callback0 = 1;
          ctx[_i0].callback = (int *) malloc(_len_ctx__i0__callback0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__callback0; _j0++) {
            ctx[_i0].callback[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].reduced_round_coll = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].safe_hash = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].found_collision = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].total = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          SHA1DCInit(ctx);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].ihv);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].callback);
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
              int _len_ctx__i0__ihv0 = 1;
          ctx[_i0].ihv = (int *) malloc(_len_ctx__i0__ihv0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__ihv0; _j0++) {
            ctx[_i0].ihv[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].ubc_check = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].detect_coll = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__callback0 = 1;
          ctx[_i0].callback = (int *) malloc(_len_ctx__i0__callback0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__callback0; _j0++) {
            ctx[_i0].callback[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].reduced_round_coll = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].safe_hash = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].found_collision = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].total = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          SHA1DCInit(ctx);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].ihv);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].callback);
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

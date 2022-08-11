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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u32 ;
typedef  int u16 ;
struct jit_ctx {unsigned int imm_count; scalar_t__* imms; int* offsets; int idx; int /*<<< orphan*/  flags; scalar_t__* target; scalar_t__ epilogue_bytes; scalar_t__ prologue_bytes; TYPE_1__* prog; } ;
struct TYPE_2__ {int len; } ;

/* Variables and functions */
 int /*<<< orphan*/  FLAG_IMM_OVERFLOW ; 

__attribute__((used)) static u16 imm_offset(u32 k, struct jit_ctx *ctx)
{
	unsigned int i = 0, offset;
	u16 imm;

	/* on the "fake" run we just count them (duplicates included) */
	if (ctx->target == NULL) {
		ctx->imm_count++;
		return 0;
	}

	while ((i < ctx->imm_count) && ctx->imms[i]) {
		if (ctx->imms[i] == k)
			break;
		i++;
	}

	if (ctx->imms[i] == 0)
		ctx->imms[i] = k;

	/* constants go just after the epilogue */
	offset =  ctx->offsets[ctx->prog->len - 1] * 4;
	offset += ctx->prologue_bytes;
	offset += ctx->epilogue_bytes;
	offset += i * 4;

	ctx->target[offset / 4] = k;

	/* PC in ARM mode == address of the instruction + 8 */
	imm = offset - (8 + ctx->idx * 4);

	if (imm & ~0xfff) {
		/*
		 * literal pool is too far, signal it into flags. we
		 * can only detect it on the second pass unfortunately.
		 */
		ctx->flags |= FLAG_IMM_OVERFLOW;
		return 0;
	}

	return imm;
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
          long k = 100;
          int _len_ctx0 = 1;
          struct jit_ctx * ctx = (struct jit_ctx *) malloc(_len_ctx0*sizeof(struct jit_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].imm_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__imms0 = 1;
          ctx[_i0].imms = (long *) malloc(_len_ctx__i0__imms0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ctx__i0__imms0; _j0++) {
            ctx[_i0].imms[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__offsets0 = 1;
          ctx[_i0].offsets = (int *) malloc(_len_ctx__i0__offsets0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__offsets0; _j0++) {
            ctx[_i0].offsets[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].idx = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__target0 = 1;
          ctx[_i0].target = (long *) malloc(_len_ctx__i0__target0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ctx__i0__target0; _j0++) {
            ctx[_i0].target[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].epilogue_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].prologue_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__prog0 = 1;
          ctx[_i0].prog = (struct TYPE_2__ *) malloc(_len_ctx__i0__prog0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__prog0; _j0++) {
            ctx[_i0].prog->len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = imm_offset(k,ctx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].imms);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].offsets);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].target);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].prog);
          }
          free(ctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          long k = 255;
          int _len_ctx0 = 65025;
          struct jit_ctx * ctx = (struct jit_ctx *) malloc(_len_ctx0*sizeof(struct jit_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].imm_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__imms0 = 1;
          ctx[_i0].imms = (long *) malloc(_len_ctx__i0__imms0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ctx__i0__imms0; _j0++) {
            ctx[_i0].imms[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__offsets0 = 1;
          ctx[_i0].offsets = (int *) malloc(_len_ctx__i0__offsets0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__offsets0; _j0++) {
            ctx[_i0].offsets[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].idx = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__target0 = 1;
          ctx[_i0].target = (long *) malloc(_len_ctx__i0__target0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ctx__i0__target0; _j0++) {
            ctx[_i0].target[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].epilogue_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].prologue_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__prog0 = 1;
          ctx[_i0].prog = (struct TYPE_2__ *) malloc(_len_ctx__i0__prog0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__prog0; _j0++) {
            ctx[_i0].prog->len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = imm_offset(k,ctx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].imms);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].offsets);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].target);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].prog);
          }
          free(ctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long k = 10;
          int _len_ctx0 = 100;
          struct jit_ctx * ctx = (struct jit_ctx *) malloc(_len_ctx0*sizeof(struct jit_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].imm_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__imms0 = 1;
          ctx[_i0].imms = (long *) malloc(_len_ctx__i0__imms0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ctx__i0__imms0; _j0++) {
            ctx[_i0].imms[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__offsets0 = 1;
          ctx[_i0].offsets = (int *) malloc(_len_ctx__i0__offsets0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__offsets0; _j0++) {
            ctx[_i0].offsets[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].idx = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__target0 = 1;
          ctx[_i0].target = (long *) malloc(_len_ctx__i0__target0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ctx__i0__target0; _j0++) {
            ctx[_i0].target[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].epilogue_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].prologue_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__prog0 = 1;
          ctx[_i0].prog = (struct TYPE_2__ *) malloc(_len_ctx__i0__prog0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__prog0; _j0++) {
            ctx[_i0].prog->len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = imm_offset(k,ctx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].imms);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].offsets);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].target);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].prog);
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

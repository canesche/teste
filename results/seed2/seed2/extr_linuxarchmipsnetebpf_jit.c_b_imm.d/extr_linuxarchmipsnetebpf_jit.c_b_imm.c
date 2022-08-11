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
typedef  int u32 ;
struct jit_ctx {int* offsets; int idx; int /*<<< orphan*/  gen_b_offsets; } ;

/* Variables and functions */
 int OFFSETS_B_CONV ; 

__attribute__((used)) static u32 b_imm(unsigned int tgt, struct jit_ctx *ctx)
{
	if (!ctx->gen_b_offsets)
		return 0;

	/*
	 * We want a pc-relative branch.  tgt is the instruction offset
	 * we want to jump to.

	 * Branch on MIPS:
	 * I: target_offset <- sign_extend(offset)
	 * I+1: PC += target_offset (delay slot)
	 *
	 * ctx->idx currently points to the branch instruction
	 * but the offset is added to the delay slot so we need
	 * to subtract 4.
	 */
	return (ctx->offsets[tgt] & ~OFFSETS_B_CONV) -
		(ctx->idx * 4) - 4;
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
          unsigned int tgt = 100;
          int _len_ctx0 = 1;
          struct jit_ctx * ctx = (struct jit_ctx *) malloc(_len_ctx0*sizeof(struct jit_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__offsets0 = 1;
          ctx[_i0].offsets = (int *) malloc(_len_ctx__i0__offsets0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__offsets0; _j0++) {
            ctx[_i0].offsets[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].idx = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].gen_b_offsets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = b_imm(tgt,ctx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].offsets);
          }
          free(ctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int tgt = 255;
          int _len_ctx0 = 65025;
          struct jit_ctx * ctx = (struct jit_ctx *) malloc(_len_ctx0*sizeof(struct jit_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__offsets0 = 1;
          ctx[_i0].offsets = (int *) malloc(_len_ctx__i0__offsets0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__offsets0; _j0++) {
            ctx[_i0].offsets[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].idx = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].gen_b_offsets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = b_imm(tgt,ctx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].offsets);
          }
          free(ctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int tgt = 10;
          int _len_ctx0 = 100;
          struct jit_ctx * ctx = (struct jit_ctx *) malloc(_len_ctx0*sizeof(struct jit_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__offsets0 = 1;
          ctx[_i0].offsets = (int *) malloc(_len_ctx__i0__offsets0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__offsets0; _j0++) {
            ctx[_i0].offsets[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].idx = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].gen_b_offsets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = b_imm(tgt,ctx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].offsets);
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

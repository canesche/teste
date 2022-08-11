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
struct jit_ctx {unsigned long* offsets; scalar_t__ target; } ;

/* Variables and functions */
 unsigned long OFFSETS_B_CONV ; 

__attribute__((used)) static unsigned int j_target(struct jit_ctx *ctx, int target_idx)
{
	unsigned long target_va, base_va;
	unsigned int r;

	if (!ctx->target)
		return 0;

	base_va = (unsigned long)ctx->target;
	target_va = base_va + (ctx->offsets[target_idx] & ~OFFSETS_B_CONV);

	if ((base_va & ~0x0ffffffful) != (target_va & ~0x0ffffffful))
		return (unsigned int)-1;
	r = target_va & 0x0ffffffful;
	return r;
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
          int target_idx = 100;
          int _len_ctx0 = 1;
          struct jit_ctx * ctx = (struct jit_ctx *) malloc(_len_ctx0*sizeof(struct jit_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__offsets0 = 1;
          ctx[_i0].offsets = (unsigned long *) malloc(_len_ctx__i0__offsets0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_ctx__i0__offsets0; _j0++) {
            ctx[_i0].offsets[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].target = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = j_target(ctx,target_idx);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].offsets);
          }
          free(ctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int target_idx = 255;
          int _len_ctx0 = 65025;
          struct jit_ctx * ctx = (struct jit_ctx *) malloc(_len_ctx0*sizeof(struct jit_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__offsets0 = 1;
          ctx[_i0].offsets = (unsigned long *) malloc(_len_ctx__i0__offsets0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_ctx__i0__offsets0; _j0++) {
            ctx[_i0].offsets[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].target = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = j_target(ctx,target_idx);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].offsets);
          }
          free(ctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int target_idx = 10;
          int _len_ctx0 = 100;
          struct jit_ctx * ctx = (struct jit_ctx *) malloc(_len_ctx0*sizeof(struct jit_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__offsets0 = 1;
          ctx[_i0].offsets = (unsigned long *) malloc(_len_ctx__i0__offsets0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_ctx__i0__offsets0; _j0++) {
            ctx[_i0].offsets[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].target = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = j_target(ctx,target_idx);
          printf("%u\n", benchRet); 
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

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
typedef  void* uint32_t ;
struct dce110_aux_registers {int dummy; } ;
struct dc_context {int dummy; } ;
struct aux_engine {void* inst; int /*<<< orphan*/ * funcs; scalar_t__ max_defer_write_retry; scalar_t__ delay; struct dc_context* ctx; int /*<<< orphan*/ * ddc; } ;
struct aux_engine_dce110 {struct aux_engine base; struct dce110_aux_registers const* regs; void* timeout_period; } ;

/* Variables and functions */
 int /*<<< orphan*/  aux_engine_funcs ; 

struct aux_engine *dce110_aux_engine_construct(struct aux_engine_dce110 *aux_engine110,
		struct dc_context *ctx,
		uint32_t inst,
		uint32_t timeout_period,
		const struct dce110_aux_registers *regs)
{
	aux_engine110->base.ddc = NULL;
	aux_engine110->base.ctx = ctx;
	aux_engine110->base.delay = 0;
	aux_engine110->base.max_defer_write_retry = 0;
	aux_engine110->base.funcs = &aux_engine_funcs;
	aux_engine110->base.inst = inst;
	aux_engine110->timeout_period = timeout_period;
	aux_engine110->regs = regs;

	return &aux_engine110->base;
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
          int _len_aux_engine1100 = 1;
          struct aux_engine_dce110 * aux_engine110 = (struct aux_engine_dce110 *) malloc(_len_aux_engine1100*sizeof(struct aux_engine_dce110));
          for(int _i0 = 0; _i0 < _len_aux_engine1100; _i0++) {
              int _len_aux_engine110__i0__base_funcs0 = 1;
          aux_engine110[_i0].base.funcs = (int *) malloc(_len_aux_engine110__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_aux_engine110__i0__base_funcs0; _j0++) {
            aux_engine110[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        aux_engine110[_i0].base.max_defer_write_retry = ((-2 * (next_i()%2)) + 1) * next_i();
        aux_engine110[_i0].base.delay = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_aux_engine110__i0__base_ctx0 = 1;
          aux_engine110[_i0].base.ctx = (struct dc_context *) malloc(_len_aux_engine110__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_aux_engine110__i0__base_ctx0; _j0++) {
            aux_engine110[_i0].base.ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_aux_engine110__i0__base_ddc0 = 1;
          aux_engine110[_i0].base.ddc = (int *) malloc(_len_aux_engine110__i0__base_ddc0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_aux_engine110__i0__base_ddc0; _j0++) {
            aux_engine110[_i0].base.ddc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_aux_engine110__i0__regs0 = 1;
          aux_engine110[_i0].regs = (const struct dce110_aux_registers *) malloc(_len_aux_engine110__i0__regs0*sizeof(const struct dce110_aux_registers));
          for(int _j0 = 0; _j0 < _len_aux_engine110__i0__regs0; _j0++) {
              }
          }
          int _len_ctx0 = 1;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * inst;
          void * timeout_period;
          int _len_regs0 = 1;
          const struct dce110_aux_registers * regs = (const struct dce110_aux_registers *) malloc(_len_regs0*sizeof(const struct dce110_aux_registers));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              }
          struct aux_engine * benchRet = dce110_aux_engine_construct(aux_engine110,ctx,inst,timeout_period,regs);
          printf("%ld\n", (*benchRet).max_defer_write_retry);
          printf("%ld\n", (*benchRet).delay);
          for(int _aux = 0; _aux < _len_aux_engine1100; _aux++) {
          free(aux_engine110[_aux].regs);
          }
          free(aux_engine110);
          free(ctx);
          free(regs);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_aux_engine1100 = 65025;
          struct aux_engine_dce110 * aux_engine110 = (struct aux_engine_dce110 *) malloc(_len_aux_engine1100*sizeof(struct aux_engine_dce110));
          for(int _i0 = 0; _i0 < _len_aux_engine1100; _i0++) {
              int _len_aux_engine110__i0__base_funcs0 = 1;
          aux_engine110[_i0].base.funcs = (int *) malloc(_len_aux_engine110__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_aux_engine110__i0__base_funcs0; _j0++) {
            aux_engine110[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        aux_engine110[_i0].base.max_defer_write_retry = ((-2 * (next_i()%2)) + 1) * next_i();
        aux_engine110[_i0].base.delay = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_aux_engine110__i0__base_ctx0 = 1;
          aux_engine110[_i0].base.ctx = (struct dc_context *) malloc(_len_aux_engine110__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_aux_engine110__i0__base_ctx0; _j0++) {
            aux_engine110[_i0].base.ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_aux_engine110__i0__base_ddc0 = 1;
          aux_engine110[_i0].base.ddc = (int *) malloc(_len_aux_engine110__i0__base_ddc0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_aux_engine110__i0__base_ddc0; _j0++) {
            aux_engine110[_i0].base.ddc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_aux_engine110__i0__regs0 = 1;
          aux_engine110[_i0].regs = (const struct dce110_aux_registers *) malloc(_len_aux_engine110__i0__regs0*sizeof(const struct dce110_aux_registers));
          for(int _j0 = 0; _j0 < _len_aux_engine110__i0__regs0; _j0++) {
              }
          }
          int _len_ctx0 = 65025;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * inst;
          void * timeout_period;
          int _len_regs0 = 65025;
          const struct dce110_aux_registers * regs = (const struct dce110_aux_registers *) malloc(_len_regs0*sizeof(const struct dce110_aux_registers));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              }
          struct aux_engine * benchRet = dce110_aux_engine_construct(aux_engine110,ctx,inst,timeout_period,regs);
          printf("%ld\n", (*benchRet).max_defer_write_retry);
          printf("%ld\n", (*benchRet).delay);
          for(int _aux = 0; _aux < _len_aux_engine1100; _aux++) {
          free(aux_engine110[_aux].regs);
          }
          free(aux_engine110);
          free(ctx);
          free(regs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_aux_engine1100 = 100;
          struct aux_engine_dce110 * aux_engine110 = (struct aux_engine_dce110 *) malloc(_len_aux_engine1100*sizeof(struct aux_engine_dce110));
          for(int _i0 = 0; _i0 < _len_aux_engine1100; _i0++) {
              int _len_aux_engine110__i0__base_funcs0 = 1;
          aux_engine110[_i0].base.funcs = (int *) malloc(_len_aux_engine110__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_aux_engine110__i0__base_funcs0; _j0++) {
            aux_engine110[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        aux_engine110[_i0].base.max_defer_write_retry = ((-2 * (next_i()%2)) + 1) * next_i();
        aux_engine110[_i0].base.delay = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_aux_engine110__i0__base_ctx0 = 1;
          aux_engine110[_i0].base.ctx = (struct dc_context *) malloc(_len_aux_engine110__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_aux_engine110__i0__base_ctx0; _j0++) {
            aux_engine110[_i0].base.ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_aux_engine110__i0__base_ddc0 = 1;
          aux_engine110[_i0].base.ddc = (int *) malloc(_len_aux_engine110__i0__base_ddc0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_aux_engine110__i0__base_ddc0; _j0++) {
            aux_engine110[_i0].base.ddc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_aux_engine110__i0__regs0 = 1;
          aux_engine110[_i0].regs = (const struct dce110_aux_registers *) malloc(_len_aux_engine110__i0__regs0*sizeof(const struct dce110_aux_registers));
          for(int _j0 = 0; _j0 < _len_aux_engine110__i0__regs0; _j0++) {
              }
          }
          int _len_ctx0 = 100;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * inst;
          void * timeout_period;
          int _len_regs0 = 100;
          const struct dce110_aux_registers * regs = (const struct dce110_aux_registers *) malloc(_len_regs0*sizeof(const struct dce110_aux_registers));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              }
          struct aux_engine * benchRet = dce110_aux_engine_construct(aux_engine110,ctx,inst,timeout_period,regs);
          printf("%ld\n", (*benchRet).max_defer_write_retry);
          printf("%ld\n", (*benchRet).delay);
          for(int _aux = 0; _aux < _len_aux_engine1100; _aux++) {
          free(aux_engine110[_aux].regs);
          }
          free(aux_engine110);
          free(ctx);
          free(regs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

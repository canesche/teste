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
typedef  int /*<<< orphan*/  uint32_t ;
struct dce_opp_shift {int dummy; } ;
struct dce_opp_registers {int dummy; } ;
struct dce_opp_mask {int dummy; } ;
struct TYPE_2__ {int /*<<< orphan*/  inst; struct dc_context* ctx; int /*<<< orphan*/ * funcs; } ;
struct dce110_opp {struct dce_opp_mask const* opp_mask; struct dce_opp_shift const* opp_shift; struct dce_opp_registers const* regs; TYPE_1__ base; } ;
struct dc_context {int dummy; } ;

/* Variables and functions */
 int /*<<< orphan*/  funcs ; 

void dce110_opp_construct(struct dce110_opp *opp110,
	struct dc_context *ctx,
	uint32_t inst,
	const struct dce_opp_registers *regs,
	const struct dce_opp_shift *opp_shift,
	const struct dce_opp_mask *opp_mask)
{
	opp110->base.funcs = &funcs;

	opp110->base.ctx = ctx;

	opp110->base.inst = inst;

	opp110->regs = regs;
	opp110->opp_shift = opp_shift;
	opp110->opp_mask = opp_mask;
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
          int inst = 100;
          int _len_opp1100 = 1;
          struct dce110_opp * opp110 = (struct dce110_opp *) malloc(_len_opp1100*sizeof(struct dce110_opp));
          for(int _i0 = 0; _i0 < _len_opp1100; _i0++) {
              int _len_opp110__i0__opp_mask0 = 1;
          opp110[_i0].opp_mask = (const struct dce_opp_mask *) malloc(_len_opp110__i0__opp_mask0*sizeof(const struct dce_opp_mask));
          for(int _j0 = 0; _j0 < _len_opp110__i0__opp_mask0; _j0++) {
              }
          int _len_opp110__i0__opp_shift0 = 1;
          opp110[_i0].opp_shift = (const struct dce_opp_shift *) malloc(_len_opp110__i0__opp_shift0*sizeof(const struct dce_opp_shift));
          for(int _j0 = 0; _j0 < _len_opp110__i0__opp_shift0; _j0++) {
              }
          int _len_opp110__i0__regs0 = 1;
          opp110[_i0].regs = (const struct dce_opp_registers *) malloc(_len_opp110__i0__regs0*sizeof(const struct dce_opp_registers));
          for(int _j0 = 0; _j0 < _len_opp110__i0__regs0; _j0++) {
              }
        opp110[_i0].base.inst = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_opp110__i0__base_ctx0 = 1;
          opp110[_i0].base.ctx = (struct dc_context *) malloc(_len_opp110__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_opp110__i0__base_ctx0; _j0++) {
            opp110[_i0].base.ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_opp110__i0__base_funcs0 = 1;
          opp110[_i0].base.funcs = (int *) malloc(_len_opp110__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_opp110__i0__base_funcs0; _j0++) {
            opp110[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 1;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 1;
          const struct dce_opp_registers * regs = (const struct dce_opp_registers *) malloc(_len_regs0*sizeof(const struct dce_opp_registers));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              }
          int _len_opp_shift0 = 1;
          const struct dce_opp_shift * opp_shift = (const struct dce_opp_shift *) malloc(_len_opp_shift0*sizeof(const struct dce_opp_shift));
          for(int _i0 = 0; _i0 < _len_opp_shift0; _i0++) {
              }
          int _len_opp_mask0 = 1;
          const struct dce_opp_mask * opp_mask = (const struct dce_opp_mask *) malloc(_len_opp_mask0*sizeof(const struct dce_opp_mask));
          for(int _i0 = 0; _i0 < _len_opp_mask0; _i0++) {
              }
          dce110_opp_construct(opp110,ctx,inst,regs,opp_shift,opp_mask);
          for(int _aux = 0; _aux < _len_opp1100; _aux++) {
          free(opp110[_aux].opp_mask);
          }
          for(int _aux = 0; _aux < _len_opp1100; _aux++) {
          free(opp110[_aux].opp_shift);
          }
          for(int _aux = 0; _aux < _len_opp1100; _aux++) {
          free(opp110[_aux].regs);
          }
          free(opp110);
          free(ctx);
          free(regs);
          free(opp_shift);
          free(opp_mask);
        
        break;
    }
    // big-arr
    case 1:
    {
          int inst = 255;
          int _len_opp1100 = 65025;
          struct dce110_opp * opp110 = (struct dce110_opp *) malloc(_len_opp1100*sizeof(struct dce110_opp));
          for(int _i0 = 0; _i0 < _len_opp1100; _i0++) {
              int _len_opp110__i0__opp_mask0 = 1;
          opp110[_i0].opp_mask = (const struct dce_opp_mask *) malloc(_len_opp110__i0__opp_mask0*sizeof(const struct dce_opp_mask));
          for(int _j0 = 0; _j0 < _len_opp110__i0__opp_mask0; _j0++) {
              }
          int _len_opp110__i0__opp_shift0 = 1;
          opp110[_i0].opp_shift = (const struct dce_opp_shift *) malloc(_len_opp110__i0__opp_shift0*sizeof(const struct dce_opp_shift));
          for(int _j0 = 0; _j0 < _len_opp110__i0__opp_shift0; _j0++) {
              }
          int _len_opp110__i0__regs0 = 1;
          opp110[_i0].regs = (const struct dce_opp_registers *) malloc(_len_opp110__i0__regs0*sizeof(const struct dce_opp_registers));
          for(int _j0 = 0; _j0 < _len_opp110__i0__regs0; _j0++) {
              }
        opp110[_i0].base.inst = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_opp110__i0__base_ctx0 = 1;
          opp110[_i0].base.ctx = (struct dc_context *) malloc(_len_opp110__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_opp110__i0__base_ctx0; _j0++) {
            opp110[_i0].base.ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_opp110__i0__base_funcs0 = 1;
          opp110[_i0].base.funcs = (int *) malloc(_len_opp110__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_opp110__i0__base_funcs0; _j0++) {
            opp110[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 65025;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 65025;
          const struct dce_opp_registers * regs = (const struct dce_opp_registers *) malloc(_len_regs0*sizeof(const struct dce_opp_registers));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              }
          int _len_opp_shift0 = 65025;
          const struct dce_opp_shift * opp_shift = (const struct dce_opp_shift *) malloc(_len_opp_shift0*sizeof(const struct dce_opp_shift));
          for(int _i0 = 0; _i0 < _len_opp_shift0; _i0++) {
              }
          int _len_opp_mask0 = 65025;
          const struct dce_opp_mask * opp_mask = (const struct dce_opp_mask *) malloc(_len_opp_mask0*sizeof(const struct dce_opp_mask));
          for(int _i0 = 0; _i0 < _len_opp_mask0; _i0++) {
              }
          dce110_opp_construct(opp110,ctx,inst,regs,opp_shift,opp_mask);
          for(int _aux = 0; _aux < _len_opp1100; _aux++) {
          free(opp110[_aux].opp_mask);
          }
          for(int _aux = 0; _aux < _len_opp1100; _aux++) {
          free(opp110[_aux].opp_shift);
          }
          for(int _aux = 0; _aux < _len_opp1100; _aux++) {
          free(opp110[_aux].regs);
          }
          free(opp110);
          free(ctx);
          free(regs);
          free(opp_shift);
          free(opp_mask);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int inst = 10;
          int _len_opp1100 = 100;
          struct dce110_opp * opp110 = (struct dce110_opp *) malloc(_len_opp1100*sizeof(struct dce110_opp));
          for(int _i0 = 0; _i0 < _len_opp1100; _i0++) {
              int _len_opp110__i0__opp_mask0 = 1;
          opp110[_i0].opp_mask = (const struct dce_opp_mask *) malloc(_len_opp110__i0__opp_mask0*sizeof(const struct dce_opp_mask));
          for(int _j0 = 0; _j0 < _len_opp110__i0__opp_mask0; _j0++) {
              }
          int _len_opp110__i0__opp_shift0 = 1;
          opp110[_i0].opp_shift = (const struct dce_opp_shift *) malloc(_len_opp110__i0__opp_shift0*sizeof(const struct dce_opp_shift));
          for(int _j0 = 0; _j0 < _len_opp110__i0__opp_shift0; _j0++) {
              }
          int _len_opp110__i0__regs0 = 1;
          opp110[_i0].regs = (const struct dce_opp_registers *) malloc(_len_opp110__i0__regs0*sizeof(const struct dce_opp_registers));
          for(int _j0 = 0; _j0 < _len_opp110__i0__regs0; _j0++) {
              }
        opp110[_i0].base.inst = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_opp110__i0__base_ctx0 = 1;
          opp110[_i0].base.ctx = (struct dc_context *) malloc(_len_opp110__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_opp110__i0__base_ctx0; _j0++) {
            opp110[_i0].base.ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_opp110__i0__base_funcs0 = 1;
          opp110[_i0].base.funcs = (int *) malloc(_len_opp110__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_opp110__i0__base_funcs0; _j0++) {
            opp110[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 100;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 100;
          const struct dce_opp_registers * regs = (const struct dce_opp_registers *) malloc(_len_regs0*sizeof(const struct dce_opp_registers));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              }
          int _len_opp_shift0 = 100;
          const struct dce_opp_shift * opp_shift = (const struct dce_opp_shift *) malloc(_len_opp_shift0*sizeof(const struct dce_opp_shift));
          for(int _i0 = 0; _i0 < _len_opp_shift0; _i0++) {
              }
          int _len_opp_mask0 = 100;
          const struct dce_opp_mask * opp_mask = (const struct dce_opp_mask *) malloc(_len_opp_mask0*sizeof(const struct dce_opp_mask));
          for(int _i0 = 0; _i0 < _len_opp_mask0; _i0++) {
              }
          dce110_opp_construct(opp110,ctx,inst,regs,opp_shift,opp_mask);
          for(int _aux = 0; _aux < _len_opp1100; _aux++) {
          free(opp110[_aux].opp_mask);
          }
          for(int _aux = 0; _aux < _len_opp1100; _aux++) {
          free(opp110[_aux].opp_shift);
          }
          for(int _aux = 0; _aux < _len_opp1100; _aux++) {
          free(opp110[_aux].regs);
          }
          free(opp110);
          free(ctx);
          free(regs);
          free(opp_shift);
          free(opp_mask);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

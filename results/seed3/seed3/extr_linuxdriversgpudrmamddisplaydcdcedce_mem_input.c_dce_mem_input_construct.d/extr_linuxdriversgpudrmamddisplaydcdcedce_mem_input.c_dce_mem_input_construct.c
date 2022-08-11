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
       3            linked\n\
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
struct dce_mem_input_shift {int dummy; } ;
struct dce_mem_input_registers {int dummy; } ;
struct dce_mem_input_mask {int dummy; } ;
struct TYPE_2__ {int inst; int /*<<< orphan*/ * funcs; struct dc_context* ctx; } ;
struct dce_mem_input {struct dce_mem_input_mask const* masks; struct dce_mem_input_shift const* shifts; struct dce_mem_input_registers const* regs; TYPE_1__ base; } ;
struct dc_context {int dummy; } ;

/* Variables and functions */
 int /*<<< orphan*/  dce_mi_funcs ; 

void dce_mem_input_construct(
	struct dce_mem_input *dce_mi,
	struct dc_context *ctx,
	int inst,
	const struct dce_mem_input_registers *regs,
	const struct dce_mem_input_shift *mi_shift,
	const struct dce_mem_input_mask *mi_mask)
{
	dce_mi->base.ctx = ctx;

	dce_mi->base.inst = inst;
	dce_mi->base.funcs = &dce_mi_funcs;

	dce_mi->regs = regs;
	dce_mi->shifts = mi_shift;
	dce_mi->masks = mi_mask;
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
          int _len_dce_mi0 = 1;
          struct dce_mem_input * dce_mi = (struct dce_mem_input *) malloc(_len_dce_mi0*sizeof(struct dce_mem_input));
          for(int _i0 = 0; _i0 < _len_dce_mi0; _i0++) {
              int _len_dce_mi__i0__masks0 = 1;
          dce_mi[_i0].masks = (const struct dce_mem_input_mask *) malloc(_len_dce_mi__i0__masks0*sizeof(const struct dce_mem_input_mask));
          for(int _j0 = 0; _j0 < _len_dce_mi__i0__masks0; _j0++) {
              }
          int _len_dce_mi__i0__shifts0 = 1;
          dce_mi[_i0].shifts = (const struct dce_mem_input_shift *) malloc(_len_dce_mi__i0__shifts0*sizeof(const struct dce_mem_input_shift));
          for(int _j0 = 0; _j0 < _len_dce_mi__i0__shifts0; _j0++) {
              }
          int _len_dce_mi__i0__regs0 = 1;
          dce_mi[_i0].regs = (const struct dce_mem_input_registers *) malloc(_len_dce_mi__i0__regs0*sizeof(const struct dce_mem_input_registers));
          for(int _j0 = 0; _j0 < _len_dce_mi__i0__regs0; _j0++) {
              }
        dce_mi[_i0].base.inst = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dce_mi__i0__base_funcs0 = 1;
          dce_mi[_i0].base.funcs = (int *) malloc(_len_dce_mi__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dce_mi__i0__base_funcs0; _j0++) {
            dce_mi[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dce_mi__i0__base_ctx0 = 1;
          dce_mi[_i0].base.ctx = (struct dc_context *) malloc(_len_dce_mi__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_dce_mi__i0__base_ctx0; _j0++) {
            dce_mi[_i0].base.ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 1;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 1;
          const struct dce_mem_input_registers * regs = (const struct dce_mem_input_registers *) malloc(_len_regs0*sizeof(const struct dce_mem_input_registers));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              }
          int _len_mi_shift0 = 1;
          const struct dce_mem_input_shift * mi_shift = (const struct dce_mem_input_shift *) malloc(_len_mi_shift0*sizeof(const struct dce_mem_input_shift));
          for(int _i0 = 0; _i0 < _len_mi_shift0; _i0++) {
              }
          int _len_mi_mask0 = 1;
          const struct dce_mem_input_mask * mi_mask = (const struct dce_mem_input_mask *) malloc(_len_mi_mask0*sizeof(const struct dce_mem_input_mask));
          for(int _i0 = 0; _i0 < _len_mi_mask0; _i0++) {
              }
          dce_mem_input_construct(dce_mi,ctx,inst,regs,mi_shift,mi_mask);
          for(int _aux = 0; _aux < _len_dce_mi0; _aux++) {
          free(dce_mi[_aux].masks);
          }
          for(int _aux = 0; _aux < _len_dce_mi0; _aux++) {
          free(dce_mi[_aux].shifts);
          }
          for(int _aux = 0; _aux < _len_dce_mi0; _aux++) {
          free(dce_mi[_aux].regs);
          }
          free(dce_mi);
          free(ctx);
          free(regs);
          free(mi_shift);
          free(mi_mask);
        
        break;
    }
    // big-arr
    case 1:
    {
          int inst = 255;
          int _len_dce_mi0 = 65025;
          struct dce_mem_input * dce_mi = (struct dce_mem_input *) malloc(_len_dce_mi0*sizeof(struct dce_mem_input));
          for(int _i0 = 0; _i0 < _len_dce_mi0; _i0++) {
              int _len_dce_mi__i0__masks0 = 1;
          dce_mi[_i0].masks = (const struct dce_mem_input_mask *) malloc(_len_dce_mi__i0__masks0*sizeof(const struct dce_mem_input_mask));
          for(int _j0 = 0; _j0 < _len_dce_mi__i0__masks0; _j0++) {
              }
          int _len_dce_mi__i0__shifts0 = 1;
          dce_mi[_i0].shifts = (const struct dce_mem_input_shift *) malloc(_len_dce_mi__i0__shifts0*sizeof(const struct dce_mem_input_shift));
          for(int _j0 = 0; _j0 < _len_dce_mi__i0__shifts0; _j0++) {
              }
          int _len_dce_mi__i0__regs0 = 1;
          dce_mi[_i0].regs = (const struct dce_mem_input_registers *) malloc(_len_dce_mi__i0__regs0*sizeof(const struct dce_mem_input_registers));
          for(int _j0 = 0; _j0 < _len_dce_mi__i0__regs0; _j0++) {
              }
        dce_mi[_i0].base.inst = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dce_mi__i0__base_funcs0 = 1;
          dce_mi[_i0].base.funcs = (int *) malloc(_len_dce_mi__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dce_mi__i0__base_funcs0; _j0++) {
            dce_mi[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dce_mi__i0__base_ctx0 = 1;
          dce_mi[_i0].base.ctx = (struct dc_context *) malloc(_len_dce_mi__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_dce_mi__i0__base_ctx0; _j0++) {
            dce_mi[_i0].base.ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 65025;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 65025;
          const struct dce_mem_input_registers * regs = (const struct dce_mem_input_registers *) malloc(_len_regs0*sizeof(const struct dce_mem_input_registers));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              }
          int _len_mi_shift0 = 65025;
          const struct dce_mem_input_shift * mi_shift = (const struct dce_mem_input_shift *) malloc(_len_mi_shift0*sizeof(const struct dce_mem_input_shift));
          for(int _i0 = 0; _i0 < _len_mi_shift0; _i0++) {
              }
          int _len_mi_mask0 = 65025;
          const struct dce_mem_input_mask * mi_mask = (const struct dce_mem_input_mask *) malloc(_len_mi_mask0*sizeof(const struct dce_mem_input_mask));
          for(int _i0 = 0; _i0 < _len_mi_mask0; _i0++) {
              }
          dce_mem_input_construct(dce_mi,ctx,inst,regs,mi_shift,mi_mask);
          for(int _aux = 0; _aux < _len_dce_mi0; _aux++) {
          free(dce_mi[_aux].masks);
          }
          for(int _aux = 0; _aux < _len_dce_mi0; _aux++) {
          free(dce_mi[_aux].shifts);
          }
          for(int _aux = 0; _aux < _len_dce_mi0; _aux++) {
          free(dce_mi[_aux].regs);
          }
          free(dce_mi);
          free(ctx);
          free(regs);
          free(mi_shift);
          free(mi_mask);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int inst = 10;
          int _len_dce_mi0 = 100;
          struct dce_mem_input * dce_mi = (struct dce_mem_input *) malloc(_len_dce_mi0*sizeof(struct dce_mem_input));
          for(int _i0 = 0; _i0 < _len_dce_mi0; _i0++) {
              int _len_dce_mi__i0__masks0 = 1;
          dce_mi[_i0].masks = (const struct dce_mem_input_mask *) malloc(_len_dce_mi__i0__masks0*sizeof(const struct dce_mem_input_mask));
          for(int _j0 = 0; _j0 < _len_dce_mi__i0__masks0; _j0++) {
              }
          int _len_dce_mi__i0__shifts0 = 1;
          dce_mi[_i0].shifts = (const struct dce_mem_input_shift *) malloc(_len_dce_mi__i0__shifts0*sizeof(const struct dce_mem_input_shift));
          for(int _j0 = 0; _j0 < _len_dce_mi__i0__shifts0; _j0++) {
              }
          int _len_dce_mi__i0__regs0 = 1;
          dce_mi[_i0].regs = (const struct dce_mem_input_registers *) malloc(_len_dce_mi__i0__regs0*sizeof(const struct dce_mem_input_registers));
          for(int _j0 = 0; _j0 < _len_dce_mi__i0__regs0; _j0++) {
              }
        dce_mi[_i0].base.inst = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dce_mi__i0__base_funcs0 = 1;
          dce_mi[_i0].base.funcs = (int *) malloc(_len_dce_mi__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dce_mi__i0__base_funcs0; _j0++) {
            dce_mi[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dce_mi__i0__base_ctx0 = 1;
          dce_mi[_i0].base.ctx = (struct dc_context *) malloc(_len_dce_mi__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_dce_mi__i0__base_ctx0; _j0++) {
            dce_mi[_i0].base.ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 100;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 100;
          const struct dce_mem_input_registers * regs = (const struct dce_mem_input_registers *) malloc(_len_regs0*sizeof(const struct dce_mem_input_registers));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              }
          int _len_mi_shift0 = 100;
          const struct dce_mem_input_shift * mi_shift = (const struct dce_mem_input_shift *) malloc(_len_mi_shift0*sizeof(const struct dce_mem_input_shift));
          for(int _i0 = 0; _i0 < _len_mi_shift0; _i0++) {
              }
          int _len_mi_mask0 = 100;
          const struct dce_mem_input_mask * mi_mask = (const struct dce_mem_input_mask *) malloc(_len_mi_mask0*sizeof(const struct dce_mem_input_mask));
          for(int _i0 = 0; _i0 < _len_mi_mask0; _i0++) {
              }
          dce_mem_input_construct(dce_mi,ctx,inst,regs,mi_shift,mi_mask);
          for(int _aux = 0; _aux < _len_dce_mi0; _aux++) {
          free(dce_mi[_aux].masks);
          }
          for(int _aux = 0; _aux < _len_dce_mi0; _aux++) {
          free(dce_mi[_aux].shifts);
          }
          for(int _aux = 0; _aux < _len_dce_mi0; _aux++) {
          free(dce_mi[_aux].regs);
          }
          free(dce_mi);
          free(ctx);
          free(regs);
          free(mi_shift);
          free(mi_mask);
        
        break;
    }
    // linked
    case 3:
    {
          int inst = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dce_mi0 = 1;
          struct dce_mem_input * dce_mi = (struct dce_mem_input *) malloc(_len_dce_mi0*sizeof(struct dce_mem_input));
          for(int _i0 = 0; _i0 < _len_dce_mi0; _i0++) {
              int _len_dce_mi__i0__masks0 = 1;
          dce_mi[_i0].masks = (const struct dce_mem_input_mask *) malloc(_len_dce_mi__i0__masks0*sizeof(const struct dce_mem_input_mask));
          for(int _j0 = 0; _j0 < _len_dce_mi__i0__masks0; _j0++) {
              }
          int _len_dce_mi__i0__shifts0 = 1;
          dce_mi[_i0].shifts = (const struct dce_mem_input_shift *) malloc(_len_dce_mi__i0__shifts0*sizeof(const struct dce_mem_input_shift));
          for(int _j0 = 0; _j0 < _len_dce_mi__i0__shifts0; _j0++) {
              }
          int _len_dce_mi__i0__regs0 = 1;
          dce_mi[_i0].regs = (const struct dce_mem_input_registers *) malloc(_len_dce_mi__i0__regs0*sizeof(const struct dce_mem_input_registers));
          for(int _j0 = 0; _j0 < _len_dce_mi__i0__regs0; _j0++) {
              }
        dce_mi[_i0].base.inst = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dce_mi__i0__base_funcs0 = 1;
          dce_mi[_i0].base.funcs = (int *) malloc(_len_dce_mi__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dce_mi__i0__base_funcs0; _j0++) {
            dce_mi[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dce_mi__i0__base_ctx0 = 1;
          dce_mi[_i0].base.ctx = (struct dc_context *) malloc(_len_dce_mi__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_dce_mi__i0__base_ctx0; _j0++) {
            dce_mi[_i0].base.ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 1;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 1;
          const struct dce_mem_input_registers * regs = (const struct dce_mem_input_registers *) malloc(_len_regs0*sizeof(const struct dce_mem_input_registers));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              }
          int _len_mi_shift0 = 1;
          const struct dce_mem_input_shift * mi_shift = (const struct dce_mem_input_shift *) malloc(_len_mi_shift0*sizeof(const struct dce_mem_input_shift));
          for(int _i0 = 0; _i0 < _len_mi_shift0; _i0++) {
              }
          int _len_mi_mask0 = 1;
          const struct dce_mem_input_mask * mi_mask = (const struct dce_mem_input_mask *) malloc(_len_mi_mask0*sizeof(const struct dce_mem_input_mask));
          for(int _i0 = 0; _i0 < _len_mi_mask0; _i0++) {
              }
          dce_mem_input_construct(dce_mi,ctx,inst,regs,mi_shift,mi_mask);
          for(int _aux = 0; _aux < _len_dce_mi0; _aux++) {
          free(dce_mi[_aux].masks);
          }
          for(int _aux = 0; _aux < _len_dce_mi0; _aux++) {
          free(dce_mi[_aux].shifts);
          }
          for(int _aux = 0; _aux < _len_dce_mi0; _aux++) {
          free(dce_mi[_aux].regs);
          }
          free(dce_mi);
          free(ctx);
          free(regs);
          free(mi_shift);
          free(mi_mask);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

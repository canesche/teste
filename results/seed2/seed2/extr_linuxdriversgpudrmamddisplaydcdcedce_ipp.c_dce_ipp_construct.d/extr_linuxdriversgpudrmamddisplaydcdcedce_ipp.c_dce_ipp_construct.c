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
struct dce_ipp_shift {int dummy; } ;
struct dce_ipp_registers {int dummy; } ;
struct dce_ipp_mask {int dummy; } ;
struct TYPE_2__ {int inst; int /*<<< orphan*/ * funcs; struct dc_context* ctx; } ;
struct dce_ipp {struct dce_ipp_mask const* ipp_mask; struct dce_ipp_shift const* ipp_shift; struct dce_ipp_registers const* regs; TYPE_1__ base; } ;
struct dc_context {int dummy; } ;

/* Variables and functions */
 int /*<<< orphan*/  dce_ipp_funcs ; 

void dce_ipp_construct(
	struct dce_ipp *ipp_dce,
	struct dc_context *ctx,
	int inst,
	const struct dce_ipp_registers *regs,
	const struct dce_ipp_shift *ipp_shift,
	const struct dce_ipp_mask *ipp_mask)
{
	ipp_dce->base.ctx = ctx;
	ipp_dce->base.inst = inst;
	ipp_dce->base.funcs = &dce_ipp_funcs;

	ipp_dce->regs = regs;
	ipp_dce->ipp_shift = ipp_shift;
	ipp_dce->ipp_mask = ipp_mask;
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
          int _len_ipp_dce0 = 1;
          struct dce_ipp * ipp_dce = (struct dce_ipp *) malloc(_len_ipp_dce0*sizeof(struct dce_ipp));
          for(int _i0 = 0; _i0 < _len_ipp_dce0; _i0++) {
              int _len_ipp_dce__i0__ipp_mask0 = 1;
          ipp_dce[_i0].ipp_mask = (const struct dce_ipp_mask *) malloc(_len_ipp_dce__i0__ipp_mask0*sizeof(const struct dce_ipp_mask));
          for(int _j0 = 0; _j0 < _len_ipp_dce__i0__ipp_mask0; _j0++) {
              }
          int _len_ipp_dce__i0__ipp_shift0 = 1;
          ipp_dce[_i0].ipp_shift = (const struct dce_ipp_shift *) malloc(_len_ipp_dce__i0__ipp_shift0*sizeof(const struct dce_ipp_shift));
          for(int _j0 = 0; _j0 < _len_ipp_dce__i0__ipp_shift0; _j0++) {
              }
          int _len_ipp_dce__i0__regs0 = 1;
          ipp_dce[_i0].regs = (const struct dce_ipp_registers *) malloc(_len_ipp_dce__i0__regs0*sizeof(const struct dce_ipp_registers));
          for(int _j0 = 0; _j0 < _len_ipp_dce__i0__regs0; _j0++) {
              }
        ipp_dce[_i0].base.inst = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ipp_dce__i0__base_funcs0 = 1;
          ipp_dce[_i0].base.funcs = (int *) malloc(_len_ipp_dce__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ipp_dce__i0__base_funcs0; _j0++) {
            ipp_dce[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ipp_dce__i0__base_ctx0 = 1;
          ipp_dce[_i0].base.ctx = (struct dc_context *) malloc(_len_ipp_dce__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_ipp_dce__i0__base_ctx0; _j0++) {
            ipp_dce[_i0].base.ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 1;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 1;
          const struct dce_ipp_registers * regs = (const struct dce_ipp_registers *) malloc(_len_regs0*sizeof(const struct dce_ipp_registers));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              }
          int _len_ipp_shift0 = 1;
          const struct dce_ipp_shift * ipp_shift = (const struct dce_ipp_shift *) malloc(_len_ipp_shift0*sizeof(const struct dce_ipp_shift));
          for(int _i0 = 0; _i0 < _len_ipp_shift0; _i0++) {
              }
          int _len_ipp_mask0 = 1;
          const struct dce_ipp_mask * ipp_mask = (const struct dce_ipp_mask *) malloc(_len_ipp_mask0*sizeof(const struct dce_ipp_mask));
          for(int _i0 = 0; _i0 < _len_ipp_mask0; _i0++) {
              }
          dce_ipp_construct(ipp_dce,ctx,inst,regs,ipp_shift,ipp_mask);
          for(int _aux = 0; _aux < _len_ipp_dce0; _aux++) {
          free(ipp_dce[_aux].ipp_mask);
          }
          for(int _aux = 0; _aux < _len_ipp_dce0; _aux++) {
          free(ipp_dce[_aux].ipp_shift);
          }
          for(int _aux = 0; _aux < _len_ipp_dce0; _aux++) {
          free(ipp_dce[_aux].regs);
          }
          free(ipp_dce);
          free(ctx);
          free(regs);
          free(ipp_shift);
          free(ipp_mask);
        
        break;
    }
    // big-arr
    case 1:
    {
          int inst = 255;
          int _len_ipp_dce0 = 65025;
          struct dce_ipp * ipp_dce = (struct dce_ipp *) malloc(_len_ipp_dce0*sizeof(struct dce_ipp));
          for(int _i0 = 0; _i0 < _len_ipp_dce0; _i0++) {
              int _len_ipp_dce__i0__ipp_mask0 = 1;
          ipp_dce[_i0].ipp_mask = (const struct dce_ipp_mask *) malloc(_len_ipp_dce__i0__ipp_mask0*sizeof(const struct dce_ipp_mask));
          for(int _j0 = 0; _j0 < _len_ipp_dce__i0__ipp_mask0; _j0++) {
              }
          int _len_ipp_dce__i0__ipp_shift0 = 1;
          ipp_dce[_i0].ipp_shift = (const struct dce_ipp_shift *) malloc(_len_ipp_dce__i0__ipp_shift0*sizeof(const struct dce_ipp_shift));
          for(int _j0 = 0; _j0 < _len_ipp_dce__i0__ipp_shift0; _j0++) {
              }
          int _len_ipp_dce__i0__regs0 = 1;
          ipp_dce[_i0].regs = (const struct dce_ipp_registers *) malloc(_len_ipp_dce__i0__regs0*sizeof(const struct dce_ipp_registers));
          for(int _j0 = 0; _j0 < _len_ipp_dce__i0__regs0; _j0++) {
              }
        ipp_dce[_i0].base.inst = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ipp_dce__i0__base_funcs0 = 1;
          ipp_dce[_i0].base.funcs = (int *) malloc(_len_ipp_dce__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ipp_dce__i0__base_funcs0; _j0++) {
            ipp_dce[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ipp_dce__i0__base_ctx0 = 1;
          ipp_dce[_i0].base.ctx = (struct dc_context *) malloc(_len_ipp_dce__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_ipp_dce__i0__base_ctx0; _j0++) {
            ipp_dce[_i0].base.ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 65025;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 65025;
          const struct dce_ipp_registers * regs = (const struct dce_ipp_registers *) malloc(_len_regs0*sizeof(const struct dce_ipp_registers));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              }
          int _len_ipp_shift0 = 65025;
          const struct dce_ipp_shift * ipp_shift = (const struct dce_ipp_shift *) malloc(_len_ipp_shift0*sizeof(const struct dce_ipp_shift));
          for(int _i0 = 0; _i0 < _len_ipp_shift0; _i0++) {
              }
          int _len_ipp_mask0 = 65025;
          const struct dce_ipp_mask * ipp_mask = (const struct dce_ipp_mask *) malloc(_len_ipp_mask0*sizeof(const struct dce_ipp_mask));
          for(int _i0 = 0; _i0 < _len_ipp_mask0; _i0++) {
              }
          dce_ipp_construct(ipp_dce,ctx,inst,regs,ipp_shift,ipp_mask);
          for(int _aux = 0; _aux < _len_ipp_dce0; _aux++) {
          free(ipp_dce[_aux].ipp_mask);
          }
          for(int _aux = 0; _aux < _len_ipp_dce0; _aux++) {
          free(ipp_dce[_aux].ipp_shift);
          }
          for(int _aux = 0; _aux < _len_ipp_dce0; _aux++) {
          free(ipp_dce[_aux].regs);
          }
          free(ipp_dce);
          free(ctx);
          free(regs);
          free(ipp_shift);
          free(ipp_mask);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int inst = 10;
          int _len_ipp_dce0 = 100;
          struct dce_ipp * ipp_dce = (struct dce_ipp *) malloc(_len_ipp_dce0*sizeof(struct dce_ipp));
          for(int _i0 = 0; _i0 < _len_ipp_dce0; _i0++) {
              int _len_ipp_dce__i0__ipp_mask0 = 1;
          ipp_dce[_i0].ipp_mask = (const struct dce_ipp_mask *) malloc(_len_ipp_dce__i0__ipp_mask0*sizeof(const struct dce_ipp_mask));
          for(int _j0 = 0; _j0 < _len_ipp_dce__i0__ipp_mask0; _j0++) {
              }
          int _len_ipp_dce__i0__ipp_shift0 = 1;
          ipp_dce[_i0].ipp_shift = (const struct dce_ipp_shift *) malloc(_len_ipp_dce__i0__ipp_shift0*sizeof(const struct dce_ipp_shift));
          for(int _j0 = 0; _j0 < _len_ipp_dce__i0__ipp_shift0; _j0++) {
              }
          int _len_ipp_dce__i0__regs0 = 1;
          ipp_dce[_i0].regs = (const struct dce_ipp_registers *) malloc(_len_ipp_dce__i0__regs0*sizeof(const struct dce_ipp_registers));
          for(int _j0 = 0; _j0 < _len_ipp_dce__i0__regs0; _j0++) {
              }
        ipp_dce[_i0].base.inst = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ipp_dce__i0__base_funcs0 = 1;
          ipp_dce[_i0].base.funcs = (int *) malloc(_len_ipp_dce__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ipp_dce__i0__base_funcs0; _j0++) {
            ipp_dce[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ipp_dce__i0__base_ctx0 = 1;
          ipp_dce[_i0].base.ctx = (struct dc_context *) malloc(_len_ipp_dce__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_ipp_dce__i0__base_ctx0; _j0++) {
            ipp_dce[_i0].base.ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 100;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 100;
          const struct dce_ipp_registers * regs = (const struct dce_ipp_registers *) malloc(_len_regs0*sizeof(const struct dce_ipp_registers));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              }
          int _len_ipp_shift0 = 100;
          const struct dce_ipp_shift * ipp_shift = (const struct dce_ipp_shift *) malloc(_len_ipp_shift0*sizeof(const struct dce_ipp_shift));
          for(int _i0 = 0; _i0 < _len_ipp_shift0; _i0++) {
              }
          int _len_ipp_mask0 = 100;
          const struct dce_ipp_mask * ipp_mask = (const struct dce_ipp_mask *) malloc(_len_ipp_mask0*sizeof(const struct dce_ipp_mask));
          for(int _i0 = 0; _i0 < _len_ipp_mask0; _i0++) {
              }
          dce_ipp_construct(ipp_dce,ctx,inst,regs,ipp_shift,ipp_mask);
          for(int _aux = 0; _aux < _len_ipp_dce0; _aux++) {
          free(ipp_dce[_aux].ipp_mask);
          }
          for(int _aux = 0; _aux < _len_ipp_dce0; _aux++) {
          free(ipp_dce[_aux].ipp_shift);
          }
          for(int _aux = 0; _aux < _len_ipp_dce0; _aux++) {
          free(ipp_dce[_aux].regs);
          }
          free(ipp_dce);
          free(ctx);
          free(regs);
          free(ipp_shift);
          free(ipp_mask);
        
        break;
    }
    // linked
    case 3:
    {
          int inst = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ipp_dce0 = 1;
          struct dce_ipp * ipp_dce = (struct dce_ipp *) malloc(_len_ipp_dce0*sizeof(struct dce_ipp));
          for(int _i0 = 0; _i0 < _len_ipp_dce0; _i0++) {
              int _len_ipp_dce__i0__ipp_mask0 = 1;
          ipp_dce[_i0].ipp_mask = (const struct dce_ipp_mask *) malloc(_len_ipp_dce__i0__ipp_mask0*sizeof(const struct dce_ipp_mask));
          for(int _j0 = 0; _j0 < _len_ipp_dce__i0__ipp_mask0; _j0++) {
              }
          int _len_ipp_dce__i0__ipp_shift0 = 1;
          ipp_dce[_i0].ipp_shift = (const struct dce_ipp_shift *) malloc(_len_ipp_dce__i0__ipp_shift0*sizeof(const struct dce_ipp_shift));
          for(int _j0 = 0; _j0 < _len_ipp_dce__i0__ipp_shift0; _j0++) {
              }
          int _len_ipp_dce__i0__regs0 = 1;
          ipp_dce[_i0].regs = (const struct dce_ipp_registers *) malloc(_len_ipp_dce__i0__regs0*sizeof(const struct dce_ipp_registers));
          for(int _j0 = 0; _j0 < _len_ipp_dce__i0__regs0; _j0++) {
              }
        ipp_dce[_i0].base.inst = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ipp_dce__i0__base_funcs0 = 1;
          ipp_dce[_i0].base.funcs = (int *) malloc(_len_ipp_dce__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ipp_dce__i0__base_funcs0; _j0++) {
            ipp_dce[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ipp_dce__i0__base_ctx0 = 1;
          ipp_dce[_i0].base.ctx = (struct dc_context *) malloc(_len_ipp_dce__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_ipp_dce__i0__base_ctx0; _j0++) {
            ipp_dce[_i0].base.ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 1;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 1;
          const struct dce_ipp_registers * regs = (const struct dce_ipp_registers *) malloc(_len_regs0*sizeof(const struct dce_ipp_registers));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              }
          int _len_ipp_shift0 = 1;
          const struct dce_ipp_shift * ipp_shift = (const struct dce_ipp_shift *) malloc(_len_ipp_shift0*sizeof(const struct dce_ipp_shift));
          for(int _i0 = 0; _i0 < _len_ipp_shift0; _i0++) {
              }
          int _len_ipp_mask0 = 1;
          const struct dce_ipp_mask * ipp_mask = (const struct dce_ipp_mask *) malloc(_len_ipp_mask0*sizeof(const struct dce_ipp_mask));
          for(int _i0 = 0; _i0 < _len_ipp_mask0; _i0++) {
              }
          dce_ipp_construct(ipp_dce,ctx,inst,regs,ipp_shift,ipp_mask);
          for(int _aux = 0; _aux < _len_ipp_dce0; _aux++) {
          free(ipp_dce[_aux].ipp_mask);
          }
          for(int _aux = 0; _aux < _len_ipp_dce0; _aux++) {
          free(ipp_dce[_aux].ipp_shift);
          }
          for(int _aux = 0; _aux < _len_ipp_dce0; _aux++) {
          free(ipp_dce[_aux].regs);
          }
          free(ipp_dce);
          free(ctx);
          free(regs);
          free(ipp_shift);
          free(ipp_mask);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

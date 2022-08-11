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
typedef  int /*<<< orphan*/  uint32_t ;
struct dce_transform_shift {int dummy; } ;
struct dce_transform_registers {int dummy; } ;
struct dce_transform_mask {int dummy; } ;
struct TYPE_2__ {int /*<<< orphan*/ * funcs; int /*<<< orphan*/  inst; struct dc_context* ctx; } ;
struct dce_transform {int prescaler_on; int lb_pixel_depth_supported; int /*<<< orphan*/  lb_memory_size; int /*<<< orphan*/  lb_bits_per_entry; struct dce_transform_mask const* xfm_mask; struct dce_transform_shift const* xfm_shift; struct dce_transform_registers const* regs; TYPE_1__ base; } ;
struct dc_context {int dummy; } ;

/* Variables and functions */
 int /*<<< orphan*/  LB_BITS_PER_ENTRY ; 
 int LB_PIXEL_DEPTH_18BPP ; 
 int LB_PIXEL_DEPTH_24BPP ; 
 int LB_PIXEL_DEPTH_30BPP ; 
 int /*<<< orphan*/  LB_TOTAL_NUMBER_OF_ENTRIES ; 
 int /*<<< orphan*/  dce_transform_funcs ; 

void dce_transform_construct(
	struct dce_transform *xfm_dce,
	struct dc_context *ctx,
	uint32_t inst,
	const struct dce_transform_registers *regs,
	const struct dce_transform_shift *xfm_shift,
	const struct dce_transform_mask *xfm_mask)
{
	xfm_dce->base.ctx = ctx;

	xfm_dce->base.inst = inst;
	xfm_dce->base.funcs = &dce_transform_funcs;

	xfm_dce->regs = regs;
	xfm_dce->xfm_shift = xfm_shift;
	xfm_dce->xfm_mask = xfm_mask;

	xfm_dce->prescaler_on = true;
	xfm_dce->lb_pixel_depth_supported =
			LB_PIXEL_DEPTH_18BPP |
			LB_PIXEL_DEPTH_24BPP |
			LB_PIXEL_DEPTH_30BPP;

	xfm_dce->lb_bits_per_entry = LB_BITS_PER_ENTRY;
	xfm_dce->lb_memory_size = LB_TOTAL_NUMBER_OF_ENTRIES; /*0x6B0*/
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
          int _len_xfm_dce0 = 1;
          struct dce_transform * xfm_dce = (struct dce_transform *) malloc(_len_xfm_dce0*sizeof(struct dce_transform));
          for(int _i0 = 0; _i0 < _len_xfm_dce0; _i0++) {
            xfm_dce[_i0].prescaler_on = ((-2 * (next_i()%2)) + 1) * next_i();
        xfm_dce[_i0].lb_pixel_depth_supported = ((-2 * (next_i()%2)) + 1) * next_i();
        xfm_dce[_i0].lb_memory_size = ((-2 * (next_i()%2)) + 1) * next_i();
        xfm_dce[_i0].lb_bits_per_entry = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_xfm_dce__i0__xfm_mask0 = 1;
          xfm_dce[_i0].xfm_mask = (const struct dce_transform_mask *) malloc(_len_xfm_dce__i0__xfm_mask0*sizeof(const struct dce_transform_mask));
          for(int _j0 = 0; _j0 < _len_xfm_dce__i0__xfm_mask0; _j0++) {
              }
          int _len_xfm_dce__i0__xfm_shift0 = 1;
          xfm_dce[_i0].xfm_shift = (const struct dce_transform_shift *) malloc(_len_xfm_dce__i0__xfm_shift0*sizeof(const struct dce_transform_shift));
          for(int _j0 = 0; _j0 < _len_xfm_dce__i0__xfm_shift0; _j0++) {
              }
          int _len_xfm_dce__i0__regs0 = 1;
          xfm_dce[_i0].regs = (const struct dce_transform_registers *) malloc(_len_xfm_dce__i0__regs0*sizeof(const struct dce_transform_registers));
          for(int _j0 = 0; _j0 < _len_xfm_dce__i0__regs0; _j0++) {
              }
          int _len_xfm_dce__i0__base_funcs0 = 1;
          xfm_dce[_i0].base.funcs = (int *) malloc(_len_xfm_dce__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_xfm_dce__i0__base_funcs0; _j0++) {
            xfm_dce[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        xfm_dce[_i0].base.inst = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_xfm_dce__i0__base_ctx0 = 1;
          xfm_dce[_i0].base.ctx = (struct dc_context *) malloc(_len_xfm_dce__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_xfm_dce__i0__base_ctx0; _j0++) {
            xfm_dce[_i0].base.ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 1;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 1;
          const struct dce_transform_registers * regs = (const struct dce_transform_registers *) malloc(_len_regs0*sizeof(const struct dce_transform_registers));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              }
          int _len_xfm_shift0 = 1;
          const struct dce_transform_shift * xfm_shift = (const struct dce_transform_shift *) malloc(_len_xfm_shift0*sizeof(const struct dce_transform_shift));
          for(int _i0 = 0; _i0 < _len_xfm_shift0; _i0++) {
              }
          int _len_xfm_mask0 = 1;
          const struct dce_transform_mask * xfm_mask = (const struct dce_transform_mask *) malloc(_len_xfm_mask0*sizeof(const struct dce_transform_mask));
          for(int _i0 = 0; _i0 < _len_xfm_mask0; _i0++) {
              }
          dce_transform_construct(xfm_dce,ctx,inst,regs,xfm_shift,xfm_mask);
          for(int _aux = 0; _aux < _len_xfm_dce0; _aux++) {
          free(xfm_dce[_aux].xfm_mask);
          }
          for(int _aux = 0; _aux < _len_xfm_dce0; _aux++) {
          free(xfm_dce[_aux].xfm_shift);
          }
          for(int _aux = 0; _aux < _len_xfm_dce0; _aux++) {
          free(xfm_dce[_aux].regs);
          }
          free(xfm_dce);
          free(ctx);
          free(regs);
          free(xfm_shift);
          free(xfm_mask);
        
        break;
    }
    // big-arr
    case 1:
    {
          int inst = 255;
          int _len_xfm_dce0 = 65025;
          struct dce_transform * xfm_dce = (struct dce_transform *) malloc(_len_xfm_dce0*sizeof(struct dce_transform));
          for(int _i0 = 0; _i0 < _len_xfm_dce0; _i0++) {
            xfm_dce[_i0].prescaler_on = ((-2 * (next_i()%2)) + 1) * next_i();
        xfm_dce[_i0].lb_pixel_depth_supported = ((-2 * (next_i()%2)) + 1) * next_i();
        xfm_dce[_i0].lb_memory_size = ((-2 * (next_i()%2)) + 1) * next_i();
        xfm_dce[_i0].lb_bits_per_entry = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_xfm_dce__i0__xfm_mask0 = 1;
          xfm_dce[_i0].xfm_mask = (const struct dce_transform_mask *) malloc(_len_xfm_dce__i0__xfm_mask0*sizeof(const struct dce_transform_mask));
          for(int _j0 = 0; _j0 < _len_xfm_dce__i0__xfm_mask0; _j0++) {
              }
          int _len_xfm_dce__i0__xfm_shift0 = 1;
          xfm_dce[_i0].xfm_shift = (const struct dce_transform_shift *) malloc(_len_xfm_dce__i0__xfm_shift0*sizeof(const struct dce_transform_shift));
          for(int _j0 = 0; _j0 < _len_xfm_dce__i0__xfm_shift0; _j0++) {
              }
          int _len_xfm_dce__i0__regs0 = 1;
          xfm_dce[_i0].regs = (const struct dce_transform_registers *) malloc(_len_xfm_dce__i0__regs0*sizeof(const struct dce_transform_registers));
          for(int _j0 = 0; _j0 < _len_xfm_dce__i0__regs0; _j0++) {
              }
          int _len_xfm_dce__i0__base_funcs0 = 1;
          xfm_dce[_i0].base.funcs = (int *) malloc(_len_xfm_dce__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_xfm_dce__i0__base_funcs0; _j0++) {
            xfm_dce[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        xfm_dce[_i0].base.inst = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_xfm_dce__i0__base_ctx0 = 1;
          xfm_dce[_i0].base.ctx = (struct dc_context *) malloc(_len_xfm_dce__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_xfm_dce__i0__base_ctx0; _j0++) {
            xfm_dce[_i0].base.ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 65025;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 65025;
          const struct dce_transform_registers * regs = (const struct dce_transform_registers *) malloc(_len_regs0*sizeof(const struct dce_transform_registers));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              }
          int _len_xfm_shift0 = 65025;
          const struct dce_transform_shift * xfm_shift = (const struct dce_transform_shift *) malloc(_len_xfm_shift0*sizeof(const struct dce_transform_shift));
          for(int _i0 = 0; _i0 < _len_xfm_shift0; _i0++) {
              }
          int _len_xfm_mask0 = 65025;
          const struct dce_transform_mask * xfm_mask = (const struct dce_transform_mask *) malloc(_len_xfm_mask0*sizeof(const struct dce_transform_mask));
          for(int _i0 = 0; _i0 < _len_xfm_mask0; _i0++) {
              }
          dce_transform_construct(xfm_dce,ctx,inst,regs,xfm_shift,xfm_mask);
          for(int _aux = 0; _aux < _len_xfm_dce0; _aux++) {
          free(xfm_dce[_aux].xfm_mask);
          }
          for(int _aux = 0; _aux < _len_xfm_dce0; _aux++) {
          free(xfm_dce[_aux].xfm_shift);
          }
          for(int _aux = 0; _aux < _len_xfm_dce0; _aux++) {
          free(xfm_dce[_aux].regs);
          }
          free(xfm_dce);
          free(ctx);
          free(regs);
          free(xfm_shift);
          free(xfm_mask);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int inst = 10;
          int _len_xfm_dce0 = 100;
          struct dce_transform * xfm_dce = (struct dce_transform *) malloc(_len_xfm_dce0*sizeof(struct dce_transform));
          for(int _i0 = 0; _i0 < _len_xfm_dce0; _i0++) {
            xfm_dce[_i0].prescaler_on = ((-2 * (next_i()%2)) + 1) * next_i();
        xfm_dce[_i0].lb_pixel_depth_supported = ((-2 * (next_i()%2)) + 1) * next_i();
        xfm_dce[_i0].lb_memory_size = ((-2 * (next_i()%2)) + 1) * next_i();
        xfm_dce[_i0].lb_bits_per_entry = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_xfm_dce__i0__xfm_mask0 = 1;
          xfm_dce[_i0].xfm_mask = (const struct dce_transform_mask *) malloc(_len_xfm_dce__i0__xfm_mask0*sizeof(const struct dce_transform_mask));
          for(int _j0 = 0; _j0 < _len_xfm_dce__i0__xfm_mask0; _j0++) {
              }
          int _len_xfm_dce__i0__xfm_shift0 = 1;
          xfm_dce[_i0].xfm_shift = (const struct dce_transform_shift *) malloc(_len_xfm_dce__i0__xfm_shift0*sizeof(const struct dce_transform_shift));
          for(int _j0 = 0; _j0 < _len_xfm_dce__i0__xfm_shift0; _j0++) {
              }
          int _len_xfm_dce__i0__regs0 = 1;
          xfm_dce[_i0].regs = (const struct dce_transform_registers *) malloc(_len_xfm_dce__i0__regs0*sizeof(const struct dce_transform_registers));
          for(int _j0 = 0; _j0 < _len_xfm_dce__i0__regs0; _j0++) {
              }
          int _len_xfm_dce__i0__base_funcs0 = 1;
          xfm_dce[_i0].base.funcs = (int *) malloc(_len_xfm_dce__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_xfm_dce__i0__base_funcs0; _j0++) {
            xfm_dce[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        xfm_dce[_i0].base.inst = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_xfm_dce__i0__base_ctx0 = 1;
          xfm_dce[_i0].base.ctx = (struct dc_context *) malloc(_len_xfm_dce__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_xfm_dce__i0__base_ctx0; _j0++) {
            xfm_dce[_i0].base.ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 100;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 100;
          const struct dce_transform_registers * regs = (const struct dce_transform_registers *) malloc(_len_regs0*sizeof(const struct dce_transform_registers));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              }
          int _len_xfm_shift0 = 100;
          const struct dce_transform_shift * xfm_shift = (const struct dce_transform_shift *) malloc(_len_xfm_shift0*sizeof(const struct dce_transform_shift));
          for(int _i0 = 0; _i0 < _len_xfm_shift0; _i0++) {
              }
          int _len_xfm_mask0 = 100;
          const struct dce_transform_mask * xfm_mask = (const struct dce_transform_mask *) malloc(_len_xfm_mask0*sizeof(const struct dce_transform_mask));
          for(int _i0 = 0; _i0 < _len_xfm_mask0; _i0++) {
              }
          dce_transform_construct(xfm_dce,ctx,inst,regs,xfm_shift,xfm_mask);
          for(int _aux = 0; _aux < _len_xfm_dce0; _aux++) {
          free(xfm_dce[_aux].xfm_mask);
          }
          for(int _aux = 0; _aux < _len_xfm_dce0; _aux++) {
          free(xfm_dce[_aux].xfm_shift);
          }
          for(int _aux = 0; _aux < _len_xfm_dce0; _aux++) {
          free(xfm_dce[_aux].regs);
          }
          free(xfm_dce);
          free(ctx);
          free(regs);
          free(xfm_shift);
          free(xfm_mask);
        
        break;
    }
    // linked
    case 3:
    {
          int inst = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_xfm_dce0 = 1;
          struct dce_transform * xfm_dce = (struct dce_transform *) malloc(_len_xfm_dce0*sizeof(struct dce_transform));
          for(int _i0 = 0; _i0 < _len_xfm_dce0; _i0++) {
            xfm_dce[_i0].prescaler_on = ((-2 * (next_i()%2)) + 1) * next_i();
        xfm_dce[_i0].lb_pixel_depth_supported = ((-2 * (next_i()%2)) + 1) * next_i();
        xfm_dce[_i0].lb_memory_size = ((-2 * (next_i()%2)) + 1) * next_i();
        xfm_dce[_i0].lb_bits_per_entry = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_xfm_dce__i0__xfm_mask0 = 1;
          xfm_dce[_i0].xfm_mask = (const struct dce_transform_mask *) malloc(_len_xfm_dce__i0__xfm_mask0*sizeof(const struct dce_transform_mask));
          for(int _j0 = 0; _j0 < _len_xfm_dce__i0__xfm_mask0; _j0++) {
              }
          int _len_xfm_dce__i0__xfm_shift0 = 1;
          xfm_dce[_i0].xfm_shift = (const struct dce_transform_shift *) malloc(_len_xfm_dce__i0__xfm_shift0*sizeof(const struct dce_transform_shift));
          for(int _j0 = 0; _j0 < _len_xfm_dce__i0__xfm_shift0; _j0++) {
              }
          int _len_xfm_dce__i0__regs0 = 1;
          xfm_dce[_i0].regs = (const struct dce_transform_registers *) malloc(_len_xfm_dce__i0__regs0*sizeof(const struct dce_transform_registers));
          for(int _j0 = 0; _j0 < _len_xfm_dce__i0__regs0; _j0++) {
              }
          int _len_xfm_dce__i0__base_funcs0 = 1;
          xfm_dce[_i0].base.funcs = (int *) malloc(_len_xfm_dce__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_xfm_dce__i0__base_funcs0; _j0++) {
            xfm_dce[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        xfm_dce[_i0].base.inst = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_xfm_dce__i0__base_ctx0 = 1;
          xfm_dce[_i0].base.ctx = (struct dc_context *) malloc(_len_xfm_dce__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_xfm_dce__i0__base_ctx0; _j0++) {
            xfm_dce[_i0].base.ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 1;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 1;
          const struct dce_transform_registers * regs = (const struct dce_transform_registers *) malloc(_len_regs0*sizeof(const struct dce_transform_registers));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              }
          int _len_xfm_shift0 = 1;
          const struct dce_transform_shift * xfm_shift = (const struct dce_transform_shift *) malloc(_len_xfm_shift0*sizeof(const struct dce_transform_shift));
          for(int _i0 = 0; _i0 < _len_xfm_shift0; _i0++) {
              }
          int _len_xfm_mask0 = 1;
          const struct dce_transform_mask * xfm_mask = (const struct dce_transform_mask *) malloc(_len_xfm_mask0*sizeof(const struct dce_transform_mask));
          for(int _i0 = 0; _i0 < _len_xfm_mask0; _i0++) {
              }
          dce_transform_construct(xfm_dce,ctx,inst,regs,xfm_shift,xfm_mask);
          for(int _aux = 0; _aux < _len_xfm_dce0; _aux++) {
          free(xfm_dce[_aux].xfm_mask);
          }
          for(int _aux = 0; _aux < _len_xfm_dce0; _aux++) {
          free(xfm_dce[_aux].xfm_shift);
          }
          for(int _aux = 0; _aux < _len_xfm_dce0; _aux++) {
          free(xfm_dce[_aux].regs);
          }
          free(xfm_dce);
          free(ctx);
          free(regs);
          free(xfm_shift);
          free(xfm_mask);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

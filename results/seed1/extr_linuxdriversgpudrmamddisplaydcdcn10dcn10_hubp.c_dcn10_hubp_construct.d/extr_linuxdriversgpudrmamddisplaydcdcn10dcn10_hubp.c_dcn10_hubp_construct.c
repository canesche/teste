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
struct dcn_mi_shift {int dummy; } ;
struct dcn_mi_registers {int dummy; } ;
struct dcn_mi_mask {int dummy; } ;
struct TYPE_2__ {int opp_id; int mpcc_id; int /*<<< orphan*/  inst; struct dc_context* ctx; int /*<<< orphan*/ * funcs; } ;
struct dcn10_hubp {TYPE_1__ base; struct dcn_mi_mask const* hubp_mask; struct dcn_mi_shift const* hubp_shift; struct dcn_mi_registers const* hubp_regs; } ;
struct dc_context {int dummy; } ;

/* Variables and functions */
 int /*<<< orphan*/  dcn10_hubp_funcs ; 

void dcn10_hubp_construct(
	struct dcn10_hubp *hubp1,
	struct dc_context *ctx,
	uint32_t inst,
	const struct dcn_mi_registers *hubp_regs,
	const struct dcn_mi_shift *hubp_shift,
	const struct dcn_mi_mask *hubp_mask)
{
	hubp1->base.funcs = &dcn10_hubp_funcs;
	hubp1->base.ctx = ctx;
	hubp1->hubp_regs = hubp_regs;
	hubp1->hubp_shift = hubp_shift;
	hubp1->hubp_mask = hubp_mask;
	hubp1->base.inst = inst;
	hubp1->base.opp_id = 0xf;
	hubp1->base.mpcc_id = 0xf;
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
          int _len_hubp10 = 1;
          struct dcn10_hubp * hubp1 = (struct dcn10_hubp *) malloc(_len_hubp10*sizeof(struct dcn10_hubp));
          for(int _i0 = 0; _i0 < _len_hubp10; _i0++) {
            hubp1[_i0].base.opp_id = ((-2 * (next_i()%2)) + 1) * next_i();
        hubp1[_i0].base.mpcc_id = ((-2 * (next_i()%2)) + 1) * next_i();
        hubp1[_i0].base.inst = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hubp1__i0__base_ctx0 = 1;
          hubp1[_i0].base.ctx = (struct dc_context *) malloc(_len_hubp1__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_hubp1__i0__base_ctx0; _j0++) {
            hubp1[_i0].base.ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hubp1__i0__base_funcs0 = 1;
          hubp1[_i0].base.funcs = (int *) malloc(_len_hubp1__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hubp1__i0__base_funcs0; _j0++) {
            hubp1[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hubp1__i0__hubp_mask0 = 1;
          hubp1[_i0].hubp_mask = (const struct dcn_mi_mask *) malloc(_len_hubp1__i0__hubp_mask0*sizeof(const struct dcn_mi_mask));
          for(int _j0 = 0; _j0 < _len_hubp1__i0__hubp_mask0; _j0++) {
              }
          int _len_hubp1__i0__hubp_shift0 = 1;
          hubp1[_i0].hubp_shift = (const struct dcn_mi_shift *) malloc(_len_hubp1__i0__hubp_shift0*sizeof(const struct dcn_mi_shift));
          for(int _j0 = 0; _j0 < _len_hubp1__i0__hubp_shift0; _j0++) {
              }
          int _len_hubp1__i0__hubp_regs0 = 1;
          hubp1[_i0].hubp_regs = (const struct dcn_mi_registers *) malloc(_len_hubp1__i0__hubp_regs0*sizeof(const struct dcn_mi_registers));
          for(int _j0 = 0; _j0 < _len_hubp1__i0__hubp_regs0; _j0++) {
              }
          }
          int _len_ctx0 = 1;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hubp_regs0 = 1;
          const struct dcn_mi_registers * hubp_regs = (const struct dcn_mi_registers *) malloc(_len_hubp_regs0*sizeof(const struct dcn_mi_registers));
          for(int _i0 = 0; _i0 < _len_hubp_regs0; _i0++) {
              }
          int _len_hubp_shift0 = 1;
          const struct dcn_mi_shift * hubp_shift = (const struct dcn_mi_shift *) malloc(_len_hubp_shift0*sizeof(const struct dcn_mi_shift));
          for(int _i0 = 0; _i0 < _len_hubp_shift0; _i0++) {
              }
          int _len_hubp_mask0 = 1;
          const struct dcn_mi_mask * hubp_mask = (const struct dcn_mi_mask *) malloc(_len_hubp_mask0*sizeof(const struct dcn_mi_mask));
          for(int _i0 = 0; _i0 < _len_hubp_mask0; _i0++) {
              }
          dcn10_hubp_construct(hubp1,ctx,inst,hubp_regs,hubp_shift,hubp_mask);
          for(int _aux = 0; _aux < _len_hubp10; _aux++) {
          free(hubp1[_aux].hubp_mask);
          }
          for(int _aux = 0; _aux < _len_hubp10; _aux++) {
          free(hubp1[_aux].hubp_shift);
          }
          for(int _aux = 0; _aux < _len_hubp10; _aux++) {
          free(hubp1[_aux].hubp_regs);
          }
          free(hubp1);
          free(ctx);
          free(hubp_regs);
          free(hubp_shift);
          free(hubp_mask);
        
        break;
    }
    // big-arr
    case 1:
    {
          int inst = 255;
          int _len_hubp10 = 65025;
          struct dcn10_hubp * hubp1 = (struct dcn10_hubp *) malloc(_len_hubp10*sizeof(struct dcn10_hubp));
          for(int _i0 = 0; _i0 < _len_hubp10; _i0++) {
            hubp1[_i0].base.opp_id = ((-2 * (next_i()%2)) + 1) * next_i();
        hubp1[_i0].base.mpcc_id = ((-2 * (next_i()%2)) + 1) * next_i();
        hubp1[_i0].base.inst = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hubp1__i0__base_ctx0 = 1;
          hubp1[_i0].base.ctx = (struct dc_context *) malloc(_len_hubp1__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_hubp1__i0__base_ctx0; _j0++) {
            hubp1[_i0].base.ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hubp1__i0__base_funcs0 = 1;
          hubp1[_i0].base.funcs = (int *) malloc(_len_hubp1__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hubp1__i0__base_funcs0; _j0++) {
            hubp1[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hubp1__i0__hubp_mask0 = 1;
          hubp1[_i0].hubp_mask = (const struct dcn_mi_mask *) malloc(_len_hubp1__i0__hubp_mask0*sizeof(const struct dcn_mi_mask));
          for(int _j0 = 0; _j0 < _len_hubp1__i0__hubp_mask0; _j0++) {
              }
          int _len_hubp1__i0__hubp_shift0 = 1;
          hubp1[_i0].hubp_shift = (const struct dcn_mi_shift *) malloc(_len_hubp1__i0__hubp_shift0*sizeof(const struct dcn_mi_shift));
          for(int _j0 = 0; _j0 < _len_hubp1__i0__hubp_shift0; _j0++) {
              }
          int _len_hubp1__i0__hubp_regs0 = 1;
          hubp1[_i0].hubp_regs = (const struct dcn_mi_registers *) malloc(_len_hubp1__i0__hubp_regs0*sizeof(const struct dcn_mi_registers));
          for(int _j0 = 0; _j0 < _len_hubp1__i0__hubp_regs0; _j0++) {
              }
          }
          int _len_ctx0 = 65025;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hubp_regs0 = 65025;
          const struct dcn_mi_registers * hubp_regs = (const struct dcn_mi_registers *) malloc(_len_hubp_regs0*sizeof(const struct dcn_mi_registers));
          for(int _i0 = 0; _i0 < _len_hubp_regs0; _i0++) {
              }
          int _len_hubp_shift0 = 65025;
          const struct dcn_mi_shift * hubp_shift = (const struct dcn_mi_shift *) malloc(_len_hubp_shift0*sizeof(const struct dcn_mi_shift));
          for(int _i0 = 0; _i0 < _len_hubp_shift0; _i0++) {
              }
          int _len_hubp_mask0 = 65025;
          const struct dcn_mi_mask * hubp_mask = (const struct dcn_mi_mask *) malloc(_len_hubp_mask0*sizeof(const struct dcn_mi_mask));
          for(int _i0 = 0; _i0 < _len_hubp_mask0; _i0++) {
              }
          dcn10_hubp_construct(hubp1,ctx,inst,hubp_regs,hubp_shift,hubp_mask);
          for(int _aux = 0; _aux < _len_hubp10; _aux++) {
          free(hubp1[_aux].hubp_mask);
          }
          for(int _aux = 0; _aux < _len_hubp10; _aux++) {
          free(hubp1[_aux].hubp_shift);
          }
          for(int _aux = 0; _aux < _len_hubp10; _aux++) {
          free(hubp1[_aux].hubp_regs);
          }
          free(hubp1);
          free(ctx);
          free(hubp_regs);
          free(hubp_shift);
          free(hubp_mask);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int inst = 10;
          int _len_hubp10 = 100;
          struct dcn10_hubp * hubp1 = (struct dcn10_hubp *) malloc(_len_hubp10*sizeof(struct dcn10_hubp));
          for(int _i0 = 0; _i0 < _len_hubp10; _i0++) {
            hubp1[_i0].base.opp_id = ((-2 * (next_i()%2)) + 1) * next_i();
        hubp1[_i0].base.mpcc_id = ((-2 * (next_i()%2)) + 1) * next_i();
        hubp1[_i0].base.inst = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hubp1__i0__base_ctx0 = 1;
          hubp1[_i0].base.ctx = (struct dc_context *) malloc(_len_hubp1__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_hubp1__i0__base_ctx0; _j0++) {
            hubp1[_i0].base.ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hubp1__i0__base_funcs0 = 1;
          hubp1[_i0].base.funcs = (int *) malloc(_len_hubp1__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hubp1__i0__base_funcs0; _j0++) {
            hubp1[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hubp1__i0__hubp_mask0 = 1;
          hubp1[_i0].hubp_mask = (const struct dcn_mi_mask *) malloc(_len_hubp1__i0__hubp_mask0*sizeof(const struct dcn_mi_mask));
          for(int _j0 = 0; _j0 < _len_hubp1__i0__hubp_mask0; _j0++) {
              }
          int _len_hubp1__i0__hubp_shift0 = 1;
          hubp1[_i0].hubp_shift = (const struct dcn_mi_shift *) malloc(_len_hubp1__i0__hubp_shift0*sizeof(const struct dcn_mi_shift));
          for(int _j0 = 0; _j0 < _len_hubp1__i0__hubp_shift0; _j0++) {
              }
          int _len_hubp1__i0__hubp_regs0 = 1;
          hubp1[_i0].hubp_regs = (const struct dcn_mi_registers *) malloc(_len_hubp1__i0__hubp_regs0*sizeof(const struct dcn_mi_registers));
          for(int _j0 = 0; _j0 < _len_hubp1__i0__hubp_regs0; _j0++) {
              }
          }
          int _len_ctx0 = 100;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hubp_regs0 = 100;
          const struct dcn_mi_registers * hubp_regs = (const struct dcn_mi_registers *) malloc(_len_hubp_regs0*sizeof(const struct dcn_mi_registers));
          for(int _i0 = 0; _i0 < _len_hubp_regs0; _i0++) {
              }
          int _len_hubp_shift0 = 100;
          const struct dcn_mi_shift * hubp_shift = (const struct dcn_mi_shift *) malloc(_len_hubp_shift0*sizeof(const struct dcn_mi_shift));
          for(int _i0 = 0; _i0 < _len_hubp_shift0; _i0++) {
              }
          int _len_hubp_mask0 = 100;
          const struct dcn_mi_mask * hubp_mask = (const struct dcn_mi_mask *) malloc(_len_hubp_mask0*sizeof(const struct dcn_mi_mask));
          for(int _i0 = 0; _i0 < _len_hubp_mask0; _i0++) {
              }
          dcn10_hubp_construct(hubp1,ctx,inst,hubp_regs,hubp_shift,hubp_mask);
          for(int _aux = 0; _aux < _len_hubp10; _aux++) {
          free(hubp1[_aux].hubp_mask);
          }
          for(int _aux = 0; _aux < _len_hubp10; _aux++) {
          free(hubp1[_aux].hubp_shift);
          }
          for(int _aux = 0; _aux < _len_hubp10; _aux++) {
          free(hubp1[_aux].hubp_regs);
          }
          free(hubp1);
          free(ctx);
          free(hubp_regs);
          free(hubp_shift);
          free(hubp_mask);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

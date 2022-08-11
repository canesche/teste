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
struct hubbub {int debug_test_index_pstate; struct dcn_hubbub_mask const* masks; struct dcn_hubbub_shift const* shifts; struct dcn_hubbub_registers const* regs; int /*<<< orphan*/ * funcs; struct dc_context* ctx; } ;
struct dcn_hubbub_shift {int dummy; } ;
struct dcn_hubbub_registers {int dummy; } ;
struct dcn_hubbub_mask {int dummy; } ;
struct dc_context {int dummy; } ;

/* Variables and functions */
 int /*<<< orphan*/  hubbub1_funcs ; 

void hubbub1_construct(struct hubbub *hubbub,
	struct dc_context *ctx,
	const struct dcn_hubbub_registers *hubbub_regs,
	const struct dcn_hubbub_shift *hubbub_shift,
	const struct dcn_hubbub_mask *hubbub_mask)
{
	hubbub->ctx = ctx;

	hubbub->funcs = &hubbub1_funcs;

	hubbub->regs = hubbub_regs;
	hubbub->shifts = hubbub_shift;
	hubbub->masks = hubbub_mask;

	hubbub->debug_test_index_pstate = 0x7;
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
          int _len_hubbub0 = 1;
          struct hubbub * hubbub = (struct hubbub *) malloc(_len_hubbub0*sizeof(struct hubbub));
          for(int _i0 = 0; _i0 < _len_hubbub0; _i0++) {
            hubbub[_i0].debug_test_index_pstate = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hubbub__i0__masks0 = 1;
          hubbub[_i0].masks = (const struct dcn_hubbub_mask *) malloc(_len_hubbub__i0__masks0*sizeof(const struct dcn_hubbub_mask));
          for(int _j0 = 0; _j0 < _len_hubbub__i0__masks0; _j0++) {
              }
          int _len_hubbub__i0__shifts0 = 1;
          hubbub[_i0].shifts = (const struct dcn_hubbub_shift *) malloc(_len_hubbub__i0__shifts0*sizeof(const struct dcn_hubbub_shift));
          for(int _j0 = 0; _j0 < _len_hubbub__i0__shifts0; _j0++) {
              }
          int _len_hubbub__i0__regs0 = 1;
          hubbub[_i0].regs = (const struct dcn_hubbub_registers *) malloc(_len_hubbub__i0__regs0*sizeof(const struct dcn_hubbub_registers));
          for(int _j0 = 0; _j0 < _len_hubbub__i0__regs0; _j0++) {
              }
          int _len_hubbub__i0__funcs0 = 1;
          hubbub[_i0].funcs = (int *) malloc(_len_hubbub__i0__funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hubbub__i0__funcs0; _j0++) {
            hubbub[_i0].funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hubbub__i0__ctx0 = 1;
          hubbub[_i0].ctx = (struct dc_context *) malloc(_len_hubbub__i0__ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_hubbub__i0__ctx0; _j0++) {
            hubbub[_i0].ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 1;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hubbub_regs0 = 1;
          const struct dcn_hubbub_registers * hubbub_regs = (const struct dcn_hubbub_registers *) malloc(_len_hubbub_regs0*sizeof(const struct dcn_hubbub_registers));
          for(int _i0 = 0; _i0 < _len_hubbub_regs0; _i0++) {
              }
          int _len_hubbub_shift0 = 1;
          const struct dcn_hubbub_shift * hubbub_shift = (const struct dcn_hubbub_shift *) malloc(_len_hubbub_shift0*sizeof(const struct dcn_hubbub_shift));
          for(int _i0 = 0; _i0 < _len_hubbub_shift0; _i0++) {
              }
          int _len_hubbub_mask0 = 1;
          const struct dcn_hubbub_mask * hubbub_mask = (const struct dcn_hubbub_mask *) malloc(_len_hubbub_mask0*sizeof(const struct dcn_hubbub_mask));
          for(int _i0 = 0; _i0 < _len_hubbub_mask0; _i0++) {
              }
          hubbub1_construct(hubbub,ctx,hubbub_regs,hubbub_shift,hubbub_mask);
          for(int _aux = 0; _aux < _len_hubbub0; _aux++) {
          free(hubbub[_aux].masks);
          }
          for(int _aux = 0; _aux < _len_hubbub0; _aux++) {
          free(hubbub[_aux].shifts);
          }
          for(int _aux = 0; _aux < _len_hubbub0; _aux++) {
          free(hubbub[_aux].regs);
          }
          for(int _aux = 0; _aux < _len_hubbub0; _aux++) {
          free(hubbub[_aux].funcs);
          }
          for(int _aux = 0; _aux < _len_hubbub0; _aux++) {
          free(hubbub[_aux].ctx);
          }
          free(hubbub);
          free(ctx);
          free(hubbub_regs);
          free(hubbub_shift);
          free(hubbub_mask);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hubbub0 = 65025;
          struct hubbub * hubbub = (struct hubbub *) malloc(_len_hubbub0*sizeof(struct hubbub));
          for(int _i0 = 0; _i0 < _len_hubbub0; _i0++) {
            hubbub[_i0].debug_test_index_pstate = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hubbub__i0__masks0 = 1;
          hubbub[_i0].masks = (const struct dcn_hubbub_mask *) malloc(_len_hubbub__i0__masks0*sizeof(const struct dcn_hubbub_mask));
          for(int _j0 = 0; _j0 < _len_hubbub__i0__masks0; _j0++) {
              }
          int _len_hubbub__i0__shifts0 = 1;
          hubbub[_i0].shifts = (const struct dcn_hubbub_shift *) malloc(_len_hubbub__i0__shifts0*sizeof(const struct dcn_hubbub_shift));
          for(int _j0 = 0; _j0 < _len_hubbub__i0__shifts0; _j0++) {
              }
          int _len_hubbub__i0__regs0 = 1;
          hubbub[_i0].regs = (const struct dcn_hubbub_registers *) malloc(_len_hubbub__i0__regs0*sizeof(const struct dcn_hubbub_registers));
          for(int _j0 = 0; _j0 < _len_hubbub__i0__regs0; _j0++) {
              }
          int _len_hubbub__i0__funcs0 = 1;
          hubbub[_i0].funcs = (int *) malloc(_len_hubbub__i0__funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hubbub__i0__funcs0; _j0++) {
            hubbub[_i0].funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hubbub__i0__ctx0 = 1;
          hubbub[_i0].ctx = (struct dc_context *) malloc(_len_hubbub__i0__ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_hubbub__i0__ctx0; _j0++) {
            hubbub[_i0].ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 65025;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hubbub_regs0 = 65025;
          const struct dcn_hubbub_registers * hubbub_regs = (const struct dcn_hubbub_registers *) malloc(_len_hubbub_regs0*sizeof(const struct dcn_hubbub_registers));
          for(int _i0 = 0; _i0 < _len_hubbub_regs0; _i0++) {
              }
          int _len_hubbub_shift0 = 65025;
          const struct dcn_hubbub_shift * hubbub_shift = (const struct dcn_hubbub_shift *) malloc(_len_hubbub_shift0*sizeof(const struct dcn_hubbub_shift));
          for(int _i0 = 0; _i0 < _len_hubbub_shift0; _i0++) {
              }
          int _len_hubbub_mask0 = 65025;
          const struct dcn_hubbub_mask * hubbub_mask = (const struct dcn_hubbub_mask *) malloc(_len_hubbub_mask0*sizeof(const struct dcn_hubbub_mask));
          for(int _i0 = 0; _i0 < _len_hubbub_mask0; _i0++) {
              }
          hubbub1_construct(hubbub,ctx,hubbub_regs,hubbub_shift,hubbub_mask);
          for(int _aux = 0; _aux < _len_hubbub0; _aux++) {
          free(hubbub[_aux].masks);
          }
          for(int _aux = 0; _aux < _len_hubbub0; _aux++) {
          free(hubbub[_aux].shifts);
          }
          for(int _aux = 0; _aux < _len_hubbub0; _aux++) {
          free(hubbub[_aux].regs);
          }
          for(int _aux = 0; _aux < _len_hubbub0; _aux++) {
          free(hubbub[_aux].funcs);
          }
          for(int _aux = 0; _aux < _len_hubbub0; _aux++) {
          free(hubbub[_aux].ctx);
          }
          free(hubbub);
          free(ctx);
          free(hubbub_regs);
          free(hubbub_shift);
          free(hubbub_mask);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hubbub0 = 100;
          struct hubbub * hubbub = (struct hubbub *) malloc(_len_hubbub0*sizeof(struct hubbub));
          for(int _i0 = 0; _i0 < _len_hubbub0; _i0++) {
            hubbub[_i0].debug_test_index_pstate = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hubbub__i0__masks0 = 1;
          hubbub[_i0].masks = (const struct dcn_hubbub_mask *) malloc(_len_hubbub__i0__masks0*sizeof(const struct dcn_hubbub_mask));
          for(int _j0 = 0; _j0 < _len_hubbub__i0__masks0; _j0++) {
              }
          int _len_hubbub__i0__shifts0 = 1;
          hubbub[_i0].shifts = (const struct dcn_hubbub_shift *) malloc(_len_hubbub__i0__shifts0*sizeof(const struct dcn_hubbub_shift));
          for(int _j0 = 0; _j0 < _len_hubbub__i0__shifts0; _j0++) {
              }
          int _len_hubbub__i0__regs0 = 1;
          hubbub[_i0].regs = (const struct dcn_hubbub_registers *) malloc(_len_hubbub__i0__regs0*sizeof(const struct dcn_hubbub_registers));
          for(int _j0 = 0; _j0 < _len_hubbub__i0__regs0; _j0++) {
              }
          int _len_hubbub__i0__funcs0 = 1;
          hubbub[_i0].funcs = (int *) malloc(_len_hubbub__i0__funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hubbub__i0__funcs0; _j0++) {
            hubbub[_i0].funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hubbub__i0__ctx0 = 1;
          hubbub[_i0].ctx = (struct dc_context *) malloc(_len_hubbub__i0__ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_hubbub__i0__ctx0; _j0++) {
            hubbub[_i0].ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 100;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hubbub_regs0 = 100;
          const struct dcn_hubbub_registers * hubbub_regs = (const struct dcn_hubbub_registers *) malloc(_len_hubbub_regs0*sizeof(const struct dcn_hubbub_registers));
          for(int _i0 = 0; _i0 < _len_hubbub_regs0; _i0++) {
              }
          int _len_hubbub_shift0 = 100;
          const struct dcn_hubbub_shift * hubbub_shift = (const struct dcn_hubbub_shift *) malloc(_len_hubbub_shift0*sizeof(const struct dcn_hubbub_shift));
          for(int _i0 = 0; _i0 < _len_hubbub_shift0; _i0++) {
              }
          int _len_hubbub_mask0 = 100;
          const struct dcn_hubbub_mask * hubbub_mask = (const struct dcn_hubbub_mask *) malloc(_len_hubbub_mask0*sizeof(const struct dcn_hubbub_mask));
          for(int _i0 = 0; _i0 < _len_hubbub_mask0; _i0++) {
              }
          hubbub1_construct(hubbub,ctx,hubbub_regs,hubbub_shift,hubbub_mask);
          for(int _aux = 0; _aux < _len_hubbub0; _aux++) {
          free(hubbub[_aux].masks);
          }
          for(int _aux = 0; _aux < _len_hubbub0; _aux++) {
          free(hubbub[_aux].shifts);
          }
          for(int _aux = 0; _aux < _len_hubbub0; _aux++) {
          free(hubbub[_aux].regs);
          }
          for(int _aux = 0; _aux < _len_hubbub0; _aux++) {
          free(hubbub[_aux].funcs);
          }
          for(int _aux = 0; _aux < _len_hubbub0; _aux++) {
          free(hubbub[_aux].ctx);
          }
          free(hubbub);
          free(ctx);
          free(hubbub_regs);
          free(hubbub_shift);
          free(hubbub_mask);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

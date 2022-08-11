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
struct dce_abm_shift {int dummy; } ;
struct dce_abm_registers {int dummy; } ;
struct dce_abm_mask {int dummy; } ;
struct TYPE_2__ {scalar_t__ LVTMA_PWRSEQ_REF_DIV_BL_PWM_REF_DIV; scalar_t__ BL_PWM_PERIOD_CNTL; scalar_t__ BL_PWM_CNTL2; scalar_t__ BL_PWM_CNTL; } ;
struct abm {TYPE_1__ stored_backlight_registers; int /*<<< orphan*/ * funcs; struct dc_context* ctx; } ;
struct dce_abm {struct dce_abm_mask const* abm_mask; struct dce_abm_shift const* abm_shift; struct dce_abm_registers const* regs; struct abm base; } ;
struct dc_context {int dummy; } ;

/* Variables and functions */
 int /*<<< orphan*/  dce_funcs ; 

__attribute__((used)) static void dce_abm_construct(
	struct dce_abm *abm_dce,
	struct dc_context *ctx,
	const struct dce_abm_registers *regs,
	const struct dce_abm_shift *abm_shift,
	const struct dce_abm_mask *abm_mask)
{
	struct abm *base = &abm_dce->base;

	base->ctx = ctx;
	base->funcs = &dce_funcs;
	base->stored_backlight_registers.BL_PWM_CNTL = 0;
	base->stored_backlight_registers.BL_PWM_CNTL2 = 0;
	base->stored_backlight_registers.BL_PWM_PERIOD_CNTL = 0;
	base->stored_backlight_registers.LVTMA_PWRSEQ_REF_DIV_BL_PWM_REF_DIV = 0;

	abm_dce->regs = regs;
	abm_dce->abm_shift = abm_shift;
	abm_dce->abm_mask = abm_mask;
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
          int _len_abm_dce0 = 1;
          struct dce_abm * abm_dce = (struct dce_abm *) malloc(_len_abm_dce0*sizeof(struct dce_abm));
          for(int _i0 = 0; _i0 < _len_abm_dce0; _i0++) {
              int _len_abm_dce__i0__abm_mask0 = 1;
          abm_dce[_i0].abm_mask = (const struct dce_abm_mask *) malloc(_len_abm_dce__i0__abm_mask0*sizeof(const struct dce_abm_mask));
          for(int _j0 = 0; _j0 < _len_abm_dce__i0__abm_mask0; _j0++) {
              }
          int _len_abm_dce__i0__abm_shift0 = 1;
          abm_dce[_i0].abm_shift = (const struct dce_abm_shift *) malloc(_len_abm_dce__i0__abm_shift0*sizeof(const struct dce_abm_shift));
          for(int _j0 = 0; _j0 < _len_abm_dce__i0__abm_shift0; _j0++) {
              }
          int _len_abm_dce__i0__regs0 = 1;
          abm_dce[_i0].regs = (const struct dce_abm_registers *) malloc(_len_abm_dce__i0__regs0*sizeof(const struct dce_abm_registers));
          for(int _j0 = 0; _j0 < _len_abm_dce__i0__regs0; _j0++) {
              }
        abm_dce[_i0].base.stored_backlight_registers.LVTMA_PWRSEQ_REF_DIV_BL_PWM_REF_DIV = ((-2 * (next_i()%2)) + 1) * next_i();
        abm_dce[_i0].base.stored_backlight_registers.BL_PWM_PERIOD_CNTL = ((-2 * (next_i()%2)) + 1) * next_i();
        abm_dce[_i0].base.stored_backlight_registers.BL_PWM_CNTL2 = ((-2 * (next_i()%2)) + 1) * next_i();
        abm_dce[_i0].base.stored_backlight_registers.BL_PWM_CNTL = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_abm_dce__i0__base_funcs0 = 1;
          abm_dce[_i0].base.funcs = (int *) malloc(_len_abm_dce__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_abm_dce__i0__base_funcs0; _j0++) {
            abm_dce[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_abm_dce__i0__base_ctx0 = 1;
          abm_dce[_i0].base.ctx = (struct dc_context *) malloc(_len_abm_dce__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_abm_dce__i0__base_ctx0; _j0++) {
            abm_dce[_i0].base.ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 1;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 1;
          const struct dce_abm_registers * regs = (const struct dce_abm_registers *) malloc(_len_regs0*sizeof(const struct dce_abm_registers));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              }
          int _len_abm_shift0 = 1;
          const struct dce_abm_shift * abm_shift = (const struct dce_abm_shift *) malloc(_len_abm_shift0*sizeof(const struct dce_abm_shift));
          for(int _i0 = 0; _i0 < _len_abm_shift0; _i0++) {
              }
          int _len_abm_mask0 = 1;
          const struct dce_abm_mask * abm_mask = (const struct dce_abm_mask *) malloc(_len_abm_mask0*sizeof(const struct dce_abm_mask));
          for(int _i0 = 0; _i0 < _len_abm_mask0; _i0++) {
              }
          dce_abm_construct(abm_dce,ctx,regs,abm_shift,abm_mask);
          for(int _aux = 0; _aux < _len_abm_dce0; _aux++) {
          free(abm_dce[_aux].abm_mask);
          }
          for(int _aux = 0; _aux < _len_abm_dce0; _aux++) {
          free(abm_dce[_aux].abm_shift);
          }
          for(int _aux = 0; _aux < _len_abm_dce0; _aux++) {
          free(abm_dce[_aux].regs);
          }
          free(abm_dce);
          free(ctx);
          free(regs);
          free(abm_shift);
          free(abm_mask);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_abm_dce0 = 65025;
          struct dce_abm * abm_dce = (struct dce_abm *) malloc(_len_abm_dce0*sizeof(struct dce_abm));
          for(int _i0 = 0; _i0 < _len_abm_dce0; _i0++) {
              int _len_abm_dce__i0__abm_mask0 = 1;
          abm_dce[_i0].abm_mask = (const struct dce_abm_mask *) malloc(_len_abm_dce__i0__abm_mask0*sizeof(const struct dce_abm_mask));
          for(int _j0 = 0; _j0 < _len_abm_dce__i0__abm_mask0; _j0++) {
              }
          int _len_abm_dce__i0__abm_shift0 = 1;
          abm_dce[_i0].abm_shift = (const struct dce_abm_shift *) malloc(_len_abm_dce__i0__abm_shift0*sizeof(const struct dce_abm_shift));
          for(int _j0 = 0; _j0 < _len_abm_dce__i0__abm_shift0; _j0++) {
              }
          int _len_abm_dce__i0__regs0 = 1;
          abm_dce[_i0].regs = (const struct dce_abm_registers *) malloc(_len_abm_dce__i0__regs0*sizeof(const struct dce_abm_registers));
          for(int _j0 = 0; _j0 < _len_abm_dce__i0__regs0; _j0++) {
              }
        abm_dce[_i0].base.stored_backlight_registers.LVTMA_PWRSEQ_REF_DIV_BL_PWM_REF_DIV = ((-2 * (next_i()%2)) + 1) * next_i();
        abm_dce[_i0].base.stored_backlight_registers.BL_PWM_PERIOD_CNTL = ((-2 * (next_i()%2)) + 1) * next_i();
        abm_dce[_i0].base.stored_backlight_registers.BL_PWM_CNTL2 = ((-2 * (next_i()%2)) + 1) * next_i();
        abm_dce[_i0].base.stored_backlight_registers.BL_PWM_CNTL = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_abm_dce__i0__base_funcs0 = 1;
          abm_dce[_i0].base.funcs = (int *) malloc(_len_abm_dce__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_abm_dce__i0__base_funcs0; _j0++) {
            abm_dce[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_abm_dce__i0__base_ctx0 = 1;
          abm_dce[_i0].base.ctx = (struct dc_context *) malloc(_len_abm_dce__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_abm_dce__i0__base_ctx0; _j0++) {
            abm_dce[_i0].base.ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 65025;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 65025;
          const struct dce_abm_registers * regs = (const struct dce_abm_registers *) malloc(_len_regs0*sizeof(const struct dce_abm_registers));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              }
          int _len_abm_shift0 = 65025;
          const struct dce_abm_shift * abm_shift = (const struct dce_abm_shift *) malloc(_len_abm_shift0*sizeof(const struct dce_abm_shift));
          for(int _i0 = 0; _i0 < _len_abm_shift0; _i0++) {
              }
          int _len_abm_mask0 = 65025;
          const struct dce_abm_mask * abm_mask = (const struct dce_abm_mask *) malloc(_len_abm_mask0*sizeof(const struct dce_abm_mask));
          for(int _i0 = 0; _i0 < _len_abm_mask0; _i0++) {
              }
          dce_abm_construct(abm_dce,ctx,regs,abm_shift,abm_mask);
          for(int _aux = 0; _aux < _len_abm_dce0; _aux++) {
          free(abm_dce[_aux].abm_mask);
          }
          for(int _aux = 0; _aux < _len_abm_dce0; _aux++) {
          free(abm_dce[_aux].abm_shift);
          }
          for(int _aux = 0; _aux < _len_abm_dce0; _aux++) {
          free(abm_dce[_aux].regs);
          }
          free(abm_dce);
          free(ctx);
          free(regs);
          free(abm_shift);
          free(abm_mask);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_abm_dce0 = 100;
          struct dce_abm * abm_dce = (struct dce_abm *) malloc(_len_abm_dce0*sizeof(struct dce_abm));
          for(int _i0 = 0; _i0 < _len_abm_dce0; _i0++) {
              int _len_abm_dce__i0__abm_mask0 = 1;
          abm_dce[_i0].abm_mask = (const struct dce_abm_mask *) malloc(_len_abm_dce__i0__abm_mask0*sizeof(const struct dce_abm_mask));
          for(int _j0 = 0; _j0 < _len_abm_dce__i0__abm_mask0; _j0++) {
              }
          int _len_abm_dce__i0__abm_shift0 = 1;
          abm_dce[_i0].abm_shift = (const struct dce_abm_shift *) malloc(_len_abm_dce__i0__abm_shift0*sizeof(const struct dce_abm_shift));
          for(int _j0 = 0; _j0 < _len_abm_dce__i0__abm_shift0; _j0++) {
              }
          int _len_abm_dce__i0__regs0 = 1;
          abm_dce[_i0].regs = (const struct dce_abm_registers *) malloc(_len_abm_dce__i0__regs0*sizeof(const struct dce_abm_registers));
          for(int _j0 = 0; _j0 < _len_abm_dce__i0__regs0; _j0++) {
              }
        abm_dce[_i0].base.stored_backlight_registers.LVTMA_PWRSEQ_REF_DIV_BL_PWM_REF_DIV = ((-2 * (next_i()%2)) + 1) * next_i();
        abm_dce[_i0].base.stored_backlight_registers.BL_PWM_PERIOD_CNTL = ((-2 * (next_i()%2)) + 1) * next_i();
        abm_dce[_i0].base.stored_backlight_registers.BL_PWM_CNTL2 = ((-2 * (next_i()%2)) + 1) * next_i();
        abm_dce[_i0].base.stored_backlight_registers.BL_PWM_CNTL = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_abm_dce__i0__base_funcs0 = 1;
          abm_dce[_i0].base.funcs = (int *) malloc(_len_abm_dce__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_abm_dce__i0__base_funcs0; _j0++) {
            abm_dce[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_abm_dce__i0__base_ctx0 = 1;
          abm_dce[_i0].base.ctx = (struct dc_context *) malloc(_len_abm_dce__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_abm_dce__i0__base_ctx0; _j0++) {
            abm_dce[_i0].base.ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 100;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 100;
          const struct dce_abm_registers * regs = (const struct dce_abm_registers *) malloc(_len_regs0*sizeof(const struct dce_abm_registers));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              }
          int _len_abm_shift0 = 100;
          const struct dce_abm_shift * abm_shift = (const struct dce_abm_shift *) malloc(_len_abm_shift0*sizeof(const struct dce_abm_shift));
          for(int _i0 = 0; _i0 < _len_abm_shift0; _i0++) {
              }
          int _len_abm_mask0 = 100;
          const struct dce_abm_mask * abm_mask = (const struct dce_abm_mask *) malloc(_len_abm_mask0*sizeof(const struct dce_abm_mask));
          for(int _i0 = 0; _i0 < _len_abm_mask0; _i0++) {
              }
          dce_abm_construct(abm_dce,ctx,regs,abm_shift,abm_mask);
          for(int _aux = 0; _aux < _len_abm_dce0; _aux++) {
          free(abm_dce[_aux].abm_mask);
          }
          for(int _aux = 0; _aux < _len_abm_dce0; _aux++) {
          free(abm_dce[_aux].abm_shift);
          }
          for(int _aux = 0; _aux < _len_abm_dce0; _aux++) {
          free(abm_dce[_aux].regs);
          }
          free(abm_dce);
          free(ctx);
          free(regs);
          free(abm_shift);
          free(abm_mask);
        
        break;
    }
    // linked
    case 3:
    {
          int _len_abm_dce0 = 1;
          struct dce_abm * abm_dce = (struct dce_abm *) malloc(_len_abm_dce0*sizeof(struct dce_abm));
          for(int _i0 = 0; _i0 < _len_abm_dce0; _i0++) {
              int _len_abm_dce__i0__abm_mask0 = 1;
          abm_dce[_i0].abm_mask = (const struct dce_abm_mask *) malloc(_len_abm_dce__i0__abm_mask0*sizeof(const struct dce_abm_mask));
          for(int _j0 = 0; _j0 < _len_abm_dce__i0__abm_mask0; _j0++) {
              }
          int _len_abm_dce__i0__abm_shift0 = 1;
          abm_dce[_i0].abm_shift = (const struct dce_abm_shift *) malloc(_len_abm_dce__i0__abm_shift0*sizeof(const struct dce_abm_shift));
          for(int _j0 = 0; _j0 < _len_abm_dce__i0__abm_shift0; _j0++) {
              }
          int _len_abm_dce__i0__regs0 = 1;
          abm_dce[_i0].regs = (const struct dce_abm_registers *) malloc(_len_abm_dce__i0__regs0*sizeof(const struct dce_abm_registers));
          for(int _j0 = 0; _j0 < _len_abm_dce__i0__regs0; _j0++) {
              }
        abm_dce[_i0].base.stored_backlight_registers.LVTMA_PWRSEQ_REF_DIV_BL_PWM_REF_DIV = ((-2 * (next_i()%2)) + 1) * next_i();
        abm_dce[_i0].base.stored_backlight_registers.BL_PWM_PERIOD_CNTL = ((-2 * (next_i()%2)) + 1) * next_i();
        abm_dce[_i0].base.stored_backlight_registers.BL_PWM_CNTL2 = ((-2 * (next_i()%2)) + 1) * next_i();
        abm_dce[_i0].base.stored_backlight_registers.BL_PWM_CNTL = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_abm_dce__i0__base_funcs0 = 1;
          abm_dce[_i0].base.funcs = (int *) malloc(_len_abm_dce__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_abm_dce__i0__base_funcs0; _j0++) {
            abm_dce[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_abm_dce__i0__base_ctx0 = 1;
          abm_dce[_i0].base.ctx = (struct dc_context *) malloc(_len_abm_dce__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_abm_dce__i0__base_ctx0; _j0++) {
            abm_dce[_i0].base.ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 1;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 1;
          const struct dce_abm_registers * regs = (const struct dce_abm_registers *) malloc(_len_regs0*sizeof(const struct dce_abm_registers));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              }
          int _len_abm_shift0 = 1;
          const struct dce_abm_shift * abm_shift = (const struct dce_abm_shift *) malloc(_len_abm_shift0*sizeof(const struct dce_abm_shift));
          for(int _i0 = 0; _i0 < _len_abm_shift0; _i0++) {
              }
          int _len_abm_mask0 = 1;
          const struct dce_abm_mask * abm_mask = (const struct dce_abm_mask *) malloc(_len_abm_mask0*sizeof(const struct dce_abm_mask));
          for(int _i0 = 0; _i0 < _len_abm_mask0; _i0++) {
              }
          dce_abm_construct(abm_dce,ctx,regs,abm_shift,abm_mask);
          for(int _aux = 0; _aux < _len_abm_dce0; _aux++) {
          free(abm_dce[_aux].abm_mask);
          }
          for(int _aux = 0; _aux < _len_abm_dce0; _aux++) {
          free(abm_dce[_aux].abm_shift);
          }
          for(int _aux = 0; _aux < _len_abm_dce0; _aux++) {
          free(abm_dce[_aux].regs);
          }
          free(abm_dce);
          free(ctx);
          free(regs);
          free(abm_shift);
          free(abm_mask);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

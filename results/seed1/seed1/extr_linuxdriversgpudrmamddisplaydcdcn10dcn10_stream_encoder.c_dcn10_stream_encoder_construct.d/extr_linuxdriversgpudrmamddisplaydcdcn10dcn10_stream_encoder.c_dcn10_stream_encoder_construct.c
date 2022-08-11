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
       4            dlinked\n\
       5            bintree\n\
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
struct dcn10_stream_encoder_shift {int dummy; } ;
struct dcn10_stream_encoder_mask {int dummy; } ;
struct TYPE_2__ {int id; struct dc_bios* bp; struct dc_context* ctx; int /*<<< orphan*/ * funcs; } ;
struct dcn10_stream_encoder {struct dcn10_stream_encoder_mask const* se_mask; struct dcn10_stream_encoder_shift const* se_shift; struct dcn10_stream_enc_registers const* regs; TYPE_1__ base; } ;
struct dcn10_stream_enc_registers {int dummy; } ;
struct dc_context {int dummy; } ;
struct dc_bios {int dummy; } ;
typedef  enum engine_id { ____Placeholder_engine_id } engine_id ;

/* Variables and functions */
 int /*<<< orphan*/  dcn10_str_enc_funcs ; 

void dcn10_stream_encoder_construct(
	struct dcn10_stream_encoder *enc1,
	struct dc_context *ctx,
	struct dc_bios *bp,
	enum engine_id eng_id,
	const struct dcn10_stream_enc_registers *regs,
	const struct dcn10_stream_encoder_shift *se_shift,
	const struct dcn10_stream_encoder_mask *se_mask)
{
	enc1->base.funcs = &dcn10_str_enc_funcs;
	enc1->base.ctx = ctx;
	enc1->base.id = eng_id;
	enc1->base.bp = bp;
	enc1->regs = regs;
	enc1->se_shift = se_shift;
	enc1->se_mask = se_mask;
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
          enum engine_id eng_id = 0;
          int _len_enc10 = 1;
          struct dcn10_stream_encoder * enc1 = (struct dcn10_stream_encoder *) malloc(_len_enc10*sizeof(struct dcn10_stream_encoder));
          for(int _i0 = 0; _i0 < _len_enc10; _i0++) {
              int _len_enc1__i0__se_mask0 = 1;
          enc1[_i0].se_mask = (const struct dcn10_stream_encoder_mask *) malloc(_len_enc1__i0__se_mask0*sizeof(const struct dcn10_stream_encoder_mask));
          for(int _j0 = 0; _j0 < _len_enc1__i0__se_mask0; _j0++) {
              }
          int _len_enc1__i0__se_shift0 = 1;
          enc1[_i0].se_shift = (const struct dcn10_stream_encoder_shift *) malloc(_len_enc1__i0__se_shift0*sizeof(const struct dcn10_stream_encoder_shift));
          for(int _j0 = 0; _j0 < _len_enc1__i0__se_shift0; _j0++) {
              }
          int _len_enc1__i0__regs0 = 1;
          enc1[_i0].regs = (const struct dcn10_stream_enc_registers *) malloc(_len_enc1__i0__regs0*sizeof(const struct dcn10_stream_enc_registers));
          for(int _j0 = 0; _j0 < _len_enc1__i0__regs0; _j0++) {
              }
        enc1[_i0].base.id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_enc1__i0__base_bp0 = 1;
          enc1[_i0].base.bp = (struct dc_bios *) malloc(_len_enc1__i0__base_bp0*sizeof(struct dc_bios));
          for(int _j0 = 0; _j0 < _len_enc1__i0__base_bp0; _j0++) {
            enc1[_i0].base.bp->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_enc1__i0__base_ctx0 = 1;
          enc1[_i0].base.ctx = (struct dc_context *) malloc(_len_enc1__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_enc1__i0__base_ctx0; _j0++) {
            enc1[_i0].base.ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_enc1__i0__base_funcs0 = 1;
          enc1[_i0].base.funcs = (int *) malloc(_len_enc1__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_enc1__i0__base_funcs0; _j0++) {
            enc1[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 1;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bp0 = 1;
          struct dc_bios * bp = (struct dc_bios *) malloc(_len_bp0*sizeof(struct dc_bios));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 1;
          const struct dcn10_stream_enc_registers * regs = (const struct dcn10_stream_enc_registers *) malloc(_len_regs0*sizeof(const struct dcn10_stream_enc_registers));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              }
          int _len_se_shift0 = 1;
          const struct dcn10_stream_encoder_shift * se_shift = (const struct dcn10_stream_encoder_shift *) malloc(_len_se_shift0*sizeof(const struct dcn10_stream_encoder_shift));
          for(int _i0 = 0; _i0 < _len_se_shift0; _i0++) {
              }
          int _len_se_mask0 = 1;
          const struct dcn10_stream_encoder_mask * se_mask = (const struct dcn10_stream_encoder_mask *) malloc(_len_se_mask0*sizeof(const struct dcn10_stream_encoder_mask));
          for(int _i0 = 0; _i0 < _len_se_mask0; _i0++) {
              }
          dcn10_stream_encoder_construct(enc1,ctx,bp,eng_id,regs,se_shift,se_mask);
          for(int _aux = 0; _aux < _len_enc10; _aux++) {
          free(enc1[_aux].se_mask);
          }
          for(int _aux = 0; _aux < _len_enc10; _aux++) {
          free(enc1[_aux].se_shift);
          }
          for(int _aux = 0; _aux < _len_enc10; _aux++) {
          free(enc1[_aux].regs);
          }
          free(enc1);
          free(ctx);
          free(bp);
          free(regs);
          free(se_shift);
          free(se_mask);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum engine_id eng_id = 0;
          int _len_enc10 = 65025;
          struct dcn10_stream_encoder * enc1 = (struct dcn10_stream_encoder *) malloc(_len_enc10*sizeof(struct dcn10_stream_encoder));
          for(int _i0 = 0; _i0 < _len_enc10; _i0++) {
              int _len_enc1__i0__se_mask0 = 1;
          enc1[_i0].se_mask = (const struct dcn10_stream_encoder_mask *) malloc(_len_enc1__i0__se_mask0*sizeof(const struct dcn10_stream_encoder_mask));
          for(int _j0 = 0; _j0 < _len_enc1__i0__se_mask0; _j0++) {
              }
          int _len_enc1__i0__se_shift0 = 1;
          enc1[_i0].se_shift = (const struct dcn10_stream_encoder_shift *) malloc(_len_enc1__i0__se_shift0*sizeof(const struct dcn10_stream_encoder_shift));
          for(int _j0 = 0; _j0 < _len_enc1__i0__se_shift0; _j0++) {
              }
          int _len_enc1__i0__regs0 = 1;
          enc1[_i0].regs = (const struct dcn10_stream_enc_registers *) malloc(_len_enc1__i0__regs0*sizeof(const struct dcn10_stream_enc_registers));
          for(int _j0 = 0; _j0 < _len_enc1__i0__regs0; _j0++) {
              }
        enc1[_i0].base.id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_enc1__i0__base_bp0 = 1;
          enc1[_i0].base.bp = (struct dc_bios *) malloc(_len_enc1__i0__base_bp0*sizeof(struct dc_bios));
          for(int _j0 = 0; _j0 < _len_enc1__i0__base_bp0; _j0++) {
            enc1[_i0].base.bp->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_enc1__i0__base_ctx0 = 1;
          enc1[_i0].base.ctx = (struct dc_context *) malloc(_len_enc1__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_enc1__i0__base_ctx0; _j0++) {
            enc1[_i0].base.ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_enc1__i0__base_funcs0 = 1;
          enc1[_i0].base.funcs = (int *) malloc(_len_enc1__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_enc1__i0__base_funcs0; _j0++) {
            enc1[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 65025;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bp0 = 65025;
          struct dc_bios * bp = (struct dc_bios *) malloc(_len_bp0*sizeof(struct dc_bios));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 65025;
          const struct dcn10_stream_enc_registers * regs = (const struct dcn10_stream_enc_registers *) malloc(_len_regs0*sizeof(const struct dcn10_stream_enc_registers));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              }
          int _len_se_shift0 = 65025;
          const struct dcn10_stream_encoder_shift * se_shift = (const struct dcn10_stream_encoder_shift *) malloc(_len_se_shift0*sizeof(const struct dcn10_stream_encoder_shift));
          for(int _i0 = 0; _i0 < _len_se_shift0; _i0++) {
              }
          int _len_se_mask0 = 65025;
          const struct dcn10_stream_encoder_mask * se_mask = (const struct dcn10_stream_encoder_mask *) malloc(_len_se_mask0*sizeof(const struct dcn10_stream_encoder_mask));
          for(int _i0 = 0; _i0 < _len_se_mask0; _i0++) {
              }
          dcn10_stream_encoder_construct(enc1,ctx,bp,eng_id,regs,se_shift,se_mask);
          for(int _aux = 0; _aux < _len_enc10; _aux++) {
          free(enc1[_aux].se_mask);
          }
          for(int _aux = 0; _aux < _len_enc10; _aux++) {
          free(enc1[_aux].se_shift);
          }
          for(int _aux = 0; _aux < _len_enc10; _aux++) {
          free(enc1[_aux].regs);
          }
          free(enc1);
          free(ctx);
          free(bp);
          free(regs);
          free(se_shift);
          free(se_mask);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum engine_id eng_id = 0;
          int _len_enc10 = 100;
          struct dcn10_stream_encoder * enc1 = (struct dcn10_stream_encoder *) malloc(_len_enc10*sizeof(struct dcn10_stream_encoder));
          for(int _i0 = 0; _i0 < _len_enc10; _i0++) {
              int _len_enc1__i0__se_mask0 = 1;
          enc1[_i0].se_mask = (const struct dcn10_stream_encoder_mask *) malloc(_len_enc1__i0__se_mask0*sizeof(const struct dcn10_stream_encoder_mask));
          for(int _j0 = 0; _j0 < _len_enc1__i0__se_mask0; _j0++) {
              }
          int _len_enc1__i0__se_shift0 = 1;
          enc1[_i0].se_shift = (const struct dcn10_stream_encoder_shift *) malloc(_len_enc1__i0__se_shift0*sizeof(const struct dcn10_stream_encoder_shift));
          for(int _j0 = 0; _j0 < _len_enc1__i0__se_shift0; _j0++) {
              }
          int _len_enc1__i0__regs0 = 1;
          enc1[_i0].regs = (const struct dcn10_stream_enc_registers *) malloc(_len_enc1__i0__regs0*sizeof(const struct dcn10_stream_enc_registers));
          for(int _j0 = 0; _j0 < _len_enc1__i0__regs0; _j0++) {
              }
        enc1[_i0].base.id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_enc1__i0__base_bp0 = 1;
          enc1[_i0].base.bp = (struct dc_bios *) malloc(_len_enc1__i0__base_bp0*sizeof(struct dc_bios));
          for(int _j0 = 0; _j0 < _len_enc1__i0__base_bp0; _j0++) {
            enc1[_i0].base.bp->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_enc1__i0__base_ctx0 = 1;
          enc1[_i0].base.ctx = (struct dc_context *) malloc(_len_enc1__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_enc1__i0__base_ctx0; _j0++) {
            enc1[_i0].base.ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_enc1__i0__base_funcs0 = 1;
          enc1[_i0].base.funcs = (int *) malloc(_len_enc1__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_enc1__i0__base_funcs0; _j0++) {
            enc1[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 100;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bp0 = 100;
          struct dc_bios * bp = (struct dc_bios *) malloc(_len_bp0*sizeof(struct dc_bios));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 100;
          const struct dcn10_stream_enc_registers * regs = (const struct dcn10_stream_enc_registers *) malloc(_len_regs0*sizeof(const struct dcn10_stream_enc_registers));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              }
          int _len_se_shift0 = 100;
          const struct dcn10_stream_encoder_shift * se_shift = (const struct dcn10_stream_encoder_shift *) malloc(_len_se_shift0*sizeof(const struct dcn10_stream_encoder_shift));
          for(int _i0 = 0; _i0 < _len_se_shift0; _i0++) {
              }
          int _len_se_mask0 = 100;
          const struct dcn10_stream_encoder_mask * se_mask = (const struct dcn10_stream_encoder_mask *) malloc(_len_se_mask0*sizeof(const struct dcn10_stream_encoder_mask));
          for(int _i0 = 0; _i0 < _len_se_mask0; _i0++) {
              }
          dcn10_stream_encoder_construct(enc1,ctx,bp,eng_id,regs,se_shift,se_mask);
          for(int _aux = 0; _aux < _len_enc10; _aux++) {
          free(enc1[_aux].se_mask);
          }
          for(int _aux = 0; _aux < _len_enc10; _aux++) {
          free(enc1[_aux].se_shift);
          }
          for(int _aux = 0; _aux < _len_enc10; _aux++) {
          free(enc1[_aux].regs);
          }
          free(enc1);
          free(ctx);
          free(bp);
          free(regs);
          free(se_shift);
          free(se_mask);
        
        break;
    }
    // linked
    case 3:
    {
          enum engine_id eng_id = 0;
          int _len_enc10 = 1;
          struct dcn10_stream_encoder * enc1 = (struct dcn10_stream_encoder *) malloc(_len_enc10*sizeof(struct dcn10_stream_encoder));
          for(int _i0 = 0; _i0 < _len_enc10; _i0++) {
              int _len_enc1__i0__se_mask0 = 1;
          enc1[_i0].se_mask = (const struct dcn10_stream_encoder_mask *) malloc(_len_enc1__i0__se_mask0*sizeof(const struct dcn10_stream_encoder_mask));
          for(int _j0 = 0; _j0 < _len_enc1__i0__se_mask0; _j0++) {
              }
          int _len_enc1__i0__se_shift0 = 1;
          enc1[_i0].se_shift = (const struct dcn10_stream_encoder_shift *) malloc(_len_enc1__i0__se_shift0*sizeof(const struct dcn10_stream_encoder_shift));
          for(int _j0 = 0; _j0 < _len_enc1__i0__se_shift0; _j0++) {
              }
          int _len_enc1__i0__regs0 = 1;
          enc1[_i0].regs = (const struct dcn10_stream_enc_registers *) malloc(_len_enc1__i0__regs0*sizeof(const struct dcn10_stream_enc_registers));
          for(int _j0 = 0; _j0 < _len_enc1__i0__regs0; _j0++) {
              }
        enc1[_i0].base.id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_enc1__i0__base_bp0 = 1;
          enc1[_i0].base.bp = (struct dc_bios *) malloc(_len_enc1__i0__base_bp0*sizeof(struct dc_bios));
          for(int _j0 = 0; _j0 < _len_enc1__i0__base_bp0; _j0++) {
            enc1[_i0].base.bp->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_enc1__i0__base_ctx0 = 1;
          enc1[_i0].base.ctx = (struct dc_context *) malloc(_len_enc1__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_enc1__i0__base_ctx0; _j0++) {
            enc1[_i0].base.ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_enc1__i0__base_funcs0 = 1;
          enc1[_i0].base.funcs = (int *) malloc(_len_enc1__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_enc1__i0__base_funcs0; _j0++) {
            enc1[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 1;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bp0 = 1;
          struct dc_bios * bp = (struct dc_bios *) malloc(_len_bp0*sizeof(struct dc_bios));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 1;
          const struct dcn10_stream_enc_registers * regs = (const struct dcn10_stream_enc_registers *) malloc(_len_regs0*sizeof(const struct dcn10_stream_enc_registers));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              }
          int _len_se_shift0 = 1;
          const struct dcn10_stream_encoder_shift * se_shift = (const struct dcn10_stream_encoder_shift *) malloc(_len_se_shift0*sizeof(const struct dcn10_stream_encoder_shift));
          for(int _i0 = 0; _i0 < _len_se_shift0; _i0++) {
              }
          int _len_se_mask0 = 1;
          const struct dcn10_stream_encoder_mask * se_mask = (const struct dcn10_stream_encoder_mask *) malloc(_len_se_mask0*sizeof(const struct dcn10_stream_encoder_mask));
          for(int _i0 = 0; _i0 < _len_se_mask0; _i0++) {
              }
          dcn10_stream_encoder_construct(enc1,ctx,bp,eng_id,regs,se_shift,se_mask);
          for(int _aux = 0; _aux < _len_enc10; _aux++) {
          free(enc1[_aux].se_mask);
          }
          for(int _aux = 0; _aux < _len_enc10; _aux++) {
          free(enc1[_aux].se_shift);
          }
          for(int _aux = 0; _aux < _len_enc10; _aux++) {
          free(enc1[_aux].regs);
          }
          free(enc1);
          free(ctx);
          free(bp);
          free(regs);
          free(se_shift);
          free(se_mask);
        
        break;
    }
    // dlinked
    case 4:
    {
          enum engine_id eng_id = 0;
          int _len_enc10 = 1;
          struct dcn10_stream_encoder * enc1 = (struct dcn10_stream_encoder *) malloc(_len_enc10*sizeof(struct dcn10_stream_encoder));
          for(int _i0 = 0; _i0 < _len_enc10; _i0++) {
              int _len_enc1__i0__se_mask0 = 1;
          enc1[_i0].se_mask = (const struct dcn10_stream_encoder_mask *) malloc(_len_enc1__i0__se_mask0*sizeof(const struct dcn10_stream_encoder_mask));
          for(int _j0 = 0; _j0 < _len_enc1__i0__se_mask0; _j0++) {
              }
          int _len_enc1__i0__se_shift0 = 1;
          enc1[_i0].se_shift = (const struct dcn10_stream_encoder_shift *) malloc(_len_enc1__i0__se_shift0*sizeof(const struct dcn10_stream_encoder_shift));
          for(int _j0 = 0; _j0 < _len_enc1__i0__se_shift0; _j0++) {
              }
          int _len_enc1__i0__regs0 = 1;
          enc1[_i0].regs = (const struct dcn10_stream_enc_registers *) malloc(_len_enc1__i0__regs0*sizeof(const struct dcn10_stream_enc_registers));
          for(int _j0 = 0; _j0 < _len_enc1__i0__regs0; _j0++) {
              }
        enc1[_i0].base.id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_enc1__i0__base_bp0 = 1;
          enc1[_i0].base.bp = (struct dc_bios *) malloc(_len_enc1__i0__base_bp0*sizeof(struct dc_bios));
          for(int _j0 = 0; _j0 < _len_enc1__i0__base_bp0; _j0++) {
            enc1[_i0].base.bp->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_enc1__i0__base_ctx0 = 1;
          enc1[_i0].base.ctx = (struct dc_context *) malloc(_len_enc1__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_enc1__i0__base_ctx0; _j0++) {
            enc1[_i0].base.ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_enc1__i0__base_funcs0 = 1;
          enc1[_i0].base.funcs = (int *) malloc(_len_enc1__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_enc1__i0__base_funcs0; _j0++) {
            enc1[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 1;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bp0 = 1;
          struct dc_bios * bp = (struct dc_bios *) malloc(_len_bp0*sizeof(struct dc_bios));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 1;
          const struct dcn10_stream_enc_registers * regs = (const struct dcn10_stream_enc_registers *) malloc(_len_regs0*sizeof(const struct dcn10_stream_enc_registers));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              }
          int _len_se_shift0 = 1;
          const struct dcn10_stream_encoder_shift * se_shift = (const struct dcn10_stream_encoder_shift *) malloc(_len_se_shift0*sizeof(const struct dcn10_stream_encoder_shift));
          for(int _i0 = 0; _i0 < _len_se_shift0; _i0++) {
              }
          int _len_se_mask0 = 1;
          const struct dcn10_stream_encoder_mask * se_mask = (const struct dcn10_stream_encoder_mask *) malloc(_len_se_mask0*sizeof(const struct dcn10_stream_encoder_mask));
          for(int _i0 = 0; _i0 < _len_se_mask0; _i0++) {
              }
          dcn10_stream_encoder_construct(enc1,ctx,bp,eng_id,regs,se_shift,se_mask);
          for(int _aux = 0; _aux < _len_enc10; _aux++) {
          free(enc1[_aux].se_mask);
          }
          for(int _aux = 0; _aux < _len_enc10; _aux++) {
          free(enc1[_aux].se_shift);
          }
          for(int _aux = 0; _aux < _len_enc10; _aux++) {
          free(enc1[_aux].regs);
          }
          free(enc1);
          free(ctx);
          free(bp);
          free(regs);
          free(se_shift);
          free(se_mask);
        
        break;
    }
    // bintree
    case 5:
    {
          enum engine_id eng_id = 0;
          int _len_enc10 = 1;
          struct dcn10_stream_encoder * enc1 = (struct dcn10_stream_encoder *) malloc(_len_enc10*sizeof(struct dcn10_stream_encoder));
          for(int _i0 = 0; _i0 < _len_enc10; _i0++) {
              int _len_enc1__i0__se_mask0 = 1;
          enc1[_i0].se_mask = (const struct dcn10_stream_encoder_mask *) malloc(_len_enc1__i0__se_mask0*sizeof(const struct dcn10_stream_encoder_mask));
          for(int _j0 = 0; _j0 < _len_enc1__i0__se_mask0; _j0++) {
              }
          int _len_enc1__i0__se_shift0 = 1;
          enc1[_i0].se_shift = (const struct dcn10_stream_encoder_shift *) malloc(_len_enc1__i0__se_shift0*sizeof(const struct dcn10_stream_encoder_shift));
          for(int _j0 = 0; _j0 < _len_enc1__i0__se_shift0; _j0++) {
              }
          int _len_enc1__i0__regs0 = 1;
          enc1[_i0].regs = (const struct dcn10_stream_enc_registers *) malloc(_len_enc1__i0__regs0*sizeof(const struct dcn10_stream_enc_registers));
          for(int _j0 = 0; _j0 < _len_enc1__i0__regs0; _j0++) {
              }
        enc1[_i0].base.id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_enc1__i0__base_bp0 = 1;
          enc1[_i0].base.bp = (struct dc_bios *) malloc(_len_enc1__i0__base_bp0*sizeof(struct dc_bios));
          for(int _j0 = 0; _j0 < _len_enc1__i0__base_bp0; _j0++) {
            enc1[_i0].base.bp->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_enc1__i0__base_ctx0 = 1;
          enc1[_i0].base.ctx = (struct dc_context *) malloc(_len_enc1__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_enc1__i0__base_ctx0; _j0++) {
            enc1[_i0].base.ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_enc1__i0__base_funcs0 = 1;
          enc1[_i0].base.funcs = (int *) malloc(_len_enc1__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_enc1__i0__base_funcs0; _j0++) {
            enc1[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 1;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bp0 = 1;
          struct dc_bios * bp = (struct dc_bios *) malloc(_len_bp0*sizeof(struct dc_bios));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 1;
          const struct dcn10_stream_enc_registers * regs = (const struct dcn10_stream_enc_registers *) malloc(_len_regs0*sizeof(const struct dcn10_stream_enc_registers));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
              }
          int _len_se_shift0 = 1;
          const struct dcn10_stream_encoder_shift * se_shift = (const struct dcn10_stream_encoder_shift *) malloc(_len_se_shift0*sizeof(const struct dcn10_stream_encoder_shift));
          for(int _i0 = 0; _i0 < _len_se_shift0; _i0++) {
              }
          int _len_se_mask0 = 1;
          const struct dcn10_stream_encoder_mask * se_mask = (const struct dcn10_stream_encoder_mask *) malloc(_len_se_mask0*sizeof(const struct dcn10_stream_encoder_mask));
          for(int _i0 = 0; _i0 < _len_se_mask0; _i0++) {
              }
          dcn10_stream_encoder_construct(enc1,ctx,bp,eng_id,regs,se_shift,se_mask);
          for(int _aux = 0; _aux < _len_enc10; _aux++) {
          free(enc1[_aux].se_mask);
          }
          for(int _aux = 0; _aux < _len_enc10; _aux++) {
          free(enc1[_aux].se_shift);
          }
          for(int _aux = 0; _aux < _len_enc10; _aux++) {
          free(enc1[_aux].regs);
          }
          free(enc1);
          free(ctx);
          free(bp);
          free(regs);
          free(se_shift);
          free(se_mask);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

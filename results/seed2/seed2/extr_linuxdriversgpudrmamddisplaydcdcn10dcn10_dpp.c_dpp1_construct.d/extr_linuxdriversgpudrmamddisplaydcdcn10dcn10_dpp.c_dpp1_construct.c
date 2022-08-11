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
struct dcn_dpp_shift {int dummy; } ;
struct dcn_dpp_registers {int dummy; } ;
struct dcn_dpp_mask {int dummy; } ;
struct TYPE_2__ {int /*<<< orphan*/ * caps; int /*<<< orphan*/ * funcs; int /*<<< orphan*/  inst; struct dc_context* ctx; } ;
struct dcn10_dpp {int lb_pixel_depth_supported; int /*<<< orphan*/  lb_memory_size; int /*<<< orphan*/  lb_bits_per_entry; struct dcn_dpp_mask const* tf_mask; struct dcn_dpp_shift const* tf_shift; struct dcn_dpp_registers const* tf_regs; TYPE_1__ base; } ;
struct dc_context {int dummy; } ;

/* Variables and functions */
 int /*<<< orphan*/  LB_BITS_PER_ENTRY ; 
 int LB_PIXEL_DEPTH_18BPP ; 
 int LB_PIXEL_DEPTH_24BPP ; 
 int LB_PIXEL_DEPTH_30BPP ; 
 int /*<<< orphan*/  LB_TOTAL_NUMBER_OF_ENTRIES ; 
 int /*<<< orphan*/  dcn10_dpp_cap ; 
 int /*<<< orphan*/  dcn10_dpp_funcs ; 

void dpp1_construct(
	struct dcn10_dpp *dpp,
	struct dc_context *ctx,
	uint32_t inst,
	const struct dcn_dpp_registers *tf_regs,
	const struct dcn_dpp_shift *tf_shift,
	const struct dcn_dpp_mask *tf_mask)
{
	dpp->base.ctx = ctx;

	dpp->base.inst = inst;
	dpp->base.funcs = &dcn10_dpp_funcs;
	dpp->base.caps = &dcn10_dpp_cap;

	dpp->tf_regs = tf_regs;
	dpp->tf_shift = tf_shift;
	dpp->tf_mask = tf_mask;

	dpp->lb_pixel_depth_supported =
		LB_PIXEL_DEPTH_18BPP |
		LB_PIXEL_DEPTH_24BPP |
		LB_PIXEL_DEPTH_30BPP;

	dpp->lb_bits_per_entry = LB_BITS_PER_ENTRY;
	dpp->lb_memory_size = LB_TOTAL_NUMBER_OF_ENTRIES; /*0x1404*/
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
          int _len_dpp0 = 1;
          struct dcn10_dpp * dpp = (struct dcn10_dpp *) malloc(_len_dpp0*sizeof(struct dcn10_dpp));
          for(int _i0 = 0; _i0 < _len_dpp0; _i0++) {
            dpp[_i0].lb_pixel_depth_supported = ((-2 * (next_i()%2)) + 1) * next_i();
        dpp[_i0].lb_memory_size = ((-2 * (next_i()%2)) + 1) * next_i();
        dpp[_i0].lb_bits_per_entry = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dpp__i0__tf_mask0 = 1;
          dpp[_i0].tf_mask = (const struct dcn_dpp_mask *) malloc(_len_dpp__i0__tf_mask0*sizeof(const struct dcn_dpp_mask));
          for(int _j0 = 0; _j0 < _len_dpp__i0__tf_mask0; _j0++) {
              }
          int _len_dpp__i0__tf_shift0 = 1;
          dpp[_i0].tf_shift = (const struct dcn_dpp_shift *) malloc(_len_dpp__i0__tf_shift0*sizeof(const struct dcn_dpp_shift));
          for(int _j0 = 0; _j0 < _len_dpp__i0__tf_shift0; _j0++) {
              }
          int _len_dpp__i0__tf_regs0 = 1;
          dpp[_i0].tf_regs = (const struct dcn_dpp_registers *) malloc(_len_dpp__i0__tf_regs0*sizeof(const struct dcn_dpp_registers));
          for(int _j0 = 0; _j0 < _len_dpp__i0__tf_regs0; _j0++) {
              }
          int _len_dpp__i0__base_caps0 = 1;
          dpp[_i0].base.caps = (int *) malloc(_len_dpp__i0__base_caps0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dpp__i0__base_caps0; _j0++) {
            dpp[_i0].base.caps[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dpp__i0__base_funcs0 = 1;
          dpp[_i0].base.funcs = (int *) malloc(_len_dpp__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dpp__i0__base_funcs0; _j0++) {
            dpp[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dpp[_i0].base.inst = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dpp__i0__base_ctx0 = 1;
          dpp[_i0].base.ctx = (struct dc_context *) malloc(_len_dpp__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_dpp__i0__base_ctx0; _j0++) {
            dpp[_i0].base.ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 1;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tf_regs0 = 1;
          const struct dcn_dpp_registers * tf_regs = (const struct dcn_dpp_registers *) malloc(_len_tf_regs0*sizeof(const struct dcn_dpp_registers));
          for(int _i0 = 0; _i0 < _len_tf_regs0; _i0++) {
              }
          int _len_tf_shift0 = 1;
          const struct dcn_dpp_shift * tf_shift = (const struct dcn_dpp_shift *) malloc(_len_tf_shift0*sizeof(const struct dcn_dpp_shift));
          for(int _i0 = 0; _i0 < _len_tf_shift0; _i0++) {
              }
          int _len_tf_mask0 = 1;
          const struct dcn_dpp_mask * tf_mask = (const struct dcn_dpp_mask *) malloc(_len_tf_mask0*sizeof(const struct dcn_dpp_mask));
          for(int _i0 = 0; _i0 < _len_tf_mask0; _i0++) {
              }
          dpp1_construct(dpp,ctx,inst,tf_regs,tf_shift,tf_mask);
          for(int _aux = 0; _aux < _len_dpp0; _aux++) {
          free(dpp[_aux].tf_mask);
          }
          for(int _aux = 0; _aux < _len_dpp0; _aux++) {
          free(dpp[_aux].tf_shift);
          }
          for(int _aux = 0; _aux < _len_dpp0; _aux++) {
          free(dpp[_aux].tf_regs);
          }
          free(dpp);
          free(ctx);
          free(tf_regs);
          free(tf_shift);
          free(tf_mask);
        
        break;
    }
    // big-arr
    case 1:
    {
          int inst = 255;
          int _len_dpp0 = 65025;
          struct dcn10_dpp * dpp = (struct dcn10_dpp *) malloc(_len_dpp0*sizeof(struct dcn10_dpp));
          for(int _i0 = 0; _i0 < _len_dpp0; _i0++) {
            dpp[_i0].lb_pixel_depth_supported = ((-2 * (next_i()%2)) + 1) * next_i();
        dpp[_i0].lb_memory_size = ((-2 * (next_i()%2)) + 1) * next_i();
        dpp[_i0].lb_bits_per_entry = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dpp__i0__tf_mask0 = 1;
          dpp[_i0].tf_mask = (const struct dcn_dpp_mask *) malloc(_len_dpp__i0__tf_mask0*sizeof(const struct dcn_dpp_mask));
          for(int _j0 = 0; _j0 < _len_dpp__i0__tf_mask0; _j0++) {
              }
          int _len_dpp__i0__tf_shift0 = 1;
          dpp[_i0].tf_shift = (const struct dcn_dpp_shift *) malloc(_len_dpp__i0__tf_shift0*sizeof(const struct dcn_dpp_shift));
          for(int _j0 = 0; _j0 < _len_dpp__i0__tf_shift0; _j0++) {
              }
          int _len_dpp__i0__tf_regs0 = 1;
          dpp[_i0].tf_regs = (const struct dcn_dpp_registers *) malloc(_len_dpp__i0__tf_regs0*sizeof(const struct dcn_dpp_registers));
          for(int _j0 = 0; _j0 < _len_dpp__i0__tf_regs0; _j0++) {
              }
          int _len_dpp__i0__base_caps0 = 1;
          dpp[_i0].base.caps = (int *) malloc(_len_dpp__i0__base_caps0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dpp__i0__base_caps0; _j0++) {
            dpp[_i0].base.caps[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dpp__i0__base_funcs0 = 1;
          dpp[_i0].base.funcs = (int *) malloc(_len_dpp__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dpp__i0__base_funcs0; _j0++) {
            dpp[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dpp[_i0].base.inst = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dpp__i0__base_ctx0 = 1;
          dpp[_i0].base.ctx = (struct dc_context *) malloc(_len_dpp__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_dpp__i0__base_ctx0; _j0++) {
            dpp[_i0].base.ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 65025;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tf_regs0 = 65025;
          const struct dcn_dpp_registers * tf_regs = (const struct dcn_dpp_registers *) malloc(_len_tf_regs0*sizeof(const struct dcn_dpp_registers));
          for(int _i0 = 0; _i0 < _len_tf_regs0; _i0++) {
              }
          int _len_tf_shift0 = 65025;
          const struct dcn_dpp_shift * tf_shift = (const struct dcn_dpp_shift *) malloc(_len_tf_shift0*sizeof(const struct dcn_dpp_shift));
          for(int _i0 = 0; _i0 < _len_tf_shift0; _i0++) {
              }
          int _len_tf_mask0 = 65025;
          const struct dcn_dpp_mask * tf_mask = (const struct dcn_dpp_mask *) malloc(_len_tf_mask0*sizeof(const struct dcn_dpp_mask));
          for(int _i0 = 0; _i0 < _len_tf_mask0; _i0++) {
              }
          dpp1_construct(dpp,ctx,inst,tf_regs,tf_shift,tf_mask);
          for(int _aux = 0; _aux < _len_dpp0; _aux++) {
          free(dpp[_aux].tf_mask);
          }
          for(int _aux = 0; _aux < _len_dpp0; _aux++) {
          free(dpp[_aux].tf_shift);
          }
          for(int _aux = 0; _aux < _len_dpp0; _aux++) {
          free(dpp[_aux].tf_regs);
          }
          free(dpp);
          free(ctx);
          free(tf_regs);
          free(tf_shift);
          free(tf_mask);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int inst = 10;
          int _len_dpp0 = 100;
          struct dcn10_dpp * dpp = (struct dcn10_dpp *) malloc(_len_dpp0*sizeof(struct dcn10_dpp));
          for(int _i0 = 0; _i0 < _len_dpp0; _i0++) {
            dpp[_i0].lb_pixel_depth_supported = ((-2 * (next_i()%2)) + 1) * next_i();
        dpp[_i0].lb_memory_size = ((-2 * (next_i()%2)) + 1) * next_i();
        dpp[_i0].lb_bits_per_entry = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dpp__i0__tf_mask0 = 1;
          dpp[_i0].tf_mask = (const struct dcn_dpp_mask *) malloc(_len_dpp__i0__tf_mask0*sizeof(const struct dcn_dpp_mask));
          for(int _j0 = 0; _j0 < _len_dpp__i0__tf_mask0; _j0++) {
              }
          int _len_dpp__i0__tf_shift0 = 1;
          dpp[_i0].tf_shift = (const struct dcn_dpp_shift *) malloc(_len_dpp__i0__tf_shift0*sizeof(const struct dcn_dpp_shift));
          for(int _j0 = 0; _j0 < _len_dpp__i0__tf_shift0; _j0++) {
              }
          int _len_dpp__i0__tf_regs0 = 1;
          dpp[_i0].tf_regs = (const struct dcn_dpp_registers *) malloc(_len_dpp__i0__tf_regs0*sizeof(const struct dcn_dpp_registers));
          for(int _j0 = 0; _j0 < _len_dpp__i0__tf_regs0; _j0++) {
              }
          int _len_dpp__i0__base_caps0 = 1;
          dpp[_i0].base.caps = (int *) malloc(_len_dpp__i0__base_caps0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dpp__i0__base_caps0; _j0++) {
            dpp[_i0].base.caps[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dpp__i0__base_funcs0 = 1;
          dpp[_i0].base.funcs = (int *) malloc(_len_dpp__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dpp__i0__base_funcs0; _j0++) {
            dpp[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dpp[_i0].base.inst = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dpp__i0__base_ctx0 = 1;
          dpp[_i0].base.ctx = (struct dc_context *) malloc(_len_dpp__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_dpp__i0__base_ctx0; _j0++) {
            dpp[_i0].base.ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 100;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tf_regs0 = 100;
          const struct dcn_dpp_registers * tf_regs = (const struct dcn_dpp_registers *) malloc(_len_tf_regs0*sizeof(const struct dcn_dpp_registers));
          for(int _i0 = 0; _i0 < _len_tf_regs0; _i0++) {
              }
          int _len_tf_shift0 = 100;
          const struct dcn_dpp_shift * tf_shift = (const struct dcn_dpp_shift *) malloc(_len_tf_shift0*sizeof(const struct dcn_dpp_shift));
          for(int _i0 = 0; _i0 < _len_tf_shift0; _i0++) {
              }
          int _len_tf_mask0 = 100;
          const struct dcn_dpp_mask * tf_mask = (const struct dcn_dpp_mask *) malloc(_len_tf_mask0*sizeof(const struct dcn_dpp_mask));
          for(int _i0 = 0; _i0 < _len_tf_mask0; _i0++) {
              }
          dpp1_construct(dpp,ctx,inst,tf_regs,tf_shift,tf_mask);
          for(int _aux = 0; _aux < _len_dpp0; _aux++) {
          free(dpp[_aux].tf_mask);
          }
          for(int _aux = 0; _aux < _len_dpp0; _aux++) {
          free(dpp[_aux].tf_shift);
          }
          for(int _aux = 0; _aux < _len_dpp0; _aux++) {
          free(dpp[_aux].tf_regs);
          }
          free(dpp);
          free(ctx);
          free(tf_regs);
          free(tf_shift);
          free(tf_mask);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

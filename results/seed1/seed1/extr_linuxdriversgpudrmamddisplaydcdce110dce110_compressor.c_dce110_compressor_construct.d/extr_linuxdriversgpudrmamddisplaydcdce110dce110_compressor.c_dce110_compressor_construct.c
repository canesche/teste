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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int FBC_SUPPORT; int DUMMY_BACKEND; int CLK_GATING_DISABLED; } ;
struct TYPE_6__ {TYPE_1__ bits; scalar_t__ raw; } ;
struct TYPE_8__ {int lpt_channels_num; int is_enabled; int /*<<< orphan*/ * funcs; scalar_t__ attached_inst; scalar_t__ dram_channels_num; scalar_t__ channel_interleave_size; scalar_t__ raw_size; scalar_t__ banks_num; int /*<<< orphan*/  min_compress_ratio; scalar_t__ preferred_requested_size; scalar_t__ allocated_size; int /*<<< orphan*/  memory_bus_width; scalar_t__ embedded_panel_v_size; scalar_t__ embedded_panel_h_size; struct dc_context* ctx; TYPE_2__ options; } ;
struct dce110_compressor {TYPE_4__ base; } ;
struct TYPE_7__ {int /*<<< orphan*/  vram_width; } ;
struct dc_context {TYPE_3__ asic_id; } ;

/* Variables and functions */
 int /*<<< orphan*/  FBC_COMPRESS_RATIO_INVALID ; 
 int /*<<< orphan*/  dce110_compressor_funcs ; 

void dce110_compressor_construct(struct dce110_compressor *compressor,
	struct dc_context *ctx)
{

	compressor->base.options.raw = 0;
	compressor->base.options.bits.FBC_SUPPORT = true;

	/* for dce 11 always use one dram channel for lpt */
	compressor->base.lpt_channels_num = 1;
	compressor->base.options.bits.DUMMY_BACKEND = false;

	/*
	 * check if this system has more than 1 dram channel; if only 1 then lpt
	 * should not be supported
	 */


	compressor->base.options.bits.CLK_GATING_DISABLED = false;

	compressor->base.ctx = ctx;
	compressor->base.embedded_panel_h_size = 0;
	compressor->base.embedded_panel_v_size = 0;
	compressor->base.memory_bus_width = ctx->asic_id.vram_width;
	compressor->base.allocated_size = 0;
	compressor->base.preferred_requested_size = 0;
	compressor->base.min_compress_ratio = FBC_COMPRESS_RATIO_INVALID;
	compressor->base.banks_num = 0;
	compressor->base.raw_size = 0;
	compressor->base.channel_interleave_size = 0;
	compressor->base.dram_channels_num = 0;
	compressor->base.lpt_channels_num = 0;
	compressor->base.attached_inst = 0;
	compressor->base.is_enabled = false;
	compressor->base.funcs = &dce110_compressor_funcs;

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
          int _len_compressor0 = 1;
          struct dce110_compressor * compressor = (struct dce110_compressor *) malloc(_len_compressor0*sizeof(struct dce110_compressor));
          for(int _i0 = 0; _i0 < _len_compressor0; _i0++) {
            compressor[_i0].base.lpt_channels_num = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.is_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_compressor__i0__base_funcs0 = 1;
          compressor[_i0].base.funcs = (int *) malloc(_len_compressor__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_compressor__i0__base_funcs0; _j0++) {
            compressor[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        compressor[_i0].base.attached_inst = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.dram_channels_num = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.channel_interleave_size = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.raw_size = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.banks_num = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.min_compress_ratio = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.preferred_requested_size = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.allocated_size = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.memory_bus_width = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.embedded_panel_v_size = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.embedded_panel_h_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_compressor__i0__base_ctx0 = 1;
          compressor[_i0].base.ctx = (struct dc_context *) malloc(_len_compressor__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_compressor__i0__base_ctx0; _j0++) {
            compressor[_i0].base.ctx->asic_id.vram_width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        compressor[_i0].base.options.bits.FBC_SUPPORT = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.options.bits.DUMMY_BACKEND = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.options.bits.CLK_GATING_DISABLED = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.options.raw = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx0 = 1;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].asic_id.vram_width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dce110_compressor_construct(compressor,ctx);
          free(compressor);
          free(ctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_compressor0 = 65025;
          struct dce110_compressor * compressor = (struct dce110_compressor *) malloc(_len_compressor0*sizeof(struct dce110_compressor));
          for(int _i0 = 0; _i0 < _len_compressor0; _i0++) {
            compressor[_i0].base.lpt_channels_num = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.is_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_compressor__i0__base_funcs0 = 1;
          compressor[_i0].base.funcs = (int *) malloc(_len_compressor__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_compressor__i0__base_funcs0; _j0++) {
            compressor[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        compressor[_i0].base.attached_inst = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.dram_channels_num = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.channel_interleave_size = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.raw_size = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.banks_num = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.min_compress_ratio = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.preferred_requested_size = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.allocated_size = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.memory_bus_width = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.embedded_panel_v_size = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.embedded_panel_h_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_compressor__i0__base_ctx0 = 1;
          compressor[_i0].base.ctx = (struct dc_context *) malloc(_len_compressor__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_compressor__i0__base_ctx0; _j0++) {
            compressor[_i0].base.ctx->asic_id.vram_width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        compressor[_i0].base.options.bits.FBC_SUPPORT = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.options.bits.DUMMY_BACKEND = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.options.bits.CLK_GATING_DISABLED = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.options.raw = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx0 = 65025;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].asic_id.vram_width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dce110_compressor_construct(compressor,ctx);
          free(compressor);
          free(ctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_compressor0 = 100;
          struct dce110_compressor * compressor = (struct dce110_compressor *) malloc(_len_compressor0*sizeof(struct dce110_compressor));
          for(int _i0 = 0; _i0 < _len_compressor0; _i0++) {
            compressor[_i0].base.lpt_channels_num = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.is_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_compressor__i0__base_funcs0 = 1;
          compressor[_i0].base.funcs = (int *) malloc(_len_compressor__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_compressor__i0__base_funcs0; _j0++) {
            compressor[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        compressor[_i0].base.attached_inst = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.dram_channels_num = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.channel_interleave_size = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.raw_size = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.banks_num = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.min_compress_ratio = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.preferred_requested_size = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.allocated_size = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.memory_bus_width = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.embedded_panel_v_size = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.embedded_panel_h_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_compressor__i0__base_ctx0 = 1;
          compressor[_i0].base.ctx = (struct dc_context *) malloc(_len_compressor__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_compressor__i0__base_ctx0; _j0++) {
            compressor[_i0].base.ctx->asic_id.vram_width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        compressor[_i0].base.options.bits.FBC_SUPPORT = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.options.bits.DUMMY_BACKEND = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.options.bits.CLK_GATING_DISABLED = ((-2 * (next_i()%2)) + 1) * next_i();
        compressor[_i0].base.options.raw = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx0 = 100;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].asic_id.vram_width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dce110_compressor_construct(compressor,ctx);
          free(compressor);
          free(ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

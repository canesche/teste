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
struct TYPE_2__ {int /*<<< orphan*/  bp; struct dc_context* ctx; int /*<<< orphan*/ * funcs; } ;
struct dce110_timing_generator {int min_h_blank; int min_h_front_porch; int min_h_back_porch; scalar_t__ max_v_total; scalar_t__ max_h_total; TYPE_1__ base; int /*<<< orphan*/  controller_id; } ;
struct dc_context {int /*<<< orphan*/  dc_bios; } ;

/* Variables and functions */
 int /*<<< orphan*/  CONTROLLER_ID_UNDERLAY0 ; 
 scalar_t__ CRTC_H_TOTAL__CRTC_H_TOTAL_MASK ; 
 scalar_t__ CRTC_V_TOTAL__CRTC_V_TOTAL_MASK ; 
 int /*<<< orphan*/  dce110_tg_v_funcs ; 

void dce110_timing_generator_v_construct(
	struct dce110_timing_generator *tg110,
	struct dc_context *ctx)
{
	tg110->controller_id = CONTROLLER_ID_UNDERLAY0;

	tg110->base.funcs = &dce110_tg_v_funcs;

	tg110->base.ctx = ctx;
	tg110->base.bp = ctx->dc_bios;

	tg110->max_h_total = CRTC_H_TOTAL__CRTC_H_TOTAL_MASK + 1;
	tg110->max_v_total = CRTC_V_TOTAL__CRTC_V_TOTAL_MASK + 1;

	tg110->min_h_blank = 56;
	tg110->min_h_front_porch = 4;
	tg110->min_h_back_porch = 4;
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
          int _len_tg1100 = 1;
          struct dce110_timing_generator * tg110 = (struct dce110_timing_generator *) malloc(_len_tg1100*sizeof(struct dce110_timing_generator));
          for(int _i0 = 0; _i0 < _len_tg1100; _i0++) {
            tg110[_i0].min_h_blank = ((-2 * (next_i()%2)) + 1) * next_i();
        tg110[_i0].min_h_front_porch = ((-2 * (next_i()%2)) + 1) * next_i();
        tg110[_i0].min_h_back_porch = ((-2 * (next_i()%2)) + 1) * next_i();
        tg110[_i0].max_v_total = ((-2 * (next_i()%2)) + 1) * next_i();
        tg110[_i0].max_h_total = ((-2 * (next_i()%2)) + 1) * next_i();
        tg110[_i0].base.bp = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tg110__i0__base_ctx0 = 1;
          tg110[_i0].base.ctx = (struct dc_context *) malloc(_len_tg110__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_tg110__i0__base_ctx0; _j0++) {
            tg110[_i0].base.ctx->dc_bios = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tg110__i0__base_funcs0 = 1;
          tg110[_i0].base.funcs = (int *) malloc(_len_tg110__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tg110__i0__base_funcs0; _j0++) {
            tg110[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tg110[_i0].controller_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx0 = 1;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dc_bios = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dce110_timing_generator_v_construct(tg110,ctx);
          free(tg110);
          free(ctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_tg1100 = 65025;
          struct dce110_timing_generator * tg110 = (struct dce110_timing_generator *) malloc(_len_tg1100*sizeof(struct dce110_timing_generator));
          for(int _i0 = 0; _i0 < _len_tg1100; _i0++) {
            tg110[_i0].min_h_blank = ((-2 * (next_i()%2)) + 1) * next_i();
        tg110[_i0].min_h_front_porch = ((-2 * (next_i()%2)) + 1) * next_i();
        tg110[_i0].min_h_back_porch = ((-2 * (next_i()%2)) + 1) * next_i();
        tg110[_i0].max_v_total = ((-2 * (next_i()%2)) + 1) * next_i();
        tg110[_i0].max_h_total = ((-2 * (next_i()%2)) + 1) * next_i();
        tg110[_i0].base.bp = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tg110__i0__base_ctx0 = 1;
          tg110[_i0].base.ctx = (struct dc_context *) malloc(_len_tg110__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_tg110__i0__base_ctx0; _j0++) {
            tg110[_i0].base.ctx->dc_bios = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tg110__i0__base_funcs0 = 1;
          tg110[_i0].base.funcs = (int *) malloc(_len_tg110__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tg110__i0__base_funcs0; _j0++) {
            tg110[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tg110[_i0].controller_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx0 = 65025;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dc_bios = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dce110_timing_generator_v_construct(tg110,ctx);
          free(tg110);
          free(ctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_tg1100 = 100;
          struct dce110_timing_generator * tg110 = (struct dce110_timing_generator *) malloc(_len_tg1100*sizeof(struct dce110_timing_generator));
          for(int _i0 = 0; _i0 < _len_tg1100; _i0++) {
            tg110[_i0].min_h_blank = ((-2 * (next_i()%2)) + 1) * next_i();
        tg110[_i0].min_h_front_porch = ((-2 * (next_i()%2)) + 1) * next_i();
        tg110[_i0].min_h_back_porch = ((-2 * (next_i()%2)) + 1) * next_i();
        tg110[_i0].max_v_total = ((-2 * (next_i()%2)) + 1) * next_i();
        tg110[_i0].max_h_total = ((-2 * (next_i()%2)) + 1) * next_i();
        tg110[_i0].base.bp = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tg110__i0__base_ctx0 = 1;
          tg110[_i0].base.ctx = (struct dc_context *) malloc(_len_tg110__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_tg110__i0__base_ctx0; _j0++) {
            tg110[_i0].base.ctx->dc_bios = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tg110__i0__base_funcs0 = 1;
          tg110[_i0].base.funcs = (int *) malloc(_len_tg110__i0__base_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tg110__i0__base_funcs0; _j0++) {
            tg110[_i0].base.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tg110[_i0].controller_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx0 = 100;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dc_bios = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dce110_timing_generator_v_construct(tg110,ctx);
          free(tg110);
          free(ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

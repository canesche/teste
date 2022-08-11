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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  size_t uint32_t ;
struct pll_settings {int dummy; } ;
struct pixel_clk_params {size_t controller_id; } ;
struct pipe_ctx {TYPE_3__* stream; } ;
struct TYPE_5__ {struct pipe_ctx* pipe_ctx; } ;
struct dc_state {TYPE_2__ res_ctx; } ;
struct dc {struct dc_state* current_state; } ;
struct clock_source {TYPE_1__* ctx; } ;
struct TYPE_6__ {size_t phy_pix_clk; } ;
struct TYPE_4__ {struct dc* dc; } ;

/* Variables and functions */
 size_t CONTROLLER_ID_D0 ; 

__attribute__((used)) static uint32_t dce110_get_pll_pixel_rate_in_hz(
	struct clock_source *cs,
	struct pixel_clk_params *pix_clk_params,
	struct pll_settings *pll_settings)
{
	uint32_t inst = pix_clk_params->controller_id - CONTROLLER_ID_D0;
	struct dc *dc_core = cs->ctx->dc;
	struct dc_state *context = dc_core->current_state;
	struct pipe_ctx *pipe_ctx = &context->res_ctx.pipe_ctx[inst];

	/* This function need separate to different DCE version, before separate, just use pixel clock */
	return pipe_ctx->stream->phy_pix_clk;

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
          int _len_cs0 = 1;
          struct clock_source * cs = (struct clock_source *) malloc(_len_cs0*sizeof(struct clock_source));
          for(int _i0 = 0; _i0 < _len_cs0; _i0++) {
              int _len_cs__i0__ctx0 = 1;
          cs[_i0].ctx = (struct TYPE_4__ *) malloc(_len_cs__i0__ctx0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_cs__i0__ctx0; _j0++) {
              int _len_cs__i0__ctx_dc0 = 1;
          cs[_i0].ctx->dc = (struct dc *) malloc(_len_cs__i0__ctx_dc0*sizeof(struct dc));
          for(int _j0 = 0; _j0 < _len_cs__i0__ctx_dc0; _j0++) {
              int _len_cs__i0__ctx_dc_current_state0 = 1;
          cs[_i0].ctx->dc->current_state = (struct dc_state *) malloc(_len_cs__i0__ctx_dc_current_state0*sizeof(struct dc_state));
          for(int _j0 = 0; _j0 < _len_cs__i0__ctx_dc_current_state0; _j0++) {
              int _len_cs__i0__ctx_dc_current_state_res_ctx_pipe_ctx0 = 1;
          cs[_i0].ctx->dc->current_state->res_ctx.pipe_ctx = (struct pipe_ctx *) malloc(_len_cs__i0__ctx_dc_current_state_res_ctx_pipe_ctx0*sizeof(struct pipe_ctx));
          for(int _j0 = 0; _j0 < _len_cs__i0__ctx_dc_current_state_res_ctx_pipe_ctx0; _j0++) {
              int _len_cs__i0__ctx_dc_current_state_res_ctx_pipe_ctx_stream0 = 1;
          cs[_i0].ctx->dc->current_state->res_ctx.pipe_ctx->stream = (struct TYPE_6__ *) malloc(_len_cs__i0__ctx_dc_current_state_res_ctx_pipe_ctx_stream0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_cs__i0__ctx_dc_current_state_res_ctx_pipe_ctx_stream0; _j0++) {
            cs[_i0].ctx->dc->current_state->res_ctx.pipe_ctx->stream->phy_pix_clk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          }
          }
          int _len_pix_clk_params0 = 1;
          struct pixel_clk_params * pix_clk_params = (struct pixel_clk_params *) malloc(_len_pix_clk_params0*sizeof(struct pixel_clk_params));
          for(int _i0 = 0; _i0 < _len_pix_clk_params0; _i0++) {
            pix_clk_params[_i0].controller_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pll_settings0 = 1;
          struct pll_settings * pll_settings = (struct pll_settings *) malloc(_len_pll_settings0*sizeof(struct pll_settings));
          for(int _i0 = 0; _i0 < _len_pll_settings0; _i0++) {
            pll_settings[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = dce110_get_pll_pixel_rate_in_hz(cs,pix_clk_params,pll_settings);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_cs0; _aux++) {
          free(cs[_aux].ctx);
          }
          free(cs);
          free(pix_clk_params);
          free(pll_settings);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cs0 = 65025;
          struct clock_source * cs = (struct clock_source *) malloc(_len_cs0*sizeof(struct clock_source));
          for(int _i0 = 0; _i0 < _len_cs0; _i0++) {
              int _len_cs__i0__ctx0 = 1;
          cs[_i0].ctx = (struct TYPE_4__ *) malloc(_len_cs__i0__ctx0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_cs__i0__ctx0; _j0++) {
              int _len_cs__i0__ctx_dc0 = 1;
          cs[_i0].ctx->dc = (struct dc *) malloc(_len_cs__i0__ctx_dc0*sizeof(struct dc));
          for(int _j0 = 0; _j0 < _len_cs__i0__ctx_dc0; _j0++) {
              int _len_cs__i0__ctx_dc_current_state0 = 1;
          cs[_i0].ctx->dc->current_state = (struct dc_state *) malloc(_len_cs__i0__ctx_dc_current_state0*sizeof(struct dc_state));
          for(int _j0 = 0; _j0 < _len_cs__i0__ctx_dc_current_state0; _j0++) {
              int _len_cs__i0__ctx_dc_current_state_res_ctx_pipe_ctx0 = 1;
          cs[_i0].ctx->dc->current_state->res_ctx.pipe_ctx = (struct pipe_ctx *) malloc(_len_cs__i0__ctx_dc_current_state_res_ctx_pipe_ctx0*sizeof(struct pipe_ctx));
          for(int _j0 = 0; _j0 < _len_cs__i0__ctx_dc_current_state_res_ctx_pipe_ctx0; _j0++) {
              int _len_cs__i0__ctx_dc_current_state_res_ctx_pipe_ctx_stream0 = 1;
          cs[_i0].ctx->dc->current_state->res_ctx.pipe_ctx->stream = (struct TYPE_6__ *) malloc(_len_cs__i0__ctx_dc_current_state_res_ctx_pipe_ctx_stream0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_cs__i0__ctx_dc_current_state_res_ctx_pipe_ctx_stream0; _j0++) {
            cs[_i0].ctx->dc->current_state->res_ctx.pipe_ctx->stream->phy_pix_clk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          }
          }
          int _len_pix_clk_params0 = 65025;
          struct pixel_clk_params * pix_clk_params = (struct pixel_clk_params *) malloc(_len_pix_clk_params0*sizeof(struct pixel_clk_params));
          for(int _i0 = 0; _i0 < _len_pix_clk_params0; _i0++) {
            pix_clk_params[_i0].controller_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pll_settings0 = 65025;
          struct pll_settings * pll_settings = (struct pll_settings *) malloc(_len_pll_settings0*sizeof(struct pll_settings));
          for(int _i0 = 0; _i0 < _len_pll_settings0; _i0++) {
            pll_settings[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = dce110_get_pll_pixel_rate_in_hz(cs,pix_clk_params,pll_settings);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_cs0; _aux++) {
          free(cs[_aux].ctx);
          }
          free(cs);
          free(pix_clk_params);
          free(pll_settings);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cs0 = 100;
          struct clock_source * cs = (struct clock_source *) malloc(_len_cs0*sizeof(struct clock_source));
          for(int _i0 = 0; _i0 < _len_cs0; _i0++) {
              int _len_cs__i0__ctx0 = 1;
          cs[_i0].ctx = (struct TYPE_4__ *) malloc(_len_cs__i0__ctx0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_cs__i0__ctx0; _j0++) {
              int _len_cs__i0__ctx_dc0 = 1;
          cs[_i0].ctx->dc = (struct dc *) malloc(_len_cs__i0__ctx_dc0*sizeof(struct dc));
          for(int _j0 = 0; _j0 < _len_cs__i0__ctx_dc0; _j0++) {
              int _len_cs__i0__ctx_dc_current_state0 = 1;
          cs[_i0].ctx->dc->current_state = (struct dc_state *) malloc(_len_cs__i0__ctx_dc_current_state0*sizeof(struct dc_state));
          for(int _j0 = 0; _j0 < _len_cs__i0__ctx_dc_current_state0; _j0++) {
              int _len_cs__i0__ctx_dc_current_state_res_ctx_pipe_ctx0 = 1;
          cs[_i0].ctx->dc->current_state->res_ctx.pipe_ctx = (struct pipe_ctx *) malloc(_len_cs__i0__ctx_dc_current_state_res_ctx_pipe_ctx0*sizeof(struct pipe_ctx));
          for(int _j0 = 0; _j0 < _len_cs__i0__ctx_dc_current_state_res_ctx_pipe_ctx0; _j0++) {
              int _len_cs__i0__ctx_dc_current_state_res_ctx_pipe_ctx_stream0 = 1;
          cs[_i0].ctx->dc->current_state->res_ctx.pipe_ctx->stream = (struct TYPE_6__ *) malloc(_len_cs__i0__ctx_dc_current_state_res_ctx_pipe_ctx_stream0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_cs__i0__ctx_dc_current_state_res_ctx_pipe_ctx_stream0; _j0++) {
            cs[_i0].ctx->dc->current_state->res_ctx.pipe_ctx->stream->phy_pix_clk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          }
          }
          int _len_pix_clk_params0 = 100;
          struct pixel_clk_params * pix_clk_params = (struct pixel_clk_params *) malloc(_len_pix_clk_params0*sizeof(struct pixel_clk_params));
          for(int _i0 = 0; _i0 < _len_pix_clk_params0; _i0++) {
            pix_clk_params[_i0].controller_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pll_settings0 = 100;
          struct pll_settings * pll_settings = (struct pll_settings *) malloc(_len_pll_settings0*sizeof(struct pll_settings));
          for(int _i0 = 0; _i0 < _len_pll_settings0; _i0++) {
            pll_settings[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = dce110_get_pll_pixel_rate_in_hz(cs,pix_clk_params,pll_settings);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_cs0; _aux++) {
          free(cs[_aux].ctx);
          }
          free(cs);
          free(pix_clk_params);
          free(pll_settings);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

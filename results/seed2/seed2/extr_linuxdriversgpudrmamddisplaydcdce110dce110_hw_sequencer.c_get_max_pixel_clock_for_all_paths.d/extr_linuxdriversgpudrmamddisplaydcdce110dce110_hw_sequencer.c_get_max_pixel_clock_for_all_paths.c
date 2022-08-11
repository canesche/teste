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
typedef  scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ requested_pix_clk; } ;
struct TYPE_5__ {TYPE_1__ pix_clk_params; } ;
struct pipe_ctx {TYPE_2__ stream_res; scalar_t__ top_pipe; int /*<<< orphan*/ * stream; } ;
struct TYPE_6__ {struct pipe_ctx* pipe_ctx; } ;
struct dc_state {TYPE_3__ res_ctx; } ;
struct dc {int dummy; } ;

/* Variables and functions */
 int MAX_PIPES ; 

__attribute__((used)) static uint32_t get_max_pixel_clock_for_all_paths(
	struct dc *dc,
	struct dc_state *context)
{
	uint32_t max_pix_clk = 0;
	int i;

	for (i = 0; i < MAX_PIPES; i++) {
		struct pipe_ctx *pipe_ctx = &context->res_ctx.pipe_ctx[i];

		if (pipe_ctx->stream == NULL)
			continue;

		/* do not check under lay */
		if (pipe_ctx->top_pipe)
			continue;

		if (pipe_ctx->stream_res.pix_clk_params.requested_pix_clk > max_pix_clk)
			max_pix_clk =
				pipe_ctx->stream_res.pix_clk_params.requested_pix_clk;
	}

	return max_pix_clk;
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
          int _len_dc0 = 1;
          struct dc * dc = (struct dc *) malloc(_len_dc0*sizeof(struct dc));
          for(int _i0 = 0; _i0 < _len_dc0; _i0++) {
            dc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_context0 = 1;
          struct dc_state * context = (struct dc_state *) malloc(_len_context0*sizeof(struct dc_state));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
              int _len_context__i0__res_ctx_pipe_ctx0 = 1;
          context[_i0].res_ctx.pipe_ctx = (struct pipe_ctx *) malloc(_len_context__i0__res_ctx_pipe_ctx0*sizeof(struct pipe_ctx));
          for(int _j0 = 0; _j0 < _len_context__i0__res_ctx_pipe_ctx0; _j0++) {
            context[_i0].res_ctx.pipe_ctx->stream_res.pix_clk_params.requested_pix_clk = ((-2 * (next_i()%2)) + 1) * next_i();
        context[_i0].res_ctx.pipe_ctx->top_pipe = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_context__i0__res_ctx_pipe_ctx_stream0 = 1;
          context[_i0].res_ctx.pipe_ctx->stream = (int *) malloc(_len_context__i0__res_ctx_pipe_ctx_stream0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_context__i0__res_ctx_pipe_ctx_stream0; _j0++) {
            context[_i0].res_ctx.pipe_ctx->stream[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          long benchRet = get_max_pixel_clock_for_all_paths(dc,context);
          printf("%ld\n", benchRet); 
          free(dc);
          free(context);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dc0 = 65025;
          struct dc * dc = (struct dc *) malloc(_len_dc0*sizeof(struct dc));
          for(int _i0 = 0; _i0 < _len_dc0; _i0++) {
            dc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_context0 = 65025;
          struct dc_state * context = (struct dc_state *) malloc(_len_context0*sizeof(struct dc_state));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
              int _len_context__i0__res_ctx_pipe_ctx0 = 1;
          context[_i0].res_ctx.pipe_ctx = (struct pipe_ctx *) malloc(_len_context__i0__res_ctx_pipe_ctx0*sizeof(struct pipe_ctx));
          for(int _j0 = 0; _j0 < _len_context__i0__res_ctx_pipe_ctx0; _j0++) {
            context[_i0].res_ctx.pipe_ctx->stream_res.pix_clk_params.requested_pix_clk = ((-2 * (next_i()%2)) + 1) * next_i();
        context[_i0].res_ctx.pipe_ctx->top_pipe = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_context__i0__res_ctx_pipe_ctx_stream0 = 1;
          context[_i0].res_ctx.pipe_ctx->stream = (int *) malloc(_len_context__i0__res_ctx_pipe_ctx_stream0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_context__i0__res_ctx_pipe_ctx_stream0; _j0++) {
            context[_i0].res_ctx.pipe_ctx->stream[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          long benchRet = get_max_pixel_clock_for_all_paths(dc,context);
          printf("%ld\n", benchRet); 
          free(dc);
          free(context);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dc0 = 100;
          struct dc * dc = (struct dc *) malloc(_len_dc0*sizeof(struct dc));
          for(int _i0 = 0; _i0 < _len_dc0; _i0++) {
            dc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_context0 = 100;
          struct dc_state * context = (struct dc_state *) malloc(_len_context0*sizeof(struct dc_state));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
              int _len_context__i0__res_ctx_pipe_ctx0 = 1;
          context[_i0].res_ctx.pipe_ctx = (struct pipe_ctx *) malloc(_len_context__i0__res_ctx_pipe_ctx0*sizeof(struct pipe_ctx));
          for(int _j0 = 0; _j0 < _len_context__i0__res_ctx_pipe_ctx0; _j0++) {
            context[_i0].res_ctx.pipe_ctx->stream_res.pix_clk_params.requested_pix_clk = ((-2 * (next_i()%2)) + 1) * next_i();
        context[_i0].res_ctx.pipe_ctx->top_pipe = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_context__i0__res_ctx_pipe_ctx_stream0 = 1;
          context[_i0].res_ctx.pipe_ctx->stream = (int *) malloc(_len_context__i0__res_ctx_pipe_ctx_stream0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_context__i0__res_ctx_pipe_ctx_stream0; _j0++) {
            context[_i0].res_ctx.pipe_ctx->stream[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          long benchRet = get_max_pixel_clock_for_all_paths(dc,context);
          printf("%ld\n", benchRet); 
          free(dc);
          free(context);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct pipe_ctx {int /*<<< orphan*/  top_pipe; struct dc_stream_state const* stream; int /*<<< orphan*/  plane_state; } ;
struct dc_stream_state {int dummy; } ;
struct TYPE_5__ {struct pipe_ctx* pipe_ctx; } ;
struct dc_state {TYPE_1__ res_ctx; } ;
struct dc {TYPE_3__* current_state; TYPE_4__* res_pool; } ;
struct TYPE_8__ {int pipe_count; } ;
struct TYPE_6__ {struct pipe_ctx* pipe_ctx; } ;
struct TYPE_7__ {TYPE_2__ res_ctx; } ;

/* Variables and functions */

__attribute__((used)) static struct pipe_ctx *find_top_pipe_for_stream(
		struct dc *dc,
		struct dc_state *context,
		const struct dc_stream_state *stream)
{
	int i;

	for (i = 0; i < dc->res_pool->pipe_count; i++) {
		struct pipe_ctx *pipe_ctx = &context->res_ctx.pipe_ctx[i];
		struct pipe_ctx *old_pipe_ctx =
				&dc->current_state->res_ctx.pipe_ctx[i];

		if (!pipe_ctx->plane_state && !old_pipe_ctx->plane_state)
			continue;

		if (pipe_ctx->stream != stream)
			continue;

		if (!pipe_ctx->top_pipe)
			return pipe_ctx;
	}
	return NULL;
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
              int _len_dc__i0__current_state0 = 1;
          dc[_i0].current_state = (struct TYPE_7__ *) malloc(_len_dc__i0__current_state0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_dc__i0__current_state0; _j0++) {
              int _len_dc__i0__current_state_res_ctx_pipe_ctx0 = 1;
          dc[_i0].current_state->res_ctx.pipe_ctx = (struct pipe_ctx *) malloc(_len_dc__i0__current_state_res_ctx_pipe_ctx0*sizeof(struct pipe_ctx));
          for(int _j0 = 0; _j0 < _len_dc__i0__current_state_res_ctx_pipe_ctx0; _j0++) {
            dc[_i0].current_state->res_ctx.pipe_ctx->top_pipe = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dc__i0__current_state_res_ctx_pipe_ctx_stream0 = 1;
          dc[_i0].current_state->res_ctx.pipe_ctx->stream = (const struct dc_stream_state *) malloc(_len_dc__i0__current_state_res_ctx_pipe_ctx_stream0*sizeof(const struct dc_stream_state));
          for(int _j0 = 0; _j0 < _len_dc__i0__current_state_res_ctx_pipe_ctx_stream0; _j0++) {
              }
        dc[_i0].current_state->res_ctx.pipe_ctx->plane_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_dc__i0__res_pool0 = 1;
          dc[_i0].res_pool = (struct TYPE_8__ *) malloc(_len_dc__i0__res_pool0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_dc__i0__res_pool0; _j0++) {
            dc[_i0].res_pool->pipe_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_context0 = 1;
          struct dc_state * context = (struct dc_state *) malloc(_len_context0*sizeof(struct dc_state));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
              int _len_context__i0__res_ctx_pipe_ctx0 = 1;
          context[_i0].res_ctx.pipe_ctx = (struct pipe_ctx *) malloc(_len_context__i0__res_ctx_pipe_ctx0*sizeof(struct pipe_ctx));
          for(int _j0 = 0; _j0 < _len_context__i0__res_ctx_pipe_ctx0; _j0++) {
            context[_i0].res_ctx.pipe_ctx->top_pipe = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_context__i0__res_ctx_pipe_ctx_stream0 = 1;
          context[_i0].res_ctx.pipe_ctx->stream = (const struct dc_stream_state *) malloc(_len_context__i0__res_ctx_pipe_ctx_stream0*sizeof(const struct dc_stream_state));
          for(int _j0 = 0; _j0 < _len_context__i0__res_ctx_pipe_ctx_stream0; _j0++) {
              }
        context[_i0].res_ctx.pipe_ctx->plane_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_stream0 = 1;
          const struct dc_stream_state * stream = (const struct dc_stream_state *) malloc(_len_stream0*sizeof(const struct dc_stream_state));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
              }
          struct pipe_ctx * benchRet = find_top_pipe_for_stream(dc,context,stream);
          printf("%d\n", (*benchRet).top_pipe);
          printf("%d\n", (*benchRet).plane_state);
          for(int _aux = 0; _aux < _len_dc0; _aux++) {
          free(dc[_aux].current_state);
          }
          for(int _aux = 0; _aux < _len_dc0; _aux++) {
          free(dc[_aux].res_pool);
          }
          free(dc);
          free(context);
          free(stream);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dc0 = 65025;
          struct dc * dc = (struct dc *) malloc(_len_dc0*sizeof(struct dc));
          for(int _i0 = 0; _i0 < _len_dc0; _i0++) {
              int _len_dc__i0__current_state0 = 1;
          dc[_i0].current_state = (struct TYPE_7__ *) malloc(_len_dc__i0__current_state0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_dc__i0__current_state0; _j0++) {
              int _len_dc__i0__current_state_res_ctx_pipe_ctx0 = 1;
          dc[_i0].current_state->res_ctx.pipe_ctx = (struct pipe_ctx *) malloc(_len_dc__i0__current_state_res_ctx_pipe_ctx0*sizeof(struct pipe_ctx));
          for(int _j0 = 0; _j0 < _len_dc__i0__current_state_res_ctx_pipe_ctx0; _j0++) {
            dc[_i0].current_state->res_ctx.pipe_ctx->top_pipe = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dc__i0__current_state_res_ctx_pipe_ctx_stream0 = 1;
          dc[_i0].current_state->res_ctx.pipe_ctx->stream = (const struct dc_stream_state *) malloc(_len_dc__i0__current_state_res_ctx_pipe_ctx_stream0*sizeof(const struct dc_stream_state));
          for(int _j0 = 0; _j0 < _len_dc__i0__current_state_res_ctx_pipe_ctx_stream0; _j0++) {
              }
        dc[_i0].current_state->res_ctx.pipe_ctx->plane_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_dc__i0__res_pool0 = 1;
          dc[_i0].res_pool = (struct TYPE_8__ *) malloc(_len_dc__i0__res_pool0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_dc__i0__res_pool0; _j0++) {
            dc[_i0].res_pool->pipe_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_context0 = 65025;
          struct dc_state * context = (struct dc_state *) malloc(_len_context0*sizeof(struct dc_state));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
              int _len_context__i0__res_ctx_pipe_ctx0 = 1;
          context[_i0].res_ctx.pipe_ctx = (struct pipe_ctx *) malloc(_len_context__i0__res_ctx_pipe_ctx0*sizeof(struct pipe_ctx));
          for(int _j0 = 0; _j0 < _len_context__i0__res_ctx_pipe_ctx0; _j0++) {
            context[_i0].res_ctx.pipe_ctx->top_pipe = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_context__i0__res_ctx_pipe_ctx_stream0 = 1;
          context[_i0].res_ctx.pipe_ctx->stream = (const struct dc_stream_state *) malloc(_len_context__i0__res_ctx_pipe_ctx_stream0*sizeof(const struct dc_stream_state));
          for(int _j0 = 0; _j0 < _len_context__i0__res_ctx_pipe_ctx_stream0; _j0++) {
              }
        context[_i0].res_ctx.pipe_ctx->plane_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_stream0 = 65025;
          const struct dc_stream_state * stream = (const struct dc_stream_state *) malloc(_len_stream0*sizeof(const struct dc_stream_state));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
              }
          struct pipe_ctx * benchRet = find_top_pipe_for_stream(dc,context,stream);
          printf("%d\n", (*benchRet).top_pipe);
          printf("%d\n", (*benchRet).plane_state);
          for(int _aux = 0; _aux < _len_dc0; _aux++) {
          free(dc[_aux].current_state);
          }
          for(int _aux = 0; _aux < _len_dc0; _aux++) {
          free(dc[_aux].res_pool);
          }
          free(dc);
          free(context);
          free(stream);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dc0 = 100;
          struct dc * dc = (struct dc *) malloc(_len_dc0*sizeof(struct dc));
          for(int _i0 = 0; _i0 < _len_dc0; _i0++) {
              int _len_dc__i0__current_state0 = 1;
          dc[_i0].current_state = (struct TYPE_7__ *) malloc(_len_dc__i0__current_state0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_dc__i0__current_state0; _j0++) {
              int _len_dc__i0__current_state_res_ctx_pipe_ctx0 = 1;
          dc[_i0].current_state->res_ctx.pipe_ctx = (struct pipe_ctx *) malloc(_len_dc__i0__current_state_res_ctx_pipe_ctx0*sizeof(struct pipe_ctx));
          for(int _j0 = 0; _j0 < _len_dc__i0__current_state_res_ctx_pipe_ctx0; _j0++) {
            dc[_i0].current_state->res_ctx.pipe_ctx->top_pipe = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dc__i0__current_state_res_ctx_pipe_ctx_stream0 = 1;
          dc[_i0].current_state->res_ctx.pipe_ctx->stream = (const struct dc_stream_state *) malloc(_len_dc__i0__current_state_res_ctx_pipe_ctx_stream0*sizeof(const struct dc_stream_state));
          for(int _j0 = 0; _j0 < _len_dc__i0__current_state_res_ctx_pipe_ctx_stream0; _j0++) {
              }
        dc[_i0].current_state->res_ctx.pipe_ctx->plane_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_dc__i0__res_pool0 = 1;
          dc[_i0].res_pool = (struct TYPE_8__ *) malloc(_len_dc__i0__res_pool0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_dc__i0__res_pool0; _j0++) {
            dc[_i0].res_pool->pipe_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_context0 = 100;
          struct dc_state * context = (struct dc_state *) malloc(_len_context0*sizeof(struct dc_state));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
              int _len_context__i0__res_ctx_pipe_ctx0 = 1;
          context[_i0].res_ctx.pipe_ctx = (struct pipe_ctx *) malloc(_len_context__i0__res_ctx_pipe_ctx0*sizeof(struct pipe_ctx));
          for(int _j0 = 0; _j0 < _len_context__i0__res_ctx_pipe_ctx0; _j0++) {
            context[_i0].res_ctx.pipe_ctx->top_pipe = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_context__i0__res_ctx_pipe_ctx_stream0 = 1;
          context[_i0].res_ctx.pipe_ctx->stream = (const struct dc_stream_state *) malloc(_len_context__i0__res_ctx_pipe_ctx_stream0*sizeof(const struct dc_stream_state));
          for(int _j0 = 0; _j0 < _len_context__i0__res_ctx_pipe_ctx_stream0; _j0++) {
              }
        context[_i0].res_ctx.pipe_ctx->plane_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_stream0 = 100;
          const struct dc_stream_state * stream = (const struct dc_stream_state *) malloc(_len_stream0*sizeof(const struct dc_stream_state));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
              }
          struct pipe_ctx * benchRet = find_top_pipe_for_stream(dc,context,stream);
          printf("%d\n", (*benchRet).top_pipe);
          printf("%d\n", (*benchRet).plane_state);
          for(int _aux = 0; _aux < _len_dc0; _aux++) {
          free(dc[_aux].current_state);
          }
          for(int _aux = 0; _aux < _len_dc0; _aux++) {
          free(dc[_aux].res_pool);
          }
          free(dc);
          free(context);
          free(stream);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

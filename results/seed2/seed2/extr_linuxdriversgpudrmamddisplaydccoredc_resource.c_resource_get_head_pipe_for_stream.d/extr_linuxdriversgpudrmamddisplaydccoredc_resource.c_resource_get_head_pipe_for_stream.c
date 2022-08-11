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
struct resource_context {struct pipe_ctx* pipe_ctx; } ;
struct pipe_ctx {int /*<<< orphan*/  top_pipe; struct dc_stream_state* stream; } ;
struct dc_stream_state {int dummy; } ;

/* Variables and functions */
 int MAX_PIPES ; 

struct pipe_ctx *resource_get_head_pipe_for_stream(
		struct resource_context *res_ctx,
		struct dc_stream_state *stream)
{
	int i;
	for (i = 0; i < MAX_PIPES; i++) {
		if (res_ctx->pipe_ctx[i].stream == stream &&
				!res_ctx->pipe_ctx[i].top_pipe) {
			return &res_ctx->pipe_ctx[i];
			break;
		}
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
          int _len_res_ctx0 = 1;
          struct resource_context * res_ctx = (struct resource_context *) malloc(_len_res_ctx0*sizeof(struct resource_context));
          for(int _i0 = 0; _i0 < _len_res_ctx0; _i0++) {
              int _len_res_ctx__i0__pipe_ctx0 = 1;
          res_ctx[_i0].pipe_ctx = (struct pipe_ctx *) malloc(_len_res_ctx__i0__pipe_ctx0*sizeof(struct pipe_ctx));
          for(int _j0 = 0; _j0 < _len_res_ctx__i0__pipe_ctx0; _j0++) {
            res_ctx[_i0].pipe_ctx->top_pipe = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_res_ctx__i0__pipe_ctx_stream0 = 1;
          res_ctx[_i0].pipe_ctx->stream = (struct dc_stream_state *) malloc(_len_res_ctx__i0__pipe_ctx_stream0*sizeof(struct dc_stream_state));
          for(int _j0 = 0; _j0 < _len_res_ctx__i0__pipe_ctx_stream0; _j0++) {
            res_ctx[_i0].pipe_ctx->stream->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_stream0 = 1;
          struct dc_stream_state * stream = (struct dc_stream_state *) malloc(_len_stream0*sizeof(struct dc_stream_state));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
            stream[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct pipe_ctx * benchRet = resource_get_head_pipe_for_stream(res_ctx,stream);
          printf("%d\n", (*benchRet).top_pipe);
          for(int _aux = 0; _aux < _len_res_ctx0; _aux++) {
          free(res_ctx[_aux].pipe_ctx);
          }
          free(res_ctx);
          free(stream);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_res_ctx0 = 65025;
          struct resource_context * res_ctx = (struct resource_context *) malloc(_len_res_ctx0*sizeof(struct resource_context));
          for(int _i0 = 0; _i0 < _len_res_ctx0; _i0++) {
              int _len_res_ctx__i0__pipe_ctx0 = 1;
          res_ctx[_i0].pipe_ctx = (struct pipe_ctx *) malloc(_len_res_ctx__i0__pipe_ctx0*sizeof(struct pipe_ctx));
          for(int _j0 = 0; _j0 < _len_res_ctx__i0__pipe_ctx0; _j0++) {
            res_ctx[_i0].pipe_ctx->top_pipe = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_res_ctx__i0__pipe_ctx_stream0 = 1;
          res_ctx[_i0].pipe_ctx->stream = (struct dc_stream_state *) malloc(_len_res_ctx__i0__pipe_ctx_stream0*sizeof(struct dc_stream_state));
          for(int _j0 = 0; _j0 < _len_res_ctx__i0__pipe_ctx_stream0; _j0++) {
            res_ctx[_i0].pipe_ctx->stream->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_stream0 = 65025;
          struct dc_stream_state * stream = (struct dc_stream_state *) malloc(_len_stream0*sizeof(struct dc_stream_state));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
            stream[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct pipe_ctx * benchRet = resource_get_head_pipe_for_stream(res_ctx,stream);
          printf("%d\n", (*benchRet).top_pipe);
          for(int _aux = 0; _aux < _len_res_ctx0; _aux++) {
          free(res_ctx[_aux].pipe_ctx);
          }
          free(res_ctx);
          free(stream);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_res_ctx0 = 100;
          struct resource_context * res_ctx = (struct resource_context *) malloc(_len_res_ctx0*sizeof(struct resource_context));
          for(int _i0 = 0; _i0 < _len_res_ctx0; _i0++) {
              int _len_res_ctx__i0__pipe_ctx0 = 1;
          res_ctx[_i0].pipe_ctx = (struct pipe_ctx *) malloc(_len_res_ctx__i0__pipe_ctx0*sizeof(struct pipe_ctx));
          for(int _j0 = 0; _j0 < _len_res_ctx__i0__pipe_ctx0; _j0++) {
            res_ctx[_i0].pipe_ctx->top_pipe = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_res_ctx__i0__pipe_ctx_stream0 = 1;
          res_ctx[_i0].pipe_ctx->stream = (struct dc_stream_state *) malloc(_len_res_ctx__i0__pipe_ctx_stream0*sizeof(struct dc_stream_state));
          for(int _j0 = 0; _j0 < _len_res_ctx__i0__pipe_ctx_stream0; _j0++) {
            res_ctx[_i0].pipe_ctx->stream->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_stream0 = 100;
          struct dc_stream_state * stream = (struct dc_stream_state *) malloc(_len_stream0*sizeof(struct dc_stream_state));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
            stream[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct pipe_ctx * benchRet = resource_get_head_pipe_for_stream(res_ctx,stream);
          printf("%d\n", (*benchRet).top_pipe);
          for(int _aux = 0; _aux < _len_res_ctx0; _aux++) {
          free(res_ctx[_aux].pipe_ctx);
          }
          free(res_ctx);
          free(stream);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

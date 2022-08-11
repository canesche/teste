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
typedef  struct TYPE_10__   TYPE_5__ ;
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {int dispclk_khz; int yclk_khz; } ;
struct TYPE_9__ {TYPE_3__ dce; } ;
struct TYPE_7__ {TYPE_1__* pipe_ctx; } ;
struct dc_state {TYPE_4__ bw; TYPE_2__ res_ctx; } ;
struct dc {TYPE_5__* res_pool; } ;
struct TYPE_10__ {int pipe_count; } ;
struct TYPE_6__ {scalar_t__ stream; } ;

/* Variables and functions */
 int MEMORY_TYPE_MULTIPLIER ; 

bool dce100_validate_bandwidth(
	struct dc  *dc,
	struct dc_state *context)
{
	int i;
	bool at_least_one_pipe = false;

	for (i = 0; i < dc->res_pool->pipe_count; i++) {
		if (context->res_ctx.pipe_ctx[i].stream)
			at_least_one_pipe = true;
	}

	if (at_least_one_pipe) {
		/* TODO implement when needed but for now hardcode max value*/
		context->bw.dce.dispclk_khz = 681000;
		context->bw.dce.yclk_khz = 250000 * MEMORY_TYPE_MULTIPLIER;
	} else {
		context->bw.dce.dispclk_khz = 0;
		context->bw.dce.yclk_khz = 0;
	}

	return true;
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
              int _len_dc__i0__res_pool0 = 1;
          dc[_i0].res_pool = (struct TYPE_10__ *) malloc(_len_dc__i0__res_pool0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_dc__i0__res_pool0; _j0++) {
            dc[_i0].res_pool->pipe_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_context0 = 1;
          struct dc_state * context = (struct dc_state *) malloc(_len_context0*sizeof(struct dc_state));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
            context[_i0].bw.dce.dispclk_khz = ((-2 * (next_i()%2)) + 1) * next_i();
        context[_i0].bw.dce.yclk_khz = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_context__i0__res_ctx_pipe_ctx0 = 1;
          context[_i0].res_ctx.pipe_ctx = (struct TYPE_6__ *) malloc(_len_context__i0__res_ctx_pipe_ctx0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_context__i0__res_ctx_pipe_ctx0; _j0++) {
            context[_i0].res_ctx.pipe_ctx->stream = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = dce100_validate_bandwidth(dc,context);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dc0; _aux++) {
          free(dc[_aux].res_pool);
          }
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
              int _len_dc__i0__res_pool0 = 1;
          dc[_i0].res_pool = (struct TYPE_10__ *) malloc(_len_dc__i0__res_pool0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_dc__i0__res_pool0; _j0++) {
            dc[_i0].res_pool->pipe_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_context0 = 65025;
          struct dc_state * context = (struct dc_state *) malloc(_len_context0*sizeof(struct dc_state));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
            context[_i0].bw.dce.dispclk_khz = ((-2 * (next_i()%2)) + 1) * next_i();
        context[_i0].bw.dce.yclk_khz = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_context__i0__res_ctx_pipe_ctx0 = 1;
          context[_i0].res_ctx.pipe_ctx = (struct TYPE_6__ *) malloc(_len_context__i0__res_ctx_pipe_ctx0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_context__i0__res_ctx_pipe_ctx0; _j0++) {
            context[_i0].res_ctx.pipe_ctx->stream = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = dce100_validate_bandwidth(dc,context);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dc0; _aux++) {
          free(dc[_aux].res_pool);
          }
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
              int _len_dc__i0__res_pool0 = 1;
          dc[_i0].res_pool = (struct TYPE_10__ *) malloc(_len_dc__i0__res_pool0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_dc__i0__res_pool0; _j0++) {
            dc[_i0].res_pool->pipe_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_context0 = 100;
          struct dc_state * context = (struct dc_state *) malloc(_len_context0*sizeof(struct dc_state));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
            context[_i0].bw.dce.dispclk_khz = ((-2 * (next_i()%2)) + 1) * next_i();
        context[_i0].bw.dce.yclk_khz = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_context__i0__res_ctx_pipe_ctx0 = 1;
          context[_i0].res_ctx.pipe_ctx = (struct TYPE_6__ *) malloc(_len_context__i0__res_ctx_pipe_ctx0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_context__i0__res_ctx_pipe_ctx0; _j0++) {
            context[_i0].res_ctx.pipe_ctx->stream = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = dce100_validate_bandwidth(dc,context);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dc0; _aux++) {
          free(dc[_aux].res_pool);
          }
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

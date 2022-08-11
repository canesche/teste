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
struct pipe_ctx {TYPE_3__* stream; struct dc_plane_state* plane_state; TYPE_1__* top_pipe; } ;
struct TYPE_9__ {int /*<<< orphan*/  left_addr; int /*<<< orphan*/  right_addr; } ;
struct TYPE_10__ {scalar_t__ type; TYPE_4__ grph_stereo; } ;
struct dc_plane_state {TYPE_5__ address; } ;
struct TYPE_7__ {scalar_t__ timing_3d_format; } ;
struct TYPE_8__ {scalar_t__ view_format; TYPE_2__ timing; } ;
struct TYPE_6__ {struct dc_plane_state* plane_state; } ;
typedef  int /*<<< orphan*/  PHYSICAL_ADDRESS_LOC ;

/* Variables and functions */
 scalar_t__ PLN_ADDR_TYPE_GRPH_STEREO ; 
 scalar_t__ TIMING_3D_FORMAT_SIDE_BY_SIDE ; 
 scalar_t__ TIMING_3D_FORMAT_TOP_AND_BOTTOM ; 
 scalar_t__ VIEW_3D_FORMAT_NONE ; 

__attribute__((used)) static bool patch_address_for_sbs_tb_stereo(
		struct pipe_ctx *pipe_ctx, PHYSICAL_ADDRESS_LOC *addr)
{
	struct dc_plane_state *plane_state = pipe_ctx->plane_state;
	bool sec_split = pipe_ctx->top_pipe &&
			pipe_ctx->top_pipe->plane_state == pipe_ctx->plane_state;
	if (sec_split && plane_state->address.type == PLN_ADDR_TYPE_GRPH_STEREO &&
		(pipe_ctx->stream->timing.timing_3d_format ==
		 TIMING_3D_FORMAT_SIDE_BY_SIDE ||
		 pipe_ctx->stream->timing.timing_3d_format ==
		 TIMING_3D_FORMAT_TOP_AND_BOTTOM)) {
		*addr = plane_state->address.grph_stereo.left_addr;
		plane_state->address.grph_stereo.left_addr =
		plane_state->address.grph_stereo.right_addr;
		return true;
	} else {
		if (pipe_ctx->stream->view_format != VIEW_3D_FORMAT_NONE &&
			plane_state->address.type != PLN_ADDR_TYPE_GRPH_STEREO) {
			plane_state->address.type = PLN_ADDR_TYPE_GRPH_STEREO;
			plane_state->address.grph_stereo.right_addr =
			plane_state->address.grph_stereo.left_addr;
		}
	}
	return false;
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
          int _len_pipe_ctx0 = 1;
          struct pipe_ctx * pipe_ctx = (struct pipe_ctx *) malloc(_len_pipe_ctx0*sizeof(struct pipe_ctx));
          for(int _i0 = 0; _i0 < _len_pipe_ctx0; _i0++) {
              int _len_pipe_ctx__i0__stream0 = 1;
          pipe_ctx[_i0].stream = (struct TYPE_8__ *) malloc(_len_pipe_ctx__i0__stream0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_pipe_ctx__i0__stream0; _j0++) {
            pipe_ctx[_i0].stream->view_format = ((-2 * (next_i()%2)) + 1) * next_i();
        pipe_ctx[_i0].stream->timing.timing_3d_format = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pipe_ctx__i0__plane_state0 = 1;
          pipe_ctx[_i0].plane_state = (struct dc_plane_state *) malloc(_len_pipe_ctx__i0__plane_state0*sizeof(struct dc_plane_state));
          for(int _j0 = 0; _j0 < _len_pipe_ctx__i0__plane_state0; _j0++) {
            pipe_ctx[_i0].plane_state->address.type = ((-2 * (next_i()%2)) + 1) * next_i();
        pipe_ctx[_i0].plane_state->address.grph_stereo.left_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        pipe_ctx[_i0].plane_state->address.grph_stereo.right_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pipe_ctx__i0__top_pipe0 = 1;
          pipe_ctx[_i0].top_pipe = (struct TYPE_6__ *) malloc(_len_pipe_ctx__i0__top_pipe0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_pipe_ctx__i0__top_pipe0; _j0++) {
              int _len_pipe_ctx__i0__top_pipe_plane_state0 = 1;
          pipe_ctx[_i0].top_pipe->plane_state = (struct dc_plane_state *) malloc(_len_pipe_ctx__i0__top_pipe_plane_state0*sizeof(struct dc_plane_state));
          for(int _j0 = 0; _j0 < _len_pipe_ctx__i0__top_pipe_plane_state0; _j0++) {
            pipe_ctx[_i0].top_pipe->plane_state->address.type = ((-2 * (next_i()%2)) + 1) * next_i();
        pipe_ctx[_i0].top_pipe->plane_state->address.grph_stereo.left_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        pipe_ctx[_i0].top_pipe->plane_state->address.grph_stereo.right_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_addr0 = 1;
          int * addr = (int *) malloc(_len_addr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = patch_address_for_sbs_tb_stereo(pipe_ctx,addr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pipe_ctx0; _aux++) {
          free(pipe_ctx[_aux].stream);
          }
          for(int _aux = 0; _aux < _len_pipe_ctx0; _aux++) {
          free(pipe_ctx[_aux].plane_state);
          }
          for(int _aux = 0; _aux < _len_pipe_ctx0; _aux++) {
          free(pipe_ctx[_aux].top_pipe);
          }
          free(pipe_ctx);
          free(addr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pipe_ctx0 = 65025;
          struct pipe_ctx * pipe_ctx = (struct pipe_ctx *) malloc(_len_pipe_ctx0*sizeof(struct pipe_ctx));
          for(int _i0 = 0; _i0 < _len_pipe_ctx0; _i0++) {
              int _len_pipe_ctx__i0__stream0 = 1;
          pipe_ctx[_i0].stream = (struct TYPE_8__ *) malloc(_len_pipe_ctx__i0__stream0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_pipe_ctx__i0__stream0; _j0++) {
            pipe_ctx[_i0].stream->view_format = ((-2 * (next_i()%2)) + 1) * next_i();
        pipe_ctx[_i0].stream->timing.timing_3d_format = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pipe_ctx__i0__plane_state0 = 1;
          pipe_ctx[_i0].plane_state = (struct dc_plane_state *) malloc(_len_pipe_ctx__i0__plane_state0*sizeof(struct dc_plane_state));
          for(int _j0 = 0; _j0 < _len_pipe_ctx__i0__plane_state0; _j0++) {
            pipe_ctx[_i0].plane_state->address.type = ((-2 * (next_i()%2)) + 1) * next_i();
        pipe_ctx[_i0].plane_state->address.grph_stereo.left_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        pipe_ctx[_i0].plane_state->address.grph_stereo.right_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pipe_ctx__i0__top_pipe0 = 1;
          pipe_ctx[_i0].top_pipe = (struct TYPE_6__ *) malloc(_len_pipe_ctx__i0__top_pipe0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_pipe_ctx__i0__top_pipe0; _j0++) {
              int _len_pipe_ctx__i0__top_pipe_plane_state0 = 1;
          pipe_ctx[_i0].top_pipe->plane_state = (struct dc_plane_state *) malloc(_len_pipe_ctx__i0__top_pipe_plane_state0*sizeof(struct dc_plane_state));
          for(int _j0 = 0; _j0 < _len_pipe_ctx__i0__top_pipe_plane_state0; _j0++) {
            pipe_ctx[_i0].top_pipe->plane_state->address.type = ((-2 * (next_i()%2)) + 1) * next_i();
        pipe_ctx[_i0].top_pipe->plane_state->address.grph_stereo.left_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        pipe_ctx[_i0].top_pipe->plane_state->address.grph_stereo.right_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_addr0 = 65025;
          int * addr = (int *) malloc(_len_addr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = patch_address_for_sbs_tb_stereo(pipe_ctx,addr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pipe_ctx0; _aux++) {
          free(pipe_ctx[_aux].stream);
          }
          for(int _aux = 0; _aux < _len_pipe_ctx0; _aux++) {
          free(pipe_ctx[_aux].plane_state);
          }
          for(int _aux = 0; _aux < _len_pipe_ctx0; _aux++) {
          free(pipe_ctx[_aux].top_pipe);
          }
          free(pipe_ctx);
          free(addr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pipe_ctx0 = 100;
          struct pipe_ctx * pipe_ctx = (struct pipe_ctx *) malloc(_len_pipe_ctx0*sizeof(struct pipe_ctx));
          for(int _i0 = 0; _i0 < _len_pipe_ctx0; _i0++) {
              int _len_pipe_ctx__i0__stream0 = 1;
          pipe_ctx[_i0].stream = (struct TYPE_8__ *) malloc(_len_pipe_ctx__i0__stream0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_pipe_ctx__i0__stream0; _j0++) {
            pipe_ctx[_i0].stream->view_format = ((-2 * (next_i()%2)) + 1) * next_i();
        pipe_ctx[_i0].stream->timing.timing_3d_format = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pipe_ctx__i0__plane_state0 = 1;
          pipe_ctx[_i0].plane_state = (struct dc_plane_state *) malloc(_len_pipe_ctx__i0__plane_state0*sizeof(struct dc_plane_state));
          for(int _j0 = 0; _j0 < _len_pipe_ctx__i0__plane_state0; _j0++) {
            pipe_ctx[_i0].plane_state->address.type = ((-2 * (next_i()%2)) + 1) * next_i();
        pipe_ctx[_i0].plane_state->address.grph_stereo.left_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        pipe_ctx[_i0].plane_state->address.grph_stereo.right_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pipe_ctx__i0__top_pipe0 = 1;
          pipe_ctx[_i0].top_pipe = (struct TYPE_6__ *) malloc(_len_pipe_ctx__i0__top_pipe0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_pipe_ctx__i0__top_pipe0; _j0++) {
              int _len_pipe_ctx__i0__top_pipe_plane_state0 = 1;
          pipe_ctx[_i0].top_pipe->plane_state = (struct dc_plane_state *) malloc(_len_pipe_ctx__i0__top_pipe_plane_state0*sizeof(struct dc_plane_state));
          for(int _j0 = 0; _j0 < _len_pipe_ctx__i0__top_pipe_plane_state0; _j0++) {
            pipe_ctx[_i0].top_pipe->plane_state->address.type = ((-2 * (next_i()%2)) + 1) * next_i();
        pipe_ctx[_i0].top_pipe->plane_state->address.grph_stereo.left_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        pipe_ctx[_i0].top_pipe->plane_state->address.grph_stereo.right_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_addr0 = 100;
          int * addr = (int *) malloc(_len_addr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = patch_address_for_sbs_tb_stereo(pipe_ctx,addr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pipe_ctx0; _aux++) {
          free(pipe_ctx[_aux].stream);
          }
          for(int _aux = 0; _aux < _len_pipe_ctx0; _aux++) {
          free(pipe_ctx[_aux].plane_state);
          }
          for(int _aux = 0; _aux < _len_pipe_ctx0; _aux++) {
          free(pipe_ctx[_aux].top_pipe);
          }
          free(pipe_ctx);
          free(addr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

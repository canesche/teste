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
       3            linked\n\
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
typedef  int uint32_t ;
struct tg_color {int color_r_cr; int color_b_cb; int color_g_y; } ;
struct TYPE_5__ {int format; } ;
struct TYPE_6__ {TYPE_1__ scl_data; } ;
struct pipe_ctx {TYPE_4__* stream; TYPE_2__ plane_res; struct pipe_ctx* top_pipe; } ;
struct TYPE_8__ {TYPE_3__* out_transfer_func; } ;
struct TYPE_7__ {int /*<<< orphan*/  tf; } ;

/* Variables and functions */
 int MAX_TG_COLOR_VALUE ; 
#define  PIXEL_FORMAT_ARGB2101010 129 
#define  PIXEL_FORMAT_FP16 128 
 int /*<<< orphan*/  TRANSFER_FUNCTION_GAMMA22 ; 
 int /*<<< orphan*/  TRANSFER_FUNCTION_PQ ; 
 int /*<<< orphan*/  TRANSFER_FUNCTION_UNITY ; 

__attribute__((used)) static void dcn10_get_hdr_visual_confirm_color(
		struct pipe_ctx *pipe_ctx,
		struct tg_color *color)
{
	uint32_t color_value = MAX_TG_COLOR_VALUE;

	// Determine the overscan color based on the top-most (desktop) plane's context
	struct pipe_ctx *top_pipe_ctx  = pipe_ctx;

	while (top_pipe_ctx->top_pipe != NULL)
		top_pipe_ctx = top_pipe_ctx->top_pipe;

	switch (top_pipe_ctx->plane_res.scl_data.format) {
	case PIXEL_FORMAT_ARGB2101010:
		if (top_pipe_ctx->stream->out_transfer_func->tf == TRANSFER_FUNCTION_UNITY) {
			/* HDR10, ARGB2101010 - set boarder color to red */
			color->color_r_cr = color_value;
		}
		break;
	case PIXEL_FORMAT_FP16:
		if (top_pipe_ctx->stream->out_transfer_func->tf == TRANSFER_FUNCTION_PQ) {
			/* HDR10, FP16 - set boarder color to blue */
			color->color_b_cb = color_value;
		} else if (top_pipe_ctx->stream->out_transfer_func->tf == TRANSFER_FUNCTION_GAMMA22) {
			/* FreeSync 2 HDR - set boarder color to green */
			color->color_g_y = color_value;
		}
		break;
	default:
		/* SDR - set boarder color to Gray */
		color->color_r_cr = color_value/2;
		color->color_b_cb = color_value/2;
		color->color_g_y = color_value/2;
		break;
	}
}


// ------------------------------------------------------------------------- //

struct pipe_ctx *_allocate_pipe_ctx(int length, struct pipe_ctx *aux_pipe_ctx[]) {
  struct pipe_ctx *walker = (struct pipe_ctx *)malloc(sizeof(struct pipe_ctx));

  aux_pipe_ctx[0] = walker;
  int _len_walker_stream0 = 1;
  walker->stream = (struct TYPE_8__ *) malloc(_len_walker_stream0*sizeof(struct TYPE_8__));
  for(int _i0 = 0; _i0 < _len_walker_stream0; _i0++) {
      int _len_walker_stream_out_transfer_func0 = 1;
  walker->stream.out_transfer_func = (struct TYPE_7__ *) malloc(_len_walker_stream_out_transfer_func0*sizeof(struct TYPE_7__));
  for(int _j0 = 0; _j0 < _len_walker_stream_out_transfer_func0; _j0++) {
    walker->stream.out_transfer_func->tf = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  }
walker->plane_res.scl_data.format = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->top_pipe = NULL;

  struct pipe_ctx *head = walker;
  for(int i = 1; i < length; i++) {
    walker->top_pipe = (struct pipe_ctx *)malloc(sizeof(struct pipe_ctx));
    walker = walker->top_pipe;
    aux_pipe_ctx[i] = walker;
  int _len_walker_stream0 = 1;
  walker->stream = (struct TYPE_8__ *) malloc(_len_walker_stream0*sizeof(struct TYPE_8__));
  for(int _i0 = 0; _i0 < _len_walker_stream0; _i0++) {
      int _len_walker_stream_out_transfer_func0 = 1;
  walker->stream.out_transfer_func = (struct TYPE_7__ *) malloc(_len_walker_stream_out_transfer_func0*sizeof(struct TYPE_7__));
  for(int _j0 = 0; _j0 < _len_walker_stream_out_transfer_func0; _j0++) {
    walker->stream.out_transfer_func->tf = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  }
walker->plane_res.scl_data.format = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->top_pipe = NULL;
  }

  return head;
}

void _delete_pipe_ctx(struct pipe_ctx *aux_pipe_ctx[], int aux_pipe_ctx_size) {
  for(int i = 0; i < aux_pipe_ctx_size; i++) 
    if(aux_pipe_ctx[i])
      free(aux_pipe_ctx[i]);
}

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
          struct pipe_ctx * aux_pipe_ctx[1];
          struct pipe_ctx * pipe_ctx = _allocate_pipe_ctx(1, aux_pipe_ctx);
          int _len_color0 = 1;
          struct tg_color * color = (struct tg_color *) malloc(_len_color0*sizeof(struct tg_color));
          for(int _i0 = 0; _i0 < _len_color0; _i0++) {
            color[_i0].color_r_cr = ((-2 * (next_i()%2)) + 1) * next_i();
        color[_i0].color_b_cb = ((-2 * (next_i()%2)) + 1) * next_i();
        color[_i0].color_g_y = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dcn10_get_hdr_visual_confirm_color(pipe_ctx,color);
          _delete_pipe_ctx(aux_pipe_ctx, 1);
          free(color);
        
        break;
    }
    // linked
    case 3:
    {
          struct pipe_ctx * aux_pipe_ctx[10000];
          struct pipe_ctx * pipe_ctx = _allocate_pipe_ctx(10000, aux_pipe_ctx);
          int _len_color0 = 1;
          struct tg_color * color = (struct tg_color *) malloc(_len_color0*sizeof(struct tg_color));
          for(int _i0 = 0; _i0 < _len_color0; _i0++) {
            color[_i0].color_r_cr = ((-2 * (next_i()%2)) + 1) * next_i();
        color[_i0].color_b_cb = ((-2 * (next_i()%2)) + 1) * next_i();
        color[_i0].color_g_y = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dcn10_get_hdr_visual_confirm_color(pipe_ctx,color);
          _delete_pipe_ctx(aux_pipe_ctx, 10000);
          free(color);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

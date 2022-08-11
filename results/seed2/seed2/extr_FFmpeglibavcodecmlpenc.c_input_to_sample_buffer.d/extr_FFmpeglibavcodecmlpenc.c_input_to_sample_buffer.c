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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  int32_t ;
struct TYPE_5__ {unsigned int number_of_frames; unsigned int starting_frame_index; unsigned int max_restart_interval; unsigned int one_sample_buffer_size; unsigned int* frame_size; TYPE_1__* avctx; int /*<<< orphan*/ * inout_buffer; int /*<<< orphan*/ * sample_buffer; } ;
struct TYPE_4__ {unsigned int channels; } ;
typedef  TYPE_2__ MLPEncodeContext ;

/* Variables and functions */

__attribute__((used)) static void input_to_sample_buffer(MLPEncodeContext *ctx)
{
    int32_t *sample_buffer = ctx->sample_buffer;
    unsigned int index;

    for (index = 0; index < ctx->number_of_frames; index++) {
        unsigned int cur_index = (ctx->starting_frame_index + index) % ctx->max_restart_interval;
        int32_t *input_buffer = ctx->inout_buffer + cur_index * ctx->one_sample_buffer_size;
        unsigned int i, channel;

        for (i = 0; i < ctx->frame_size[cur_index]; i++) {
            for (channel = 0; channel < ctx->avctx->channels; channel++)
                *sample_buffer++ = *input_buffer++;
            sample_buffer += 2; /* noise_channels */
            input_buffer += 2; /* noise_channels */
        }
    }
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
          int _len_ctx0 = 1;
          struct TYPE_5__ * ctx = (struct TYPE_5__ *) malloc(_len_ctx0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].number_of_frames = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].starting_frame_index = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].max_restart_interval = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].one_sample_buffer_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__frame_size0 = 1;
          ctx[_i0].frame_size = (unsigned int *) malloc(_len_ctx__i0__frame_size0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__frame_size0; _j0++) {
            ctx[_i0].frame_size[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__avctx0 = 1;
          ctx[_i0].avctx = (struct TYPE_4__ *) malloc(_len_ctx__i0__avctx0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__avctx0; _j0++) {
            ctx[_i0].avctx->channels = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__inout_buffer0 = 1;
          ctx[_i0].inout_buffer = (int *) malloc(_len_ctx__i0__inout_buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__inout_buffer0; _j0++) {
            ctx[_i0].inout_buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__sample_buffer0 = 1;
          ctx[_i0].sample_buffer = (int *) malloc(_len_ctx__i0__sample_buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__sample_buffer0; _j0++) {
            ctx[_i0].sample_buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          input_to_sample_buffer(ctx);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].frame_size);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].avctx);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].inout_buffer);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].sample_buffer);
          }
          free(ctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ctx0 = 65025;
          struct TYPE_5__ * ctx = (struct TYPE_5__ *) malloc(_len_ctx0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].number_of_frames = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].starting_frame_index = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].max_restart_interval = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].one_sample_buffer_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__frame_size0 = 1;
          ctx[_i0].frame_size = (unsigned int *) malloc(_len_ctx__i0__frame_size0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__frame_size0; _j0++) {
            ctx[_i0].frame_size[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__avctx0 = 1;
          ctx[_i0].avctx = (struct TYPE_4__ *) malloc(_len_ctx__i0__avctx0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__avctx0; _j0++) {
            ctx[_i0].avctx->channels = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__inout_buffer0 = 1;
          ctx[_i0].inout_buffer = (int *) malloc(_len_ctx__i0__inout_buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__inout_buffer0; _j0++) {
            ctx[_i0].inout_buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__sample_buffer0 = 1;
          ctx[_i0].sample_buffer = (int *) malloc(_len_ctx__i0__sample_buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__sample_buffer0; _j0++) {
            ctx[_i0].sample_buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          input_to_sample_buffer(ctx);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].frame_size);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].avctx);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].inout_buffer);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].sample_buffer);
          }
          free(ctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ctx0 = 100;
          struct TYPE_5__ * ctx = (struct TYPE_5__ *) malloc(_len_ctx0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].number_of_frames = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].starting_frame_index = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].max_restart_interval = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].one_sample_buffer_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__frame_size0 = 1;
          ctx[_i0].frame_size = (unsigned int *) malloc(_len_ctx__i0__frame_size0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__frame_size0; _j0++) {
            ctx[_i0].frame_size[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__avctx0 = 1;
          ctx[_i0].avctx = (struct TYPE_4__ *) malloc(_len_ctx__i0__avctx0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__avctx0; _j0++) {
            ctx[_i0].avctx->channels = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__inout_buffer0 = 1;
          ctx[_i0].inout_buffer = (int *) malloc(_len_ctx__i0__inout_buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__inout_buffer0; _j0++) {
            ctx[_i0].inout_buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__sample_buffer0 = 1;
          ctx[_i0].sample_buffer = (int *) malloc(_len_ctx__i0__sample_buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__sample_buffer0; _j0++) {
            ctx[_i0].sample_buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          input_to_sample_buffer(ctx);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].frame_size);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].avctx);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].inout_buffer);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].sample_buffer);
          }
          free(ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

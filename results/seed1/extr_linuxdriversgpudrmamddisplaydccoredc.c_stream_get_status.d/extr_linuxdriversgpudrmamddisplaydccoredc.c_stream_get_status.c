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
typedef  size_t uint8_t ;
struct dc_stream_status {int dummy; } ;
struct dc_stream_state {int dummy; } ;
struct dc_state {size_t stream_count; struct dc_stream_status* stream_status; struct dc_stream_state** streams; } ;

/* Variables and functions */

__attribute__((used)) static struct dc_stream_status *stream_get_status(
	struct dc_state *ctx,
	struct dc_stream_state *stream)
{
	uint8_t i;

	for (i = 0; i < ctx->stream_count; i++) {
		if (stream == ctx->streams[i]) {
			return &ctx->stream_status[i];
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
          int _len_ctx0 = 1;
          struct dc_state * ctx = (struct dc_state *) malloc(_len_ctx0*sizeof(struct dc_state));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].stream_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__stream_status0 = 1;
          ctx[_i0].stream_status = (struct dc_stream_status *) malloc(_len_ctx__i0__stream_status0*sizeof(struct dc_stream_status));
          for(int _j0 = 0; _j0 < _len_ctx__i0__stream_status0; _j0++) {
            ctx[_i0].stream_status->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__streams0 = 1;
          ctx[_i0].streams = (struct dc_stream_state **) malloc(_len_ctx__i0__streams0*sizeof(struct dc_stream_state *));
          for(int _j0 = 0; _j0 < _len_ctx__i0__streams0; _j0++) {
            int _len_ctx__i0__streams1 = 1;
            ctx[_i0].streams[_j0] = (struct dc_stream_state *) malloc(_len_ctx__i0__streams1*sizeof(struct dc_stream_state));
            for(int _j1 = 0; _j1 < _len_ctx__i0__streams1; _j1++) {
              ctx[_i0].streams[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_stream0 = 1;
          struct dc_stream_state * stream = (struct dc_stream_state *) malloc(_len_stream0*sizeof(struct dc_stream_state));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
            stream[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct dc_stream_status * benchRet = stream_get_status(ctx,stream);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].stream_status);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(*(ctx[_aux].streams));
        free(ctx[_aux].streams);
          }
          free(ctx);
          free(stream);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ctx0 = 65025;
          struct dc_state * ctx = (struct dc_state *) malloc(_len_ctx0*sizeof(struct dc_state));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].stream_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__stream_status0 = 1;
          ctx[_i0].stream_status = (struct dc_stream_status *) malloc(_len_ctx__i0__stream_status0*sizeof(struct dc_stream_status));
          for(int _j0 = 0; _j0 < _len_ctx__i0__stream_status0; _j0++) {
            ctx[_i0].stream_status->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__streams0 = 1;
          ctx[_i0].streams = (struct dc_stream_state **) malloc(_len_ctx__i0__streams0*sizeof(struct dc_stream_state *));
          for(int _j0 = 0; _j0 < _len_ctx__i0__streams0; _j0++) {
            int _len_ctx__i0__streams1 = 1;
            ctx[_i0].streams[_j0] = (struct dc_stream_state *) malloc(_len_ctx__i0__streams1*sizeof(struct dc_stream_state));
            for(int _j1 = 0; _j1 < _len_ctx__i0__streams1; _j1++) {
              ctx[_i0].streams[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_stream0 = 65025;
          struct dc_stream_state * stream = (struct dc_stream_state *) malloc(_len_stream0*sizeof(struct dc_stream_state));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
            stream[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct dc_stream_status * benchRet = stream_get_status(ctx,stream);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].stream_status);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(*(ctx[_aux].streams));
        free(ctx[_aux].streams);
          }
          free(ctx);
          free(stream);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ctx0 = 100;
          struct dc_state * ctx = (struct dc_state *) malloc(_len_ctx0*sizeof(struct dc_state));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].stream_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__stream_status0 = 1;
          ctx[_i0].stream_status = (struct dc_stream_status *) malloc(_len_ctx__i0__stream_status0*sizeof(struct dc_stream_status));
          for(int _j0 = 0; _j0 < _len_ctx__i0__stream_status0; _j0++) {
            ctx[_i0].stream_status->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__streams0 = 1;
          ctx[_i0].streams = (struct dc_stream_state **) malloc(_len_ctx__i0__streams0*sizeof(struct dc_stream_state *));
          for(int _j0 = 0; _j0 < _len_ctx__i0__streams0; _j0++) {
            int _len_ctx__i0__streams1 = 1;
            ctx[_i0].streams[_j0] = (struct dc_stream_state *) malloc(_len_ctx__i0__streams1*sizeof(struct dc_stream_state));
            for(int _j1 = 0; _j1 < _len_ctx__i0__streams1; _j1++) {
              ctx[_i0].streams[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_stream0 = 100;
          struct dc_stream_state * stream = (struct dc_stream_state *) malloc(_len_stream0*sizeof(struct dc_stream_state));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
            stream[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct dc_stream_status * benchRet = stream_get_status(ctx,stream);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].stream_status);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(*(ctx[_aux].streams));
        free(ctx[_aux].streams);
          }
          free(ctx);
          free(stream);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

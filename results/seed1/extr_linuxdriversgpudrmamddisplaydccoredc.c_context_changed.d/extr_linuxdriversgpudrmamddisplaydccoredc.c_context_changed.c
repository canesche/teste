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
typedef  size_t uint8_t ;
struct dc_state {scalar_t__ stream_count; scalar_t__* streams; } ;
struct dc {TYPE_1__* current_state; } ;
struct TYPE_2__ {scalar_t__ stream_count; scalar_t__* streams; } ;

/* Variables and functions */

__attribute__((used)) static bool context_changed(
		struct dc *dc,
		struct dc_state *context)
{
	uint8_t i;

	if (context->stream_count != dc->current_state->stream_count)
		return true;

	for (i = 0; i < dc->current_state->stream_count; i++) {
		if (dc->current_state->streams[i] != context->streams[i])
			return true;
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
          int _len_dc0 = 1;
          struct dc * dc = (struct dc *) malloc(_len_dc0*sizeof(struct dc));
          for(int _i0 = 0; _i0 < _len_dc0; _i0++) {
              int _len_dc__i0__current_state0 = 1;
          dc[_i0].current_state = (struct TYPE_2__ *) malloc(_len_dc__i0__current_state0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dc__i0__current_state0; _j0++) {
            dc[_i0].current_state->stream_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dc__i0__current_state_streams0 = 1;
          dc[_i0].current_state->streams = (long *) malloc(_len_dc__i0__current_state_streams0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_dc__i0__current_state_streams0; _j0++) {
            dc[_i0].current_state->streams[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_context0 = 1;
          struct dc_state * context = (struct dc_state *) malloc(_len_context0*sizeof(struct dc_state));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
            context[_i0].stream_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_context__i0__streams0 = 1;
          context[_i0].streams = (long *) malloc(_len_context__i0__streams0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_context__i0__streams0; _j0++) {
            context[_i0].streams[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = context_changed(dc,context);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dc0; _aux++) {
          free(dc[_aux].current_state);
          }
          free(dc);
          for(int _aux = 0; _aux < _len_context0; _aux++) {
          free(context[_aux].streams);
          }
          free(context);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dc0 = 65025;
          struct dc * dc = (struct dc *) malloc(_len_dc0*sizeof(struct dc));
          for(int _i0 = 0; _i0 < _len_dc0; _i0++) {
              int _len_dc__i0__current_state0 = 1;
          dc[_i0].current_state = (struct TYPE_2__ *) malloc(_len_dc__i0__current_state0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dc__i0__current_state0; _j0++) {
            dc[_i0].current_state->stream_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dc__i0__current_state_streams0 = 1;
          dc[_i0].current_state->streams = (long *) malloc(_len_dc__i0__current_state_streams0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_dc__i0__current_state_streams0; _j0++) {
            dc[_i0].current_state->streams[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_context0 = 65025;
          struct dc_state * context = (struct dc_state *) malloc(_len_context0*sizeof(struct dc_state));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
            context[_i0].stream_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_context__i0__streams0 = 1;
          context[_i0].streams = (long *) malloc(_len_context__i0__streams0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_context__i0__streams0; _j0++) {
            context[_i0].streams[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = context_changed(dc,context);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dc0; _aux++) {
          free(dc[_aux].current_state);
          }
          free(dc);
          for(int _aux = 0; _aux < _len_context0; _aux++) {
          free(context[_aux].streams);
          }
          free(context);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dc0 = 100;
          struct dc * dc = (struct dc *) malloc(_len_dc0*sizeof(struct dc));
          for(int _i0 = 0; _i0 < _len_dc0; _i0++) {
              int _len_dc__i0__current_state0 = 1;
          dc[_i0].current_state = (struct TYPE_2__ *) malloc(_len_dc__i0__current_state0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dc__i0__current_state0; _j0++) {
            dc[_i0].current_state->stream_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dc__i0__current_state_streams0 = 1;
          dc[_i0].current_state->streams = (long *) malloc(_len_dc__i0__current_state_streams0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_dc__i0__current_state_streams0; _j0++) {
            dc[_i0].current_state->streams[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_context0 = 100;
          struct dc_state * context = (struct dc_state *) malloc(_len_context0*sizeof(struct dc_state));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
            context[_i0].stream_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_context__i0__streams0 = 1;
          context[_i0].streams = (long *) malloc(_len_context__i0__streams0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_context__i0__streams0; _j0++) {
            context[_i0].streams[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = context_changed(dc,context);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dc0; _aux++) {
          free(dc[_aux].current_state);
          }
          free(dc);
          for(int _aux = 0; _aux < _len_context0; _aux++) {
          free(context[_aux].streams);
          }
          free(context);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

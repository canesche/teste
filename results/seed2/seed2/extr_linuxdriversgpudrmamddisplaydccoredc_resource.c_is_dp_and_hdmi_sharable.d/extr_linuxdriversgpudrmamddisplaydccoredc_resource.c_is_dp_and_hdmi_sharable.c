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
struct TYPE_8__ {scalar_t__ c_depth; } ;
struct dc_stream_state {TYPE_4__ clamping; TYPE_3__* ctx; } ;
struct TYPE_7__ {TYPE_2__* dc; } ;
struct TYPE_5__ {scalar_t__ disable_dp_clk_share; } ;
struct TYPE_6__ {TYPE_1__ caps; } ;

/* Variables and functions */
 scalar_t__ COLOR_DEPTH_888 ; 

__attribute__((used)) static bool is_dp_and_hdmi_sharable(
		struct dc_stream_state *stream1,
		struct dc_stream_state *stream2)
{
	if (stream1->ctx->dc->caps.disable_dp_clk_share)
		return false;

	if (stream1->clamping.c_depth != COLOR_DEPTH_888 ||
	    stream2->clamping.c_depth != COLOR_DEPTH_888)
	return false;

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
          int _len_stream10 = 1;
          struct dc_stream_state * stream1 = (struct dc_stream_state *) malloc(_len_stream10*sizeof(struct dc_stream_state));
          for(int _i0 = 0; _i0 < _len_stream10; _i0++) {
            stream1[_i0].clamping.c_depth = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stream1__i0__ctx0 = 1;
          stream1[_i0].ctx = (struct TYPE_7__ *) malloc(_len_stream1__i0__ctx0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_stream1__i0__ctx0; _j0++) {
              int _len_stream1__i0__ctx_dc0 = 1;
          stream1[_i0].ctx->dc = (struct TYPE_6__ *) malloc(_len_stream1__i0__ctx_dc0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_stream1__i0__ctx_dc0; _j0++) {
            stream1[_i0].ctx->dc->caps.disable_dp_clk_share = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_stream20 = 1;
          struct dc_stream_state * stream2 = (struct dc_stream_state *) malloc(_len_stream20*sizeof(struct dc_stream_state));
          for(int _i0 = 0; _i0 < _len_stream20; _i0++) {
            stream2[_i0].clamping.c_depth = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stream2__i0__ctx0 = 1;
          stream2[_i0].ctx = (struct TYPE_7__ *) malloc(_len_stream2__i0__ctx0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_stream2__i0__ctx0; _j0++) {
              int _len_stream2__i0__ctx_dc0 = 1;
          stream2[_i0].ctx->dc = (struct TYPE_6__ *) malloc(_len_stream2__i0__ctx_dc0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_stream2__i0__ctx_dc0; _j0++) {
            stream2[_i0].ctx->dc->caps.disable_dp_clk_share = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = is_dp_and_hdmi_sharable(stream1,stream2);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_stream10; _aux++) {
          free(stream1[_aux].ctx);
          }
          free(stream1);
          for(int _aux = 0; _aux < _len_stream20; _aux++) {
          free(stream2[_aux].ctx);
          }
          free(stream2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_stream10 = 65025;
          struct dc_stream_state * stream1 = (struct dc_stream_state *) malloc(_len_stream10*sizeof(struct dc_stream_state));
          for(int _i0 = 0; _i0 < _len_stream10; _i0++) {
            stream1[_i0].clamping.c_depth = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stream1__i0__ctx0 = 1;
          stream1[_i0].ctx = (struct TYPE_7__ *) malloc(_len_stream1__i0__ctx0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_stream1__i0__ctx0; _j0++) {
              int _len_stream1__i0__ctx_dc0 = 1;
          stream1[_i0].ctx->dc = (struct TYPE_6__ *) malloc(_len_stream1__i0__ctx_dc0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_stream1__i0__ctx_dc0; _j0++) {
            stream1[_i0].ctx->dc->caps.disable_dp_clk_share = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_stream20 = 65025;
          struct dc_stream_state * stream2 = (struct dc_stream_state *) malloc(_len_stream20*sizeof(struct dc_stream_state));
          for(int _i0 = 0; _i0 < _len_stream20; _i0++) {
            stream2[_i0].clamping.c_depth = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stream2__i0__ctx0 = 1;
          stream2[_i0].ctx = (struct TYPE_7__ *) malloc(_len_stream2__i0__ctx0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_stream2__i0__ctx0; _j0++) {
              int _len_stream2__i0__ctx_dc0 = 1;
          stream2[_i0].ctx->dc = (struct TYPE_6__ *) malloc(_len_stream2__i0__ctx_dc0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_stream2__i0__ctx_dc0; _j0++) {
            stream2[_i0].ctx->dc->caps.disable_dp_clk_share = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = is_dp_and_hdmi_sharable(stream1,stream2);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_stream10; _aux++) {
          free(stream1[_aux].ctx);
          }
          free(stream1);
          for(int _aux = 0; _aux < _len_stream20; _aux++) {
          free(stream2[_aux].ctx);
          }
          free(stream2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_stream10 = 100;
          struct dc_stream_state * stream1 = (struct dc_stream_state *) malloc(_len_stream10*sizeof(struct dc_stream_state));
          for(int _i0 = 0; _i0 < _len_stream10; _i0++) {
            stream1[_i0].clamping.c_depth = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stream1__i0__ctx0 = 1;
          stream1[_i0].ctx = (struct TYPE_7__ *) malloc(_len_stream1__i0__ctx0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_stream1__i0__ctx0; _j0++) {
              int _len_stream1__i0__ctx_dc0 = 1;
          stream1[_i0].ctx->dc = (struct TYPE_6__ *) malloc(_len_stream1__i0__ctx_dc0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_stream1__i0__ctx_dc0; _j0++) {
            stream1[_i0].ctx->dc->caps.disable_dp_clk_share = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_stream20 = 100;
          struct dc_stream_state * stream2 = (struct dc_stream_state *) malloc(_len_stream20*sizeof(struct dc_stream_state));
          for(int _i0 = 0; _i0 < _len_stream20; _i0++) {
            stream2[_i0].clamping.c_depth = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stream2__i0__ctx0 = 1;
          stream2[_i0].ctx = (struct TYPE_7__ *) malloc(_len_stream2__i0__ctx0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_stream2__i0__ctx0; _j0++) {
              int _len_stream2__i0__ctx_dc0 = 1;
          stream2[_i0].ctx->dc = (struct TYPE_6__ *) malloc(_len_stream2__i0__ctx_dc0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_stream2__i0__ctx_dc0; _j0++) {
            stream2[_i0].ctx->dc->caps.disable_dp_clk_share = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = is_dp_and_hdmi_sharable(stream1,stream2);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_stream10; _aux++) {
          free(stream1[_aux].ctx);
          }
          free(stream1);
          for(int _aux = 0; _aux < _len_stream20; _aux++) {
          free(stream2[_aux].ctx);
          }
          free(stream2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

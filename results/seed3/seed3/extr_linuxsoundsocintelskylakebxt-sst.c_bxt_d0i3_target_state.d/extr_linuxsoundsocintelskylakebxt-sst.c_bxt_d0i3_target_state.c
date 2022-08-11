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
struct sst_dsp {struct skl_sst* thread_context; } ;
struct TYPE_2__ {scalar_t__* state; } ;
struct skl_d0i3_data {scalar_t__ non_streaming; scalar_t__ streaming; scalar_t__ non_d0i3; } ;
struct skl_sst {TYPE_1__ cores; struct skl_d0i3_data d0i3; } ;

/* Variables and functions */
 size_t SKL_DSP_CORE0_ID ; 
 int SKL_DSP_D0I3_NONE ; 
 int SKL_DSP_D0I3_NON_STREAMING ; 
 int SKL_DSP_D0I3_STREAMING ; 
 scalar_t__ SKL_DSP_RUNNING ; 

__attribute__((used)) static int bxt_d0i3_target_state(struct sst_dsp *ctx)
{
	struct skl_sst *skl = ctx->thread_context;
	struct skl_d0i3_data *d0i3 = &skl->d0i3;

	if (skl->cores.state[SKL_DSP_CORE0_ID] != SKL_DSP_RUNNING)
		return SKL_DSP_D0I3_NONE;

	if (d0i3->non_d0i3)
		return SKL_DSP_D0I3_NONE;
	else if (d0i3->streaming)
		return SKL_DSP_D0I3_STREAMING;
	else if (d0i3->non_streaming)
		return SKL_DSP_D0I3_NON_STREAMING;
	else
		return SKL_DSP_D0I3_NONE;
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
          struct sst_dsp * ctx = (struct sst_dsp *) malloc(_len_ctx0*sizeof(struct sst_dsp));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__thread_context0 = 1;
          ctx[_i0].thread_context = (struct skl_sst *) malloc(_len_ctx__i0__thread_context0*sizeof(struct skl_sst));
          for(int _j0 = 0; _j0 < _len_ctx__i0__thread_context0; _j0++) {
              int _len_ctx__i0__thread_context_cores_state0 = 1;
          ctx[_i0].thread_context->cores.state = (long *) malloc(_len_ctx__i0__thread_context_cores_state0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ctx__i0__thread_context_cores_state0; _j0++) {
            ctx[_i0].thread_context->cores.state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].thread_context->d0i3.non_streaming = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].thread_context->d0i3.streaming = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].thread_context->d0i3.non_d0i3 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = bxt_d0i3_target_state(ctx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].thread_context);
          }
          free(ctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ctx0 = 65025;
          struct sst_dsp * ctx = (struct sst_dsp *) malloc(_len_ctx0*sizeof(struct sst_dsp));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__thread_context0 = 1;
          ctx[_i0].thread_context = (struct skl_sst *) malloc(_len_ctx__i0__thread_context0*sizeof(struct skl_sst));
          for(int _j0 = 0; _j0 < _len_ctx__i0__thread_context0; _j0++) {
              int _len_ctx__i0__thread_context_cores_state0 = 1;
          ctx[_i0].thread_context->cores.state = (long *) malloc(_len_ctx__i0__thread_context_cores_state0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ctx__i0__thread_context_cores_state0; _j0++) {
            ctx[_i0].thread_context->cores.state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].thread_context->d0i3.non_streaming = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].thread_context->d0i3.streaming = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].thread_context->d0i3.non_d0i3 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = bxt_d0i3_target_state(ctx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].thread_context);
          }
          free(ctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ctx0 = 100;
          struct sst_dsp * ctx = (struct sst_dsp *) malloc(_len_ctx0*sizeof(struct sst_dsp));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__thread_context0 = 1;
          ctx[_i0].thread_context = (struct skl_sst *) malloc(_len_ctx__i0__thread_context0*sizeof(struct skl_sst));
          for(int _j0 = 0; _j0 < _len_ctx__i0__thread_context0; _j0++) {
              int _len_ctx__i0__thread_context_cores_state0 = 1;
          ctx[_i0].thread_context->cores.state = (long *) malloc(_len_ctx__i0__thread_context_cores_state0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ctx__i0__thread_context_cores_state0; _j0++) {
            ctx[_i0].thread_context->cores.state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].thread_context->d0i3.non_streaming = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].thread_context->d0i3.streaming = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].thread_context->d0i3.non_d0i3 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = bxt_d0i3_target_state(ctx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].thread_context);
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

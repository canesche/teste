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
struct TYPE_2__ {int* usage_count; int count; int /*<<< orphan*/ * state; } ;
struct skl_sst {TYPE_1__ cores; } ;

/* Variables and functions */
 size_t SKL_DSP_CORE0_ID ; 
 int /*<<< orphan*/  SKL_DSP_RESET ; 
 int /*<<< orphan*/  SKL_DSP_RUNNING ; 

void skl_dsp_init_core_state(struct sst_dsp *ctx)
{
	struct skl_sst *skl = ctx->thread_context;
	int i;

	skl->cores.state[SKL_DSP_CORE0_ID] = SKL_DSP_RUNNING;
	skl->cores.usage_count[SKL_DSP_CORE0_ID] = 1;

	for (i = SKL_DSP_CORE0_ID + 1; i < skl->cores.count; i++) {
		skl->cores.state[i] = SKL_DSP_RESET;
		skl->cores.usage_count[i] = 0;
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
          struct sst_dsp * ctx = (struct sst_dsp *) malloc(_len_ctx0*sizeof(struct sst_dsp));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__thread_context0 = 1;
          ctx[_i0].thread_context = (struct skl_sst *) malloc(_len_ctx__i0__thread_context0*sizeof(struct skl_sst));
          for(int _j0 = 0; _j0 < _len_ctx__i0__thread_context0; _j0++) {
              int _len_ctx__i0__thread_context_cores_usage_count0 = 1;
          ctx[_i0].thread_context->cores.usage_count = (int *) malloc(_len_ctx__i0__thread_context_cores_usage_count0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__thread_context_cores_usage_count0; _j0++) {
            ctx[_i0].thread_context->cores.usage_count[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].thread_context->cores.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__thread_context_cores_state0 = 1;
          ctx[_i0].thread_context->cores.state = (int *) malloc(_len_ctx__i0__thread_context_cores_state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__thread_context_cores_state0; _j0++) {
            ctx[_i0].thread_context->cores.state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          skl_dsp_init_core_state(ctx);
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
              int _len_ctx__i0__thread_context_cores_usage_count0 = 1;
          ctx[_i0].thread_context->cores.usage_count = (int *) malloc(_len_ctx__i0__thread_context_cores_usage_count0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__thread_context_cores_usage_count0; _j0++) {
            ctx[_i0].thread_context->cores.usage_count[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].thread_context->cores.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__thread_context_cores_state0 = 1;
          ctx[_i0].thread_context->cores.state = (int *) malloc(_len_ctx__i0__thread_context_cores_state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__thread_context_cores_state0; _j0++) {
            ctx[_i0].thread_context->cores.state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          skl_dsp_init_core_state(ctx);
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
              int _len_ctx__i0__thread_context_cores_usage_count0 = 1;
          ctx[_i0].thread_context->cores.usage_count = (int *) malloc(_len_ctx__i0__thread_context_cores_usage_count0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__thread_context_cores_usage_count0; _j0++) {
            ctx[_i0].thread_context->cores.usage_count[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].thread_context->cores.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__thread_context_cores_state0 = 1;
          ctx[_i0].thread_context->cores.state = (int *) malloc(_len_ctx__i0__thread_context_cores_state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__thread_context_cores_state0; _j0++) {
            ctx[_i0].thread_context->cores.state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          skl_dsp_init_core_state(ctx);
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

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
struct kperf_context {int dummy; } ;

/* Variables and functions */

void
kperf_thread_inscyc_log(struct kperf_context *context)
{
#if MONOTONIC
	thread_t cur_thread = current_thread();

	if (context->cur_thread != cur_thread) {
		/* can't safely access another thread's counters */
		return;
	}

	uint64_t counts[MT_CORE_NFIXED];

	int ret = mt_fixed_thread_counts(cur_thread, counts);
	if (ret) {
		return;
	}

#if defined(__LP64__)
	BUF_DATA(PERF_TI_INSCYCDATA, counts[MT_CORE_INSTRS], counts[MT_CORE_CYCLES]);
#else /* defined(__LP64__) */
	/* 32-bit platforms don't count instructions */
	BUF_DATA(PERF_TI_INSCYCDATA_32, 0, 0, UPPER_32(counts[MT_CORE_CYCLES]),
			LOWER_32(counts[MT_CORE_CYCLES]));
#endif /* !defined(__LP64__) */

#else
#pragma unused(context)
#endif /* MONOTONIC */

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
          int _len_context0 = 1;
          struct kperf_context * context = (struct kperf_context *) malloc(_len_context0*sizeof(struct kperf_context));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
            context[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          kperf_thread_inscyc_log(context);
          free(context);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_context0 = 65025;
          struct kperf_context * context = (struct kperf_context *) malloc(_len_context0*sizeof(struct kperf_context));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
            context[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          kperf_thread_inscyc_log(context);
          free(context);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_context0 = 100;
          struct kperf_context * context = (struct kperf_context *) malloc(_len_context0*sizeof(struct kperf_context));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
            context[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          kperf_thread_inscyc_log(context);
          free(context);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

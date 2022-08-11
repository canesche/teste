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
typedef  int /*<<< orphan*/  prof_cnt_t ;

/* Variables and functions */

__attribute__((used)) static void
prof_leakcheck(const prof_cnt_t *cnt_all, size_t leak_ngctx,
    const char *filename) {
#ifdef JEMALLOC_PROF
	/*
	 * Scaling is equivalent AdjustSamples() in jeprof, but the result may
	 * differ slightly from what jeprof reports, because here we scale the
	 * summary values, whereas jeprof scales each context individually and
	 * reports the sums of the scaled values.
	 */
	if (cnt_all->curbytes != 0) {
		double sample_period = (double)((uint64_t)1 << lg_prof_sample);
		double ratio = (((double)cnt_all->curbytes) /
		    (double)cnt_all->curobjs) / sample_period;
		double scale_factor = 1.0 / (1.0 - exp(-ratio));
		uint64_t curbytes = (uint64_t)round(((double)cnt_all->curbytes)
		    * scale_factor);
		uint64_t curobjs = (uint64_t)round(((double)cnt_all->curobjs) *
		    scale_factor);

		malloc_printf("<jemalloc>: Leak approximation summary: ~%"FMTu64
		    " byte%s, ~%"FMTu64" object%s, >= %zu context%s\n",
		    curbytes, (curbytes != 1) ? "s" : "", curobjs, (curobjs !=
		    1) ? "s" : "", leak_ngctx, (leak_ngctx != 1) ? "s" : "");
		malloc_printf(
		    "<jemalloc>: Run jeprof on \"%s\" for leak detail\n",
		    filename);
	}
#endif
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
          unsigned long leak_ngctx = 100;
          int _len_cnt_all0 = 1;
          const int * cnt_all = (const int *) malloc(_len_cnt_all0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_cnt_all0; _i0++) {
            cnt_all[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_filename0 = 1;
          const char * filename = (const char *) malloc(_len_filename0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_filename0; _i0++) {
            filename[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          prof_leakcheck(cnt_all,leak_ngctx,filename);
          free(cnt_all);
          free(filename);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long leak_ngctx = 255;
          int _len_cnt_all0 = 65025;
          const int * cnt_all = (const int *) malloc(_len_cnt_all0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_cnt_all0; _i0++) {
            cnt_all[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_filename0 = 65025;
          const char * filename = (const char *) malloc(_len_filename0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_filename0; _i0++) {
            filename[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          prof_leakcheck(cnt_all,leak_ngctx,filename);
          free(cnt_all);
          free(filename);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long leak_ngctx = 10;
          int _len_cnt_all0 = 100;
          const int * cnt_all = (const int *) malloc(_len_cnt_all0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_cnt_all0; _i0++) {
            cnt_all[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_filename0 = 100;
          const char * filename = (const char *) malloc(_len_filename0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_filename0; _i0++) {
            filename[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          prof_leakcheck(cnt_all,leak_ngctx,filename);
          free(cnt_all);
          free(filename);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

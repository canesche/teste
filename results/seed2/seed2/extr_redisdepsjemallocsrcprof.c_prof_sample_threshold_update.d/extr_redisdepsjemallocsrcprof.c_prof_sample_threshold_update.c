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
typedef  int /*<<< orphan*/  prof_tdata_t ;

/* Variables and functions */

void
prof_sample_threshold_update(prof_tdata_t *tdata) {
#ifdef JEMALLOC_PROF
	uint64_t r;
	double u;

	if (!config_prof) {
		return;
	}

	if (lg_prof_sample == 0) {
		tdata->bytes_until_sample = 0;
		return;
	}

	/*
	 * Compute sample interval as a geometrically distributed random
	 * variable with mean (2^lg_prof_sample).
	 *
	 *                             __        __
	 *                             |  log(u)  |                     1
	 * tdata->bytes_until_sample = | -------- |, where p = ---------------
	 *                             | log(1-p) |             lg_prof_sample
	 *                                                     2
	 *
	 * For more information on the math, see:
	 *
	 *   Non-Uniform Random Variate Generation
	 *   Luc Devroye
	 *   Springer-Verlag, New York, 1986
	 *   pp 500
	 *   (http://luc.devroye.org/rnbookindex.html)
	 */
	r = prng_lg_range_u64(&tdata->prng_state, 53);
	u = (double)r * (1.0/9007199254740992.0L);
	tdata->bytes_until_sample = (uint64_t)(log(u) /
	    log(1.0 - (1.0 / (double)((uint64_t)1U << lg_prof_sample))))
	    + (uint64_t)1U;
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
          int _len_tdata0 = 1;
          int * tdata = (int *) malloc(_len_tdata0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tdata0; _i0++) {
            tdata[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          prof_sample_threshold_update(tdata);
          free(tdata);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_tdata0 = 65025;
          int * tdata = (int *) malloc(_len_tdata0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tdata0; _i0++) {
            tdata[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          prof_sample_threshold_update(tdata);
          free(tdata);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_tdata0 = 100;
          int * tdata = (int *) malloc(_len_tdata0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tdata0; _i0++) {
            tdata[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          prof_sample_threshold_update(tdata);
          free(tdata);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

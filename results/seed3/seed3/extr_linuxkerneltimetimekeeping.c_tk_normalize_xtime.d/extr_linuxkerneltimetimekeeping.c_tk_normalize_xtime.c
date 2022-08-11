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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int u64 ;
struct TYPE_3__ {int xtime_nsec; int shift; } ;
struct TYPE_4__ {int xtime_nsec; int shift; } ;
struct timekeeper {int /*<<< orphan*/  raw_sec; TYPE_1__ tkr_raw; int /*<<< orphan*/  xtime_sec; TYPE_2__ tkr_mono; } ;

/* Variables and functions */
 scalar_t__ NSEC_PER_SEC ; 

__attribute__((used)) static inline void tk_normalize_xtime(struct timekeeper *tk)
{
	while (tk->tkr_mono.xtime_nsec >= ((u64)NSEC_PER_SEC << tk->tkr_mono.shift)) {
		tk->tkr_mono.xtime_nsec -= (u64)NSEC_PER_SEC << tk->tkr_mono.shift;
		tk->xtime_sec++;
	}
	while (tk->tkr_raw.xtime_nsec >= ((u64)NSEC_PER_SEC << tk->tkr_raw.shift)) {
		tk->tkr_raw.xtime_nsec -= (u64)NSEC_PER_SEC << tk->tkr_raw.shift;
		tk->raw_sec++;
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
          int _len_tk0 = 1;
          struct timekeeper * tk = (struct timekeeper *) malloc(_len_tk0*sizeof(struct timekeeper));
          for(int _i0 = 0; _i0 < _len_tk0; _i0++) {
            tk[_i0].raw_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        tk[_i0].tkr_raw.xtime_nsec = ((-2 * (next_i()%2)) + 1) * next_i();
        tk[_i0].tkr_raw.shift = ((-2 * (next_i()%2)) + 1) * next_i();
        tk[_i0].xtime_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        tk[_i0].tkr_mono.xtime_nsec = ((-2 * (next_i()%2)) + 1) * next_i();
        tk[_i0].tkr_mono.shift = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tk_normalize_xtime(tk);
          free(tk);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_tk0 = 65025;
          struct timekeeper * tk = (struct timekeeper *) malloc(_len_tk0*sizeof(struct timekeeper));
          for(int _i0 = 0; _i0 < _len_tk0; _i0++) {
            tk[_i0].raw_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        tk[_i0].tkr_raw.xtime_nsec = ((-2 * (next_i()%2)) + 1) * next_i();
        tk[_i0].tkr_raw.shift = ((-2 * (next_i()%2)) + 1) * next_i();
        tk[_i0].xtime_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        tk[_i0].tkr_mono.xtime_nsec = ((-2 * (next_i()%2)) + 1) * next_i();
        tk[_i0].tkr_mono.shift = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tk_normalize_xtime(tk);
          free(tk);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_tk0 = 100;
          struct timekeeper * tk = (struct timekeeper *) malloc(_len_tk0*sizeof(struct timekeeper));
          for(int _i0 = 0; _i0 < _len_tk0; _i0++) {
            tk[_i0].raw_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        tk[_i0].tkr_raw.xtime_nsec = ((-2 * (next_i()%2)) + 1) * next_i();
        tk[_i0].tkr_raw.shift = ((-2 * (next_i()%2)) + 1) * next_i();
        tk[_i0].xtime_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        tk[_i0].tkr_mono.xtime_nsec = ((-2 * (next_i()%2)) + 1) * next_i();
        tk[_i0].tkr_mono.shift = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tk_normalize_xtime(tk);
          free(tk);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct TYPE_2__ {int**** cache_events; } ;

/* Variables and functions */
 int EINVAL ; 
 int EOPNOTSUPP ; 
 unsigned long PERF_COUNT_HW_CACHE_MAX ; 
 unsigned long PERF_COUNT_HW_CACHE_OP_MAX ; 
 unsigned long PERF_COUNT_HW_CACHE_RESULT_MAX ; 
 TYPE_1__* sh_pmu ; 

__attribute__((used)) static int hw_perf_cache_event(int config, int *evp)
{
	unsigned long type, op, result;
	int ev;

	if (!sh_pmu->cache_events)
		return -EINVAL;

	/* unpack config */
	type = config & 0xff;
	op = (config >> 8) & 0xff;
	result = (config >> 16) & 0xff;

	if (type >= PERF_COUNT_HW_CACHE_MAX ||
	    op >= PERF_COUNT_HW_CACHE_OP_MAX ||
	    result >= PERF_COUNT_HW_CACHE_RESULT_MAX)
		return -EINVAL;

	ev = (*sh_pmu->cache_events)[type][op][result];
	if (ev == 0)
		return -EOPNOTSUPP;
	if (ev == -1)
		return -EINVAL;
	*evp = ev;
	return 0;
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
          int config = 100;
          int _len_evp0 = 1;
          int * evp = (int *) malloc(_len_evp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_evp0; _i0++) {
            evp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hw_perf_cache_event(config,evp);
          printf("%d\n", benchRet); 
          free(evp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int config = 255;
          int _len_evp0 = 65025;
          int * evp = (int *) malloc(_len_evp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_evp0; _i0++) {
            evp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hw_perf_cache_event(config,evp);
          printf("%d\n", benchRet); 
          free(evp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int config = 10;
          int _len_evp0 = 100;
          int * evp = (int *) malloc(_len_evp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_evp0; _i0++) {
            evp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hw_perf_cache_event(config,evp);
          printf("%d\n", benchRet); 
          free(evp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

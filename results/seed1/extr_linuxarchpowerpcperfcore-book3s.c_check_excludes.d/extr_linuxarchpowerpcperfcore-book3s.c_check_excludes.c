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
struct TYPE_3__ {int exclude_user; int exclude_kernel; int exclude_hv; } ;
struct perf_event {TYPE_1__ attr; } ;
struct TYPE_4__ {int flags; } ;

/* Variables and functions */
 int EAGAIN ; 
 int PPMU_ARCH_207S ; 
 unsigned int PPMU_LIMITED_PMC_OK ; 
 unsigned int PPMU_LIMITED_PMC_REQD ; 
 TYPE_2__* ppmu ; 

__attribute__((used)) static int check_excludes(struct perf_event **ctrs, unsigned int cflags[],
			  int n_prev, int n_new)
{
	int eu = 0, ek = 0, eh = 0;
	int i, n, first;
	struct perf_event *event;

	/*
	 * If the PMU we're on supports per event exclude settings then we
	 * don't need to do any of this logic. NB. This assumes no PMU has both
	 * per event exclude and limited PMCs.
	 */
	if (ppmu->flags & PPMU_ARCH_207S)
		return 0;

	n = n_prev + n_new;
	if (n <= 1)
		return 0;

	first = 1;
	for (i = 0; i < n; ++i) {
		if (cflags[i] & PPMU_LIMITED_PMC_OK) {
			cflags[i] &= ~PPMU_LIMITED_PMC_REQD;
			continue;
		}
		event = ctrs[i];
		if (first) {
			eu = event->attr.exclude_user;
			ek = event->attr.exclude_kernel;
			eh = event->attr.exclude_hv;
			first = 0;
		} else if (event->attr.exclude_user != eu ||
			   event->attr.exclude_kernel != ek ||
			   event->attr.exclude_hv != eh) {
			return -EAGAIN;
		}
	}

	if (eu || ek || eh)
		for (i = 0; i < n; ++i)
			if (cflags[i] & PPMU_LIMITED_PMC_OK)
				cflags[i] |= PPMU_LIMITED_PMC_REQD;

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
          int n_prev = 100;
          int n_new = 100;
          int _len_ctrs0 = 1;
          struct perf_event ** ctrs = (struct perf_event **) malloc(_len_ctrs0*sizeof(struct perf_event *));
          for(int _i0 = 0; _i0 < _len_ctrs0; _i0++) {
            int _len_ctrs1 = 1;
            ctrs[_i0] = (struct perf_event *) malloc(_len_ctrs1*sizeof(struct perf_event));
            for(int _i1 = 0; _i1 < _len_ctrs1; _i1++) {
              ctrs[_i0][_i1].attr.exclude_user = ((-2 * (next_i()%2)) + 1) * next_i();
        ctrs[_i0][_i1].attr.exclude_kernel = ((-2 * (next_i()%2)) + 1) * next_i();
        ctrs[_i0][_i1].attr.exclude_hv = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_cflags0 = 1;
          unsigned int * cflags = (unsigned int *) malloc(_len_cflags0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_cflags0; _i0++) {
            cflags[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_excludes(ctrs,cflags,n_prev,n_new);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_ctrs0; i1++) {
            int _len_ctrs1 = 1;
              free(ctrs[i1]);
          }
          free(ctrs);
          free(cflags);
        
        break;
    }
    // big-arr
    case 1:
    {
          int n_prev = 255;
          int n_new = 255;
          int _len_ctrs0 = 65025;
          struct perf_event ** ctrs = (struct perf_event **) malloc(_len_ctrs0*sizeof(struct perf_event *));
          for(int _i0 = 0; _i0 < _len_ctrs0; _i0++) {
            int _len_ctrs1 = 1;
            ctrs[_i0] = (struct perf_event *) malloc(_len_ctrs1*sizeof(struct perf_event));
            for(int _i1 = 0; _i1 < _len_ctrs1; _i1++) {
              ctrs[_i0][_i1].attr.exclude_user = ((-2 * (next_i()%2)) + 1) * next_i();
        ctrs[_i0][_i1].attr.exclude_kernel = ((-2 * (next_i()%2)) + 1) * next_i();
        ctrs[_i0][_i1].attr.exclude_hv = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_cflags0 = 65025;
          unsigned int * cflags = (unsigned int *) malloc(_len_cflags0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_cflags0; _i0++) {
            cflags[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_excludes(ctrs,cflags,n_prev,n_new);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_ctrs0; i1++) {
            int _len_ctrs1 = 1;
              free(ctrs[i1]);
          }
          free(ctrs);
          free(cflags);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int n_prev = 10;
          int n_new = 10;
          int _len_ctrs0 = 100;
          struct perf_event ** ctrs = (struct perf_event **) malloc(_len_ctrs0*sizeof(struct perf_event *));
          for(int _i0 = 0; _i0 < _len_ctrs0; _i0++) {
            int _len_ctrs1 = 1;
            ctrs[_i0] = (struct perf_event *) malloc(_len_ctrs1*sizeof(struct perf_event));
            for(int _i1 = 0; _i1 < _len_ctrs1; _i1++) {
              ctrs[_i0][_i1].attr.exclude_user = ((-2 * (next_i()%2)) + 1) * next_i();
        ctrs[_i0][_i1].attr.exclude_kernel = ((-2 * (next_i()%2)) + 1) * next_i();
        ctrs[_i0][_i1].attr.exclude_hv = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_cflags0 = 100;
          unsigned int * cflags = (unsigned int *) malloc(_len_cflags0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_cflags0; _i0++) {
            cflags[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_excludes(ctrs,cflags,n_prev,n_new);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_ctrs0; i1++) {
            int _len_ctrs1 = 1;
              free(ctrs[i1]);
          }
          free(ctrs);
          free(cflags);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

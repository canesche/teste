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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  unaligned_u64 ;
typedef  TYPE_3__* proc_t ;
struct TYPE_5__ {int /*<<< orphan*/  tv_usec; int /*<<< orphan*/  tv_sec; } ;
struct TYPE_7__ {TYPE_2__* p_stats; TYPE_1__ p_start; } ;
struct TYPE_6__ {int /*<<< orphan*/  ps_start; } ;

/* Variables and functions */
 TYPE_3__* PROC_NULL ; 

void
proc_starttime_kdp(void *p, unaligned_u64 *tv_sec, unaligned_u64 *tv_usec, unaligned_u64 *abstime)
{
	proc_t pp = (proc_t)p;
	if (pp != PROC_NULL) {
		if (tv_sec != NULL)
			*tv_sec = pp->p_start.tv_sec;
		if (tv_usec != NULL)
			*tv_usec = pp->p_start.tv_usec;
		if (abstime != NULL) {
			if (pp->p_stats != NULL)
				*abstime = pp->p_stats->ps_start;
			else
				*abstime = 0;
		}
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
          void * p;
          int _len_tv_sec0 = 1;
          int * tv_sec = (int *) malloc(_len_tv_sec0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tv_sec0; _i0++) {
            tv_sec[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tv_usec0 = 1;
          int * tv_usec = (int *) malloc(_len_tv_usec0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tv_usec0; _i0++) {
            tv_usec[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_abstime0 = 1;
          int * abstime = (int *) malloc(_len_abstime0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_abstime0; _i0++) {
            abstime[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          proc_starttime_kdp(p,tv_sec,tv_usec,abstime);
          free(tv_sec);
          free(tv_usec);
          free(abstime);
        
        break;
    }
    // big-arr
    case 1:
    {
          void * p;
          int _len_tv_sec0 = 65025;
          int * tv_sec = (int *) malloc(_len_tv_sec0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tv_sec0; _i0++) {
            tv_sec[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tv_usec0 = 65025;
          int * tv_usec = (int *) malloc(_len_tv_usec0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tv_usec0; _i0++) {
            tv_usec[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_abstime0 = 65025;
          int * abstime = (int *) malloc(_len_abstime0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_abstime0; _i0++) {
            abstime[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          proc_starttime_kdp(p,tv_sec,tv_usec,abstime);
          free(tv_sec);
          free(tv_usec);
          free(abstime);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          void * p;
          int _len_tv_sec0 = 100;
          int * tv_sec = (int *) malloc(_len_tv_sec0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tv_sec0; _i0++) {
            tv_sec[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tv_usec0 = 100;
          int * tv_usec = (int *) malloc(_len_tv_usec0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tv_usec0; _i0++) {
            tv_usec[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_abstime0 = 100;
          int * abstime = (int *) malloc(_len_abstime0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_abstime0; _i0++) {
            abstime[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          proc_starttime_kdp(p,tv_sec,tv_usec,abstime);
          free(tv_sec);
          free(tv_usec);
          free(abstime);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

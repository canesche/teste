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
typedef  int u64 ;
struct blk_stat_callback {TYPE_1__* stat; } ;
struct TYPE_2__ {int mean; int /*<<< orphan*/  nr_samples; } ;

/* Variables and functions */
 int AWFUL ; 
 int BAD ; 
 int GOOD ; 
 int GREAT ; 
 int NONE ; 

__attribute__((used)) static int kyber_lat_status(struct blk_stat_callback *cb,
			    unsigned int sched_domain, u64 target)
{
	u64 latency;

	if (!cb->stat[sched_domain].nr_samples)
		return NONE;

	latency = cb->stat[sched_domain].mean;
	if (latency >= 2 * target)
		return AWFUL;
	else if (latency > target)
		return BAD;
	else if (latency <= target / 2)
		return GREAT;
	else /* (latency <= target) */
		return GOOD;
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
          unsigned int sched_domain = 100;
          int target = 100;
          int _len_cb0 = 1;
          struct blk_stat_callback * cb = (struct blk_stat_callback *) malloc(_len_cb0*sizeof(struct blk_stat_callback));
          for(int _i0 = 0; _i0 < _len_cb0; _i0++) {
              int _len_cb__i0__stat0 = 1;
          cb[_i0].stat = (struct TYPE_2__ *) malloc(_len_cb__i0__stat0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_cb__i0__stat0; _j0++) {
            cb[_i0].stat->mean = ((-2 * (next_i()%2)) + 1) * next_i();
        cb[_i0].stat->nr_samples = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = kyber_lat_status(cb,sched_domain,target);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cb0; _aux++) {
          free(cb[_aux].stat);
          }
          free(cb);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int sched_domain = 255;
          int target = 255;
          int _len_cb0 = 65025;
          struct blk_stat_callback * cb = (struct blk_stat_callback *) malloc(_len_cb0*sizeof(struct blk_stat_callback));
          for(int _i0 = 0; _i0 < _len_cb0; _i0++) {
              int _len_cb__i0__stat0 = 1;
          cb[_i0].stat = (struct TYPE_2__ *) malloc(_len_cb__i0__stat0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_cb__i0__stat0; _j0++) {
            cb[_i0].stat->mean = ((-2 * (next_i()%2)) + 1) * next_i();
        cb[_i0].stat->nr_samples = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = kyber_lat_status(cb,sched_domain,target);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cb0; _aux++) {
          free(cb[_aux].stat);
          }
          free(cb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int sched_domain = 10;
          int target = 10;
          int _len_cb0 = 100;
          struct blk_stat_callback * cb = (struct blk_stat_callback *) malloc(_len_cb0*sizeof(struct blk_stat_callback));
          for(int _i0 = 0; _i0 < _len_cb0; _i0++) {
              int _len_cb__i0__stat0 = 1;
          cb[_i0].stat = (struct TYPE_2__ *) malloc(_len_cb__i0__stat0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_cb__i0__stat0; _j0++) {
            cb[_i0].stat->mean = ((-2 * (next_i()%2)) + 1) * next_i();
        cb[_i0].stat->nr_samples = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = kyber_lat_status(cb,sched_domain,target);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cb0; _aux++) {
          free(cb[_aux].stat);
          }
          free(cb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

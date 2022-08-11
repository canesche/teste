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
struct ab8500_fg_avg_cap {scalar_t__* time_stamps; scalar_t__* samples; int /*<<< orphan*/  avg; scalar_t__ sum; scalar_t__ nbr_samples; scalar_t__ pos; } ;
struct ab8500_fg {struct ab8500_fg_avg_cap avg_cap; } ;

/* Variables and functions */
 int NBR_AVG_SAMPLES ; 

__attribute__((used)) static void ab8500_fg_clear_cap_samples(struct ab8500_fg *di)
{
	int i;
	struct ab8500_fg_avg_cap *avg = &di->avg_cap;

	avg->pos = 0;
	avg->nbr_samples = 0;
	avg->sum = 0;
	avg->avg = 0;

	for (i = 0; i < NBR_AVG_SAMPLES; i++) {
		avg->samples[i] = 0;
		avg->time_stamps[i] = 0;
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
          int _len_di0 = 1;
          struct ab8500_fg * di = (struct ab8500_fg *) malloc(_len_di0*sizeof(struct ab8500_fg));
          for(int _i0 = 0; _i0 < _len_di0; _i0++) {
              int _len_di__i0__avg_cap_time_stamps0 = 1;
          di[_i0].avg_cap.time_stamps = (long *) malloc(_len_di__i0__avg_cap_time_stamps0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_di__i0__avg_cap_time_stamps0; _j0++) {
            di[_i0].avg_cap.time_stamps[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_di__i0__avg_cap_samples0 = 1;
          di[_i0].avg_cap.samples = (long *) malloc(_len_di__i0__avg_cap_samples0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_di__i0__avg_cap_samples0; _j0++) {
            di[_i0].avg_cap.samples[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        di[_i0].avg_cap.avg = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].avg_cap.sum = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].avg_cap.nbr_samples = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].avg_cap.pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ab8500_fg_clear_cap_samples(di);
          free(di);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_di0 = 65025;
          struct ab8500_fg * di = (struct ab8500_fg *) malloc(_len_di0*sizeof(struct ab8500_fg));
          for(int _i0 = 0; _i0 < _len_di0; _i0++) {
              int _len_di__i0__avg_cap_time_stamps0 = 1;
          di[_i0].avg_cap.time_stamps = (long *) malloc(_len_di__i0__avg_cap_time_stamps0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_di__i0__avg_cap_time_stamps0; _j0++) {
            di[_i0].avg_cap.time_stamps[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_di__i0__avg_cap_samples0 = 1;
          di[_i0].avg_cap.samples = (long *) malloc(_len_di__i0__avg_cap_samples0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_di__i0__avg_cap_samples0; _j0++) {
            di[_i0].avg_cap.samples[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        di[_i0].avg_cap.avg = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].avg_cap.sum = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].avg_cap.nbr_samples = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].avg_cap.pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ab8500_fg_clear_cap_samples(di);
          free(di);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_di0 = 100;
          struct ab8500_fg * di = (struct ab8500_fg *) malloc(_len_di0*sizeof(struct ab8500_fg));
          for(int _i0 = 0; _i0 < _len_di0; _i0++) {
              int _len_di__i0__avg_cap_time_stamps0 = 1;
          di[_i0].avg_cap.time_stamps = (long *) malloc(_len_di__i0__avg_cap_time_stamps0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_di__i0__avg_cap_time_stamps0; _j0++) {
            di[_i0].avg_cap.time_stamps[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_di__i0__avg_cap_samples0 = 1;
          di[_i0].avg_cap.samples = (long *) malloc(_len_di__i0__avg_cap_samples0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_di__i0__avg_cap_samples0; _j0++) {
            di[_i0].avg_cap.samples[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        di[_i0].avg_cap.avg = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].avg_cap.sum = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].avg_cap.nbr_samples = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].avg_cap.pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ab8500_fg_clear_cap_samples(di);
          free(di);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

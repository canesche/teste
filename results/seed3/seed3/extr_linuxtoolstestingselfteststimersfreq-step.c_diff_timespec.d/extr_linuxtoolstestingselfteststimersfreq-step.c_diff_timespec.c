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
struct timespec {double tv_sec; int tv_nsec; } ;

/* Variables and functions */

__attribute__((used)) static double diff_timespec(struct timespec *ts1, struct timespec *ts2)
{
	return ts1->tv_sec - ts2->tv_sec + (ts1->tv_nsec - ts2->tv_nsec) / 1e9;
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
          int _len_ts10 = 1;
          struct timespec * ts1 = (struct timespec *) malloc(_len_ts10*sizeof(struct timespec));
          for(int _i0 = 0; _i0 < _len_ts10; _i0++) {
            ts1[_i0].tv_sec = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        ts1[_i0].tv_nsec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ts20 = 1;
          struct timespec * ts2 = (struct timespec *) malloc(_len_ts20*sizeof(struct timespec));
          for(int _i0 = 0; _i0 < _len_ts20; _i0++) {
            ts2[_i0].tv_sec = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        ts2[_i0].tv_nsec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          double benchRet = diff_timespec(ts1,ts2);
          printf("%lf\n", benchRet); 
          free(ts1);
          free(ts2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ts10 = 65025;
          struct timespec * ts1 = (struct timespec *) malloc(_len_ts10*sizeof(struct timespec));
          for(int _i0 = 0; _i0 < _len_ts10; _i0++) {
            ts1[_i0].tv_sec = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        ts1[_i0].tv_nsec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ts20 = 65025;
          struct timespec * ts2 = (struct timespec *) malloc(_len_ts20*sizeof(struct timespec));
          for(int _i0 = 0; _i0 < _len_ts20; _i0++) {
            ts2[_i0].tv_sec = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        ts2[_i0].tv_nsec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          double benchRet = diff_timespec(ts1,ts2);
          printf("%lf\n", benchRet); 
          free(ts1);
          free(ts2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ts10 = 100;
          struct timespec * ts1 = (struct timespec *) malloc(_len_ts10*sizeof(struct timespec));
          for(int _i0 = 0; _i0 < _len_ts10; _i0++) {
            ts1[_i0].tv_sec = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        ts1[_i0].tv_nsec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ts20 = 100;
          struct timespec * ts2 = (struct timespec *) malloc(_len_ts20*sizeof(struct timespec));
          for(int _i0 = 0; _i0 < _len_ts20; _i0++) {
            ts2[_i0].tv_sec = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        ts2[_i0].tv_nsec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          double benchRet = diff_timespec(ts1,ts2);
          printf("%lf\n", benchRet); 
          free(ts1);
          free(ts2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct timeval {long tv_sec; long tv_usec; } ;

/* Variables and functions */
 unsigned long INT_MAX ; 
 int LONG_MAX ; 
 int hz ; 
 int tick ; 

int
tvtohz(struct timeval *tv)
{
	unsigned long ticks;
	long sec, usec;

	/*
	 * If the number of usecs in the whole seconds part of the time
	 * difference fits in a long, then the total number of usecs will
	 * fit in an unsigned long.  Compute the total and convert it to
	 * ticks, rounding up and adding 1 to allow for the current tick
	 * to expire.  Rounding also depends on unsigned long arithmetic
	 * to avoid overflow.
	 *
	 * Otherwise, if the number of ticks in the whole seconds part of
	 * the time difference fits in a long, then convert the parts to
	 * ticks separately and add, using similar rounding methods and
	 * overflow avoidance.  This method would work in the previous
	 * case but it is slightly slower and assumes that hz is integral.
	 *
	 * Otherwise, round the time difference down to the maximum
	 * representable value.
	 *
	 * If ints have 32 bits, then the maximum value for any timeout in
	 * 10ms ticks is 248 days.
	 */
	sec = tv->tv_sec;
	usec = tv->tv_usec;
	if (usec < 0) {
		sec--;
		usec += 1000000;
	}
	if (sec < 0) {
#ifdef DIAGNOSTIC
		if (usec > 0) {
			sec++;
			usec -= 1000000;
		}
		printf("tvotohz: negative time difference %ld sec %ld usec\n",
		       sec, usec);
#endif
		ticks = 1;
	} else if (sec <= LONG_MAX / 1000000)
		ticks = (sec * 1000000 + (unsigned long)usec + (tick - 1))
			/ tick + 1;
	else if (sec <= LONG_MAX / hz)
		ticks = sec * hz
			+ ((unsigned long)usec + (tick - 1)) / tick + 1;
	else
		ticks = LONG_MAX;
	if (ticks > INT_MAX)
		ticks = INT_MAX;
	return ((int)ticks);
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
          int _len_tv0 = 1;
          struct timeval * tv = (struct timeval *) malloc(_len_tv0*sizeof(struct timeval));
          for(int _i0 = 0; _i0 < _len_tv0; _i0++) {
            tv[_i0].tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        tv[_i0].tv_usec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tvtohz(tv);
          printf("%d\n", benchRet); 
          free(tv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_tv0 = 65025;
          struct timeval * tv = (struct timeval *) malloc(_len_tv0*sizeof(struct timeval));
          for(int _i0 = 0; _i0 < _len_tv0; _i0++) {
            tv[_i0].tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        tv[_i0].tv_usec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tvtohz(tv);
          printf("%d\n", benchRet); 
          free(tv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_tv0 = 100;
          struct timeval * tv = (struct timeval *) malloc(_len_tv0*sizeof(struct timeval));
          for(int _i0 = 0; _i0 < _len_tv0; _i0++) {
            tv[_i0].tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        tv[_i0].tv_usec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tvtohz(tv);
          printf("%d\n", benchRet); 
          free(tv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

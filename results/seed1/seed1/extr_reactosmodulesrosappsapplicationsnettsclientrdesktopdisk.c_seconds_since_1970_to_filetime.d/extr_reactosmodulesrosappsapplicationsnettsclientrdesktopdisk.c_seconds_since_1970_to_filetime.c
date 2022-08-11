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
typedef  scalar_t__ uint32 ;
typedef  long long time_t ;

/* Variables and functions */

__attribute__((used)) static void
seconds_since_1970_to_filetime(time_t seconds, uint32 * high, uint32 * low)
{
	unsigned long long ticks;

	ticks = (seconds + 11644473600LL) * 10000000;
	*low = (uint32) ticks;
	*high = (uint32) (ticks >> 32);
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
          long long seconds = 100;
          int _len_high0 = 1;
          long * high = (long *) malloc(_len_high0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_high0; _i0++) {
            high[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_low0 = 1;
          long * low = (long *) malloc(_len_low0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_low0; _i0++) {
            low[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          seconds_since_1970_to_filetime(seconds,high,low);
          free(high);
          free(low);
        
        break;
    }
    // big-arr
    case 1:
    {
          long long seconds = 255;
          int _len_high0 = 65025;
          long * high = (long *) malloc(_len_high0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_high0; _i0++) {
            high[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_low0 = 65025;
          long * low = (long *) malloc(_len_low0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_low0; _i0++) {
            low[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          seconds_since_1970_to_filetime(seconds,high,low);
          free(high);
          free(low);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long long seconds = 10;
          int _len_high0 = 100;
          long * high = (long *) malloc(_len_high0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_high0; _i0++) {
            high[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_low0 = 100;
          long * low = (long *) malloc(_len_low0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_low0; _i0++) {
            low[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          seconds_since_1970_to_filetime(seconds,high,low);
          free(high);
          free(low);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  long long time_t ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; scalar_t__ tm_sec; } ;

/* Variables and functions */

time_t av_timegm(struct tm *tm)
{
    time_t t;

    int y = tm->tm_year + 1900, m = tm->tm_mon + 1, d = tm->tm_mday;

    if (m < 3) {
        m += 12;
        y--;
    }

    t = 86400LL *
        (d + (153 * m - 457) / 5 + 365 * y + y / 4 - y / 100 + y / 400 - 719469);

    t += 3600 * tm->tm_hour + 60 * tm->tm_min + tm->tm_sec;

    return t;
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
          int _len_tm0 = 1;
          struct tm * tm = (struct tm *) malloc(_len_tm0*sizeof(struct tm));
          for(int _i0 = 0; _i0 < _len_tm0; _i0++) {
            tm[_i0].tm_year = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_mon = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_mday = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_hour = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_min = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long long benchRet = av_timegm(tm);
          printf("%lld\n", benchRet); 
          free(tm);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_tm0 = 65025;
          struct tm * tm = (struct tm *) malloc(_len_tm0*sizeof(struct tm));
          for(int _i0 = 0; _i0 < _len_tm0; _i0++) {
            tm[_i0].tm_year = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_mon = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_mday = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_hour = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_min = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long long benchRet = av_timegm(tm);
          printf("%lld\n", benchRet); 
          free(tm);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_tm0 = 100;
          struct tm * tm = (struct tm *) malloc(_len_tm0*sizeof(struct tm));
          for(int _i0 = 0; _i0 < _len_tm0; _i0++) {
            tm[_i0].tm_year = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_mon = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_mday = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_hour = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_min = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long long benchRet = av_timegm(tm);
          printf("%lld\n", benchRet); 
          free(tm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

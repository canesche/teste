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
typedef  int time_t ;
struct my_tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;

/* Variables and functions */

__attribute__((used)) static void my_timegm(struct my_tm *tm, time_t *t)
{
  static const int month_days_cumulative [12] =
    { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334 };
  int month, year, leap_days;

  year = tm->tm_year;
  month = tm->tm_mon;
  if(month < 0) {
    year += (11 - month) / 12;
    month = 11 - (11 - month) % 12;
  }
  else if(month >= 12) {
    year -= month / 12;
    month = month % 12;
  }

  leap_days = year - (tm->tm_mon <= 1);
  leap_days = ((leap_days / 4) - (leap_days / 100) + (leap_days / 400)
               - (1969 / 4) + (1969 / 100) - (1969 / 400));

  *t = ((((time_t) (year - 1970) * 365
          + leap_days + month_days_cumulative[month] + tm->tm_mday - 1) * 24
         + tm->tm_hour) * 60 + tm->tm_min) * 60 + tm->tm_sec;
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
          struct my_tm * tm = (struct my_tm *) malloc(_len_tm0*sizeof(struct my_tm));
          for(int _i0 = 0; _i0 < _len_tm0; _i0++) {
            tm[_i0].tm_year = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_mon = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_mday = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_hour = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_min = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_t0 = 1;
          int * t = (int *) malloc(_len_t0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          my_timegm(tm,t);
          free(tm);
          free(t);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_tm0 = 65025;
          struct my_tm * tm = (struct my_tm *) malloc(_len_tm0*sizeof(struct my_tm));
          for(int _i0 = 0; _i0 < _len_tm0; _i0++) {
            tm[_i0].tm_year = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_mon = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_mday = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_hour = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_min = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_t0 = 65025;
          int * t = (int *) malloc(_len_t0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          my_timegm(tm,t);
          free(tm);
          free(t);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_tm0 = 100;
          struct my_tm * tm = (struct my_tm *) malloc(_len_tm0*sizeof(struct my_tm));
          for(int _i0 = 0; _i0 < _len_tm0; _i0++) {
            tm[_i0].tm_year = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_mon = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_mday = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_hour = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_min = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_t0 = 100;
          int * t = (int *) malloc(_len_t0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          my_timegm(tm,t);
          free(tm);
          free(t);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

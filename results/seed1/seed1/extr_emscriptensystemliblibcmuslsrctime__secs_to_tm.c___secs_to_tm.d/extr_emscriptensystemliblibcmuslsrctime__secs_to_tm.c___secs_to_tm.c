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
struct tm {long long tm_year; int tm_mon; int tm_mday; int tm_wday; int tm_yday; int tm_hour; int tm_min; int tm_sec; } ;

/* Variables and functions */
 int DAYS_PER_100Y ; 
 long long DAYS_PER_400Y ; 
 int DAYS_PER_4Y ; 
 long long INT_MAX ; 
 long long INT_MIN ; 
 long long LEAPOCH ; 

int __secs_to_tm(long long t, struct tm *tm)
{
	long long days, secs, years;
	int remdays, remsecs, remyears;
	int qc_cycles, c_cycles, q_cycles;
	int months;
	int wday, yday, leap;
	static const char days_in_month[] = {31,30,31,30,31,31,30,31,30,31,31,29};

	/* Reject time_t values whose year would overflow int */
	if (t < INT_MIN * 31622400LL || t > INT_MAX * 31622400LL)
		return -1;

	secs = t - LEAPOCH;
	days = secs / 86400;
	remsecs = secs % 86400;
	if (remsecs < 0) {
		remsecs += 86400;
		days--;
	}

	wday = (3+days)%7;
	if (wday < 0) wday += 7;

	qc_cycles = days / DAYS_PER_400Y;
	remdays = days % DAYS_PER_400Y;
	if (remdays < 0) {
		remdays += DAYS_PER_400Y;
		qc_cycles--;
	}

	c_cycles = remdays / DAYS_PER_100Y;
	if (c_cycles == 4) c_cycles--;
	remdays -= c_cycles * DAYS_PER_100Y;

	q_cycles = remdays / DAYS_PER_4Y;
	if (q_cycles == 25) q_cycles--;
	remdays -= q_cycles * DAYS_PER_4Y;

	remyears = remdays / 365;
	if (remyears == 4) remyears--;
	remdays -= remyears * 365;

	leap = !remyears && (q_cycles || !c_cycles);
	yday = remdays + 31 + 28 + leap;
	if (yday >= 365+leap) yday -= 365+leap;

	years = remyears + 4*q_cycles + 100*c_cycles + 400LL*qc_cycles;

	for (months=0; days_in_month[months] <= remdays; months++)
		remdays -= days_in_month[months];

	if (years+100 > INT_MAX || years+100 < INT_MIN)
		return -1;

	tm->tm_year = years + 100;
	tm->tm_mon = months + 2;
	if (tm->tm_mon >= 12) {
		tm->tm_mon -=12;
		tm->tm_year++;
	}
	tm->tm_mday = remdays + 1;
	tm->tm_wday = wday;
	tm->tm_yday = yday;

	tm->tm_hour = remsecs / 3600;
	tm->tm_min = remsecs / 60 % 60;
	tm->tm_sec = remsecs % 60;

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
          long long t = 100;
          int _len_tm0 = 1;
          struct tm * tm = (struct tm *) malloc(_len_tm0*sizeof(struct tm));
          for(int _i0 = 0; _i0 < _len_tm0; _i0++) {
            tm[_i0].tm_year = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_mon = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_mday = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_wday = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_yday = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_hour = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_min = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __secs_to_tm(t,tm);
          printf("%d\n", benchRet); 
          free(tm);
        
        break;
    }
    // big-arr
    case 1:
    {
          long long t = 255;
          int _len_tm0 = 65025;
          struct tm * tm = (struct tm *) malloc(_len_tm0*sizeof(struct tm));
          for(int _i0 = 0; _i0 < _len_tm0; _i0++) {
            tm[_i0].tm_year = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_mon = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_mday = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_wday = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_yday = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_hour = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_min = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __secs_to_tm(t,tm);
          printf("%d\n", benchRet); 
          free(tm);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long long t = 10;
          int _len_tm0 = 100;
          struct tm * tm = (struct tm *) malloc(_len_tm0*sizeof(struct tm));
          for(int _i0 = 0; _i0 < _len_tm0; _i0++) {
            tm[_i0].tm_year = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_mon = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_mday = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_wday = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_yday = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_hour = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_min = ((-2 * (next_i()%2)) + 1) * next_i();
        tm[_i0].tm_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __secs_to_tm(t,tm);
          printf("%d\n", benchRet); 
          free(tm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

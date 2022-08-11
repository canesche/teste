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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int tm_sec; int tm_min; int tm_hour; int tm_wday; int tm_year; int tm_yday; int tm_mon; int tm_mday; int tm_isdst; } ;
typedef  TYPE_1__ tm_t ;
typedef  int time_t ;

/* Variables and functions */
 void* EPOCH ; 
 int HOURS_PER_DAY ; 
 int MINUTES_PER_HOUR ; 
 int SECONDS_PER_MINUTE ; 
 int* monthdays ; 
 int* monthdays2 ; 
 int* sumofdays ; 

int _gmtime( time_t timeval, tm_t* ret ) {
    int i;

    ret->tm_sec = timeval % SECONDS_PER_MINUTE;
    timeval /= SECONDS_PER_MINUTE;
    ret->tm_min = timeval % MINUTES_PER_HOUR;
    timeval /= MINUTES_PER_HOUR;
    ret->tm_hour = timeval % HOURS_PER_DAY;
    timeval /= HOURS_PER_DAY;

    /* 1970(Epoch) is a leap year, and every 4th year too.
       2000 is also a leap year, because its divisible by 400.
       timeval now holds the difference of whole days.
       1 Jan 1970 was a Thursday. */

    ret->tm_wday = (4 + timeval) % 7;

    /* TODO: return NULL when year does not fit. */
    ret->tm_year = EPOCH;

    for ( i = 0; i < 60; i++ ) {
        if ( sumofdays[ i ] > timeval ) {
            ret->tm_year = EPOCH + i - 1;
            timeval -= sumofdays[ i - 1 ];

            break;
        }
    }

    ret->tm_yday = ( int )timeval;

    if ( ret->tm_year % 4 == 0 ) {
        for ( ret->tm_mon = 0; ret->tm_mon < 12; ret->tm_mon++ ) {
            if ( monthdays2[ ret->tm_mon ] > timeval ) {
                timeval -= monthdays2[ --ret->tm_mon ];
                break;
            }
        }
    } else {
        for ( ret->tm_mon = 0; ret->tm_mon < 12; ret->tm_mon++ ) {
            if ( monthdays[ ret->tm_mon ] > timeval ) {
                timeval -= monthdays[ --ret->tm_mon ];
                break;
            }
        }
    }

    ret->tm_mday = ( int )timeval + 1;
    ret->tm_isdst = -1;

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
          int timeval = 100;
          int _len_ret0 = 1;
          struct TYPE_3__ * ret = (struct TYPE_3__ *) malloc(_len_ret0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ret0; _i0++) {
            ret[_i0].tm_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        ret[_i0].tm_min = ((-2 * (next_i()%2)) + 1) * next_i();
        ret[_i0].tm_hour = ((-2 * (next_i()%2)) + 1) * next_i();
        ret[_i0].tm_wday = ((-2 * (next_i()%2)) + 1) * next_i();
        ret[_i0].tm_year = ((-2 * (next_i()%2)) + 1) * next_i();
        ret[_i0].tm_yday = ((-2 * (next_i()%2)) + 1) * next_i();
        ret[_i0].tm_mon = ((-2 * (next_i()%2)) + 1) * next_i();
        ret[_i0].tm_mday = ((-2 * (next_i()%2)) + 1) * next_i();
        ret[_i0].tm_isdst = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _gmtime(timeval,ret);
          printf("%d\n", benchRet); 
          free(ret);
        
        break;
    }
    // big-arr
    case 1:
    {
          int timeval = 255;
          int _len_ret0 = 65025;
          struct TYPE_3__ * ret = (struct TYPE_3__ *) malloc(_len_ret0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ret0; _i0++) {
            ret[_i0].tm_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        ret[_i0].tm_min = ((-2 * (next_i()%2)) + 1) * next_i();
        ret[_i0].tm_hour = ((-2 * (next_i()%2)) + 1) * next_i();
        ret[_i0].tm_wday = ((-2 * (next_i()%2)) + 1) * next_i();
        ret[_i0].tm_year = ((-2 * (next_i()%2)) + 1) * next_i();
        ret[_i0].tm_yday = ((-2 * (next_i()%2)) + 1) * next_i();
        ret[_i0].tm_mon = ((-2 * (next_i()%2)) + 1) * next_i();
        ret[_i0].tm_mday = ((-2 * (next_i()%2)) + 1) * next_i();
        ret[_i0].tm_isdst = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _gmtime(timeval,ret);
          printf("%d\n", benchRet); 
          free(ret);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int timeval = 10;
          int _len_ret0 = 100;
          struct TYPE_3__ * ret = (struct TYPE_3__ *) malloc(_len_ret0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ret0; _i0++) {
            ret[_i0].tm_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        ret[_i0].tm_min = ((-2 * (next_i()%2)) + 1) * next_i();
        ret[_i0].tm_hour = ((-2 * (next_i()%2)) + 1) * next_i();
        ret[_i0].tm_wday = ((-2 * (next_i()%2)) + 1) * next_i();
        ret[_i0].tm_year = ((-2 * (next_i()%2)) + 1) * next_i();
        ret[_i0].tm_yday = ((-2 * (next_i()%2)) + 1) * next_i();
        ret[_i0].tm_mon = ((-2 * (next_i()%2)) + 1) * next_i();
        ret[_i0].tm_mday = ((-2 * (next_i()%2)) + 1) * next_i();
        ret[_i0].tm_isdst = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _gmtime(timeval,ret);
          printf("%d\n", benchRet); 
          free(ret);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

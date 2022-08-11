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
typedef  int zend_long ;

/* Variables and functions */
 int DAYS_PER_4_YEARS ; 
 int DAYS_PER_5_MONTHS ; 
 long INT_MAX ; 
 long INT_MIN ; 
 int JULIAN_SDN_OFFSET ; 
 int LONG_MAX ; 
 int LONG_MIN ; 

void SdnToJulian(
					zend_long sdn,
					int *pYear,
					int *pMonth,
					int *pDay)
{
	int year;
	int month;
	int day;
	zend_long temp;
	int dayOfYear;

	if (sdn <= 0) {
		goto fail;
	}
	/* Check for overflow */
	if (sdn > (LONG_MAX - JULIAN_SDN_OFFSET * 4 + 1) / 4 || sdn < LONG_MIN / 4) {
		goto fail;
	}
	temp = sdn * 4 + (JULIAN_SDN_OFFSET * 4 - 1);

	/* Calculate the year and day of year (1 <= dayOfYear <= 366). */
	{
		long yearl = temp / DAYS_PER_4_YEARS;
		if (yearl > INT_MAX || yearl < INT_MIN) {
			goto fail;
		}
		year = (int) yearl;
	}
	dayOfYear = (temp % DAYS_PER_4_YEARS) / 4 + 1;

	/* Calculate the month and day of month. */
	temp = dayOfYear * 5 - 3;
	month = temp / DAYS_PER_5_MONTHS;
	day = (temp % DAYS_PER_5_MONTHS) / 5 + 1;

	/* Convert to the normal beginning of the year. */
	if (month < 10) {
		month += 3;
	} else {
		year += 1;
		month -= 9;
	}

	/* Adjust to the B.C./A.D. type numbering. */
	year -= 4800;
	if (year <= 0)
		year--;

	*pYear = year;
	*pMonth = month;
	*pDay = day;
	return;

fail:
	*pYear = 0;
	*pMonth = 0;
	*pDay = 0;
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
          int sdn = 100;
          int _len_pYear0 = 1;
          int * pYear = (int *) malloc(_len_pYear0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pYear0; _i0++) {
            pYear[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pMonth0 = 1;
          int * pMonth = (int *) malloc(_len_pMonth0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pMonth0; _i0++) {
            pMonth[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pDay0 = 1;
          int * pDay = (int *) malloc(_len_pDay0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pDay0; _i0++) {
            pDay[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          SdnToJulian(sdn,pYear,pMonth,pDay);
          free(pYear);
          free(pMonth);
          free(pDay);
        
        break;
    }
    // big-arr
    case 1:
    {
          int sdn = 255;
          int _len_pYear0 = 65025;
          int * pYear = (int *) malloc(_len_pYear0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pYear0; _i0++) {
            pYear[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pMonth0 = 65025;
          int * pMonth = (int *) malloc(_len_pMonth0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pMonth0; _i0++) {
            pMonth[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pDay0 = 65025;
          int * pDay = (int *) malloc(_len_pDay0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pDay0; _i0++) {
            pDay[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          SdnToJulian(sdn,pYear,pMonth,pDay);
          free(pYear);
          free(pMonth);
          free(pDay);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int sdn = 10;
          int _len_pYear0 = 100;
          int * pYear = (int *) malloc(_len_pYear0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pYear0; _i0++) {
            pYear[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pMonth0 = 100;
          int * pMonth = (int *) malloc(_len_pMonth0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pMonth0; _i0++) {
            pMonth[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pDay0 = 100;
          int * pDay = (int *) malloc(_len_pDay0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pDay0; _i0++) {
            pDay[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          SdnToJulian(sdn,pYear,pMonth,pDay);
          free(pYear);
          free(pMonth);
          free(pDay);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

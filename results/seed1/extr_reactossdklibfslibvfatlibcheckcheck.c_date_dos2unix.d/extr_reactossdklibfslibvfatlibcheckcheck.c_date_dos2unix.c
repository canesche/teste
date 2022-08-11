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
typedef  unsigned short time_t ;

/* Variables and functions */
 unsigned short* day_n ; 

__attribute__((used)) static time_t date_dos2unix(unsigned short time, unsigned short date)
{
    int month, year;
    time_t secs;

    month = ((date >> 5) & 15) - 1;
    if (month < 0) {
	/* make sure that nothing bad happens if the month bits were zero */
	month = 0;
    }
    year = date >> 9;
    secs =
	(time & 31) * 2 + 60 * ((time >> 5) & 63) + (time >> 11) * 3600 +
	86400 * ((date & 31) - 1 + day_n[month] + (year / 4) + year * 365 -
		 ((year & 3) == 0 && month < 2 ? 1 : 0) + 3653);
    /* days since 1.1.70 plus 80's leap day */
    return secs;
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
          unsigned short time = 100;
          unsigned short date = 100;
          unsigned short benchRet = date_dos2unix(time,date);
          printf("%hu\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned short time = 255;
          unsigned short date = 255;
          unsigned short benchRet = date_dos2unix(time,date);
          printf("%hu\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned short time = 10;
          unsigned short date = 10;
          unsigned short benchRet = date_dos2unix(time,date);
          printf("%hu\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

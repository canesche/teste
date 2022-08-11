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
typedef  int /*<<< orphan*/  time_t ;

/* Variables and functions */

time_t UnDate(char *dstr)
{
#ifndef HAVE_MKTIME
	return ((time_t) -1);
#else
	struct tm ut, *t;
	time_t now;
	time_t result = (time_t) -1;

	(void) time(&now);
	t = localtime(&now);

	/* Copy the whole structure of the 'tm' pointed to by t, so it will
	 * also set all fields we don't specify explicitly to be the same as
	 * they were in t.  That way we copy non-standard fields such as
	 * tm_gmtoff, if it exists or not.
	 */
	ut = *t;

	/* The time we get back from the server is (should be) in UTC. */
	if (sscanf(dstr, "%04d%02d%02d%02d%02d%02d",
		&ut.tm_year,
		&ut.tm_mon,
		&ut.tm_mday,
		&ut.tm_hour,
		&ut.tm_min,
		&ut.tm_sec) == 6)
	{
		--ut.tm_mon;
		ut.tm_year -= 1900;
		result = mktime(&ut);
	}
	return result;
#endif	/* HAVE_MKTIME */
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
          int _len_dstr0 = 1;
          char * dstr = (char *) malloc(_len_dstr0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_dstr0; _i0++) {
            dstr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = UnDate(dstr);
          printf("%d\n", benchRet); 
          free(dstr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dstr0 = 65025;
          char * dstr = (char *) malloc(_len_dstr0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_dstr0; _i0++) {
            dstr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = UnDate(dstr);
          printf("%d\n", benchRet); 
          free(dstr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dstr0 = 100;
          char * dstr = (char *) malloc(_len_dstr0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_dstr0; _i0++) {
            dstr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = UnDate(dstr);
          printf("%d\n", benchRet); 
          free(dstr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

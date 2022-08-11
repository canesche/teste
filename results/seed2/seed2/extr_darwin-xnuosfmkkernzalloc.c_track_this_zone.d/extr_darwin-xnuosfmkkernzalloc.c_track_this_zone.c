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

/* Variables and functions */
 int FALSE ; 
 unsigned int MAX_ZONE_NAME ; 
 int TRUE ; 

int
track_this_zone(const char *zonename, const char *logname)
{
	unsigned int len;
	const char *zc = zonename;
	const char *lc = logname;

	/*
	 * Compare the strings.  We bound the compare by MAX_ZONE_NAME.
	 */

	for (len = 1; len <= MAX_ZONE_NAME; zc++, lc++, len++) {

		/*
		 * If the current characters don't match, check for a space in
		 * in the zone name and a corresponding period in the log name.
		 * If that's not there, then the strings don't match.
		 */

		if (*zc != *lc && !(*zc == ' ' && *lc == '.')) 
			break;

		/*
		 * The strings are equal so far.  If we're at the end, then it's a match.
		 */

		if (*zc == '\0')
			return TRUE;
	}

	return FALSE;
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
          int _len_zonename0 = 1;
          const char * zonename = (const char *) malloc(_len_zonename0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_zonename0; _i0++) {
            zonename[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_logname0 = 1;
          const char * logname = (const char *) malloc(_len_logname0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_logname0; _i0++) {
            logname[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = track_this_zone(zonename,logname);
          printf("%d\n", benchRet); 
          free(zonename);
          free(logname);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_zonename0 = 65025;
          const char * zonename = (const char *) malloc(_len_zonename0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_zonename0; _i0++) {
            zonename[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_logname0 = 65025;
          const char * logname = (const char *) malloc(_len_logname0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_logname0; _i0++) {
            logname[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = track_this_zone(zonename,logname);
          printf("%d\n", benchRet); 
          free(zonename);
          free(logname);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_zonename0 = 100;
          const char * zonename = (const char *) malloc(_len_zonename0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_zonename0; _i0++) {
            zonename[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_logname0 = 100;
          const char * logname = (const char *) malloc(_len_logname0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_logname0; _i0++) {
            logname[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = track_this_zone(zonename,logname);
          printf("%d\n", benchRet); 
          free(zonename);
          free(logname);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  int /*<<< orphan*/  qboolean ;

/* Variables and functions */
 int /*<<< orphan*/  qfalse ; 
 int /*<<< orphan*/  qtrue ; 

qboolean FS_FilenameCompare( const char *s1, const char *s2 ) {
	int		c1, c2;

	do {
		c1 = *s1++;
		c2 = *s2++;

		if (c1 >= 'a' && c1 <= 'z') {
			c1 -= ('a' - 'A');
		}
		if (c2 >= 'a' && c2 <= 'z') {
			c2 -= ('a' - 'A');
		}

		if ( c1 == '\\' || c1 == ':' ) {
			c1 = '/';
		}
		if ( c2 == '\\' || c2 == ':' ) {
			c2 = '/';
		}

		if (c1 != c2) {
			return qtrue;		// strings not equal
		}
	} while (c1);

	return qfalse;		// strings are equal
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
          int _len_s10 = 1;
          const char * s1 = (const char *) malloc(_len_s10*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_s10; _i0++) {
            s1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s20 = 1;
          const char * s2 = (const char *) malloc(_len_s20*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_s20; _i0++) {
            s2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = FS_FilenameCompare(s1,s2);
          printf("%d\n", benchRet); 
          free(s1);
          free(s2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s10 = 65025;
          const char * s1 = (const char *) malloc(_len_s10*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_s10; _i0++) {
            s1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s20 = 65025;
          const char * s2 = (const char *) malloc(_len_s20*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_s20; _i0++) {
            s2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = FS_FilenameCompare(s1,s2);
          printf("%d\n", benchRet); 
          free(s1);
          free(s2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s10 = 100;
          const char * s1 = (const char *) malloc(_len_s10*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_s10; _i0++) {
            s1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s20 = 100;
          const char * s2 = (const char *) malloc(_len_s20*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_s20; _i0++) {
            s2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = FS_FilenameCompare(s1,s2);
          printf("%d\n", benchRet); 
          free(s1);
          free(s2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

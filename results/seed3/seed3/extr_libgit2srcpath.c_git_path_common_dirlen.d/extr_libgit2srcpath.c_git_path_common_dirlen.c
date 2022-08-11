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

size_t git_path_common_dirlen(const char *one, const char *two)
{
	const char *p, *q, *dirsep = NULL;

	for (p = one, q = two; *p && *q; p++, q++) {
		if (*p == '/' && *q == '/')
			dirsep = p;
		else if (*p != *q)
			break;
	}

	return dirsep ? (dirsep - one) + 1 : 0;
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
          int _len_one0 = 1;
          const char * one = (const char *) malloc(_len_one0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_one0; _i0++) {
            one[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_two0 = 1;
          const char * two = (const char *) malloc(_len_two0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_two0; _i0++) {
            two[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = git_path_common_dirlen(one,two);
          printf("%lu\n", benchRet); 
          free(one);
          free(two);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_one0 = 65025;
          const char * one = (const char *) malloc(_len_one0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_one0; _i0++) {
            one[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_two0 = 65025;
          const char * two = (const char *) malloc(_len_two0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_two0; _i0++) {
            two[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = git_path_common_dirlen(one,two);
          printf("%lu\n", benchRet); 
          free(one);
          free(two);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_one0 = 100;
          const char * one = (const char *) malloc(_len_one0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_one0; _i0++) {
            one[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_two0 = 100;
          const char * two = (const char *) malloc(_len_two0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_two0; _i0++) {
            two[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = git_path_common_dirlen(one,two);
          printf("%lu\n", benchRet); 
          free(one);
          free(two);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

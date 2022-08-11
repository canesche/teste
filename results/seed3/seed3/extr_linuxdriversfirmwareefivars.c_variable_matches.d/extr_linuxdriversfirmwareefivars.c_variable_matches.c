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

__attribute__((used)) static bool
variable_matches(const char *var_name, size_t len, const char *match_name,
		 int *match)
{
	for (*match = 0; ; (*match)++) {
		char c = match_name[*match];

		switch (c) {
		case '*':
			/* Wildcard in @match_name means we've matched. */
			return true;

		case '\0':
			/* @match_name has ended. Has @var_name too? */
			return (*match == len);

		default:
			/*
			 * We've reached a non-wildcard char in @match_name.
			 * Continue only if there's an identical character in
			 * @var_name.
			 */
			if (*match < len && c == var_name[*match])
				continue;
			return false;
		}
	}
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
          unsigned long len = 100;
          int _len_var_name0 = 1;
          const char * var_name = (const char *) malloc(_len_var_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_var_name0; _i0++) {
            var_name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_match_name0 = 1;
          const char * match_name = (const char *) malloc(_len_match_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_match_name0; _i0++) {
            match_name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_match0 = 1;
          int * match = (int *) malloc(_len_match0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_match0; _i0++) {
            match[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = variable_matches(var_name,len,match_name,match);
          printf("%d\n", benchRet); 
          free(var_name);
          free(match_name);
          free(match);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long len = 255;
          int _len_var_name0 = 65025;
          const char * var_name = (const char *) malloc(_len_var_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_var_name0; _i0++) {
            var_name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_match_name0 = 65025;
          const char * match_name = (const char *) malloc(_len_match_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_match_name0; _i0++) {
            match_name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_match0 = 65025;
          int * match = (int *) malloc(_len_match0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_match0; _i0++) {
            match[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = variable_matches(var_name,len,match_name,match);
          printf("%d\n", benchRet); 
          free(var_name);
          free(match_name);
          free(match);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long len = 10;
          int _len_var_name0 = 100;
          const char * var_name = (const char *) malloc(_len_var_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_var_name0; _i0++) {
            var_name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_match_name0 = 100;
          const char * match_name = (const char *) malloc(_len_match_name0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_match_name0; _i0++) {
            match_name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_match0 = 100;
          int * match = (int *) malloc(_len_match0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_match0; _i0++) {
            match[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = variable_matches(var_name,len,match_name,match);
          printf("%d\n", benchRet); 
          free(var_name);
          free(match_name);
          free(match);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

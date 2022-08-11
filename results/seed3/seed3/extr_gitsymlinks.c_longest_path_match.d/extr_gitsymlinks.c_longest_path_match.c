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

__attribute__((used)) static int longest_path_match(const char *name_a, int len_a,
			      const char *name_b, int len_b,
			      int *previous_slash)
{
	int max_len, match_len = 0, match_len_prev = 0, i = 0;

	max_len = len_a < len_b ? len_a : len_b;
	while (i < max_len && name_a[i] == name_b[i]) {
		if (name_a[i] == '/') {
			match_len_prev = match_len;
			match_len = i;
		}
		i++;
	}
	/*
	 * Is 'name_b' a substring of 'name_a', the other way around,
	 * or is 'name_a' and 'name_b' the exact same string?
	 */
	if (i >= max_len && ((len_a > len_b && name_a[len_b] == '/') ||
			     (len_a < len_b && name_b[len_a] == '/') ||
			     (len_a == len_b))) {
		match_len_prev = match_len;
		match_len = i;
	}
	*previous_slash = match_len_prev;
	return match_len;
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
          int len_a = 100;
          int len_b = 100;
          int _len_name_a0 = 1;
          const char * name_a = (const char *) malloc(_len_name_a0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name_a0; _i0++) {
            name_a[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_name_b0 = 1;
          const char * name_b = (const char *) malloc(_len_name_b0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name_b0; _i0++) {
            name_b[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_previous_slash0 = 1;
          int * previous_slash = (int *) malloc(_len_previous_slash0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_previous_slash0; _i0++) {
            previous_slash[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = longest_path_match(name_a,len_a,name_b,len_b,previous_slash);
          printf("%d\n", benchRet); 
          free(name_a);
          free(name_b);
          free(previous_slash);
        
        break;
    }
    // big-arr
    case 1:
    {
          int len_a = 255;
          int len_b = 255;
          int _len_name_a0 = 65025;
          const char * name_a = (const char *) malloc(_len_name_a0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name_a0; _i0++) {
            name_a[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_name_b0 = 65025;
          const char * name_b = (const char *) malloc(_len_name_b0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name_b0; _i0++) {
            name_b[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_previous_slash0 = 65025;
          int * previous_slash = (int *) malloc(_len_previous_slash0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_previous_slash0; _i0++) {
            previous_slash[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = longest_path_match(name_a,len_a,name_b,len_b,previous_slash);
          printf("%d\n", benchRet); 
          free(name_a);
          free(name_b);
          free(previous_slash);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int len_a = 10;
          int len_b = 10;
          int _len_name_a0 = 100;
          const char * name_a = (const char *) malloc(_len_name_a0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name_a0; _i0++) {
            name_a[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_name_b0 = 100;
          const char * name_b = (const char *) malloc(_len_name_b0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_name_b0; _i0++) {
            name_b[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_previous_slash0 = 100;
          int * previous_slash = (int *) malloc(_len_previous_slash0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_previous_slash0; _i0++) {
            previous_slash[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = longest_path_match(name_a,len_a,name_b,len_b,previous_slash);
          printf("%d\n", benchRet); 
          free(name_a);
          free(name_b);
          free(previous_slash);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

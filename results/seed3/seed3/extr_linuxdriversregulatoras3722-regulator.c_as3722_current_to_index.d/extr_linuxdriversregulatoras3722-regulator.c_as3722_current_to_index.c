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
 int EINVAL ; 

__attribute__((used)) static int as3722_current_to_index(int min_uA, int max_uA,
		const int *curr_table, int n_currents)
{
	int i;

	for (i = n_currents - 1; i >= 0; i--) {
		if ((min_uA <= curr_table[i]) && (curr_table[i] <= max_uA))
			return i;
	}
	return -EINVAL;
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
          int min_uA = 100;
          int max_uA = 100;
          int n_currents = 100;
          int _len_curr_table0 = 1;
          const int * curr_table = (const int *) malloc(_len_curr_table0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_curr_table0; _i0++) {
            curr_table[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = as3722_current_to_index(min_uA,max_uA,curr_table,n_currents);
          printf("%d\n", benchRet); 
          free(curr_table);
        
        break;
    }
    // big-arr
    case 1:
    {
          int min_uA = 255;
          int max_uA = 255;
          int n_currents = 255;
          int _len_curr_table0 = 65025;
          const int * curr_table = (const int *) malloc(_len_curr_table0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_curr_table0; _i0++) {
            curr_table[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = as3722_current_to_index(min_uA,max_uA,curr_table,n_currents);
          printf("%d\n", benchRet); 
          free(curr_table);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int min_uA = 10;
          int max_uA = 10;
          int n_currents = 10;
          int _len_curr_table0 = 100;
          const int * curr_table = (const int *) malloc(_len_curr_table0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_curr_table0; _i0++) {
            curr_table[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = as3722_current_to_index(min_uA,max_uA,curr_table,n_currents);
          printf("%d\n", benchRet); 
          free(curr_table);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
